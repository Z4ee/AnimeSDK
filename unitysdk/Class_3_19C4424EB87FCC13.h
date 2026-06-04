#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCurrentContainAbilityTag; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_19C4424EB87FCC13_EVALUATE_OFFSET UNITYSDK_OFFSET(0xA8F85C0)
#define CLASS_3_19C4424EB87FCC13__CTOR_OFFSET UNITYSDK_OFFSET(0xA8F8590)

inline static constexpr unsigned int Class_3_19C4424EB87FCC13_TypeDefinitionIndex = 51037;

class Class_3_19C4424EB87FCC13 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCurrentContainAbilityTag*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCurrentContainAbilityTag* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCurrentContainAbilityTag*))((::PBYTE)hIl2Cpp + CLASS_3_19C4424EB87FCC13__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_19C4424EB87FCC13_EVALUATE_OFFSET))(this);
	}
};
