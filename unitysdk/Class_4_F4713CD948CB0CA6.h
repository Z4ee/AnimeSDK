#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_75DBBBC880985ABC.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class UniversalHotFixPredicateC; }

#define CLASS_4_F4713CD948CB0CA6_EVALUATE_OFFSET UNITYSDK_OFFSET(0x17EBFF80)
#define CLASS_4_F4713CD948CB0CA6__CTOR_OFFSET UNITYSDK_OFFSET(0x17EBFF00)

inline static constexpr unsigned int Class_4_F4713CD948CB0CA6_TypeDefinitionIndex = 55980;

class Class_4_F4713CD948CB0CA6 : public ::Class_3_75DBBBC880985ABC
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::UniversalHotFixPredicateC* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::UniversalHotFixPredicateC*))((::PBYTE)hIl2Cpp + CLASS_4_F4713CD948CB0CA6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_F4713CD948CB0CA6_EVALUATE_OFFSET))(this);
	}
};
