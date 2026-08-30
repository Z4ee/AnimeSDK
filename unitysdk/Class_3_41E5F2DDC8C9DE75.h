#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ST_ByDistanceToTarget; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_41E5F2DDC8C9DE75_EVALUATE_OFFSET UNITYSDK_OFFSET(0x159EBC10)
#define CLASS_3_41E5F2DDC8C9DE75__CTOR_OFFSET UNITYSDK_OFFSET(0x159EBBE0)

inline static constexpr unsigned int Class_3_41E5F2DDC8C9DE75_TypeDefinitionIndex = 52474;

class Class_3_41E5F2DDC8C9DE75 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ST_ByDistanceToTarget*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_ByDistanceToTarget* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_ByDistanceToTarget*))((::PBYTE)hIl2Cpp + CLASS_3_41E5F2DDC8C9DE75__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_41E5F2DDC8C9DE75_EVALUATE_OFFSET))(this);
	}
};
