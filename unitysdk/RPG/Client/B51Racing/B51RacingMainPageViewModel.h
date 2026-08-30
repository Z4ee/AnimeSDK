#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DateTimePro.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::B51Racing { class B51RacingMainPageEntranceViewModel; }

#define RPG_CLIENT_B51RACING_B51RACINGMAINPAGEVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xC890B80)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingMainPageViewModel_TypeDefinitionIndex = 80707;

	class B51RacingMainPageViewModel : public ::System::Object
	{
	public:
		::RPG::Client::B51Racing::B51RacingMainPageEntranceViewModel* PreviousCycleEntrance; // 0x10
		::System::UInt32 CurrentDay; // 0x18
		::System::UInt32 CycleID; // 0x1C
		::RPG::Client::TextID EntranceHintText; // 0x20
		::System::Boolean IsLightConeRewardReceived; // 0x30
		::System::Boolean IsInTimeLimitSchedule; // 0x31
		::System::Boolean IsInCycle; // 0x32
		::RPG::Client::DateTimePro TimeLimitScheduleEndTime; // 0x38
		::RPG::Client::TextID CycleNameText; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGMAINPAGEVIEWMODEL__CTOR_OFFSET))(this);
		}
	};
}
