#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_4_898D9FE991FDEB8A_1;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4F91AE3B00DB7EFF_13_EVALUATE_OFFSET UNITYSDK_OFFSET(0x8FD9CA0)
#define CLASS_3_4F91AE3B00DB7EFF_13__CTOR_OFFSET UNITYSDK_OFFSET(0x8FD9C70)

inline static constexpr unsigned int Class_3_4F91AE3B00DB7EFF_13_TypeDefinitionIndex = 49621;

class Class_3_4F91AE3B00DB7EFF_13 : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_898D9FE991FDEB8A_1*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_898D9FE991FDEB8A_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_898D9FE991FDEB8A_1*))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_13__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_13_EVALUATE_OFFSET))(this);
	}
};
