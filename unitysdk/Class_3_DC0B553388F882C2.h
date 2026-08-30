#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareFloorSavedValue; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_DC0B553388F882C2_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1309D150)
#define CLASS_3_DC0B553388F882C2__CTOR_OFFSET UNITYSDK_OFFSET(0x1309D120)

inline static constexpr unsigned int Class_3_DC0B553388F882C2_TypeDefinitionIndex = 52836;

class Class_3_DC0B553388F882C2 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareFloorSavedValue*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareFloorSavedValue* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareFloorSavedValue*))((::PBYTE)hIl2Cpp + CLASS_3_DC0B553388F882C2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DC0B553388F882C2_EVALUATE_OFFSET))(this);
	}
};
