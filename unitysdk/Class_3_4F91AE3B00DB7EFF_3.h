#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_4_3701B6A121A72CD0_4;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4F91AE3B00DB7EFF_3_EVALUATE_OFFSET UNITYSDK_OFFSET(0x129A8C60)
#define CLASS_3_4F91AE3B00DB7EFF_3__CTOR_OFFSET UNITYSDK_OFFSET(0x129A8C30)

inline static constexpr unsigned int Class_3_4F91AE3B00DB7EFF_3_TypeDefinitionIndex = 48573;

class Class_3_4F91AE3B00DB7EFF_3 : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_3701B6A121A72CD0_4*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_3701B6A121A72CD0_4* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_3701B6A121A72CD0_4*))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_3_EVALUATE_OFFSET))(this);
	}
};
