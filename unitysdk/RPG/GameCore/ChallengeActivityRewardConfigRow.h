#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHALLENGEACTIVITYREWARDCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x187BB850)
#define RPG_GAMECORE_CHALLENGEACTIVITYREWARDCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x187BBEA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChallengeActivityRewardConfigRow_TypeDefinitionIndex = 12235;

	class ChallengeActivityRewardConfigRow : public ::System::Object
	{
	public:
		::System::String* RewardIconPath; // 0x10
		::System::UInt32 ActivityRewardID; // 0x18
		::System::UInt32 Count; // 0x1C
		::System::UInt32 Reward; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEACTIVITYREWARDCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ChallengeActivityRewardConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChallengeActivityRewardConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEACTIVITYREWARDCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
