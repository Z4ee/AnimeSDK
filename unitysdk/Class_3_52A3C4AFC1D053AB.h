#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class RtByIsSkillUsing; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_52A3C4AFC1D053AB_EVALUATE_OFFSET UNITYSDK_OFFSET(0x11E251A0)
#define CLASS_3_52A3C4AFC1D053AB__CTOR_OFFSET UNITYSDK_OFFSET(0x11E25170)

inline static constexpr unsigned int Class_3_52A3C4AFC1D053AB_TypeDefinitionIndex = 49706;

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
