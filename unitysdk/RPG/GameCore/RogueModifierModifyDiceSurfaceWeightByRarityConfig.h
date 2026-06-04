#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYDICESURFACEWEIGHTBYRARITYCONFIG_METHOD_3_2E5C277B61DD45FE_OFFSET UNITYSDK_OFFSET(0x19B55280)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYDICESURFACEWEIGHTBYRARITYCONFIG_METHOD_3_846E69EE159681E7_OFFSET UNITYSDK_OFFSET(0x19B5F140)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYDICESURFACEWEIGHTBYRARITYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19B55230)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyDiceSurfaceWeightByRarityConfig_TypeDefinitionIndex = 17047;

	class RogueModifierModifyDiceSurfaceWeightByRarityConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYDICESURFACEWEIGHTBYRARITYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_846E69EE159681E7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyDiceSurfaceWeightByRarityConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyDiceSurfaceWeightByRarityConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYDICESURFACEWEIGHTBYRARITYCONFIG_METHOD_3_846E69EE159681E7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2E5C277B61DD45FE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyDiceSurfaceWeightByRarityConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyDiceSurfaceWeightByRarityConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYDICESURFACEWEIGHTBYRARITYCONFIG_METHOD_3_2E5C277B61DD45FE_OFFSET))(a1, a2);
		}
	};
}
