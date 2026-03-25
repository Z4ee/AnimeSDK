#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEBUFFGROUPCONFIG_METHOD_3_1CFD036C0136D889_OFFSET UNITYSDK_OFFSET(0x176382A0)
#define RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEBUFFGROUPCONFIG_METHOD_3_9D1DEDBC74D07CB0_OFFSET UNITYSDK_OFFSET(0x176381D0)
#define RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEBUFFGROUPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17638250)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierReplaceContentRogueBuffGroupConfig_TypeDefinitionIndex = 16253;

	class RogueModifierReplaceContentRogueBuffGroupConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEBUFFGROUPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9D1DEDBC74D07CB0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierReplaceContentRogueBuffGroupConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierReplaceContentRogueBuffGroupConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEBUFFGROUPCONFIG_METHOD_3_9D1DEDBC74D07CB0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1CFD036C0136D889(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierReplaceContentRogueBuffGroupConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierReplaceContentRogueBuffGroupConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEBUFFGROUPCONFIG_METHOD_3_1CFD036C0136D889_OFFSET))(a1, a2);
		}
	};
}
