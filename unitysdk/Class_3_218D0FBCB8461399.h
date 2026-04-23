#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareRotatableRegionLoadingState; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_218D0FBCB8461399_EVALUATE_OFFSET UNITYSDK_OFFSET(0x11B895D0)
#define CLASS_3_218D0FBCB8461399__CTOR_OFFSET UNITYSDK_OFFSET(0x11B895A0)

inline static constexpr unsigned int Class_3_218D0FBCB8461399_TypeDefinitionIndex = 48872;

class Class_3_218D0FBCB8461399 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareRotatableRegionLoadingState*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareRotatableRegionLoadingState* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareRotatableRegionLoadingState*))((::PBYTE)hIl2Cpp + CLASS_3_218D0FBCB8461399__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_218D0FBCB8461399_EVALUATE_OFFSET))(this);
	}
};
