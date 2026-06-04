#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUENPCGROUPCONFIG_METHOD_3_5117CECCC355EEBE_OFFSET UNITYSDK_OFFSET(0x19B9B940)
#define RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUENPCGROUPCONFIG_METHOD_3_ADAC5D405A9BF9B7_OFFSET UNITYSDK_OFFSET(0x19B9BA10)
#define RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUENPCGROUPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19B9B9C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierReplaceContentRogueNPCGroupConfig_TypeDefinitionIndex = 16825;

	class RogueModifierReplaceContentRogueNPCGroupConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUENPCGROUPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5117CECCC355EEBE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierReplaceContentRogueNPCGroupConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierReplaceContentRogueNPCGroupConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUENPCGROUPCONFIG_METHOD_3_5117CECCC355EEBE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_ADAC5D405A9BF9B7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierReplaceContentRogueNPCGroupConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierReplaceContentRogueNPCGroupConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUENPCGROUPCONFIG_METHOD_3_ADAC5D405A9BF9B7_OFFSET))(a1, a2);
		}
	};
}
