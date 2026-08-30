#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class OverrideSkillReadyState; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_CCF5F333A478E013_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x14C48150)
#define CLASS_3_CCF5F333A478E013__CTOR_OFFSET UNITYSDK_OFFSET(0x14C48120)

inline static constexpr unsigned int Class_3_CCF5F333A478E013_TypeDefinitionIndex = 55446;

class Class_3_CCF5F333A478E013 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::OverrideSkillReadyState*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::OverrideSkillReadyState* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::OverrideSkillReadyState*))((::PBYTE)hIl2Cpp + CLASS_3_CCF5F333A478E013__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CCF5F333A478E013_ONTASKBEGIN_OFFSET))(this);
	}
};
