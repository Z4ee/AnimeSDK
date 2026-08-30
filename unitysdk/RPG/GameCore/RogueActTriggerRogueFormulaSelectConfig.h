#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEFORMULASELECTCONFIG_METHOD_6_42313B6892481DC0_OFFSET UNITYSDK_OFFSET(0x1EE896A0)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEFORMULASELECTCONFIG_METHOD_6_FB12A411A4A8FDBC_OFFSET UNITYSDK_OFFSET(0x1EE896F0)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEFORMULASELECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE896E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActTriggerRogueFormulaSelectConfig_TypeDefinitionIndex = 19422;

	class RogueActTriggerRogueFormulaSelectConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEFORMULASELECTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_42313B6892481DC0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueFormulaSelectConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueFormulaSelectConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEFORMULASELECTCONFIG_METHOD_6_42313B6892481DC0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_FB12A411A4A8FDBC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueFormulaSelectConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueFormulaSelectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEFORMULASELECTCONFIG_METHOD_6_FB12A411A4A8FDBC_OFFSET))(a1, a2);
		}
	};
}
