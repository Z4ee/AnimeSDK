#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONDELETECONFIG_METHOD_3_33E43F58CC6E9533_OFFSET UNITYSDK_OFFSET(0x1CFC0020)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONDELETECONFIG_METHOD_3_B2CC50B26934F777_OFFSET UNITYSDK_OFFSET(0x1CFC0070)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONDELETECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFC0060)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionOnDeleteConfig_TypeDefinitionIndex = 16978;

	class RogueModifierExecuteActionOnDeleteConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONDELETECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_33E43F58CC6E9533(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnDeleteConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnDeleteConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONDELETECONFIG_METHOD_3_33E43F58CC6E9533_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B2CC50B26934F777(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnDeleteConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnDeleteConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONDELETECONFIG_METHOD_3_B2CC50B26934F777_OFFSET))(a1, a2);
		}
	};
}
