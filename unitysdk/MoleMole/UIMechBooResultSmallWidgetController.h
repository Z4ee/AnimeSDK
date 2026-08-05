#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_60638234271CCDB8_165;
namespace MoleMole { class UIControlReference; }

#define MOLEMOLE_UIMECHBOORESULTSMALLWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x174553B0)
#define MOLEMOLE_UIMECHBOORESULTSMALLWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17455440)
#define MOLEMOLE_UIMECHBOORESULTSMALLWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x174554C0)
#define MOLEMOLE_UIMECHBOORESULTSMALLWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17455520)
#define MOLEMOLE_UIMECHBOORESULTSMALLWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x174555B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMechBooResultSmallWidgetController_TypeDefinitionIndex = 82178;

	class UIMechBooResultSmallWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_60638234271CCDB8_165* _view; // 0x2C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOORESULTSMALLWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOORESULTSMALLWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOORESULTSMALLWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOORESULTSMALLWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOORESULTSMALLWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}
	};
}
