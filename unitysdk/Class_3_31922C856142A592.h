#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdventureSkillTriggerAbility; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_31922C856142A592_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB5F2E50)
#define CLASS_3_31922C856142A592__CTOR_OFFSET UNITYSDK_OFFSET(0xB5F2E20)

inline static constexpr unsigned int Class_3_31922C856142A592_TypeDefinitionIndex = 58067;

class Class_3_31922C856142A592 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdventureSkillTriggerAbility*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureSkillTriggerAbility* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureSkillTriggerAbility*))((::PBYTE)hIl2Cpp + CLASS_3_31922C856142A592__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_31922C856142A592_ONTASKBEGIN_OFFSET))(this);
	}
};
