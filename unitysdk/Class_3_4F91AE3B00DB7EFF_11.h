#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_4_C458873EDD189557;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4F91AE3B00DB7EFF_11_EVALUATE_OFFSET UNITYSDK_OFFSET(0x17FA2900)
#define CLASS_3_4F91AE3B00DB7EFF_11__CTOR_OFFSET UNITYSDK_OFFSET(0x17FA28D0)

inline static constexpr unsigned int Class_3_4F91AE3B00DB7EFF_11_TypeDefinitionIndex = 50908;

class Class_3_4F91AE3B00DB7EFF_11 : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_C458873EDD189557*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_C458873EDD189557* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_C458873EDD189557*))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_11__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_11_EVALUATE_OFFSET))(this);
	}
};
