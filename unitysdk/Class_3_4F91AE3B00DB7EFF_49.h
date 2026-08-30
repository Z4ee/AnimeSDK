#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_4_289799916215ACDF;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4F91AE3B00DB7EFF_49_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15978700)
#define CLASS_3_4F91AE3B00DB7EFF_49__CTOR_OFFSET UNITYSDK_OFFSET(0x159786D0)

inline static constexpr unsigned int Class_3_4F91AE3B00DB7EFF_49_TypeDefinitionIndex = 55115;

class Class_3_4F91AE3B00DB7EFF_49 : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_289799916215ACDF*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_289799916215ACDF* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_289799916215ACDF*))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_49__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_49_EVALUATE_OFFSET))(this);
	}
};
