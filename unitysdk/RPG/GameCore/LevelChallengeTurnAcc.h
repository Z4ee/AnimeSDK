#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LEVELCHALLENGETURNACC_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1C10E4D0)
#define RPG_GAMECORE_LEVELCHALLENGETURNACC_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C10E400)
#define RPG_GAMECORE_LEVELCHALLENGETURNACC__CTOR_OFFSET UNITYSDK_OFFSET(0x1C10E4C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelChallengeTurnAcc_TypeDefinitionIndex = 23371;

	class LevelChallengeTurnAcc : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHALLENGETURNACC__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelChallengeTurnAcc*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelChallengeTurnAcc*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHALLENGETURNACC_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelChallengeTurnAcc* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelChallengeTurnAcc*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHALLENGETURNACC_FROMBINARYIMPL_OFFSET))(a1, a2);
		}
	};
}
