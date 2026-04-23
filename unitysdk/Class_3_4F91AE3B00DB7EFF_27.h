#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_4_910B2E385C65999D;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4F91AE3B00DB7EFF_27_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB2265E0)
#define CLASS_3_4F91AE3B00DB7EFF_27__CTOR_OFFSET UNITYSDK_OFFSET(0xB2265B0)

inline static constexpr unsigned int Class_3_4F91AE3B00DB7EFF_27_TypeDefinitionIndex = 49941;

class Class_3_4F91AE3B00DB7EFF_27 : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_910B2E385C65999D*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_910B2E385C65999D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_910B2E385C65999D*))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_27__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_27_EVALUATE_OFFSET))(this);
	}
};
