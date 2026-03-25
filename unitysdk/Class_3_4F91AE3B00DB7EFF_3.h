#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_4_3701B6A121A72CD0_2;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4F91AE3B00DB7EFF_3_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1185E510)
#define CLASS_3_4F91AE3B00DB7EFF_3__CTOR_OFFSET UNITYSDK_OFFSET(0x1185E4E0)

inline static constexpr unsigned int Class_3_4F91AE3B00DB7EFF_3_TypeDefinitionIndex = 43582;

class Class_3_4F91AE3B00DB7EFF_3 : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_3701B6A121A72CD0_2*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_3701B6A121A72CD0_2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_3701B6A121A72CD0_2*))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_3_EVALUATE_OFFSET))(this);
	}
};
