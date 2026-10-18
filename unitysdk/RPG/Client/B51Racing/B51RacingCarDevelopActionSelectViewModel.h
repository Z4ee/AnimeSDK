#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/B51RacingPartType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::B51Racing { class B51RacingBuffSkillItemViewModel; }
namespace RPG::Client::B51Racing { class B51RacingCarStatItemViewModel; }
namespace RPG::Client::B51Racing { class B51RacingDailyActionCardItemViewModel; }
namespace RPG::Client::B51Racing { class B51RacingDevelopValueIconListViewModel; }
namespace System { class String; }

#define RPG_CLIENT_B51RACING_B51RACINGCARDEVELOPACTIONSELECTVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xC7263B0)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingCarDevelopActionSelectViewModel_TypeDefinitionIndex = 82013;

	class B51RacingCarDevelopActionSelectViewModel : public ::System::Object
	{
	public:
		::RPG::Client::B51Racing::B51RacingDevelopValueIconListViewModel* TargetPartRequireStatIconList; // 0x10
		::Il2CppArray<::RPG::Client::B51Racing::B51RacingBuffSkillItemViewModel*>* BuffItems; // 0x18
		::System::String* TargetPartIconPath; // 0x20
		::Il2CppArray<::RPG::Client::B51Racing::B51RacingDailyActionCardItemViewModel*>* ActionCards; // 0x28
		::Il2CppArray<::RPG::Client::B51Racing::B51RacingCarStatItemViewModel*>* StatItems; // 0x30
		::RPG::Client::TextID TargetBuffDesc; // 0x38
		::System::Int32 SelectedCardIndex; // 0x48
		::System::Boolean InitAsEmptyState; // 0x4C
		::RPG::Client::TextID RoundText; // 0x50
		::RPG::Client::TextID TargetBuffName; // 0x60
		::System::Int32 TotalRounds; // 0x70
		::System::UInt32 TargetPartID; // 0x74
		::RPG::GameCore::B51RacingPartType TargetPartSlotType; // 0x78
		::System::Int32 RoundIndex; // 0x7C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARDEVELOPACTIONSELECTVIEWMODEL__CTOR_OFFSET))(this);
		}
	};
}
