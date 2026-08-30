#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByUsedFiveDimHoldDash; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_54D70F17BE27EE0E_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15B04720)
#define CLASS_3_54D70F17BE27EE0E__CTOR_OFFSET UNITYSDK_OFFSET(0x15B046F0)

inline static constexpr unsigned int Class_3_54D70F17BE27EE0E_TypeDefinitionIndex = 53098;

class Class_3_54D70F17BE27EE0E : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByUsedFiveDimHoldDash*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByUsedFiveDimHoldDash* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByUsedFiveDimHoldDash*))((::PBYTE)hIl2Cpp + CLASS_3_54D70F17BE27EE0E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_54D70F17BE27EE0E_EVALUATE_OFFSET))(this);
	}
};
