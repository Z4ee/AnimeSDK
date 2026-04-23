#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ShowSpecialAvatarSkillButtonPanel; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_30344B49F2528B99_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x9A643D0)
#define CLASS_3_30344B49F2528B99__CTOR_OFFSET UNITYSDK_OFFSET(0x9A643A0)

inline static constexpr unsigned int Class_3_30344B49F2528B99_TypeDefinitionIndex = 51279;

class Class_3_30344B49F2528B99 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ShowSpecialAvatarSkillButtonPanel*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowSpecialAvatarSkillButtonPanel* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowSpecialAvatarSkillButtonPanel*))((::PBYTE)hIl2Cpp + CLASS_3_30344B49F2528B99__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_30344B49F2528B99_ONTASKBEGIN_OFFSET))(this);
	}
};
