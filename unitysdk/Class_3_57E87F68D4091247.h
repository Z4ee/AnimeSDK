#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByIsCurrentModifierAlive; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_57E87F68D4091247_EVALUATE_OFFSET UNITYSDK_OFFSET(0x18469600)
#define CLASS_3_57E87F68D4091247__CTOR_OFFSET UNITYSDK_OFFSET(0x184695D0)

inline static constexpr unsigned int Class_3_57E87F68D4091247_TypeDefinitionIndex = 52171;

class Class_3_57E87F68D4091247 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByIsCurrentModifierAlive*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsCurrentModifierAlive* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsCurrentModifierAlive*))((::PBYTE)hIl2Cpp + CLASS_3_57E87F68D4091247__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_57E87F68D4091247_EVALUATE_OFFSET))(this);
	}
};
