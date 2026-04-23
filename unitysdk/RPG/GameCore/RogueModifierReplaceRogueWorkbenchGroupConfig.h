#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERREPLACEROGUEWORKBENCHGROUPCONFIG_METHOD_3_2F14CC630F272310_OFFSET UNITYSDK_OFFSET(0x18D45E90)
#define RPG_GAMECORE_ROGUEMODIFIERREPLACEROGUEWORKBENCHGROUPCONFIG_METHOD_3_60395EFEF0F87BB9_OFFSET UNITYSDK_OFFSET(0x18D45DC0)
#define RPG_GAMECORE_ROGUEMODIFIERREPLACEROGUEWORKBENCHGROUPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18D45E40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierReplaceRogueWorkbenchGroupConfig_TypeDefinitionIndex = 16973;

	class RogueModifierReplaceRogueWorkbenchGroupConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACEROGUEWORKBENCHGROUPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_60395EFEF0F87BB9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierReplaceRogueWorkbenchGroupConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierReplaceRogueWorkbenchGroupConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACEROGUEWORKBENCHGROUPCONFIG_METHOD_3_60395EFEF0F87BB9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2F14CC630F272310(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierReplaceRogueWorkbenchGroupConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierReplaceRogueWorkbenchGroupConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACEROGUEWORKBENCHGROUPCONFIG_METHOD_3_2F14CC630F272310_OFFSET))(a1, a2);
		}
	};
}
