#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class AdventureByIsNPCControlled; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_5CCB27E158B49178_EVALUATE_OFFSET UNITYSDK_OFFSET(0x17654380)
#define CLASS_3_5CCB27E158B49178__CTOR_OFFSET UNITYSDK_OFFSET(0x17654350)

inline static constexpr unsigned int Class_3_5CCB27E158B49178_TypeDefinitionIndex = 51996;

class Class_3_5CCB27E158B49178 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::AdventureByIsNPCControlled*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureByIsNPCControlled* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureByIsNPCControlled*))((::PBYTE)hIl2Cpp + CLASS_3_5CCB27E158B49178__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5CCB27E158B49178_EVALUATE_OFFSET))(this);
	}
};
