#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StateTreeStateBaseConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class STTaskConfig; }
namespace RPG::GameCore { class StateTreeSelectStateConfig; }
namespace RPG::GameCore { class StateTreeTransitionConfig; }

#define RPG_GAMECORE_STATETREESTATECONFIG_METHOD_3_06851D487CADA37E_OFFSET UNITYSDK_OFFSET(0x1D56A460)
#define RPG_GAMECORE_STATETREESTATECONFIG_METHOD_3_FE5B10BEB467818F_OFFSET UNITYSDK_OFFSET(0x1D569F40)
#define RPG_GAMECORE_STATETREESTATECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D569F30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StateTreeStateConfig_TypeDefinitionIndex = 15326;

	class StateTreeStateConfig : public ::RPG::GameCore::StateTreeStateBaseConfig
	{
	public:
		::RPG::GameCore::StateTreeSelectStateConfig* SelectState; // 0x18
		::RPG::GameCore::PredicateConfig* EnterCondition; // 0x20
		::Il2CppArray<::RPG::GameCore::STTaskConfig*>* TaskList; // 0x28
		::Il2CppArray<::RPG::GameCore::StateTreeTransitionConfig*>* TransitionList; // 0x30
		::Il2CppArray<::RPG::GameCore::StateTreeStateBaseConfig*>* SubStateList; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATETREESTATECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_06851D487CADA37E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StateTreeStateConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StateTreeStateConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATETREESTATECONFIG_METHOD_3_06851D487CADA37E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FE5B10BEB467818F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StateTreeStateConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StateTreeStateConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATETREESTATECONFIG_METHOD_3_FE5B10BEB467818F_OFFSET))(a1, a2);
		}
	};
}
