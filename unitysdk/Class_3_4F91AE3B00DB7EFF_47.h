#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_4_D06A8FE0880035FA;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4F91AE3B00DB7EFF_47_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1559B9F0)
#define CLASS_3_4F91AE3B00DB7EFF_47__CTOR_OFFSET UNITYSDK_OFFSET(0x1559B9C0)

inline static constexpr unsigned int Class_3_4F91AE3B00DB7EFF_47_TypeDefinitionIndex = 54913;

class Class_3_4F91AE3B00DB7EFF_47 : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_D06A8FE0880035FA*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_D06A8FE0880035FA* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_D06A8FE0880035FA*))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_47__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_47_EVALUATE_OFFSET))(this);
	}
};
