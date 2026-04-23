#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_4_3701B6A121A72CD0_10;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4F91AE3B00DB7EFF_20_EVALUATE_OFFSET UNITYSDK_OFFSET(0x98F0560)
#define CLASS_3_4F91AE3B00DB7EFF_20__CTOR_OFFSET UNITYSDK_OFFSET(0x98F0530)

inline static constexpr unsigned int Class_3_4F91AE3B00DB7EFF_20_TypeDefinitionIndex = 49667;

class Class_3_4F91AE3B00DB7EFF_20 : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_3701B6A121A72CD0_10*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_3701B6A121A72CD0_10* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_3701B6A121A72CD0_10*))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_20__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_20_EVALUATE_OFFSET))(this);
	}
};
