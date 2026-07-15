#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class AdventureByInMotionState; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_B2415758C31FFD12_EVALUATE_OFFSET UNITYSDK_OFFSET(0x17C81A70)
#define CLASS_3_B2415758C31FFD12__CTOR_OFFSET UNITYSDK_OFFSET(0x17C81A40)

inline static constexpr unsigned int Class_3_B2415758C31FFD12_TypeDefinitionIndex = 51990;

class Class_3_B2415758C31FFD12 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::AdventureByInMotionState*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureByInMotionState* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureByInMotionState*))((::PBYTE)hIl2Cpp + CLASS_3_B2415758C31FFD12__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B2415758C31FFD12_EVALUATE_OFFSET))(this);
	}
};
