#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class RA_ByCompareVariableFloat; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_D837128C8ED1869A_EVALUATE_OFFSET UNITYSDK_OFFSET(0x113A1B30)
#define CLASS_3_D837128C8ED1869A__CTOR_OFFSET UNITYSDK_OFFSET(0x113A1B00)

inline static constexpr unsigned int Class_3_D837128C8ED1869A_TypeDefinitionIndex = 42117;

class Class_3_D837128C8ED1869A : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::RA_ByCompareVariableFloat*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RA_ByCompareVariableFloat* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RA_ByCompareVariableFloat*))((::PBYTE)hIl2Cpp + CLASS_3_D837128C8ED1869A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D837128C8ED1869A_EVALUATE_OFFSET))(this);
	}
};
