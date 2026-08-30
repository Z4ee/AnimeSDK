#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_4_D6619DB5A2E78AE5;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4F91AE3B00DB7EFF_54_EVALUATE_OFFSET UNITYSDK_OFFSET(0x155D22D0)
#define CLASS_3_4F91AE3B00DB7EFF_54__CTOR_OFFSET UNITYSDK_OFFSET(0x155D22A0)

inline static constexpr unsigned int Class_3_4F91AE3B00DB7EFF_54_TypeDefinitionIndex = 55263;

class Class_3_4F91AE3B00DB7EFF_54 : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_D6619DB5A2E78AE5*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_D6619DB5A2E78AE5* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_D6619DB5A2E78AE5*))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_54__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_54_EVALUATE_OFFSET))(this);
	}
};
