#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByTimeRewindTargetMotionPause; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_9804541AE0B55C27_EVALUATE_OFFSET UNITYSDK_OFFSET(0x142F40F0)
#define CLASS_3_9804541AE0B55C27__CTOR_OFFSET UNITYSDK_OFFSET(0x142F40C0)

inline static constexpr unsigned int Class_3_9804541AE0B55C27_TypeDefinitionIndex = 49865;

class Class_3_9804541AE0B55C27 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByTimeRewindTargetMotionPause*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByTimeRewindTargetMotionPause* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByTimeRewindTargetMotionPause*))((::PBYTE)hIl2Cpp + CLASS_3_9804541AE0B55C27__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9804541AE0B55C27_EVALUATE_OFFSET))(this);
	}
};
