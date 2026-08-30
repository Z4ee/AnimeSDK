#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GAMELEVELDICECOMBATNPCCONFIG_METHOD_2_61A84F0DEABDCC3F_OFFSET UNITYSDK_OFFSET(0x1D13CE60)
#define RPG_GAMECORE_GAMELEVELDICECOMBATNPCCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D13CFA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GameLevelDiceCombatNPCConfig_TypeDefinitionIndex = 17197;

	class GameLevelDiceCombatNPCConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 GroupID; // 0x10
		::System::UInt32 InstanceID; // 0x14
		::System::UInt32 DiceStageID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMELEVELDICECOMBATNPCCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_61A84F0DEABDCC3F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GameLevelDiceCombatNPCConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GameLevelDiceCombatNPCConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMELEVELDICECOMBATNPCCONFIG_METHOD_2_61A84F0DEABDCC3F_OFFSET))(a1, a2);
		}
	};
}
