#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ChessByContainBehaviorFlag; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_396871B5CE286330_EVALUATE_OFFSET UNITYSDK_OFFSET(0x8817680)
#define CLASS_3_396871B5CE286330__CTOR_OFFSET UNITYSDK_OFFSET(0x8817650)

inline static constexpr unsigned int Class_3_396871B5CE286330_TypeDefinitionIndex = 45200;

class Class_3_396871B5CE286330 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ChessByContainBehaviorFlag*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ChessByContainBehaviorFlag* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ChessByContainBehaviorFlag*))((::PBYTE)hIl2Cpp + CLASS_3_396871B5CE286330__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_396871B5CE286330_EVALUATE_OFFSET))(this);
	}
};
