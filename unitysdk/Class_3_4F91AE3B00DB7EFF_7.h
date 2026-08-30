#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_4_94CC15BFDD928D3E;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4F91AE3B00DB7EFF_7_EVALUATE_OFFSET UNITYSDK_OFFSET(0x17FB7840)
#define CLASS_3_4F91AE3B00DB7EFF_7__CTOR_OFFSET UNITYSDK_OFFSET(0x17FB7810)

inline static constexpr unsigned int Class_3_4F91AE3B00DB7EFF_7_TypeDefinitionIndex = 53054;

class Class_3_4F91AE3B00DB7EFF_7 : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_94CC15BFDD928D3E*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_94CC15BFDD928D3E* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_94CC15BFDD928D3E*))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_7_EVALUATE_OFFSET))(this);
	}
};
