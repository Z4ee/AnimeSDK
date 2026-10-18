#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_4_0574869B1174019D;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4F91AE3B00DB7EFF_3_EVALUATE_OFFSET UNITYSDK_OFFSET(0xCC90DD0)
#define CLASS_3_4F91AE3B00DB7EFF_3__CTOR_OFFSET UNITYSDK_OFFSET(0xCC90DA0)

inline static constexpr unsigned int Class_3_4F91AE3B00DB7EFF_3_TypeDefinitionIndex = 52553;

class Class_3_4F91AE3B00DB7EFF_3 : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_0574869B1174019D*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_0574869B1174019D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_0574869B1174019D*))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_3_EVALUATE_OFFSET))(this);
	}
};
