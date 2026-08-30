#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_4_C458873EDD189557;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4F91AE3B00DB7EFF_13_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBAC0A70)
#define CLASS_3_4F91AE3B00DB7EFF_13__CTOR_OFFSET UNITYSDK_OFFSET(0xBAC0A40)

inline static constexpr unsigned int Class_3_4F91AE3B00DB7EFF_13_TypeDefinitionIndex = 53592;

class Class_3_4F91AE3B00DB7EFF_13 : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_C458873EDD189557*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_C458873EDD189557* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_C458873EDD189557*))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_13__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_13_EVALUATE_OFFSET))(this);
	}
};
