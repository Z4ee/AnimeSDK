#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_4_3701B6A121A72CD0_1;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4F91AE3B00DB7EFF_EVALUATE_OFFSET UNITYSDK_OFFSET(0xAD1E7A0)
#define CLASS_3_4F91AE3B00DB7EFF__CTOR_OFFSET UNITYSDK_OFFSET(0xAD1E770)

inline static constexpr unsigned int Class_3_4F91AE3B00DB7EFF_TypeDefinitionIndex = 48516;

class Class_3_4F91AE3B00DB7EFF : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_3701B6A121A72CD0_1*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_3701B6A121A72CD0_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_3701B6A121A72CD0_1*))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_EVALUATE_OFFSET))(this);
	}
};
