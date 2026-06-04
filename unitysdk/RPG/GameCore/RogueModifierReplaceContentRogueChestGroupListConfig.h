#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUECHESTGROUPLISTCONFIG_METHOD_3_2654E1F4B9AC8859_OFFSET UNITYSDK_OFFSET(0x19B9AF90)
#define RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUECHESTGROUPLISTCONFIG_METHOD_3_DF0AF667788E2180_OFFSET UNITYSDK_OFFSET(0x19B9AEC0)
#define RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUECHESTGROUPLISTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19B9AF40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierReplaceContentRogueChestGroupListConfig_TypeDefinitionIndex = 16833;

	class RogueModifierReplaceContentRogueChestGroupListConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUECHESTGROUPLISTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DF0AF667788E2180(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierReplaceContentRogueChestGroupListConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierReplaceContentRogueChestGroupListConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUECHESTGROUPLISTCONFIG_METHOD_3_DF0AF667788E2180_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2654E1F4B9AC8859(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierReplaceContentRogueChestGroupListConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierReplaceContentRogueChestGroupListConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUECHESTGROUPLISTCONFIG_METHOD_3_2654E1F4B9AC8859_OFFSET))(a1, a2);
		}
	};
}
