#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AIDecisionBaseConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AIDecisionUnitConfig; }
namespace RPG::GameCore { class AISwitchCaseDecision; }
namespace RPG::GameCore { class DynamicFloat; }
namespace System { class String; }

#define RPG_GAMECORE_AISWITCHDECISIONGROUPCONFIG_METHOD_4_A1490A35DCAFE8EA_OFFSET UNITYSDK_OFFSET(0x185F28D0)
#define RPG_GAMECORE_AISWITCHDECISIONGROUPCONFIG_METHOD_4_D1F5B122C5EE6849_OFFSET UNITYSDK_OFFSET(0x185F02C0)
#define RPG_GAMECORE_AISWITCHDECISIONGROUPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x185F02B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AISwitchDecisionGroupConfig_TypeDefinitionIndex = 14652;

	class AISwitchDecisionGroupConfig : public ::RPG::GameCore::AIDecisionBaseConfig
	{
	public:
		::System::String* DecisionGroupName; // 0x28
		::RPG::GameCore::DynamicFloat* Switch; // 0x30
		::Il2CppArray<::RPG::GameCore::AISwitchCaseDecision*>* CaseDecisions; // 0x38
		::RPG::GameCore::AIDecisionUnitConfig* DefaultDecision; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AISWITCHDECISIONGROUPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_A1490A35DCAFE8EA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AISwitchDecisionGroupConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AISwitchDecisionGroupConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AISWITCHDECISIONGROUPCONFIG_METHOD_4_A1490A35DCAFE8EA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D1F5B122C5EE6849(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AISwitchDecisionGroupConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AISwitchDecisionGroupConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AISWITCHDECISIONGROUPCONFIG_METHOD_4_D1F5B122C5EE6849_OFFSET))(a1, a2);
		}
	};
}
