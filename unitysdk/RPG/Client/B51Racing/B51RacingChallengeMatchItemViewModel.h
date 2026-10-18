#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_B51RACING_B51RACINGCHALLENGEMATCHITEMVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xC7293A0)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingChallengeMatchItemViewModel_TypeDefinitionIndex = 82028;

	class B51RacingChallengeMatchItemViewModel : public ::System::Object
	{
	public:
		::System::String* HistoryBestDriverIconPath; // 0x10
		::System::String* MinimapPath; // 0x18
		::System::String* DarkMinimapPath; // 0x20
		::System::UInt32 MatchID; // 0x28
		::System::UInt32 TotalLaps; // 0x2C
		::RPG::Client::TextID HistoryBestDriverName; // 0x30
		::RPG::Client::TextID TrackName; // 0x40
		::System::UInt32 TrackID; // 0x50
		::System::UInt32 PlayerBestTime; // 0x54
		::System::Boolean IsSelected; // 0x58
		::System::UInt32 HistoryBestTime; // 0x5C
		::RPG::Client::TextID MatchName; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCHALLENGEMATCHITEMVIEWMODEL__CTOR_OFFSET))(this);
		}
	};
}
