#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class RtByHasTargetInAlertRange; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_5FC36581A39BB5D0_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1A02A530)
#define CLASS_3_5FC36581A39BB5D0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A02A500)

inline static constexpr unsigned int Class_3_5FC36581A39BB5D0_TypeDefinitionIndex = 54136;

class Class_3_5FC36581A39BB5D0 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::RtByHasTargetInAlertRange*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RtByHasTargetInAlertRange* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RtByHasTargetInAlertRange*))((::PBYTE)hIl2Cpp + CLASS_3_5FC36581A39BB5D0__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5FC36581A39BB5D0_EVALUATE_OFFSET))(this);
	}
};
