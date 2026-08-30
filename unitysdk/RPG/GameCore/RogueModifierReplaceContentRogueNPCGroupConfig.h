#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUENPCGROUPCONFIG_METHOD_3_ADAC5D405A9BF9B7_OFFSET UNITYSDK_OFFSET(0x1D3FC170)
#define RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUENPCGROUPCONFIG_METHOD_3_F370D944EE9EF573_OFFSET UNITYSDK_OFFSET(0x1D3FC120)
#define RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUENPCGROUPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3FC160)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierReplaceContentRogueNPCGroupConfig_TypeDefinitionIndex = 17490;

	class RogueModifierReplaceContentRogueNPCGroupConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUENPCGROUPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F370D944EE9EF573(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierReplaceContentRogueNPCGroupConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierReplaceContentRogueNPCGroupConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUENPCGROUPCONFIG_METHOD_3_F370D944EE9EF573_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_ADAC5D405A9BF9B7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierReplaceContentRogueNPCGroupConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierReplaceContentRogueNPCGroupConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUENPCGROUPCONFIG_METHOD_3_ADAC5D405A9BF9B7_OFFSET))(a1, a2);
		}
	};
}
