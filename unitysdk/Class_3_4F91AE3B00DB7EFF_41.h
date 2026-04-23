#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_4_C6B158EB9941F4E8;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4F91AE3B00DB7EFF_41_EVALUATE_OFFSET UNITYSDK_OFFSET(0x91EC380)
#define CLASS_3_4F91AE3B00DB7EFF_41__CTOR_OFFSET UNITYSDK_OFFSET(0x91EC350)

inline static constexpr unsigned int Class_3_4F91AE3B00DB7EFF_41_TypeDefinitionIndex = 53460;

class Class_3_4F91AE3B00DB7EFF_41 : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_C6B158EB9941F4E8*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_C6B158EB9941F4E8* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_C6B158EB9941F4E8*))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_41__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_41_EVALUATE_OFFSET))(this);
	}
};
