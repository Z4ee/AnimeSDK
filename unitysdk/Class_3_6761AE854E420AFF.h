#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByIsSubTargetOfHpSharedGroup; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_6761AE854E420AFF_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1381C8F0)
#define CLASS_3_6761AE854E420AFF__CTOR_OFFSET UNITYSDK_OFFSET(0x1381C8C0)

inline static constexpr unsigned int Class_3_6761AE854E420AFF_TypeDefinitionIndex = 51122;

class Class_3_6761AE854E420AFF : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByIsSubTargetOfHpSharedGroup*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsSubTargetOfHpSharedGroup* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsSubTargetOfHpSharedGroup*))((::PBYTE)hIl2Cpp + CLASS_3_6761AE854E420AFF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6761AE854E420AFF_EVALUATE_OFFSET))(this);
	}
};
