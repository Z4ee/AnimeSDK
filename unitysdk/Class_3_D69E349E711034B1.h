#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareSwitchMascotPickupCount; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_D69E349E711034B1_EVALUATE_OFFSET UNITYSDK_OFFSET(0x98F0020)
#define CLASS_3_D69E349E711034B1__CTOR_OFFSET UNITYSDK_OFFSET(0x98EFFF0)

inline static constexpr unsigned int Class_3_D69E349E711034B1_TypeDefinitionIndex = 53462;

class Class_3_D69E349E711034B1 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareSwitchMascotPickupCount*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareSwitchMascotPickupCount* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareSwitchMascotPickupCount*))((::PBYTE)hIl2Cpp + CLASS_3_D69E349E711034B1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D69E349E711034B1_EVALUATE_OFFSET))(this);
	}
};
