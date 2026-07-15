#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ST_ByDistToGuardPosition; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_042A0F143814F5C1_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1762F330)
#define CLASS_3_042A0F143814F5C1__CTOR_OFFSET UNITYSDK_OFFSET(0x1762F210)

inline static constexpr unsigned int Class_3_042A0F143814F5C1_TypeDefinitionIndex = 49812;

class Class_3_042A0F143814F5C1 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ST_ByDistToGuardPosition*>
{
public:
	::System::Single Field_3_0; // 0x28
	::System::Single Field_3_1; // 0x2C

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_ByDistToGuardPosition* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_ByDistToGuardPosition*))((::PBYTE)hIl2Cpp + CLASS_3_042A0F143814F5C1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_042A0F143814F5C1_EVALUATE_OFFSET))(this);
	}
};
