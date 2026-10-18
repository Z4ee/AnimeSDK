#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_4_0EB17C6B86E340AC;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4F91AE3B00DB7EFF_13_EVALUATE_OFFSET UNITYSDK_OFFSET(0x16502780)
#define CLASS_3_4F91AE3B00DB7EFF_13__CTOR_OFFSET UNITYSDK_OFFSET(0x16502750)

inline static constexpr unsigned int Class_3_4F91AE3B00DB7EFF_13_TypeDefinitionIndex = 53017;

class Class_3_4F91AE3B00DB7EFF_13 : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_0EB17C6B86E340AC*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_0EB17C6B86E340AC* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_0EB17C6B86E340AC*))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_13__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_13_EVALUATE_OFFSET))(this);
	}
};
