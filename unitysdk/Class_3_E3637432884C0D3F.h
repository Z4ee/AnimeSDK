#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class CustomTeamFormationConfig; }
namespace RPG::GameCore { class SetCharacterCustomTeamFormation; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_E3637432884C0D3F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA69C690)
#define CLASS_3_E3637432884C0D3F__CTOR_OFFSET UNITYSDK_OFFSET(0xA69C660)

inline static constexpr unsigned int Class_3_E3637432884C0D3F_TypeDefinitionIndex = 51719;

class Class_3_E3637432884C0D3F : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetCharacterCustomTeamFormation*>
{
public:
	::RPG::GameCore::CustomTeamFormationConfig* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetCharacterCustomTeamFormation* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetCharacterCustomTeamFormation*))((::PBYTE)hIl2Cpp + CLASS_3_E3637432884C0D3F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E3637432884C0D3F_ONTASKBEGIN_OFFSET))(this);
	}
};
