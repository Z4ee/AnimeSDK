#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByComparePerformanceResult; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_642E033789E7307A_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1761A450)
#define CLASS_3_642E033789E7307A__CTOR_OFFSET UNITYSDK_OFFSET(0x1761A420)

inline static constexpr unsigned int Class_3_642E033789E7307A_TypeDefinitionIndex = 50193;

class Class_3_642E033789E7307A : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByComparePerformanceResult*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByComparePerformanceResult* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByComparePerformanceResult*))((::PBYTE)hIl2Cpp + CLASS_3_642E033789E7307A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_642E033789E7307A_EVALUATE_OFFSET))(this);
	}
};
