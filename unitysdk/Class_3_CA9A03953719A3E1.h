#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByIsTeammate; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_CA9A03953719A3E1_EVALUATE_OFFSET UNITYSDK_OFFSET(0x8ACAF20)
#define CLASS_3_CA9A03953719A3E1__CTOR_OFFSET UNITYSDK_OFFSET(0x8ACAEF0)

inline static constexpr unsigned int Class_3_CA9A03953719A3E1_TypeDefinitionIndex = 43765;

class Class_3_CA9A03953719A3E1 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByIsTeammate*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsTeammate* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsTeammate*))((::PBYTE)hIl2Cpp + CLASS_3_CA9A03953719A3E1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CA9A03953719A3E1_EVALUATE_OFFSET))(this);
	}
};
