#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareAIVariableInt; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_9E76EB5E7143D18E_EVALUATE_OFFSET UNITYSDK_OFFSET(0x160EC5B0)
#define CLASS_3_9E76EB5E7143D18E__CTOR_OFFSET UNITYSDK_OFFSET(0x160EC580)

inline static constexpr unsigned int Class_3_9E76EB5E7143D18E_TypeDefinitionIndex = 54722;

class Class_3_9E76EB5E7143D18E : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareAIVariableInt*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareAIVariableInt* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareAIVariableInt*))((::PBYTE)hIl2Cpp + CLASS_3_9E76EB5E7143D18E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9E76EB5E7143D18E_EVALUATE_OFFSET))(this);
	}
};
