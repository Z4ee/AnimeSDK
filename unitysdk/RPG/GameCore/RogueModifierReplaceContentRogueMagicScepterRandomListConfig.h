#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEMAGICSCEPTERRANDOMLISTCONFIG_METHOD_3_09D78F6AC6E835E9_OFFSET UNITYSDK_OFFSET(0x18D454F0)
#define RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEMAGICSCEPTERRANDOMLISTCONFIG_METHOD_3_E9E0B25F2FE47C90_OFFSET UNITYSDK_OFFSET(0x18D45420)
#define RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEMAGICSCEPTERRANDOMLISTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18D454A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierReplaceContentRogueMagicScepterRandomListConfig_TypeDefinitionIndex = 16819;

	class RogueModifierReplaceContentRogueMagicScepterRandomListConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEMAGICSCEPTERRANDOMLISTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E9E0B25F2FE47C90(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierReplaceContentRogueMagicScepterRandomListConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierReplaceContentRogueMagicScepterRandomListConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEMAGICSCEPTERRANDOMLISTCONFIG_METHOD_3_E9E0B25F2FE47C90_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_09D78F6AC6E835E9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierReplaceContentRogueMagicScepterRandomListConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierReplaceContentRogueMagicScepterRandomListConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEMAGICSCEPTERRANDOMLISTCONFIG_METHOD_3_09D78F6AC6E835E9_OFFSET))(a1, a2);
		}
	};
}
