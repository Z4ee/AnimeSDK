#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByIsRogueTournLastRoom; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_00DD8360226E1442_EVALUATE_OFFSET UNITYSDK_OFFSET(0xA9BA740)
#define CLASS_3_00DD8360226E1442__CTOR_OFFSET UNITYSDK_OFFSET(0xA9BA710)

inline static constexpr unsigned int Class_3_00DD8360226E1442_TypeDefinitionIndex = 46762;

class Class_3_00DD8360226E1442 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByIsRogueTournLastRoom*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsRogueTournLastRoom* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsRogueTournLastRoom*))((::PBYTE)hIl2Cpp + CLASS_3_00DD8360226E1442__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_00DD8360226E1442_EVALUATE_OFFSET))(this);
	}
};
