#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByIsTeamLeader; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_AD29C9DACE7F352E_EVALUATE_OFFSET UNITYSDK_OFFSET(0x179E5B10)
#define CLASS_3_AD29C9DACE7F352E__CTOR_OFFSET UNITYSDK_OFFSET(0x179E5AE0)

inline static constexpr unsigned int Class_3_AD29C9DACE7F352E_TypeDefinitionIndex = 50725;

class Class_3_AD29C9DACE7F352E : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByIsTeamLeader*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsTeamLeader* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsTeamLeader*))((::PBYTE)hIl2Cpp + CLASS_3_AD29C9DACE7F352E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AD29C9DACE7F352E_EVALUATE_OFFSET))(this);
	}
};
