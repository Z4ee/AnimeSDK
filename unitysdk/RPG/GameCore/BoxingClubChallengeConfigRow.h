#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/BoxingClubActivityType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_BOXINGCLUBCHALLENGECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16FF2BB0)
#define RPG_GAMECORE_BOXINGCLUBCHALLENGECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16FF3660)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BoxingClubChallengeConfigRow_TypeDefinitionIndex = 11785;

	class BoxingClubChallengeConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* StageGroupList; // 0x10
		::Il2CppArray<::RPG::GameCore::AttackDamageType>* DamageType; // 0x18
		::System::String* IconPath; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* StageBuffAndGroupMap; // 0x28
		::Il2CppArray<::System::UInt32>* SpecialAvatarIDList; // 0x30
		::System::UInt32 FirstPassRewardID; // 0x38
		::System::UInt32 ChallengeTurnLimit; // 0x3C
		::RPG::Client::TextID ChallengeTip; // 0x40
		::System::UInt32 SpecialAvatarActivityModule; // 0x50
		::System::UInt32 ActivityModuleID; // 0x54
		::System::UInt32 ChallengeBuff; // 0x58
		::System::UInt32 PreChallengeID; // 0x5C
		::RPG::GameCore::BoxingClubActivityType Type; // 0x60
		::System::Boolean IsSpecialChallenge; // 0x64
		::System::UInt32 PerfectTurn; // 0x68
		::System::UInt32 ChallengeID; // 0x6C
		::RPG::Client::TextID Name; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBCHALLENGECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::BoxingClubChallengeConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BoxingClubChallengeConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBCHALLENGECONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
