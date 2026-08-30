#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/B51RacingStatType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::B51Racing { class B51RacingDevelopValueIconListViewModel; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_B51RACING_B51RACINGDRIVERTABVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xC874770)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingDriverTabViewModel_TypeDefinitionIndex = 80704;

	class B51RacingDriverTabViewModel : public ::System::Object
	{
	public:
		::RPG::Client::B51Racing::B51RacingDevelopValueIconListViewModel* BonusStatIconList; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingStatType, ::System::UInt32>* AddStatMap; // 0x18
		::System::String* AvatarFullPath; // 0x20
		::System::String* AvatarIconPath; // 0x28
		::RPG::Client::TextID DriverName; // 0x30
		::System::UInt32 DriverID; // 0x40
		::System::Boolean IsUnlocked; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDRIVERTABVIEWMODEL__CTOR_OFFSET))(this);
		}
	};
}
