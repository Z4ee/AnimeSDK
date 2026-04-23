#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTGETROGUEMIRACLEEXCONFIG_METHOD_6_7D6DA958BDEEABD4_OFFSET UNITYSDK_OFFSET(0x18CC42B0)
#define RPG_GAMECORE_ROGUEACTGETROGUEMIRACLEEXCONFIG_METHOD_6_B8F7251FCA69EFB9_OFFSET UNITYSDK_OFFSET(0x18CC4090)
#define RPG_GAMECORE_ROGUEACTGETROGUEMIRACLEEXCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18CC41D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActGetRogueMiracleExConfig_TypeDefinitionIndex = 18605;

	class RogueActGetRogueMiracleExConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEMIRACLEEXCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_B8F7251FCA69EFB9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetRogueMiracleExConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetRogueMiracleExConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEMIRACLEEXCONFIG_METHOD_6_B8F7251FCA69EFB9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_7D6DA958BDEEABD4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetRogueMiracleExConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetRogueMiracleExConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEMIRACLEEXCONFIG_METHOD_6_7D6DA958BDEEABD4_OFFSET))(a1, a2);
		}
	};
}
