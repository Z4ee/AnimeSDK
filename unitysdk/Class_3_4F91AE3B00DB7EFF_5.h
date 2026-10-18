#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_4_A98F0D4F1FD3451C_3;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4F91AE3B00DB7EFF_5_EVALUATE_OFFSET UNITYSDK_OFFSET(0xE51B5B0)
#define CLASS_3_4F91AE3B00DB7EFF_5__CTOR_OFFSET UNITYSDK_OFFSET(0xE51B580)

inline static constexpr unsigned int Class_3_4F91AE3B00DB7EFF_5_TypeDefinitionIndex = 52605;

class Class_3_4F91AE3B00DB7EFF_5 : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_A98F0D4F1FD3451C_3*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_A98F0D4F1FD3451C_3* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_A98F0D4F1FD3451C_3*))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_5_EVALUATE_OFFSET))(this);
	}
};
