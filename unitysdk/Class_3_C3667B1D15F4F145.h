#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByContainOpInSkill; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_C3667B1D15F4F145_EVALUATE_OFFSET UNITYSDK_OFFSET(0x993CCA0)
#define CLASS_3_C3667B1D15F4F145__CTOR_OFFSET UNITYSDK_OFFSET(0x993CC70)

inline static constexpr unsigned int Class_3_C3667B1D15F4F145_TypeDefinitionIndex = 50369;

class Class_3_C3667B1D15F4F145 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByContainOpInSkill*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByContainOpInSkill* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByContainOpInSkill*))((::PBYTE)hIl2Cpp + CLASS_3_C3667B1D15F4F145__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C3667B1D15F4F145_EVALUATE_OFFSET))(this);
	}
};
