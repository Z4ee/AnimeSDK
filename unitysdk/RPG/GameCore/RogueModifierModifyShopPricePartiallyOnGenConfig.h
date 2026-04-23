#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYSHOPPRICEPARTIALLYONGENCONFIG_METHOD_3_BEB4104621ABE3A8_OFFSET UNITYSDK_OFFSET(0x18D42BD0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYSHOPPRICEPARTIALLYONGENCONFIG_METHOD_3_E8B2E7E8EDF00291_OFFSET UNITYSDK_OFFSET(0x18D42B00)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYSHOPPRICEPARTIALLYONGENCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18D42B80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyShopPricePartiallyOnGenConfig_TypeDefinitionIndex = 16853;

	class RogueModifierModifyShopPricePartiallyOnGenConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYSHOPPRICEPARTIALLYONGENCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E8B2E7E8EDF00291(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyShopPricePartiallyOnGenConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyShopPricePartiallyOnGenConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYSHOPPRICEPARTIALLYONGENCONFIG_METHOD_3_E8B2E7E8EDF00291_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BEB4104621ABE3A8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyShopPricePartiallyOnGenConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyShopPricePartiallyOnGenConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYSHOPPRICEPARTIALLYONGENCONFIG_METHOD_3_BEB4104621ABE3A8_OFFSET))(a1, a2);
		}
	};
}
