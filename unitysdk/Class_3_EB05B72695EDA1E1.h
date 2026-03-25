#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByComparePerformance; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_EB05B72695EDA1E1_EVALUATE_OFFSET UNITYSDK_OFFSET(0x11436F20)
#define CLASS_3_EB05B72695EDA1E1__CTOR_OFFSET UNITYSDK_OFFSET(0x11436EF0)

inline static constexpr unsigned int Class_3_EB05B72695EDA1E1_TypeDefinitionIndex = 42587;

class Class_3_EB05B72695EDA1E1 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByComparePerformance*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByComparePerformance* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByComparePerformance*))((::PBYTE)hIl2Cpp + CLASS_3_EB05B72695EDA1E1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EB05B72695EDA1E1_EVALUATE_OFFSET))(this);
	}
};
