#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_4_25AFD46360DAAFAC;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4F91AE3B00DB7EFF_26_EVALUATE_OFFSET UNITYSDK_OFFSET(0x16291130)
#define CLASS_3_4F91AE3B00DB7EFF_26__CTOR_OFFSET UNITYSDK_OFFSET(0x16291100)

inline static constexpr unsigned int Class_3_4F91AE3B00DB7EFF_26_TypeDefinitionIndex = 54098;

class Class_3_4F91AE3B00DB7EFF_26 : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_25AFD46360DAAFAC*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_25AFD46360DAAFAC* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_25AFD46360DAAFAC*))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_26__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_26_EVALUATE_OFFSET))(this);
	}
};
