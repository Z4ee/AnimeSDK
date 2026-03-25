#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByComparePropAnimState; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_C8AADD9C5774454E_EVALUATE_OFFSET UNITYSDK_OFFSET(0x89F1B60)
#define CLASS_3_C8AADD9C5774454E__CTOR_OFFSET UNITYSDK_OFFSET(0x89F1B30)

inline static constexpr unsigned int Class_3_C8AADD9C5774454E_TypeDefinitionIndex = 42589;

class Class_3_C8AADD9C5774454E : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByComparePropAnimState*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByComparePropAnimState* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByComparePropAnimState*))((::PBYTE)hIl2Cpp + CLASS_3_C8AADD9C5774454E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C8AADD9C5774454E_EVALUATE_OFFSET))(this);
	}
};
