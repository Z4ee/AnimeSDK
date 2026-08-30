#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_4_A98F0D4F1FD3451C_6;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4F91AE3B00DB7EFF_53_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1605F8D0)
#define CLASS_3_4F91AE3B00DB7EFF_53__CTOR_OFFSET UNITYSDK_OFFSET(0x1605F8A0)

inline static constexpr unsigned int Class_3_4F91AE3B00DB7EFF_53_TypeDefinitionIndex = 55251;

class Class_3_4F91AE3B00DB7EFF_53 : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_A98F0D4F1FD3451C_6*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_A98F0D4F1FD3451C_6* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_A98F0D4F1FD3451C_6*))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_53__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_53_EVALUATE_OFFSET))(this);
	}
};
