#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_4_5354087FF9599135;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4F91AE3B00DB7EFF_50_EVALUATE_OFFSET UNITYSDK_OFFSET(0x16091AB0)
#define CLASS_3_4F91AE3B00DB7EFF_50__CTOR_OFFSET UNITYSDK_OFFSET(0x16091A80)

inline static constexpr unsigned int Class_3_4F91AE3B00DB7EFF_50_TypeDefinitionIndex = 55161;

class Class_3_4F91AE3B00DB7EFF_50 : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_5354087FF9599135*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_5354087FF9599135* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_5354087FF9599135*))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_50__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_50_EVALUATE_OFFSET))(this);
	}
};
