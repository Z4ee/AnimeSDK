#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUECHESTGROUPLISTCONFIG_METHOD_3_23F380D140A8DE55_OFFSET UNITYSDK_OFFSET(0x1D1657A0)
#define RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUECHESTGROUPLISTCONFIG_METHOD_3_2654E1F4B9AC8859_OFFSET UNITYSDK_OFFSET(0x1D1657F0)
#define RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUECHESTGROUPLISTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1657E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierReplaceContentRogueChestGroupListConfig_TypeDefinitionIndex = 16995;

	class RogueModifierReplaceContentRogueChestGroupListConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUECHESTGROUPLISTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_23F380D140A8DE55(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierReplaceContentRogueChestGroupListConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierReplaceContentRogueChestGroupListConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUECHESTGROUPLISTCONFIG_METHOD_3_23F380D140A8DE55_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2654E1F4B9AC8859(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierReplaceContentRogueChestGroupListConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierReplaceContentRogueChestGroupListConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUECHESTGROUPLISTCONFIG_METHOD_3_2654E1F4B9AC8859_OFFSET))(a1, a2);
		}
	};
}
