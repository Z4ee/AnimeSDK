#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_4_A98F0D4F1FD3451C_1;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4F91AE3B00DB7EFF_1_EVALUATE_OFFSET UNITYSDK_OFFSET(0xE22DBB0)
#define CLASS_3_4F91AE3B00DB7EFF_1__CTOR_OFFSET UNITYSDK_OFFSET(0xE22DB80)

inline static constexpr unsigned int Class_3_4F91AE3B00DB7EFF_1_TypeDefinitionIndex = 52547;

class Class_3_4F91AE3B00DB7EFF_1 : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_A98F0D4F1FD3451C_1*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_A98F0D4F1FD3451C_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_A98F0D4F1FD3451C_1*))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_1_EVALUATE_OFFSET))(this);
	}
};
