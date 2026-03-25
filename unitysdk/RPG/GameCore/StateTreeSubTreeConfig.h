#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_InitVariableType.h"
#include "unitysdk/RPG/GameCore/StateTreeStateBaseConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AIVariable; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class StateTreeSelectStateConfig; }
namespace RPG::GameCore { class StateTreeTransitionConfig; }
namespace System { class String; }

#define RPG_GAMECORE_STATETREESUBTREECONFIG_METHOD_3_EA95AEB40848E6BE_OFFSET UNITYSDK_OFFSET(0x17777AB0)
#define RPG_GAMECORE_STATETREESUBTREECONFIG_METHOD_3_F1C930C75F6F573B_OFFSET UNITYSDK_OFFSET(0x17777DE0)
#define RPG_GAMECORE_STATETREESUBTREECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17777AA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StateTreeSubTreeConfig_TypeDefinitionIndex = 14197;

	class StateTreeSubTreeConfig : public ::RPG::GameCore::StateTreeStateBaseConfig
	{
	public:
		::RPG::GameCore::StateTreeSelectStateConfig* SelectState; // 0x18
		::RPG::GameCore::PredicateConfig* EnterCondition; // 0x20
		::Il2CppArray<::RPG::GameCore::StateTreeTransitionConfig*>* TransitionList; // 0x28
		::System::String* FilePath; // 0x30
		::RPG::GameCore::ST_InitVariableType InitVariableType; // 0x38
		::Il2CppArray<::RPG::GameCore::AIVariable*>* OverrideVariableList; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATETREESUBTREECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F1C930C75F6F573B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StateTreeSubTreeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StateTreeSubTreeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATETREESUBTREECONFIG_METHOD_3_F1C930C75F6F573B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EA95AEB40848E6BE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StateTreeSubTreeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StateTreeSubTreeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATETREESUBTREECONFIG_METHOD_3_EA95AEB40848E6BE_OFFSET))(a1, a2);
		}
	};
}
