#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_1_E3A8B05AA1BBEE81;
namespace RPG::GameCore { class ByCompareUnusedInsertAbilityCount; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { template <typename T> class Action_1; }

#define CLASS_3_44326CDD16E49556_EVALUATE_OFFSET UNITYSDK_OFFSET(0xD7BBE80)
#define CLASS_3_44326CDD16E49556_METHOD_3_A043BA529334F3E6_OFFSET UNITYSDK_OFFSET(0xD7BBDC0)
#define CLASS_3_44326CDD16E49556__CTOR_OFFSET UNITYSDK_OFFSET(0xD7BBD40)

inline static constexpr unsigned int Class_3_44326CDD16E49556_TypeDefinitionIndex = 43664;

class Class_3_44326CDD16E49556 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareUnusedInsertAbilityCount*>
{
public:
	::System::Action_1<::Class_1_E3A8B05AA1BBEE81*>* Field_3_2; // 0x28
	::RPG::GameCore::GameEntity* Field_3_1; // 0x30
	::System::Int32 Field_3_0; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareUnusedInsertAbilityCount* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareUnusedInsertAbilityCount*))((::PBYTE)hIl2Cpp + CLASS_3_44326CDD16E49556__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_A043BA529334F3E6(::Class_1_E3A8B05AA1BBEE81* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E3A8B05AA1BBEE81*))((::PBYTE)hIl2Cpp + CLASS_3_44326CDD16E49556_METHOD_3_A043BA529334F3E6_OFFSET))(this, a1);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_44326CDD16E49556_EVALUATE_OFFSET))(this);
	}
};
