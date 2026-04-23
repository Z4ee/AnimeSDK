#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class AdvByHasMoveSinceLastTeleport; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_3C98F43C10B3F83A_EVALUATE_OFFSET UNITYSDK_OFFSET(0x118710F0)
#define CLASS_3_3C98F43C10B3F83A__CTOR_OFFSET UNITYSDK_OFFSET(0x118710C0)

inline static constexpr unsigned int Class_3_3C98F43C10B3F83A_TypeDefinitionIndex = 48971;

class Class_3_3C98F43C10B3F83A : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::AdvByHasMoveSinceLastTeleport*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvByHasMoveSinceLastTeleport* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvByHasMoveSinceLastTeleport*))((::PBYTE)hIl2Cpp + CLASS_3_3C98F43C10B3F83A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3C98F43C10B3F83A_EVALUATE_OFFSET))(this);
	}
};
