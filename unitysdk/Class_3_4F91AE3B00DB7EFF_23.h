#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_4_2AFBB0F2564F9E40;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4F91AE3B00DB7EFF_23_EVALUATE_OFFSET UNITYSDK_OFFSET(0x164905A0)
#define CLASS_3_4F91AE3B00DB7EFF_23__CTOR_OFFSET UNITYSDK_OFFSET(0x16490570)

inline static constexpr unsigned int Class_3_4F91AE3B00DB7EFF_23_TypeDefinitionIndex = 51402;

class Class_3_4F91AE3B00DB7EFF_23 : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_2AFBB0F2564F9E40*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_2AFBB0F2564F9E40* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_2AFBB0F2564F9E40*))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_23__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_23_EVALUATE_OFFSET))(this);
	}
};
