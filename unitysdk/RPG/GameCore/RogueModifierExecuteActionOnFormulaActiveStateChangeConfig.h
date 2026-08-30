#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONFORMULAACTIVESTATECHANGECONFIG_METHOD_3_0D73E180C0FBF9B5_OFFSET UNITYSDK_OFFSET(0x1EEF8E10)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONFORMULAACTIVESTATECHANGECONFIG_METHOD_3_67FF489FFE2C42B9_OFFSET UNITYSDK_OFFSET(0x1EEF8E60)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONFORMULAACTIVESTATECHANGECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEF8E50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionOnFormulaActiveStateChangeConfig_TypeDefinitionIndex = 17768;

	class RogueModifierExecuteActionOnFormulaActiveStateChangeConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONFORMULAACTIVESTATECHANGECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0D73E180C0FBF9B5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnFormulaActiveStateChangeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnFormulaActiveStateChangeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONFORMULAACTIVESTATECHANGECONFIG_METHOD_3_0D73E180C0FBF9B5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_67FF489FFE2C42B9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnFormulaActiveStateChangeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnFormulaActiveStateChangeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONFORMULAACTIVESTATECHANGECONFIG_METHOD_3_67FF489FFE2C42B9_OFFSET))(a1, a2);
		}
	};
}
