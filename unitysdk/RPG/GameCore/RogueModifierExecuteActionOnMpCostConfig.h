#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONMPCOSTCONFIG_METHOD_3_5749BAA3D0311D98_OFFSET UNITYSDK_OFFSET(0x1D3F85B0)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONMPCOSTCONFIG_METHOD_3_DAE560D607F1D05C_OFFSET UNITYSDK_OFFSET(0x1D3F8560)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONMPCOSTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3F85A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionOnMpCostConfig_TypeDefinitionIndex = 17476;

	class RogueModifierExecuteActionOnMpCostConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONMPCOSTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DAE560D607F1D05C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnMpCostConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnMpCostConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONMPCOSTCONFIG_METHOD_3_DAE560D607F1D05C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5749BAA3D0311D98(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnMpCostConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnMpCostConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONMPCOSTCONFIG_METHOD_3_5749BAA3D0311D98_OFFSET))(a1, a2);
		}
	};
}
