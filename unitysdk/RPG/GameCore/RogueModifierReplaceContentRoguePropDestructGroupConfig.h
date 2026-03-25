#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEPROPDESTRUCTGROUPCONFIG_METHOD_3_AE643B0E75C7E90B_OFFSET UNITYSDK_OFFSET(0x1762C3F0)
#define RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEPROPDESTRUCTGROUPCONFIG_METHOD_3_BCE57E55E75667B2_OFFSET UNITYSDK_OFFSET(0x17638E90)
#define RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEPROPDESTRUCTGROUPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1762C3A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierReplaceContentRoguePropDestructGroupConfig_TypeDefinitionIndex = 16260;

	class RogueModifierReplaceContentRoguePropDestructGroupConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEPROPDESTRUCTGROUPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BCE57E55E75667B2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierReplaceContentRoguePropDestructGroupConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierReplaceContentRoguePropDestructGroupConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEPROPDESTRUCTGROUPCONFIG_METHOD_3_BCE57E55E75667B2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AE643B0E75C7E90B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierReplaceContentRoguePropDestructGroupConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierReplaceContentRoguePropDestructGroupConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEPROPDESTRUCTGROUPCONFIG_METHOD_3_AE643B0E75C7E90B_OFFSET))(a1, a2);
		}
	};
}
