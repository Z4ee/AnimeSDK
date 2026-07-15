#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_4_A98F0D4F1FD3451C_11;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4F91AE3B00DB7EFF_17_EVALUATE_OFFSET UNITYSDK_OFFSET(0x179A4B70)
#define CLASS_3_4F91AE3B00DB7EFF_17__CTOR_OFFSET UNITYSDK_OFFSET(0x179A4B40)

inline static constexpr unsigned int Class_3_4F91AE3B00DB7EFF_17_TypeDefinitionIndex = 51353;

class Class_3_4F91AE3B00DB7EFF_17 : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_A98F0D4F1FD3451C_11*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_A98F0D4F1FD3451C_11* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_A98F0D4F1FD3451C_11*))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_17__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_17_EVALUATE_OFFSET))(this);
	}
};
