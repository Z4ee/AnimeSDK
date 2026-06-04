#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIEREXTRAMIRACLEONADDEFFECTCONFIG_METHOD_3_09E80F50801659DB_OFFSET UNITYSDK_OFFSET(0x19B5DFA0)
#define RPG_GAMECORE_ROGUEMODIFIEREXTRAMIRACLEONADDEFFECTCONFIG_METHOD_3_AD6653DED03E2652_OFFSET UNITYSDK_OFFSET(0x19B53840)
#define RPG_GAMECORE_ROGUEMODIFIEREXTRAMIRACLEONADDEFFECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19B537F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExtraMiracleOnAddEffectConfig_TypeDefinitionIndex = 16881;

	class RogueModifierExtraMiracleOnAddEffectConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXTRAMIRACLEONADDEFFECTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_09E80F50801659DB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExtraMiracleOnAddEffectConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExtraMiracleOnAddEffectConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXTRAMIRACLEONADDEFFECTCONFIG_METHOD_3_09E80F50801659DB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AD6653DED03E2652(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExtraMiracleOnAddEffectConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExtraMiracleOnAddEffectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXTRAMIRACLEONADDEFFECTCONFIG_METHOD_3_AD6653DED03E2652_OFFSET))(a1, a2);
		}
	};
}
