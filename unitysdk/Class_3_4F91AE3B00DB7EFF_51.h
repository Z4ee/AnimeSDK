#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_4_07BF628E2777E08D;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4F91AE3B00DB7EFF_51_EVALUATE_OFFSET UNITYSDK_OFFSET(0x166504B0)
#define CLASS_3_4F91AE3B00DB7EFF_51__CTOR_OFFSET UNITYSDK_OFFSET(0x16650480)

inline static constexpr unsigned int Class_3_4F91AE3B00DB7EFF_51_TypeDefinitionIndex = 54895;

class Class_3_4F91AE3B00DB7EFF_51 : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_07BF628E2777E08D*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_07BF628E2777E08D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_07BF628E2777E08D*))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_51__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_51_EVALUATE_OFFSET))(this);
	}
};
