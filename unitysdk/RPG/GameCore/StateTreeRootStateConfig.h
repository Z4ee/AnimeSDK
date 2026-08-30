#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class STTaskConfig; }
namespace RPG::GameCore { class StateTreeStateBaseConfig; }
namespace RPG::GameCore { class StateTreeTransitionConfig; }
namespace System { class String; }

#define RPG_GAMECORE_STATETREEROOTSTATECONFIG_METHOD_2_F244A5BA81D036A1_OFFSET UNITYSDK_OFFSET(0x1D569A70)
#define RPG_GAMECORE_STATETREEROOTSTATECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D569C50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StateTreeRootStateConfig_TypeDefinitionIndex = 15323;

	class StateTreeRootStateConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Name; // 0x10
		::Il2CppArray<::RPG::GameCore::STTaskConfig*>* TaskList; // 0x18
		::Il2CppArray<::RPG::GameCore::StateTreeTransitionConfig*>* TransitionList; // 0x20
		::Il2CppArray<::RPG::GameCore::StateTreeStateBaseConfig*>* SubStateList; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATETREEROOTSTATECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_F244A5BA81D036A1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StateTreeRootStateConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StateTreeRootStateConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATETREEROOTSTATECONFIG_METHOD_2_F244A5BA81D036A1_OFFSET))(a1, a2);
		}
	};
}
