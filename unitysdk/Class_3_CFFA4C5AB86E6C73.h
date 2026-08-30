#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByTimeRewindTargetCurrentState; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_CFFA4C5AB86E6C73_EVALUATE_OFFSET UNITYSDK_OFFSET(0x164B2A30)
#define CLASS_3_CFFA4C5AB86E6C73__CTOR_OFFSET UNITYSDK_OFFSET(0x164B2A00)

inline static constexpr unsigned int Class_3_CFFA4C5AB86E6C73_TypeDefinitionIndex = 53625;

class Class_3_CFFA4C5AB86E6C73 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByTimeRewindTargetCurrentState*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByTimeRewindTargetCurrentState* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByTimeRewindTargetCurrentState*))((::PBYTE)hIl2Cpp + CLASS_3_CFFA4C5AB86E6C73__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CFFA4C5AB86E6C73_EVALUATE_OFFSET))(this);
	}
};
