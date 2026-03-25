#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONMPCOSTCONFIG_METHOD_3_5749BAA3D0311D98_OFFSET UNITYSDK_OFFSET(0x17630D70)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONMPCOSTCONFIG_METHOD_3_7B12D3B7ABCF35C1_OFFSET UNITYSDK_OFFSET(0x17630CA0)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONMPCOSTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17630D20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionOnMpCostConfig_TypeDefinitionIndex = 16243;

	class RogueModifierExecuteActionOnMpCostConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONMPCOSTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7B12D3B7ABCF35C1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnMpCostConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnMpCostConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONMPCOSTCONFIG_METHOD_3_7B12D3B7ABCF35C1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5749BAA3D0311D98(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnMpCostConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnMpCostConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONMPCOSTCONFIG_METHOD_3_5749BAA3D0311D98_OFFSET))(a1, a2);
		}
	};
}
