#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_CHALLENGERREVIVAL_METHOD_3_1B2D014C54A8A14B_OFFSET UNITYSDK_OFFSET(0x1DB04FB0)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_CHALLENGERREVIVAL_METHOD_3_B0D7C25E6A8EE06A_OFFSET UNITYSDK_OFFSET(0x1DB04F10)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_CHALLENGERREVIVAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB04FA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTaskConfig_ChallengerRevival_TypeDefinitionIndex = 15907;

	class DiceCombatTaskConfig_ChallengerRevival : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_CHALLENGERREVIVAL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B0D7C25E6A8EE06A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_ChallengerRevival*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_ChallengerRevival*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_CHALLENGERREVIVAL_METHOD_3_B0D7C25E6A8EE06A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1B2D014C54A8A14B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_ChallengerRevival* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_ChallengerRevival*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_CHALLENGERREVIVAL_METHOD_3_1B2D014C54A8A14B_OFFSET))(a1, a2);
		}
	};
}
