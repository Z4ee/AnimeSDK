#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEMAGICUNITHINTCONFIG_METHOD_3_823B284D24044BD4_OFFSET UNITYSDK_OFFSET(0x176389B0)
#define RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEMAGICUNITHINTCONFIG_METHOD_3_965370C5F1A6A54D_OFFSET UNITYSDK_OFFSET(0x17638A80)
#define RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEMAGICUNITHINTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17638A30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierReplaceContentRogueMagicUnitHintConfig_TypeDefinitionIndex = 16269;

	class RogueModifierReplaceContentRogueMagicUnitHintConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEMAGICUNITHINTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_823B284D24044BD4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierReplaceContentRogueMagicUnitHintConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierReplaceContentRogueMagicUnitHintConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEMAGICUNITHINTCONFIG_METHOD_3_823B284D24044BD4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_965370C5F1A6A54D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierReplaceContentRogueMagicUnitHintConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierReplaceContentRogueMagicUnitHintConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEMAGICUNITHINTCONFIG_METHOD_3_965370C5F1A6A54D_OFFSET))(a1, a2);
		}
	};
}
