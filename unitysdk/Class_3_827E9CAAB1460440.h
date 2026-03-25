#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByInTimelinePerform; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_827E9CAAB1460440_EVALUATE_OFFSET UNITYSDK_OFFSET(0x8CEEB20)
#define CLASS_3_827E9CAAB1460440__CTOR_OFFSET UNITYSDK_OFFSET(0x8CEEAF0)

inline static constexpr unsigned int Class_3_827E9CAAB1460440_TypeDefinitionIndex = 43707;

class Class_3_827E9CAAB1460440 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByInTimelinePerform*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByInTimelinePerform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByInTimelinePerform*))((::PBYTE)hIl2Cpp + CLASS_3_827E9CAAB1460440__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_827E9CAAB1460440_EVALUATE_OFFSET))(this);
	}
};
