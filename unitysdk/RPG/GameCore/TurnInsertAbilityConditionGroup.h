#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LogicOperation.h"
#include "unitysdk/RPG/GameCore/TurnInsertAbilityConditionBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TurnInsertAbilityCondition; }

#define RPG_GAMECORE_TURNINSERTABILITYCONDITIONGROUP_METHOD_3_B0736C7AC55E0F5E_OFFSET UNITYSDK_OFFSET(0x1D6106E0)
#define RPG_GAMECORE_TURNINSERTABILITYCONDITIONGROUP_METHOD_3_D4253C52C3A5DD89_OFFSET UNITYSDK_OFFSET(0x1D610590)
#define RPG_GAMECORE_TURNINSERTABILITYCONDITIONGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1D610580)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TurnInsertAbilityConditionGroup_TypeDefinitionIndex = 18035;

	class TurnInsertAbilityConditionGroup : public ::RPG::GameCore::TurnInsertAbilityConditionBase
	{
	public:
		::RPG::GameCore::LogicOperation GroupOperation; // 0x10
		::Il2CppArray<::RPG::GameCore::TurnInsertAbilityCondition*>* Conditions; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNINSERTABILITYCONDITIONGROUP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B0736C7AC55E0F5E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TurnInsertAbilityConditionGroup*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TurnInsertAbilityConditionGroup*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNINSERTABILITYCONDITIONGROUP_METHOD_3_B0736C7AC55E0F5E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D4253C52C3A5DD89(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TurnInsertAbilityConditionGroup* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TurnInsertAbilityConditionGroup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNINSERTABILITYCONDITIONGROUP_METHOD_3_D4253C52C3A5DD89_OFFSET))(a1, a2);
		}
	};
}
