#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_4_BEE39EC9628DAD6A;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4F91AE3B00DB7EFF_52_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBF88650)
#define CLASS_3_4F91AE3B00DB7EFF_52__CTOR_OFFSET UNITYSDK_OFFSET(0xBF88620)

inline static constexpr unsigned int Class_3_4F91AE3B00DB7EFF_52_TypeDefinitionIndex = 54898;

class Class_3_4F91AE3B00DB7EFF_52 : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_BEE39EC9628DAD6A*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_BEE39EC9628DAD6A* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_BEE39EC9628DAD6A*))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_52__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_52_EVALUATE_OFFSET))(this);
	}
};
