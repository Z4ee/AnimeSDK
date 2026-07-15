#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByTargetIsStanceWeakForCurrentSkill; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_F25B507ACEAEBC3C_EVALUATE_OFFSET UNITYSDK_OFFSET(0x162F1720)
#define CLASS_3_F25B507ACEAEBC3C__CTOR_OFFSET UNITYSDK_OFFSET(0x162F16F0)

inline static constexpr unsigned int Class_3_F25B507ACEAEBC3C_TypeDefinitionIndex = 52245;

class Class_3_F25B507ACEAEBC3C : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByTargetIsStanceWeakForCurrentSkill*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByTargetIsStanceWeakForCurrentSkill* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByTargetIsStanceWeakForCurrentSkill*))((::PBYTE)hIl2Cpp + CLASS_3_F25B507ACEAEBC3C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F25B507ACEAEBC3C_EVALUATE_OFFSET))(this);
	}
};
