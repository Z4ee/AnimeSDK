#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGERSKILLHINT_METHOD_3_07B8E77E360BD566_OFFSET UNITYSDK_OFFSET(0x1887D710)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGERSKILLHINT_METHOD_3_86ED0FF82D4A8C31_OFFSET UNITYSDK_OFFSET(0x1887A1D0)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGERSKILLHINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1887A180)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTaskConfig_TriggerSkillHint_TypeDefinitionIndex = 15205;

	class DiceCombatTaskConfig_TriggerSkillHint : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGERSKILLHINT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_07B8E77E360BD566(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_TriggerSkillHint*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_TriggerSkillHint*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGERSKILLHINT_METHOD_3_07B8E77E360BD566_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_86ED0FF82D4A8C31(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_TriggerSkillHint* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_TriggerSkillHint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGERSKILLHINT_METHOD_3_86ED0FF82D4A8C31_OFFSET))(a1, a2);
		}
	};
}
