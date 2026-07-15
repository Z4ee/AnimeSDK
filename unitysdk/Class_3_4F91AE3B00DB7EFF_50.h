#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_4_D6619DB5A2E78AE5;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4F91AE3B00DB7EFF_50_EVALUATE_OFFSET UNITYSDK_OFFSET(0x16035610)
#define CLASS_3_4F91AE3B00DB7EFF_50__CTOR_OFFSET UNITYSDK_OFFSET(0x160355E0)

inline static constexpr unsigned int Class_3_4F91AE3B00DB7EFF_50_TypeDefinitionIndex = 52566;

class Class_3_4F91AE3B00DB7EFF_50 : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_D6619DB5A2E78AE5*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_D6619DB5A2E78AE5* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_D6619DB5A2E78AE5*))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_50__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_50_EVALUATE_OFFSET))(this);
	}
};
