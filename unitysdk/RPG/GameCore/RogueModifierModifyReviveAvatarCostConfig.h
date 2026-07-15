#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYREVIVEAVATARCOSTCONFIG_METHOD_3_818EECFB8A2F4AED_OFFSET UNITYSDK_OFFSET(0x1D1644E0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYREVIVEAVATARCOSTCONFIG_METHOD_3_B28282651C7BF251_OFFSET UNITYSDK_OFFSET(0x1D164530)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYREVIVEAVATARCOSTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D164520)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyReviveAvatarCostConfig_TypeDefinitionIndex = 17234;

	class RogueModifierModifyReviveAvatarCostConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYREVIVEAVATARCOSTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_818EECFB8A2F4AED(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyReviveAvatarCostConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyReviveAvatarCostConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYREVIVEAVATARCOSTCONFIG_METHOD_3_818EECFB8A2F4AED_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B28282651C7BF251(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyReviveAvatarCostConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyReviveAvatarCostConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYREVIVEAVATARCOSTCONFIG_METHOD_3_B28282651C7BF251_OFFSET))(a1, a2);
		}
	};
}
