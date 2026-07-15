#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_4_847526B96EF09786;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4F91AE3B00DB7EFF_45_EVALUATE_OFFSET UNITYSDK_OFFSET(0x158DB780)
#define CLASS_3_4F91AE3B00DB7EFF_45__CTOR_OFFSET UNITYSDK_OFFSET(0x158DB750)

inline static constexpr unsigned int Class_3_4F91AE3B00DB7EFF_45_TypeDefinitionIndex = 52419;

class Class_3_4F91AE3B00DB7EFF_45 : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_847526B96EF09786*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_847526B96EF09786* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_847526B96EF09786*))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_45__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_45_EVALUATE_OFFSET))(this);
	}
};
