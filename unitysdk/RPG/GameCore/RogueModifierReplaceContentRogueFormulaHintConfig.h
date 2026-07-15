#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEFORMULAHINTCONFIG_METHOD_3_0C3CE98EF686E6DA_OFFSET UNITYSDK_OFFSET(0x1D1658B0)
#define RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEFORMULAHINTCONFIG_METHOD_3_5C7A47758CAEE29E_OFFSET UNITYSDK_OFFSET(0x1D165860)
#define RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEFORMULAHINTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1658A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierReplaceContentRogueFormulaHintConfig_TypeDefinitionIndex = 16993;

	class RogueModifierReplaceContentRogueFormulaHintConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEFORMULAHINTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5C7A47758CAEE29E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierReplaceContentRogueFormulaHintConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierReplaceContentRogueFormulaHintConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEFORMULAHINTCONFIG_METHOD_3_5C7A47758CAEE29E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0C3CE98EF686E6DA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierReplaceContentRogueFormulaHintConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierReplaceContentRogueFormulaHintConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEFORMULAHINTCONFIG_METHOD_3_0C3CE98EF686E6DA_OFFSET))(a1, a2);
		}
	};
}
