#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UISWITCHTEAMBATTLELEVELROWWIDGETCONTROLLER_DATA_GET_QUESTID_OFFSET UNITYSDK_OFFSET(0x10D4EEC0)
#define MOLEMOLE_UISWITCHTEAMBATTLELEVELROWWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x10D4EF50)

namespace MoleMole
{
	inline static constexpr unsigned int UISwitchTeamBattleLevelRowWidgetController_Data_TypeDefinitionIndex = 76736;

	class UISwitchTeamBattleLevelRowWidgetController_Data : public ::System::Object
	{
	public:
		::System::Int32 generalLevelId; // 0x10
		::System::Int32 activityId; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISWITCHTEAMBATTLELEVELROWWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}

		::System::Int32 get_QuestId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISWITCHTEAMBATTLELEVELROWWIDGETCONTROLLER_DATA_GET_QUESTID_OFFSET))(this);
		}
	};
}
