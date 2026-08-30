#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class AdvByFastDeliverHasMultiRoute; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_D152F4C5AC519BBB_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1887CB20)
#define CLASS_3_D152F4C5AC519BBB__CTOR_OFFSET UNITYSDK_OFFSET(0x1887CAF0)

inline static constexpr unsigned int Class_3_D152F4C5AC519BBB_TypeDefinitionIndex = 53372;

class Class_3_D152F4C5AC519BBB : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::AdvByFastDeliverHasMultiRoute*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvByFastDeliverHasMultiRoute* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvByFastDeliverHasMultiRoute*))((::PBYTE)hIl2Cpp + CLASS_3_D152F4C5AC519BBB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D152F4C5AC519BBB_EVALUATE_OFFSET))(this);
	}
};
