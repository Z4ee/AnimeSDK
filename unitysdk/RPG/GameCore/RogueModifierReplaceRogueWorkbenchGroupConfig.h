#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERREPLACEROGUEWORKBENCHGROUPCONFIG_METHOD_3_2F14CC630F272310_OFFSET UNITYSDK_OFFSET(0x1D3FC350)
#define RPG_GAMECORE_ROGUEMODIFIERREPLACEROGUEWORKBENCHGROUPCONFIG_METHOD_3_CF53028B8DC56214_OFFSET UNITYSDK_OFFSET(0x1D3FC300)
#define RPG_GAMECORE_ROGUEMODIFIERREPLACEROGUEWORKBENCHGROUPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3FC340)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierReplaceRogueWorkbenchGroupConfig_TypeDefinitionIndex = 17666;

	class RogueModifierReplaceRogueWorkbenchGroupConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACEROGUEWORKBENCHGROUPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CF53028B8DC56214(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierReplaceRogueWorkbenchGroupConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierReplaceRogueWorkbenchGroupConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACEROGUEWORKBENCHGROUPCONFIG_METHOD_3_CF53028B8DC56214_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2F14CC630F272310(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierReplaceRogueWorkbenchGroupConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierReplaceRogueWorkbenchGroupConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACEROGUEWORKBENCHGROUPCONFIG_METHOD_3_2F14CC630F272310_OFFSET))(a1, a2);
		}
	};
}
