#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UITowerDefenseDayTabWidgetController.h"

class Class_2_1CC0E2699D5FB1A6_9;
namespace MoleMole { class UIControlReference; }

#define MOLEMOLE_UIBANGBOOUAVDAYTABWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18026160)
#define MOLEMOLE_UIBANGBOOUAVDAYTABWIDGETCONTROLLER_REFRESHENTRY_OFFSET UNITYSDK_OFFSET(0x18026260)
#define MOLEMOLE_UIBANGBOOUAVDAYTABWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x180268E0)
#define MOLEMOLE_UIBANGBOOUAVDAYTABWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18026940)
#define MOLEMOLE_UIBANGBOOUAVDAYTABWIDGETCONTROLLER___BASE_REFRESHENTRY_OFFSET UNITYSDK_OFFSET(0x18026A10)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangbooUAVDayTabWidgetController_TypeDefinitionIndex = 73787;

	class UIBangbooUAVDayTabWidgetController : public ::MoleMole::UITowerDefenseDayTabWidgetController
	{
	public:
		::Class_2_1CC0E2699D5FB1A6_9* _view; // 0x2D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVDAYTABWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVDAYTABWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void RefreshEntry(::System::Int32 entryid)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVDAYTABWIDGETCONTROLLER_REFRESHENTRY_OFFSET))(this, entryid);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVDAYTABWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_RefreshEntry(::System::Int32 P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVDAYTABWIDGETCONTROLLER___BASE_REFRESHENTRY_OFFSET))(this, P0);
		}
	};
}
