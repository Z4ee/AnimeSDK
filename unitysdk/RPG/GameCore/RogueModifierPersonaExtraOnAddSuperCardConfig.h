#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERPERSONAEXTRAONADDSUPERCARDCONFIG_METHOD_3_2E75D36E7571356C_OFFSET UNITYSDK_OFFSET(0x19B99C60)
#define RPG_GAMECORE_ROGUEMODIFIERPERSONAEXTRAONADDSUPERCARDCONFIG_METHOD_3_FEDBDD6C6A82C205_OFFSET UNITYSDK_OFFSET(0x19B99D30)
#define RPG_GAMECORE_ROGUEMODIFIERPERSONAEXTRAONADDSUPERCARDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19B99CE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierPersonaExtraOnAddSuperCardConfig_TypeDefinitionIndex = 16977;

	class RogueModifierPersonaExtraOnAddSuperCardConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONAEXTRAONADDSUPERCARDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2E75D36E7571356C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierPersonaExtraOnAddSuperCardConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierPersonaExtraOnAddSuperCardConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONAEXTRAONADDSUPERCARDCONFIG_METHOD_3_2E75D36E7571356C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FEDBDD6C6A82C205(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierPersonaExtraOnAddSuperCardConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierPersonaExtraOnAddSuperCardConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONAEXTRAONADDSUPERCARDCONFIG_METHOD_3_FEDBDD6C6A82C205_OFFSET))(a1, a2);
		}
	};
}
