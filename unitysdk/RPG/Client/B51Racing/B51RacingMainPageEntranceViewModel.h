#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_B51RACING_B51RACINGMAINPAGEENTRANCEVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xC890B70)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingMainPageEntranceViewModel_TypeDefinitionIndex = 80708;

	class B51RacingMainPageEntranceViewModel : public ::System::Object
	{
	public:
		::System::UInt32 CurrentDay; // 0x10
		::System::UInt32 CycleID; // 0x14
		::RPG::Client::TextID EntranceHintText; // 0x18
		::RPG::Client::TextID CycleNameText; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGMAINPAGEENTRANCEVIEWMODEL__CTOR_OFFSET))(this);
		}
	};
}
