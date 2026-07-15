#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_4_0EB17C6B86E340AC;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4F91AE3B00DB7EFF_10_EVALUATE_OFFSET UNITYSDK_OFFSET(0x174DAD20)
#define CLASS_3_4F91AE3B00DB7EFF_10__CTOR_OFFSET UNITYSDK_OFFSET(0x174DACF0)

inline static constexpr unsigned int Class_3_4F91AE3B00DB7EFF_10_TypeDefinitionIndex = 50610;

class Class_3_4F91AE3B00DB7EFF_10 : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_0EB17C6B86E340AC*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_0EB17C6B86E340AC* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_0EB17C6B86E340AC*))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_10__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_10_EVALUATE_OFFSET))(this);
	}
};
