#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_4_9120FA241231E45C;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4F91AE3B00DB7EFF_4_EVALUATE_OFFSET UNITYSDK_OFFSET(0x9C58F70)
#define CLASS_3_4F91AE3B00DB7EFF_4__CTOR_OFFSET UNITYSDK_OFFSET(0x9C58F40)

inline static constexpr unsigned int Class_3_4F91AE3B00DB7EFF_4_TypeDefinitionIndex = 43617;

class Class_3_4F91AE3B00DB7EFF_4 : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_9120FA241231E45C*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_9120FA241231E45C* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_9120FA241231E45C*))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_4_EVALUATE_OFFSET))(this);
	}
};
