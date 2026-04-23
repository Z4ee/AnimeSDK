#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_4_13EE8F36399C8CEC;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4F91AE3B00DB7EFF_15_EVALUATE_OFFSET UNITYSDK_OFFSET(0x11C27680)
#define CLASS_3_4F91AE3B00DB7EFF_15__CTOR_OFFSET UNITYSDK_OFFSET(0x11C27650)

inline static constexpr unsigned int Class_3_4F91AE3B00DB7EFF_15_TypeDefinitionIndex = 49623;

class Class_3_4F91AE3B00DB7EFF_15 : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_13EE8F36399C8CEC*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_13EE8F36399C8CEC* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_13EE8F36399C8CEC*))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_15__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_15_EVALUATE_OFFSET))(this);
	}
};
