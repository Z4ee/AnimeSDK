#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByIsCurrentSkillActive; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_E5811F510B1944EB_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1685EFF0)
#define CLASS_3_E5811F510B1944EB__CTOR_OFFSET UNITYSDK_OFFSET(0x1685EFC0)

inline static constexpr unsigned int Class_3_E5811F510B1944EB_TypeDefinitionIndex = 52172;

class Class_3_E5811F510B1944EB : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByIsCurrentSkillActive*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsCurrentSkillActive* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsCurrentSkillActive*))((::PBYTE)hIl2Cpp + CLASS_3_E5811F510B1944EB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E5811F510B1944EB_EVALUATE_OFFSET))(this);
	}
};
