#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareCarryMazebuff; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_CBCC3EE5E9CF638B_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1536EFD0)
#define CLASS_3_CBCC3EE5E9CF638B__CTOR_OFFSET UNITYSDK_OFFSET(0x1536EFA0)

inline static constexpr unsigned int Class_3_CBCC3EE5E9CF638B_TypeDefinitionIndex = 54729;

class Class_3_CBCC3EE5E9CF638B : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareCarryMazebuff*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareCarryMazebuff* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareCarryMazebuff*))((::PBYTE)hIl2Cpp + CLASS_3_CBCC3EE5E9CF638B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CBCC3EE5E9CF638B_EVALUATE_OFFSET))(this);
	}
};
