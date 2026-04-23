#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCheckModifierCallBackBehaviorFlag; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_39296444C63528F7_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1285BFD0)
#define CLASS_3_39296444C63528F7__CTOR_OFFSET UNITYSDK_OFFSET(0x1285BFA0)

inline static constexpr unsigned int Class_3_39296444C63528F7_TypeDefinitionIndex = 50278;

class Class_3_39296444C63528F7 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCheckModifierCallBackBehaviorFlag*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCheckModifierCallBackBehaviorFlag* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCheckModifierCallBackBehaviorFlag*))((::PBYTE)hIl2Cpp + CLASS_3_39296444C63528F7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_39296444C63528F7_EVALUATE_OFFSET))(this);
	}
};
