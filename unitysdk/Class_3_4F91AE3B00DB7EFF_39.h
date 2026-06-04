#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_4_DA219FA494F35D19;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4F91AE3B00DB7EFF_39_EVALUATE_OFFSET UNITYSDK_OFFSET(0x13A07A60)
#define CLASS_3_4F91AE3B00DB7EFF_39__CTOR_OFFSET UNITYSDK_OFFSET(0x13A07A30)

inline static constexpr unsigned int Class_3_4F91AE3B00DB7EFF_39_TypeDefinitionIndex = 51291;

class Class_3_4F91AE3B00DB7EFF_39 : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_DA219FA494F35D19*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_DA219FA494F35D19* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_DA219FA494F35D19*))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_39__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_39_EVALUATE_OFFSET))(this);
	}
};
