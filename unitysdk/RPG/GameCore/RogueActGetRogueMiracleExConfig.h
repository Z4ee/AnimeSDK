#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTGETROGUEMIRACLEEXCONFIG_METHOD_6_7D6DA958BDEEABD4_OFFSET UNITYSDK_OFFSET(0x1D3B7D40)
#define RPG_GAMECORE_ROGUEACTGETROGUEMIRACLEEXCONFIG_METHOD_6_B1EE53663D0970D8_OFFSET UNITYSDK_OFFSET(0x1D3B7CF0)
#define RPG_GAMECORE_ROGUEACTGETROGUEMIRACLEEXCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3B7D30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActGetRogueMiracleExConfig_TypeDefinitionIndex = 19374;

	class RogueActGetRogueMiracleExConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEMIRACLEEXCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_B1EE53663D0970D8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetRogueMiracleExConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetRogueMiracleExConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEMIRACLEEXCONFIG_METHOD_6_B1EE53663D0970D8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_7D6DA958BDEEABD4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetRogueMiracleExConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetRogueMiracleExConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEMIRACLEEXCONFIG_METHOD_6_7D6DA958BDEEABD4_OFFSET))(a1, a2);
		}
	};
}
