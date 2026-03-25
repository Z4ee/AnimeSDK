#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYREVIVEAVATARCOSTCONFIG_METHOD_3_1C93C4A9617BE3B8_OFFSET UNITYSDK_OFFSET(0x176357D0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYREVIVEAVATARCOSTCONFIG_METHOD_3_B28282651C7BF251_OFFSET UNITYSDK_OFFSET(0x176358A0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYREVIVEAVATARCOSTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17635850)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyReviveAvatarCostConfig_TypeDefinitionIndex = 16505;

	class RogueModifierModifyReviveAvatarCostConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYREVIVEAVATARCOSTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1C93C4A9617BE3B8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyReviveAvatarCostConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyReviveAvatarCostConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYREVIVEAVATARCOSTCONFIG_METHOD_3_1C93C4A9617BE3B8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B28282651C7BF251(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyReviveAvatarCostConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyReviveAvatarCostConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYREVIVEAVATARCOSTCONFIG_METHOD_3_B28282651C7BF251_OFFSET))(a1, a2);
		}
	};
}
