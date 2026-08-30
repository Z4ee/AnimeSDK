#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdventureTriggerTargetAbility; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_89A982065D5CAC45_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15DF9400)
#define CLASS_3_89A982065D5CAC45__CTOR_OFFSET UNITYSDK_OFFSET(0x15DF93D0)

inline static constexpr unsigned int Class_3_89A982065D5CAC45_TypeDefinitionIndex = 58083;

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
