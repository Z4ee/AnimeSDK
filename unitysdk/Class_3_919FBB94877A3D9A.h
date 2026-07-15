#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByTargetLockStance; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_919FBB94877A3D9A_EVALUATE_OFFSET UNITYSDK_OFFSET(0x14A15950)
#define CLASS_3_919FBB94877A3D9A__CTOR_OFFSET UNITYSDK_OFFSET(0x14A15920)

inline static constexpr unsigned int Class_3_919FBB94877A3D9A_TypeDefinitionIndex = 52653;

class Class_3_919FBB94877A3D9A : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByTargetLockStance*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByTargetLockStance* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByTargetLockStance*))((::PBYTE)hIl2Cpp + CLASS_3_919FBB94877A3D9A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_919FBB94877A3D9A_EVALUATE_OFFSET))(this);
	}
};
