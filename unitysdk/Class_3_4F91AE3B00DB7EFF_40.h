#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_4_333AF9D5F338A2DD;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4F91AE3B00DB7EFF_40_EVALUATE_OFFSET UNITYSDK_OFFSET(0x141745F0)
#define CLASS_3_4F91AE3B00DB7EFF_40__CTOR_OFFSET UNITYSDK_OFFSET(0x141745C0)

inline static constexpr unsigned int Class_3_4F91AE3B00DB7EFF_40_TypeDefinitionIndex = 51354;

class Class_3_4F91AE3B00DB7EFF_40 : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_333AF9D5F338A2DD*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_333AF9D5F338A2DD* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_333AF9D5F338A2DD*))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_40__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_40_EVALUATE_OFFSET))(this);
	}
};
