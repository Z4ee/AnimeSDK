#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHENLINGGAMEBOYCHALLENGEPACKROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17086290)
#define RPG_GAMECORE_CHENLINGGAMEBOYCHALLENGEPACKROW__CTOR_OFFSET UNITYSDK_OFFSET(0x17086440)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingGameBoyChallengePackRow_TypeDefinitionIndex = 12896;

	class ChenLingGameBoyChallengePackRow : public ::System::Object
	{
	public:
		::System::UInt32 HardChallengeID; // 0x10
		::System::UInt32 RewardID; // 0x14
		::System::UInt32 CheatChallengeID; // 0x18
		::System::UInt32 GameBoyChallengePackID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGGAMEBOYCHALLENGEPACKROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ChenLingGameBoyChallengePackRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingGameBoyChallengePackRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGGAMEBOYCHALLENGEPACKROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
