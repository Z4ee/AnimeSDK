#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_4_6C451618FA553762_2;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4F91AE3B00DB7EFF_1_EVALUATE_OFFSET UNITYSDK_OFFSET(0xDE4CBC0)
#define CLASS_3_4F91AE3B00DB7EFF_1__CTOR_OFFSET UNITYSDK_OFFSET(0xDE4CB90)

inline static constexpr unsigned int Class_3_4F91AE3B00DB7EFF_1_TypeDefinitionIndex = 49145;

class Class_3_4F91AE3B00DB7EFF_1 : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_6C451618FA553762_2*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_6C451618FA553762_2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_6C451618FA553762_2*))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_1_EVALUATE_OFFSET))(this);
	}
};
