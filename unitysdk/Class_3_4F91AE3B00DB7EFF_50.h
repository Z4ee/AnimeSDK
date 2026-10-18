#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_4_2A80E417D1F3E66A;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4F91AE3B00DB7EFF_50_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15B11210)
#define CLASS_3_4F91AE3B00DB7EFF_50__CTOR_OFFSET UNITYSDK_OFFSET(0x15B111E0)

inline static constexpr unsigned int Class_3_4F91AE3B00DB7EFF_50_TypeDefinitionIndex = 54884;

class Class_3_4F91AE3B00DB7EFF_50 : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_2A80E417D1F3E66A*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_2A80E417D1F3E66A* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_2A80E417D1F3E66A*))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_50__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_50_EVALUATE_OFFSET))(this);
	}
};
