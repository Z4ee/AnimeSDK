#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONKILLELITEMONSTERNUMCONFIG_METHOD_3_595A08746E658977_OFFSET UNITYSDK_OFFSET(0x1CFC06D0)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONKILLELITEMONSTERNUMCONFIG_METHOD_3_DA71F71AD19F2733_OFFSET UNITYSDK_OFFSET(0x1CFC0680)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONKILLELITEMONSTERNUMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFC06C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionOnKillEliteMonsterNumConfig_TypeDefinitionIndex = 16972;

	class RogueModifierExecuteActionOnKillEliteMonsterNumConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONKILLELITEMONSTERNUMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DA71F71AD19F2733(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnKillEliteMonsterNumConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnKillEliteMonsterNumConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONKILLELITEMONSTERNUMCONFIG_METHOD_3_DA71F71AD19F2733_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_595A08746E658977(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnKillEliteMonsterNumConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnKillEliteMonsterNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONKILLELITEMONSTERNUMCONFIG_METHOD_3_595A08746E658977_OFFSET))(a1, a2);
		}
	};
}
