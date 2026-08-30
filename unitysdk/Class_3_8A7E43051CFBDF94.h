#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class AdventureByMotionHitColliderWall; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_8A7E43051CFBDF94_EVALUATE_OFFSET UNITYSDK_OFFSET(0x155E2670)
#define CLASS_3_8A7E43051CFBDF94__CTOR_OFFSET UNITYSDK_OFFSET(0x155E2640)

inline static constexpr unsigned int Class_3_8A7E43051CFBDF94_TypeDefinitionIndex = 54685;

class Class_3_8A7E43051CFBDF94 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::AdventureByMotionHitColliderWall*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureByMotionHitColliderWall* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureByMotionHitColliderWall*))((::PBYTE)hIl2Cpp + CLASS_3_8A7E43051CFBDF94__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8A7E43051CFBDF94_EVALUATE_OFFSET))(this);
	}
};
