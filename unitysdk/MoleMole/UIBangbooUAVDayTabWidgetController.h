#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UITowerDefenseDayTabWidgetController.h"

class Class_2_1CC0E2699D5FB1A6_1;
namespace MoleMole { class UIControlReference; }

#define MOLEMOLE_UIBANGBOOUAVDAYTABWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16360E50)
#define MOLEMOLE_UIBANGBOOUAVDAYTABWIDGETCONTROLLER_REFRESHENTRY_OFFSET UNITYSDK_OFFSET(0x16360F50)
#define MOLEMOLE_UIBANGBOOUAVDAYTABWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x163615C0)
#define MOLEMOLE_UIBANGBOOUAVDAYTABWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16361620)
#define MOLEMOLE_UIBANGBOOUAVDAYTABWIDGETCONTROLLER___BASE_REFRESHENTRY_OFFSET UNITYSDK_OFFSET(0x163616F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangbooUAVDayTabWidgetController_TypeDefinitionIndex = 69221;

	class UIBangbooUAVDayTabWidgetController : public ::MoleMole::UITowerDefenseDayTabWidgetController
	{
	public:
		::Class_2_1CC0E2699D5FB1A6_1* _view; // 0x2C8

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
