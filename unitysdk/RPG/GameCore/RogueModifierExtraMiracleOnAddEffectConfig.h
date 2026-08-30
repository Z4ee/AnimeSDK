#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIEREXTRAMIRACLEONADDEFFECTCONFIG_METHOD_3_A32A1247881E7BF6_OFFSET UNITYSDK_OFFSET(0x1EEF9A70)
#define RPG_GAMECORE_ROGUEMODIFIEREXTRAMIRACLEONADDEFFECTCONFIG_METHOD_3_AD6653DED03E2652_OFFSET UNITYSDK_OFFSET(0x1EEF9AC0)
#define RPG_GAMECORE_ROGUEMODIFIEREXTRAMIRACLEONADDEFFECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEF9AB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExtraMiracleOnAddEffectConfig_TypeDefinitionIndex = 17546;

	class RogueModifierExtraMiracleOnAddEffectConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXTRAMIRACLEONADDEFFECTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A32A1247881E7BF6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExtraMiracleOnAddEffectConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExtraMiracleOnAddEffectConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXTRAMIRACLEONADDEFFECTCONFIG_METHOD_3_A32A1247881E7BF6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AD6653DED03E2652(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExtraMiracleOnAddEffectConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExtraMiracleOnAddEffectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXTRAMIRACLEONADDEFFECTCONFIG_METHOD_3_AD6653DED03E2652_OFFSET))(a1, a2);
		}
	};
}
