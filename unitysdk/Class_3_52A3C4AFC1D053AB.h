#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class RtByIsSkillUsing; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_52A3C4AFC1D053AB_EVALUATE_OFFSET UNITYSDK_OFFSET(0xACA0330)
#define CLASS_3_52A3C4AFC1D053AB__CTOR_OFFSET UNITYSDK_OFFSET(0xACA0300)

inline static constexpr unsigned int Class_3_52A3C4AFC1D053AB_TypeDefinitionIndex = 50373;

class Class_3_52A3C4AFC1D053AB : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::RtByIsSkillUsing*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RtByIsSkillUsing* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RtByIsSkillUsing*))((::PBYTE)hIl2Cpp + CLASS_3_52A3C4AFC1D053AB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_52A3C4AFC1D053AB_EVALUATE_OFFSET))(this);
	}
};
