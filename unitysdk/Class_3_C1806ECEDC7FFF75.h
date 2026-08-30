#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class RtByIsTriggeredBlockDamage; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_C1806ECEDC7FFF75_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15414750)
#define CLASS_3_C1806ECEDC7FFF75__CTOR_OFFSET UNITYSDK_OFFSET(0x15414720)

inline static constexpr unsigned int Class_3_C1806ECEDC7FFF75_TypeDefinitionIndex = 54057;

class Class_3_C1806ECEDC7FFF75 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::RtByIsTriggeredBlockDamage*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RtByIsTriggeredBlockDamage* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RtByIsTriggeredBlockDamage*))((::PBYTE)hIl2Cpp + CLASS_3_C1806ECEDC7FFF75__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C1806ECEDC7FFF75_EVALUATE_OFFSET))(this);
	}
};
