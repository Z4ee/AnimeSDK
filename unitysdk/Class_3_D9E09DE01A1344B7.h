#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByIsProjectileHitTarget; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_D9E09DE01A1344B7_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBA7EE40)
#define CLASS_3_D9E09DE01A1344B7__CTOR_OFFSET UNITYSDK_OFFSET(0xBA7EE10)

inline static constexpr unsigned int Class_3_D9E09DE01A1344B7_TypeDefinitionIndex = 54889;

class Class_3_D9E09DE01A1344B7 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByIsProjectileHitTarget*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsProjectileHitTarget* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsProjectileHitTarget*))((::PBYTE)hIl2Cpp + CLASS_3_D9E09DE01A1344B7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D9E09DE01A1344B7_EVALUATE_OFFSET))(this);
	}
};
