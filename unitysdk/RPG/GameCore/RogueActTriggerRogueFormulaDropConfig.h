#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEFORMULADROPCONFIG_METHOD_6_033D93BA0361B239_OFFSET UNITYSDK_OFFSET(0x19AFB730)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEFORMULADROPCONFIG_METHOD_6_3224103E220103C4_OFFSET UNITYSDK_OFFSET(0x19AFB510)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEFORMULADROPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19AFB650)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActTriggerRogueFormulaDropConfig_TypeDefinitionIndex = 18621;

	class RogueActTriggerRogueFormulaDropConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEFORMULADROPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_3224103E220103C4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueFormulaDropConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueFormulaDropConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEFORMULADROPCONFIG_METHOD_6_3224103E220103C4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_033D93BA0361B239(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueFormulaDropConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueFormulaDropConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEFORMULADROPCONFIG_METHOD_6_033D93BA0361B239_OFFSET))(a1, a2);
		}
	};
}
