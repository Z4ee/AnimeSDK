#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_72679ED639CF4AB4_1;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UINewsStandActivityWidgetController; }
namespace MoleMole { class UINewsStandSupplementWidgetController; }

#define MOLEMOLE_UINEWSSTANDHEADLINEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x189DDD80)
#define MOLEMOLE_UINEWSSTANDHEADLINEWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x189DDE10)
#define MOLEMOLE_UINEWSSTANDHEADLINEWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x189DD870)
#define MOLEMOLE_UINEWSSTANDHEADLINEWIDGETCONTROLLER_SETHEADLINES_OFFSET UNITYSDK_OFFSET(0x189DDAB0)
#define MOLEMOLE_UINEWSSTANDHEADLINEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x189DDE90)
#define MOLEMOLE_UINEWSSTANDHEADLINEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x189DDEF0)
#define MOLEMOLE_UINEWSSTANDHEADLINEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x189DDF80)
#define MOLEMOLE_UINEWSSTANDHEADLINEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x189DE010)

namespace MoleMole
{
	inline static constexpr unsigned int UINewsStandHeadLineWidgetController_TypeDefinitionIndex = 50449;

	class UINewsStandHeadLineWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_72679ED639CF4AB4_1* _view; // 0x2C0
		::MoleMole::UINewsStandActivityWidgetController* _activityWidget; // 0x2C8
		::MoleMole::UINewsStandSupplementWidgetController* _supplementWidget; // 0x2D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDHEADLINEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDHEADLINEWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDHEADLINEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDHEADLINEWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetHeadLines()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDHEADLINEWIDGETCONTROLLER_SETHEADLINES_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDHEADLINEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDHEADLINEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDHEADLINEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
