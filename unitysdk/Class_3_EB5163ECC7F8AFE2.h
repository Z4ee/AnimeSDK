#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ST_ByDistToGuardPosition; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_EB5163ECC7F8AFE2_EVALUATE_OFFSET UNITYSDK_OFFSET(0xA811530)
#define CLASS_3_EB5163ECC7F8AFE2__CTOR_OFFSET UNITYSDK_OFFSET(0xA811470)

inline static constexpr unsigned int Class_3_EB5163ECC7F8AFE2_TypeDefinitionIndex = 48799;

class Class_3_EB5163ECC7F8AFE2 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ST_ByDistToGuardPosition*>
{
public:
	::System::Single Field_3_0; // 0x28
	::System::Single Field_3_1; // 0x2C

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_ByDistToGuardPosition* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_ByDistToGuardPosition*))((::PBYTE)hIl2Cpp + CLASS_3_EB5163ECC7F8AFE2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EB5163ECC7F8AFE2_EVALUATE_OFFSET))(this);
	}
};
