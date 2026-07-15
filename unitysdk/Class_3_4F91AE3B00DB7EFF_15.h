#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_4_472E12A36DB951F3;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4F91AE3B00DB7EFF_15_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1865FE90)
#define CLASS_3_4F91AE3B00DB7EFF_15__CTOR_OFFSET UNITYSDK_OFFSET(0x1865FE60)

inline static constexpr unsigned int Class_3_4F91AE3B00DB7EFF_15_TypeDefinitionIndex = 51174;

class Class_3_4F91AE3B00DB7EFF_15 : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_472E12A36DB951F3*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_472E12A36DB951F3* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_472E12A36DB951F3*))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_15__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_15_EVALUATE_OFFSET))(this);
	}
};
