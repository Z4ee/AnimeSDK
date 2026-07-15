#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByIsTargetAbleToAction; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_BD0FDDDD34A90275_EVALUATE_OFFSET UNITYSDK_OFFSET(0x176D7360)
#define CLASS_3_BD0FDDDD34A90275__CTOR_OFFSET UNITYSDK_OFFSET(0x176D7330)

inline static constexpr unsigned int Class_3_BD0FDDDD34A90275_TypeDefinitionIndex = 52214;

class Class_3_BD0FDDDD34A90275 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByIsTargetAbleToAction*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsTargetAbleToAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsTargetAbleToAction*))((::PBYTE)hIl2Cpp + CLASS_3_BD0FDDDD34A90275__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BD0FDDDD34A90275_EVALUATE_OFFSET))(this);
	}
};
