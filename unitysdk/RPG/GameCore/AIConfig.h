#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AIDecisionUnitConfig; }
namespace RPG::GameCore { class AITransitionTableRow; }
namespace RPG::GameCore { class AIVariable; }
namespace RPG::GameCore { class StateTreeRootStateConfig; }
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }

#define RPG_GAMECORE_AICONFIG_METHOD_2_ACBA5656CE4FCB11_OFFSET UNITYSDK_OFFSET(0x1CD648A0)
#define RPG_GAMECORE_AICONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD64B70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AIConfig_TypeDefinitionIndex = 15316;

	class AIConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* AIName; // 0x10
		::Il2CppArray<::RPG::GameCore::AIVariable*>* VariableList; // 0x18
		::Il2CppArray<::RPG::GameCore::AIVariable*>* GlobalVariableList; // 0x20
		::Il2CppArray<::RPG::GameCore::AIDecisionUnitConfig*>* DecisionList; // 0x28
		::Il2CppArray<::RPG::GameCore::AITransitionTableRow*>* TransitionTable; // 0x30
		::RPG::GameCore::StateTreeRootStateConfig* RootState; // 0x38
		::RPG::GameCore::TaskConfig* OnDisable; // 0x40
		::RPG::GameCore::TaskConfig* OnInit; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AICONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_ACBA5656CE4FCB11(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AIConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AIConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AICONFIG_METHOD_2_ACBA5656CE4FCB11_OFFSET))(a1, a2);
		}
	};
}
