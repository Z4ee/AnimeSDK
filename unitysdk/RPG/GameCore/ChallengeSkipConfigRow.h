#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChallengeGroupType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHALLENGESKIPCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1705E680)
#define RPG_GAMECORE_CHALLENGESKIPCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1705E780)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChallengeSkipConfigRow_TypeDefinitionIndex = 11800;

	class ChallengeSkipConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 MaxSkipLevel; // 0x10
		::RPG::GameCore::ChallengeGroupType ChallengeGroupType; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGESKIPCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ChallengeSkipConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChallengeSkipConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGESKIPCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
