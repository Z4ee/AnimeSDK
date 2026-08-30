#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class AdvByCompareInvasionLevel; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_860F80D784141BA7_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB7CDED0)
#define CLASS_3_860F80D784141BA7__CTOR_OFFSET UNITYSDK_OFFSET(0xB7CDEA0)

inline static constexpr unsigned int Class_3_860F80D784141BA7_TypeDefinitionIndex = 54665;

class Class_3_860F80D784141BA7 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::AdvByCompareInvasionLevel*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvByCompareInvasionLevel* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvByCompareInvasionLevel*))((::PBYTE)hIl2Cpp + CLASS_3_860F80D784141BA7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_860F80D784141BA7_EVALUATE_OFFSET))(this);
	}
};
