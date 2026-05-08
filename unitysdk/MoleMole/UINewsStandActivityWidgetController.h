#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_208CC9941471731A_975;
class Class_2_75FB4A09078427E5_2;
namespace MoleMole { class UIControlReference; }

#define MOLEMOLE_UINEWSSTANDACTIVITYWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15588830)
#define MOLEMOLE_UINEWSSTANDACTIVITYWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x155888C0)
#define MOLEMOLE_UINEWSSTANDACTIVITYWIDGETCONTROLLER_UPDATEHEADLINE_OFFSET UNITYSDK_OFFSET(0x15588620)
#define MOLEMOLE_UINEWSSTANDACTIVITYWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15588940)
#define MOLEMOLE_UINEWSSTANDACTIVITYWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x155889A0)
#define MOLEMOLE_UINEWSSTANDACTIVITYWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15588A30)

namespace MoleMole
{
	inline static constexpr unsigned int UINewsStandActivityWidgetController_TypeDefinitionIndex = 49075;

	class UINewsStandActivityWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_75FB4A09078427E5_2* _view; // 0x2B8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDACTIVITYWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void UpdateHeadLine(::Class_2_208CC9941471731A_975* config)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_975*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDACTIVITYWIDGETCONTROLLER_UPDATEHEADLINE_OFFSET))(this, config);
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
