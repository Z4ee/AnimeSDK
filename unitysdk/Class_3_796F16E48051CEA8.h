#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetDeathDragonSkillButtonState; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_796F16E48051CEA8_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17DF3A00)
#define CLASS_3_796F16E48051CEA8__CTOR_OFFSET UNITYSDK_OFFSET(0x17DF39D0)

inline static constexpr unsigned int Class_3_796F16E48051CEA8_TypeDefinitionIndex = 55590;

class Class_3_796F16E48051CEA8 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetDeathDragonSkillButtonState*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDeathDragonSkillButtonState* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDeathDragonSkillButtonState*))((::PBYTE)hIl2Cpp + CLASS_3_796F16E48051CEA8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_796F16E48051CEA8_ONTASKBEGIN_OFFSET))(this);
	}
};
