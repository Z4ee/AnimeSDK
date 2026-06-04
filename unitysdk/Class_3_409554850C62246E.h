#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class AdvByIsInPhantomFrozen; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_409554850C62246E_EVALUATE_OFFSET UNITYSDK_OFFSET(0xA6D73A0)
#define CLASS_3_409554850C62246E__CTOR_OFFSET UNITYSDK_OFFSET(0xA6D7370)

inline static constexpr unsigned int Class_3_409554850C62246E_TypeDefinitionIndex = 49639;

class Class_3_409554850C62246E : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::AdvByIsInPhantomFrozen*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvByIsInPhantomFrozen* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvByIsInPhantomFrozen*))((::PBYTE)hIl2Cpp + CLASS_3_409554850C62246E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_409554850C62246E_EVALUATE_OFFSET))(this);
	}
};
