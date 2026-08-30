#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_4_A98F0D4F1FD3451C_7;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4F91AE3B00DB7EFF_6_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1621B500)
#define CLASS_3_4F91AE3B00DB7EFF_6__CTOR_OFFSET UNITYSDK_OFFSET(0x1621B4D0)

inline static constexpr unsigned int Class_3_4F91AE3B00DB7EFF_6_TypeDefinitionIndex = 52941;

class Class_3_4F91AE3B00DB7EFF_6 : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_A98F0D4F1FD3451C_7*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_A98F0D4F1FD3451C_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_A98F0D4F1FD3451C_7*))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_6_EVALUATE_OFFSET))(this);
	}
};
