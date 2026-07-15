#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERREPLACESTYLEGIFTRARITYWEIGHTMAPCONFIG_METHOD_3_CC7188B4C4E3356A_OFFSET UNITYSDK_OFFSET(0x1D165E60)
#define RPG_GAMECORE_ROGUEMODIFIERREPLACESTYLEGIFTRARITYWEIGHTMAPCONFIG_METHOD_3_D929C5E05A828FC6_OFFSET UNITYSDK_OFFSET(0x1D165EB0)
#define RPG_GAMECORE_ROGUEMODIFIERREPLACESTYLEGIFTRARITYWEIGHTMAPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D165EA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierReplaceStyleGiftRarityWeightMapConfig_TypeDefinitionIndex = 17085;

	class RogueModifierReplaceStyleGiftRarityWeightMapConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACESTYLEGIFTRARITYWEIGHTMAPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CC7188B4C4E3356A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierReplaceStyleGiftRarityWeightMapConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierReplaceStyleGiftRarityWeightMapConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACESTYLEGIFTRARITYWEIGHTMAPCONFIG_METHOD_3_CC7188B4C4E3356A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D929C5E05A828FC6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierReplaceStyleGiftRarityWeightMapConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierReplaceStyleGiftRarityWeightMapConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACESTYLEGIFTRARITYWEIGHTMAPCONFIG_METHOD_3_D929C5E05A828FC6_OFFSET))(a1, a2);
		}
	};
}
