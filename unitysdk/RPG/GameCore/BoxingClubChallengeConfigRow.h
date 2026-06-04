#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/BoxingClubActivityType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_BOXINGCLUBCHALLENGECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x194E9710)
#define RPG_GAMECORE_BOXINGCLUBCHALLENGECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x194EA1C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BoxingClubChallengeConfigRow_TypeDefinitionIndex = 12283;

	class BoxingClubChallengeConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* SpecialAvatarIDList; // 0x10
		::Il2CppArray<::System::UInt32>* StageGroupList; // 0x18
		::Il2CppArray<::RPG::GameCore::AttackDamageType>* DamageType; // 0x20
		::System::String* IconPath; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* StageBuffAndGroupMap; // 0x30
		::RPG::Client::TextID ChallengeTip; // 0x38
		::System::UInt32 ChallengeID; // 0x48
		::System::UInt32 PreChallengeID; // 0x4C
		::RPG::Client::TextID Name; // 0x50
		::System::UInt32 FirstPassRewardID; // 0x60
		::System::Boolean IsSpecialChallenge; // 0x64
		::System::UInt32 ChallengeTurnLimit; // 0x68
		::System::UInt32 ActivityModuleID; // 0x6C
		::RPG::GameCore::BoxingClubActivityType Type; // 0x70
		::System::UInt32 SpecialAvatarActivityModule; // 0x74
		::System::UInt32 ChallengeBuff; // 0x78
		::System::UInt32 PerfectTurn; // 0x7C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBCHALLENGECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BoxingClubChallengeConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BoxingClubChallengeConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBCHALLENGECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
