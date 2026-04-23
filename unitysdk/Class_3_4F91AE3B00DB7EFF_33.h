#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_4_AB1BEE9CD990C4C1;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4F91AE3B00DB7EFF_33_EVALUATE_OFFSET UNITYSDK_OFFSET(0xA553170)
#define CLASS_3_4F91AE3B00DB7EFF_33__CTOR_OFFSET UNITYSDK_OFFSET(0xA553140)

inline static constexpr unsigned int Class_3_4F91AE3B00DB7EFF_33_TypeDefinitionIndex = 50274;

class Class_3_4F91AE3B00DB7EFF_33 : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_AB1BEE9CD990C4C1*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_AB1BEE9CD990C4C1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_AB1BEE9CD990C4C1*))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_33__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_33_EVALUATE_OFFSET))(this);
	}
};
