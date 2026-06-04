#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdventureTriggerTargetAbility; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_89A982065D5CAC45_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB29BDA0)
#define CLASS_3_89A982065D5CAC45__CTOR_OFFSET UNITYSDK_OFFSET(0xB29BD70)

inline static constexpr unsigned int Class_3_89A982065D5CAC45_TypeDefinitionIndex = 54136;

class Class_3_89A982065D5CAC45 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdventureTriggerTargetAbility*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureTriggerTargetAbility* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureTriggerTargetAbility*))((::PBYTE)hIl2Cpp + CLASS_3_89A982065D5CAC45__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_89A982065D5CAC45_ONTASKBEGIN_OFFSET))(this);
	}
};
