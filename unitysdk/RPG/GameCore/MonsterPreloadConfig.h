#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterPreloadConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MONSTERPRELOADCONFIG_METHOD_3_2B3433E9A4B3C7E4_OFFSET UNITYSDK_OFFSET(0x1D2D4490)
#define RPG_GAMECORE_MONSTERPRELOADCONFIG_METHOD_3_83773603EB198634_OFFSET UNITYSDK_OFFSET(0x1D2D4450)
#define RPG_GAMECORE_MONSTERPRELOADCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2D4480)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonsterPreloadConfig_TypeDefinitionIndex = 16166;

	class MonsterPreloadConfig : public ::RPG::GameCore::CharacterPreloadConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERPRELOADCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_83773603EB198634(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonsterPreloadConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonsterPreloadConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERPRELOADCONFIG_METHOD_3_83773603EB198634_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2B3433E9A4B3C7E4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonsterPreloadConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonsterPreloadConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERPRELOADCONFIG_METHOD_3_2B3433E9A4B3C7E4_OFFSET))(a1, a2);
		}
	};
}
