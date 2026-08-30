#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_B51RACING_B51RACINGCHALLENGEMATCHITEMVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x19EEAC00)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingChallengeMatchItemViewModel_TypeDefinitionIndex = 80700;

	class B51RacingChallengeMatchItemViewModel : public ::System::Object
	{
	public:
		::System::String* DarkMinimapPath; // 0x10
		::System::String* MinimapPath; // 0x18
		::System::String* HistoryBestDriverIconPath; // 0x20
		::System::Boolean IsSelected; // 0x28
		::System::UInt32 PlayerBestTime; // 0x2C
		::System::UInt32 HistoryBestTime; // 0x30
		::System::UInt32 TrackID; // 0x34
		::System::UInt32 TotalLaps; // 0x38
		::System::UInt32 MatchID; // 0x3C
		::RPG::Client::TextID MatchName; // 0x40
		::RPG::Client::TextID TrackName; // 0x50
		::RPG::Client::TextID HistoryBestDriverName; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCHALLENGEMATCHITEMVIEWMODEL__CTOR_OFFSET))(this);
		}
	};
}
