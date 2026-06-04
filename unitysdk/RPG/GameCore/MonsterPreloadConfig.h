#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterPreloadConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MONSTERPRELOADCONFIG_METHOD_3_2E97A6DC10285C3E_OFFSET UNITYSDK_OFFSET(0x199AD940)
#define RPG_GAMECORE_MONSTERPRELOADCONFIG_METHOD_3_C4A5E8A7D47B2D0D_OFFSET UNITYSDK_OFFSET(0x199AD980)
#define RPG_GAMECORE_MONSTERPRELOADCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x199AD970)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonsterPreloadConfig_TypeDefinitionIndex = 15526;

	class MonsterPreloadConfig : public ::RPG::GameCore::CharacterPreloadConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERPRELOADCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2E97A6DC10285C3E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonsterPreloadConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonsterPreloadConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERPRELOADCONFIG_METHOD_3_2E97A6DC10285C3E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C4A5E8A7D47B2D0D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonsterPreloadConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonsterPreloadConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERPRELOADCONFIG_METHOD_3_C4A5E8A7D47B2D0D_OFFSET))(a1, a2);
		}
	};
}
