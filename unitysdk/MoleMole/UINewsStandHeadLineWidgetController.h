#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_72679ED639CF4AB4_2;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UINewsStandActivityWidgetController; }
namespace MoleMole { class UINewsStandSupplementWidgetController; }

#define MOLEMOLE_UINEWSSTANDHEADLINEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14851770)
#define MOLEMOLE_UINEWSSTANDHEADLINEWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14851800)
#define MOLEMOLE_UINEWSSTANDHEADLINEWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14851270)
#define MOLEMOLE_UINEWSSTANDHEADLINEWIDGETCONTROLLER_SETHEADLINES_OFFSET UNITYSDK_OFFSET(0x148514B0)
#define MOLEMOLE_UINEWSSTANDHEADLINEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x14851880)
#define MOLEMOLE_UINEWSSTANDHEADLINEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x148518E0)
#define MOLEMOLE_UINEWSSTANDHEADLINEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14851970)
#define MOLEMOLE_UINEWSSTANDHEADLINEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14851A00)

namespace MoleMole
{
	inline static constexpr unsigned int UINewsStandHeadLineWidgetController_TypeDefinitionIndex = 58842;

	class UINewsStandHeadLineWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_72679ED639CF4AB4_2* _view; // 0x2B8
		::MoleMole::UINewsStandActivityWidgetController* _activityWidget; // 0x2C0
		::MoleMole::UINewsStandSupplementWidgetController* _supplementWidget; // 0x2C8

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
