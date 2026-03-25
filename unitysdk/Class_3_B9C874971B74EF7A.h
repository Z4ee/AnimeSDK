#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByComparePropFastDeliverCheckSimplifiedMode; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_B9C874971B74EF7A_EVALUATE_OFFSET UNITYSDK_OFFSET(0x10CAED30)
#define CLASS_3_B9C874971B74EF7A__CTOR_OFFSET UNITYSDK_OFFSET(0x10CAED00)

inline static constexpr unsigned int Class_3_B9C874971B74EF7A_TypeDefinitionIndex = 42590;

class Class_3_B9C874971B74EF7A : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByComparePropFastDeliverCheckSimplifiedMode*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByComparePropFastDeliverCheckSimplifiedMode* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByComparePropFastDeliverCheckSimplifiedMode*))((::PBYTE)hIl2Cpp + CLASS_3_B9C874971B74EF7A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B9C874971B74EF7A_EVALUATE_OFFSET))(this);
	}
};
