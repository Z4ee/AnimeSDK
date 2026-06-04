#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEFORMULAHINTCONFIG_METHOD_3_0C3CE98EF686E6DA_OFFSET UNITYSDK_OFFSET(0x19B9B150)
#define RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEFORMULAHINTCONFIG_METHOD_3_B86A7FA72BFAD923_OFFSET UNITYSDK_OFFSET(0x19B9B080)
#define RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEFORMULAHINTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19B9B100)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierReplaceContentRogueFormulaHintConfig_TypeDefinitionIndex = 16831;

	class RogueModifierReplaceContentRogueFormulaHintConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEFORMULAHINTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B86A7FA72BFAD923(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierReplaceContentRogueFormulaHintConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierReplaceContentRogueFormulaHintConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEFORMULAHINTCONFIG_METHOD_3_B86A7FA72BFAD923_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0C3CE98EF686E6DA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierReplaceContentRogueFormulaHintConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierReplaceContentRogueFormulaHintConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEFORMULAHINTCONFIG_METHOD_3_0C3CE98EF686E6DA_OFFSET))(a1, a2);
		}
	};
}
