#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_4_3701B6A121A72CD0_8;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4F91AE3B00DB7EFF_32_EVALUATE_OFFSET UNITYSDK_OFFSET(0x98490F0)
#define CLASS_3_4F91AE3B00DB7EFF_32__CTOR_OFFSET UNITYSDK_OFFSET(0x98490C0)

inline static constexpr unsigned int Class_3_4F91AE3B00DB7EFF_32_TypeDefinitionIndex = 49953;

class Class_3_4F91AE3B00DB7EFF_32 : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_3701B6A121A72CD0_8*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_3701B6A121A72CD0_8* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_3701B6A121A72CD0_8*))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_32__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_32_EVALUATE_OFFSET))(this);
	}
};
