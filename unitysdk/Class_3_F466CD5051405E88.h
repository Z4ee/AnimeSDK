#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class ToggleSpecialSkillMark; }

#define CLASS_3_F466CD5051405E88_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x157DDF40)
#define CLASS_3_F466CD5051405E88__CTOR_OFFSET UNITYSDK_OFFSET(0x157DDF10)

inline static constexpr unsigned int Class_3_F466CD5051405E88_TypeDefinitionIndex = 48079;

class Class_3_F466CD5051405E88 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ToggleSpecialSkillMark*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ToggleSpecialSkillMark* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ToggleSpecialSkillMark*))((::PBYTE)hIl2Cpp + CLASS_3_F466CD5051405E88__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F466CD5051405E88_ONTASKBEGIN_OFFSET))(this);
	}
};
