#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UIDAILYQUESTREWARDLISTDIALOGPOPWINDOWCONTROLLER_DAILYQUESTREWARDROWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x166B74F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIDailyQuestRewardListDialogPopWindowController_DailyQuestRewardRowContext_TypeDefinitionIndex = 78069;

	class UIDailyQuestRewardListDialogPopWindowController_DailyQuestRewardRowContext : public ::System::Object
	{
	public:
		::System::Int32 RewardID; // 0x10
		::System::Int32 Vitality; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYQUESTREWARDLISTDIALOGPOPWINDOWCONTROLLER_DAILYQUESTREWARDROWCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
