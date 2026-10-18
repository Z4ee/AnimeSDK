#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_4_C2B07AE0C1DDDAA6_1;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4F91AE3B00DB7EFF_46_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15CE42F0)
#define CLASS_3_4F91AE3B00DB7EFF_46__CTOR_OFFSET UNITYSDK_OFFSET(0x15CE42C0)

inline static constexpr unsigned int Class_3_4F91AE3B00DB7EFF_46_TypeDefinitionIndex = 54661;

class Class_3_4F91AE3B00DB7EFF_46 : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_C2B07AE0C1DDDAA6_1*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_C2B07AE0C1DDDAA6_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_C2B07AE0C1DDDAA6_1*))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_46__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_46_EVALUATE_OFFSET))(this);
	}
};
