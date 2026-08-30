#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByEntityOriginalEraConfig; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_E9E23287D8C253FE_EVALUATE_OFFSET UNITYSDK_OFFSET(0x16294A30)
#define CLASS_3_E9E23287D8C253FE__CTOR_OFFSET UNITYSDK_OFFSET(0x16294A00)

inline static constexpr unsigned int Class_3_E9E23287D8C253FE_TypeDefinitionIndex = 53029;

class Class_3_E9E23287D8C253FE : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByEntityOriginalEraConfig*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByEntityOriginalEraConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByEntityOriginalEraConfig*))((::PBYTE)hIl2Cpp + CLASS_3_E9E23287D8C253FE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E9E23287D8C253FE_EVALUATE_OFFSET))(this);
	}
};
