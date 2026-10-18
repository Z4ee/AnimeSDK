#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class CustomTeamFormationConfig; }
namespace RPG::GameCore { class SetCharacterCustomTeamFormation; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_E366B432884EAFA6_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB793CD0)
#define CLASS_3_E366B432884EAFA6__CTOR_OFFSET UNITYSDK_OFFSET(0xB793CA0)

inline static constexpr unsigned int Class_3_E366B432884EAFA6_TypeDefinitionIndex = 55368;

class Class_3_E366B432884EAFA6 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetCharacterCustomTeamFormation*>
{
public:
	::RPG::GameCore::CustomTeamFormationConfig* IADLJCKJEIM; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetCharacterCustomTeamFormation* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetCharacterCustomTeamFormation*))((::PBYTE)hIl2Cpp + CLASS_3_E366B432884EAFA6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E366B432884EAFA6_ONTASKBEGIN_OFFSET))(this);
	}
};
