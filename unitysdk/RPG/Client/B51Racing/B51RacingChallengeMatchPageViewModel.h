#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::B51Racing { class B51RacingChallengeMatchItemViewModel; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_B51RACING_B51RACINGCHALLENGEMATCHPAGEVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x19EEC430)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingChallengeMatchPageViewModel_TypeDefinitionIndex = 80701;

	class B51RacingChallengeMatchPageViewModel : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::Client::B51Racing::B51RacingChallengeMatchItemViewModel*>* MatchItems; // 0x10
		::System::String* SelectedMapPath; // 0x18
		::System::Action* OnCustomizeCar; // 0x20
		::System::Action_1<::System::UInt32>* OnMatchSelected; // 0x28
		::System::Action* OnCarDetail; // 0x30
		::System::String* SelectedHistoryBestDriverIconPath; // 0x38
		::RPG::Client::TextID SelectedMatchName; // 0x40
		::RPG::Client::TextID SelectedHistoryBestDriverName; // 0x50
		::System::Int32 SelectedIndex; // 0x60
		::System::UInt32 SelectedHistoryBestTime; // 0x64
		::System::UInt32 SelectedPlayerBestTime; // 0x68
		::RPG::Client::TextID SelectedTrackName; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCHALLENGEMATCHPAGEVIEWMODEL__CTOR_OFFSET))(this);
		}
	};
}
