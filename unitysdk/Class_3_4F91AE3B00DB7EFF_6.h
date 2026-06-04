#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_4_6C451618FA553762_5;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4F91AE3B00DB7EFF_6_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1428C6C0)
#define CLASS_3_4F91AE3B00DB7EFF_6__CTOR_OFFSET UNITYSDK_OFFSET(0x1428C690)

inline static constexpr unsigned int Class_3_4F91AE3B00DB7EFF_6_TypeDefinitionIndex = 49263;

class Class_3_4F91AE3B00DB7EFF_6 : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_6C451618FA553762_5*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_6C451618FA553762_5* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_6C451618FA553762_5*))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_6_EVALUATE_OFFSET))(this);
	}
};
