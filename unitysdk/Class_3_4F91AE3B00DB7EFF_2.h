#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_4_AB1BEE9CD990C4C1;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4F91AE3B00DB7EFF_2_EVALUATE_OFFSET UNITYSDK_OFFSET(0x87FCBD0)
#define CLASS_3_4F91AE3B00DB7EFF_2__CTOR_OFFSET UNITYSDK_OFFSET(0x87FCBA0)

inline static constexpr unsigned int Class_3_4F91AE3B00DB7EFF_2_TypeDefinitionIndex = 43577;

class Class_3_4F91AE3B00DB7EFF_2 : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_AB1BEE9CD990C4C1*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_AB1BEE9CD990C4C1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_AB1BEE9CD990C4C1*))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_2_EVALUATE_OFFSET))(this);
	}
};
