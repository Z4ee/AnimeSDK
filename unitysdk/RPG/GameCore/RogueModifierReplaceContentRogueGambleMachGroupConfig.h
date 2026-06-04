#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEGAMBLEMACHGROUPCONFIG_METHOD_3_D2CED4C79E6F2B58_OFFSET UNITYSDK_OFFSET(0x19B9B240)
#define RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEGAMBLEMACHGROUPCONFIG_METHOD_3_D8EAAAFBAFD56C71_OFFSET UNITYSDK_OFFSET(0x19B9B310)
#define RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEGAMBLEMACHGROUPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19B9B2C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierReplaceContentRogueGambleMachGroupConfig_TypeDefinitionIndex = 16832;

	class RogueModifierReplaceContentRogueGambleMachGroupConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEGAMBLEMACHGROUPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D2CED4C79E6F2B58(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierReplaceContentRogueGambleMachGroupConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierReplaceContentRogueGambleMachGroupConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEGAMBLEMACHGROUPCONFIG_METHOD_3_D2CED4C79E6F2B58_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D8EAAAFBAFD56C71(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierReplaceContentRogueGambleMachGroupConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierReplaceContentRogueGambleMachGroupConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEGAMBLEMACHGROUPCONFIG_METHOD_3_D8EAAAFBAFD56C71_OFFSET))(a1, a2);
		}
	};
}
