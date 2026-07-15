#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYFORMULAACTIVATECONDITIONCONFIG_METHOD_3_3C2289BCCF032F74_OFFSET UNITYSDK_OFFSET(0x1D163BD0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYFORMULAACTIVATECONDITIONCONFIG_METHOD_3_5ACEED213AC37FF8_OFFSET UNITYSDK_OFFSET(0x1D163B80)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYFORMULAACTIVATECONDITIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D163BC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyFormulaActivateConditionConfig_TypeDefinitionIndex = 17029;

	class RogueModifierModifyFormulaActivateConditionConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYFORMULAACTIVATECONDITIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5ACEED213AC37FF8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyFormulaActivateConditionConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyFormulaActivateConditionConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYFORMULAACTIVATECONDITIONCONFIG_METHOD_3_5ACEED213AC37FF8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3C2289BCCF032F74(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyFormulaActivateConditionConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyFormulaActivateConditionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYFORMULAACTIVATECONDITIONCONFIG_METHOD_3_3C2289BCCF032F74_OFFSET))(a1, a2);
		}
	};
}
