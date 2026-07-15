#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_4_CDB72451CBF92DF2;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4F91AE3B00DB7EFF_32_EVALUATE_OFFSET UNITYSDK_OFFSET(0x157D6E30)
#define CLASS_3_4F91AE3B00DB7EFF_32__CTOR_OFFSET UNITYSDK_OFFSET(0x157D6E00)

inline static constexpr unsigned int Class_3_4F91AE3B00DB7EFF_32_TypeDefinitionIndex = 51449;

class Class_3_4F91AE3B00DB7EFF_32 : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_CDB72451CBF92DF2*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_CDB72451CBF92DF2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_CDB72451CBF92DF2*))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_32__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_32_EVALUATE_OFFSET))(this);
	}
};
