#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareHipplenEnergy; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_2EA88B21EDF778D2_EVALUATE_OFFSET UNITYSDK_OFFSET(0xA9EF320)
#define CLASS_3_2EA88B21EDF778D2__CTOR_OFFSET UNITYSDK_OFFSET(0xA9EF2F0)

inline static constexpr unsigned int Class_3_2EA88B21EDF778D2_TypeDefinitionIndex = 48877;

class Class_3_2EA88B21EDF778D2 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareHipplenEnergy*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareHipplenEnergy* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareHipplenEnergy*))((::PBYTE)hIl2Cpp + CLASS_3_2EA88B21EDF778D2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2EA88B21EDF778D2_EVALUATE_OFFSET))(this);
	}
};
