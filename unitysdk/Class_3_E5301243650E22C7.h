#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class AdvByCheckWindowInSlot; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_E5301243650E22C7_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1633AAB0)
#define CLASS_3_E5301243650E22C7__CTOR_OFFSET UNITYSDK_OFFSET(0x1633AA80)

inline static constexpr unsigned int Class_3_E5301243650E22C7_TypeDefinitionIndex = 50428;

class Class_3_E5301243650E22C7 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::AdvByCheckWindowInSlot*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvByCheckWindowInSlot* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvByCheckWindowInSlot*))((::PBYTE)hIl2Cpp + CLASS_3_E5301243650E22C7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E5301243650E22C7_EVALUATE_OFFSET))(this);
	}
};
