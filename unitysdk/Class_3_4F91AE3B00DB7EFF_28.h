#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_4_A98F0D4F1FD3451C_14;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4F91AE3B00DB7EFF_28_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBC07100)
#define CLASS_3_4F91AE3B00DB7EFF_28__CTOR_OFFSET UNITYSDK_OFFSET(0xBC070D0)

inline static constexpr unsigned int Class_3_4F91AE3B00DB7EFF_28_TypeDefinitionIndex = 53885;

class Class_3_4F91AE3B00DB7EFF_28 : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_A98F0D4F1FD3451C_14*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_A98F0D4F1FD3451C_14* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_A98F0D4F1FD3451C_14*))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_28__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_28_EVALUATE_OFFSET))(this);
	}
};
