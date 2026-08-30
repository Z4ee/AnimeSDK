#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class ToggleSkillPreShow; }

#define CLASS_3_225DE31AB2DF0C29_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB5A9010)
#define CLASS_3_225DE31AB2DF0C29__CTOR_OFFSET UNITYSDK_OFFSET(0xB5A8FE0)

inline static constexpr unsigned int Class_3_225DE31AB2DF0C29_TypeDefinitionIndex = 55897;

class Class_3_225DE31AB2DF0C29 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ToggleSkillPreShow*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ToggleSkillPreShow* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ToggleSkillPreShow*))((::PBYTE)hIl2Cpp + CLASS_3_225DE31AB2DF0C29__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_225DE31AB2DF0C29_ONTASKBEGIN_OFFSET))(this);
	}
};
