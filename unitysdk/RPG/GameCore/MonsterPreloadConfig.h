#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterPreloadConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MONSTERPRELOADCONFIG_METHOD_3_A1D88C8A3C097CF9_OFFSET UNITYSDK_OFFSET(0x18B5E270)
#define RPG_GAMECORE_MONSTERPRELOADCONFIG_METHOD_3_B1B884D0EA65DC3A_OFFSET UNITYSDK_OFFSET(0x18B5E230)
#define RPG_GAMECORE_MONSTERPRELOADCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18B5E260)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonsterPreloadConfig_TypeDefinitionIndex = 15463;

	class MonsterPreloadConfig : public ::RPG::GameCore::CharacterPreloadConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERPRELOADCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B1B884D0EA65DC3A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonsterPreloadConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonsterPreloadConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERPRELOADCONFIG_METHOD_3_B1B884D0EA65DC3A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A1D88C8A3C097CF9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonsterPreloadConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonsterPreloadConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERPRELOADCONFIG_METHOD_3_A1D88C8A3C097CF9_OFFSET))(a1, a2);
		}
	};
}
