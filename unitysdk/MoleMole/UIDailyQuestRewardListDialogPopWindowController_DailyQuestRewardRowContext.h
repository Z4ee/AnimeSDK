#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UIDAILYQUESTREWARDLISTDIALOGPOPWINDOWCONTROLLER_DAILYQUESTREWARDROWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x157D6210)

namespace MoleMole
{
	inline static constexpr unsigned int UIDailyQuestRewardListDialogPopWindowController_DailyQuestRewardRowContext_TypeDefinitionIndex = 55177;

	class UIDailyQuestRewardListDialogPopWindowController_DailyQuestRewardRowContext : public ::System::Object
	{
	public:
		::System::Int32 Vitality; // 0x10
		::System::Int32 RewardID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYQUESTREWARDLISTDIALOGPOPWINDOWCONTROLLER_DAILYQUESTREWARDROWCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
