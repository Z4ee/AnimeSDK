#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMainCityMissionWidgetController; }

#define MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15567A40)
#define MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER___C__DISPLAYCLASS6_0__SHOWMISSIONFINISHANDSETTOTRACKQUEST_B__0_OFFSET UNITYSDK_OFFSET(0x15567A50)
#define MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER___C__DISPLAYCLASS6_0__SHOWMISSIONFINISHANDSETTOTRACKQUEST_B__1_OFFSET UNITYSDK_OFFSET(0x15567AA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityMissionWidgetController___c__DisplayClass6_0_TypeDefinitionIndex = 52943;

	class UIMainCityMissionWidgetController___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::MoleMole::UIMainCityMissionWidgetController* __4__this; // 0x10
		::System::Int32 trackQuestID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowMissionFinishAndSetToTrackQuest_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER___C__DISPLAYCLASS6_0__SHOWMISSIONFINISHANDSETTOTRACKQUEST_B__0_OFFSET))(this);
		}

		::System::Void _ShowMissionFinishAndSetToTrackQuest_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER___C__DISPLAYCLASS6_0__SHOWMISSIONFINISHANDSETTOTRACKQUEST_B__1_OFFSET))(this);
		}
	};
}
