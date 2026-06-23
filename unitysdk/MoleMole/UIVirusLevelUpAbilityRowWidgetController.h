#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_E17D44E1D4CD83D1;
namespace MoleMole { class UIControlReference; }

#define MOLEMOLE_UIVIRUSLEVELUPABILITYROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xFAE7BF0)
#define MOLEMOLE_UIVIRUSLEVELUPABILITYROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xFAE7C80)
#define MOLEMOLE_UIVIRUSLEVELUPABILITYROWWIDGETCONTROLLER_REFRESHWIDGET_OFFSET UNITYSDK_OFFSET(0xFAE7D00)
#define MOLEMOLE_UIVIRUSLEVELUPABILITYROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xFAE8190)
#define MOLEMOLE_UIVIRUSLEVELUPABILITYROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xFAE81F0)
#define MOLEMOLE_UIVIRUSLEVELUPABILITYROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xFAE8280)

namespace MoleMole
{
	inline static constexpr unsigned int UIVirusLevelUpAbilityRowWidgetController_TypeDefinitionIndex = 53259;

	class UIVirusLevelUpAbilityRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_E17D44E1D4CD83D1* _view; // 0x2C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSLEVELUPABILITYROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSLEVELUPABILITYROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSLEVELUPABILITYROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshWidget(::System::Int32 level, ::System::Int32 middleKeyID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSLEVELUPABILITYROWWIDGETCONTROLLER_REFRESHWIDGET_OFFSET))(this, level, middleKeyID);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSLEVELUPABILITYROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSLEVELUPABILITYROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}
	};
}
