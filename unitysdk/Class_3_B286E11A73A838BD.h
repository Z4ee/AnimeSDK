#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByTargetIsStanceWeakForCurrentHit; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_B286E11A73A838BD_EVALUATE_OFFSET UNITYSDK_OFFSET(0xAF02E70)
#define CLASS_3_B286E11A73A838BD__CTOR_OFFSET UNITYSDK_OFFSET(0xAF02E40)

inline static constexpr unsigned int Class_3_B286E11A73A838BD_TypeDefinitionIndex = 51153;

class Class_3_B286E11A73A838BD : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByTargetIsStanceWeakForCurrentHit*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByTargetIsStanceWeakForCurrentHit* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByTargetIsStanceWeakForCurrentHit*))((::PBYTE)hIl2Cpp + CLASS_3_B286E11A73A838BD__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B286E11A73A838BD_EVALUATE_OFFSET))(this);
	}
};
