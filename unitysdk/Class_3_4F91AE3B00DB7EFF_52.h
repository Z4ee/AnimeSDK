#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_4_C2B07AE0C1DDDAA6;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4F91AE3B00DB7EFF_52_EVALUATE_OFFSET UNITYSDK_OFFSET(0x17A38F30)
#define CLASS_3_4F91AE3B00DB7EFF_52__CTOR_OFFSET UNITYSDK_OFFSET(0x17A38F00)

inline static constexpr unsigned int Class_3_4F91AE3B00DB7EFF_52_TypeDefinitionIndex = 55241;

class Class_3_4F91AE3B00DB7EFF_52 : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_C2B07AE0C1DDDAA6*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_C2B07AE0C1DDDAA6* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_C2B07AE0C1DDDAA6*))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_52__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_52_EVALUATE_OFFSET))(this);
	}
};
