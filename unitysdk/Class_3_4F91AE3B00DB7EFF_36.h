#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_4_C2FF09D2685FF72B;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4F91AE3B00DB7EFF_36_EVALUATE_OFFSET UNITYSDK_OFFSET(0x9840290)
#define CLASS_3_4F91AE3B00DB7EFF_36__CTOR_OFFSET UNITYSDK_OFFSET(0x9840260)

inline static constexpr unsigned int Class_3_4F91AE3B00DB7EFF_36_TypeDefinitionIndex = 50436;

class Class_3_4F91AE3B00DB7EFF_36 : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_C2FF09D2685FF72B*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_C2FF09D2685FF72B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_C2FF09D2685FF72B*))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_36__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_36_EVALUATE_OFFSET))(this);
	}
};
