#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_4_2A80E417D1F3E66A;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4F91AE3B00DB7EFF_44_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15717D70)
#define CLASS_3_4F91AE3B00DB7EFF_44__CTOR_OFFSET UNITYSDK_OFFSET(0x15717D40)

inline static constexpr unsigned int Class_3_4F91AE3B00DB7EFF_44_TypeDefinitionIndex = 54784;

class Class_3_4F91AE3B00DB7EFF_44 : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_2A80E417D1F3E66A*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_2A80E417D1F3E66A* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_2A80E417D1F3E66A*))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_44__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_44_EVALUATE_OFFSET))(this);
	}
};
