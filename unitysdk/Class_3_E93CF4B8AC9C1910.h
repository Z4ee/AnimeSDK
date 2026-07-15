#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class AdvByEntitiesExist; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_E93CF4B8AC9C1910_EVALUATE_OFFSET UNITYSDK_OFFSET(0x18F0FF70)
#define CLASS_3_E93CF4B8AC9C1910__CTOR_OFFSET UNITYSDK_OFFSET(0x18F0FF40)

inline static constexpr unsigned int Class_3_E93CF4B8AC9C1910_TypeDefinitionIndex = 50687;

class Class_3_E93CF4B8AC9C1910 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::AdvByEntitiesExist*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvByEntitiesExist* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvByEntitiesExist*))((::PBYTE)hIl2Cpp + CLASS_3_E93CF4B8AC9C1910__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E93CF4B8AC9C1910_EVALUATE_OFFSET))(this);
	}
};
