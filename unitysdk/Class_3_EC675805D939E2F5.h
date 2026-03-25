#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByIsActivityInSchedule; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_EC675805D939E2F5_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1069B110)
#define CLASS_3_EC675805D939E2F5__CTOR_OFFSET UNITYSDK_OFFSET(0x1069B0E0)

inline static constexpr unsigned int Class_3_EC675805D939E2F5_TypeDefinitionIndex = 42604;

class Class_3_EC675805D939E2F5 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByIsActivityInSchedule*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsActivityInSchedule* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsActivityInSchedule*))((::PBYTE)hIl2Cpp + CLASS_3_EC675805D939E2F5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EC675805D939E2F5_EVALUATE_OFFSET))(this);
	}
};
