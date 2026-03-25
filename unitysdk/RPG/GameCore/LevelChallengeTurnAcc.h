#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LEVELCHALLENGETURNACC_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x17330240)
#define RPG_GAMECORE_LEVELCHALLENGETURNACC_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17330130)
#define RPG_GAMECORE_LEVELCHALLENGETURNACC__CTOR_OFFSET UNITYSDK_OFFSET(0x17330210)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelChallengeTurnAcc_TypeDefinitionIndex = 21887;

	class LevelChallengeTurnAcc : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHALLENGETURNACC__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::LevelChallengeTurnAcc*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelChallengeTurnAcc*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHALLENGETURNACC_FROMBINARY_OFFSET))(array, val);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::LevelChallengeTurnAcc* val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelChallengeTurnAcc*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHALLENGETURNACC_FROMBINARYIMPL_OFFSET))(array, val);
		}
	};
}
