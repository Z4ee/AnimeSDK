#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYREROLLBUFFCOSTCONFIG_METHOD_3_A2B699DAD3C8B5C6_OFFSET UNITYSDK_OFFSET(0x1EEFB2F0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYREROLLBUFFCOSTCONFIG_METHOD_3_A64240B97F013E62_OFFSET UNITYSDK_OFFSET(0x1EEFB340)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYREROLLBUFFCOSTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEFB330)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyReRollBuffCostConfig_TypeDefinitionIndex = 17749;

	class RogueModifierModifyReRollBuffCostConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYREROLLBUFFCOSTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A2B699DAD3C8B5C6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyReRollBuffCostConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyReRollBuffCostConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYREROLLBUFFCOSTCONFIG_METHOD_3_A2B699DAD3C8B5C6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A64240B97F013E62(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyReRollBuffCostConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyReRollBuffCostConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYREROLLBUFFCOSTCONFIG_METHOD_3_A64240B97F013E62_OFFSET))(a1, a2);
		}
	};
}
