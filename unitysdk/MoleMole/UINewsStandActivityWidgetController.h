#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_208CC9941471731A_979;
class Class_2_75FB4A09078427E5;
namespace MoleMole { class UIControlReference; }

#define MOLEMOLE_UINEWSSTANDACTIVITYWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x178C65A0)
#define MOLEMOLE_UINEWSSTANDACTIVITYWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x178C6630)
#define MOLEMOLE_UINEWSSTANDACTIVITYWIDGETCONTROLLER_UPDATEHEADLINE_OFFSET UNITYSDK_OFFSET(0x178C6300)
#define MOLEMOLE_UINEWSSTANDACTIVITYWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x178C66B0)
#define MOLEMOLE_UINEWSSTANDACTIVITYWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x178C6710)
#define MOLEMOLE_UINEWSSTANDACTIVITYWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x178C67A0)

namespace MoleMole
{
	inline static constexpr unsigned int UINewsStandActivityWidgetController_TypeDefinitionIndex = 46815;

	class UINewsStandActivityWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_75FB4A09078427E5* _view; // 0x2C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDACTIVITYWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void UpdateHeadLine(::Class_2_208CC9941471731A_979* config)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_979*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDACTIVITYWIDGETCONTROLLER_UPDATEHEADLINE_OFFSET))(this, config);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDACTIVITYWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDACTIVITYWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDACTIVITYWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDACTIVITYWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}
	};
}
