#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_4_DD662316DDE274DE;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4F91AE3B00DB7EFF_37_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBA3B920)
#define CLASS_3_4F91AE3B00DB7EFF_37__CTOR_OFFSET UNITYSDK_OFFSET(0xBA3B8F0)

inline static constexpr unsigned int Class_3_4F91AE3B00DB7EFF_37_TypeDefinitionIndex = 54376;

class Class_3_4F91AE3B00DB7EFF_37 : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_DD662316DDE274DE*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_DD662316DDE274DE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_DD662316DDE274DE*))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_37__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_37_EVALUATE_OFFSET))(this);
	}
};
