#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_4_455C7EBC1BF713C6;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4F91AE3B00DB7EFF_12_EVALUATE_OFFSET UNITYSDK_OFFSET(0xAA51570)
#define CLASS_3_4F91AE3B00DB7EFF_12__CTOR_OFFSET UNITYSDK_OFFSET(0xAA51540)

inline static constexpr unsigned int Class_3_4F91AE3B00DB7EFF_12_TypeDefinitionIndex = 49620;

class Class_3_4F91AE3B00DB7EFF_12 : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_455C7EBC1BF713C6*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_455C7EBC1BF713C6* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_455C7EBC1BF713C6*))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_12__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_12_EVALUATE_OFFSET))(this);
	}
};
