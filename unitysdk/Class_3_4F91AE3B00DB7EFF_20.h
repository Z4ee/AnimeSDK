#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_4_6C451618FA553762_12;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4F91AE3B00DB7EFF_20_EVALUATE_OFFSET UNITYSDK_OFFSET(0xA9DCBD0)
#define CLASS_3_4F91AE3B00DB7EFF_20__CTOR_OFFSET UNITYSDK_OFFSET(0xA9DCBA0)

inline static constexpr unsigned int Class_3_4F91AE3B00DB7EFF_20_TypeDefinitionIndex = 50333;

class Class_3_4F91AE3B00DB7EFF_20 : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_6C451618FA553762_12*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_6C451618FA553762_12* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_6C451618FA553762_12*))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_20__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_20_EVALUATE_OFFSET))(this);
	}
};
