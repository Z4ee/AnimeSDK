#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StateTreeStateBaseConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class StateTreeTransitionConfig; }

#define RPG_GAMECORE_STATETREEREACTIONSTATECONFIG_METHOD_3_18D3CE8F5F719A0D_OFFSET UNITYSDK_OFFSET(0x1D5698D0)
#define RPG_GAMECORE_STATETREEREACTIONSTATECONFIG_METHOD_3_47593994CF1E2F02_OFFSET UNITYSDK_OFFSET(0x1D569910)
#define RPG_GAMECORE_STATETREEREACTIONSTATECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D569900)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StateTreeReactionStateConfig_TypeDefinitionIndex = 15329;

	class StateTreeReactionStateConfig : public ::RPG::GameCore::StateTreeStateBaseConfig
	{
	public:
		::RPG::GameCore::PredicateConfig* EnterCondition; // 0x18
		::Il2CppArray<::RPG::GameCore::StateTreeTransitionConfig*>* TransitionList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATETREEREACTIONSTATECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_18D3CE8F5F719A0D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StateTreeReactionStateConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StateTreeReactionStateConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATETREEREACTIONSTATECONFIG_METHOD_3_18D3CE8F5F719A0D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_47593994CF1E2F02(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StateTreeReactionStateConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StateTreeReactionStateConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATETREEREACTIONSTATECONFIG_METHOD_3_47593994CF1E2F02_OFFSET))(a1, a2);
		}
	};
}
