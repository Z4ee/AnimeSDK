#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEMONSTERGROUPCONFIG_METHOD_3_0270DD63C1512014_OFFSET UNITYSDK_OFFSET(0x18D45950)
#define RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEMONSTERGROUPCONFIG_METHOD_3_218826A9E4A6E7DD_OFFSET UNITYSDK_OFFSET(0x18D45880)
#define RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEMONSTERGROUPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18D45900)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierReplaceContentRogueMonsterGroupConfig_TypeDefinitionIndex = 16809;

	class RogueModifierReplaceContentRogueMonsterGroupConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEMONSTERGROUPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_218826A9E4A6E7DD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierReplaceContentRogueMonsterGroupConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierReplaceContentRogueMonsterGroupConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEMONSTERGROUPCONFIG_METHOD_3_218826A9E4A6E7DD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0270DD63C1512014(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierReplaceContentRogueMonsterGroupConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierReplaceContentRogueMonsterGroupConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEMONSTERGROUPCONFIG_METHOD_3_0270DD63C1512014_OFFSET))(a1, a2);
		}
	};
}
