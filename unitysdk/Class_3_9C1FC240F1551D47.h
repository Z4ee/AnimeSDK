#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class RtBattleTriggerCameraAbility; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_9C1FC240F1551D47_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAF35C90)
#define CLASS_3_9C1FC240F1551D47__CTOR_OFFSET UNITYSDK_OFFSET(0xAF35C60)

inline static constexpr unsigned int Class_3_9C1FC240F1551D47_TypeDefinitionIndex = 50605;

class Class_3_9C1FC240F1551D47 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::RtBattleTriggerCameraAbility*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RtBattleTriggerCameraAbility* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RtBattleTriggerCameraAbility*))((::PBYTE)hIl2Cpp + CLASS_3_9C1FC240F1551D47__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9C1FC240F1551D47_ONTASKBEGIN_OFFSET))(this);
	}
};
