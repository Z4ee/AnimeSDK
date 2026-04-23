#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class BoomRobotGameplayTriggerStart; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_E1F2A691ADC0B3B3_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x935E9A0)
#define CLASS_3_E1F2A691ADC0B3B3__CTOR_OFFSET UNITYSDK_OFFSET(0x935E970)

inline static constexpr unsigned int Class_3_E1F2A691ADC0B3B3_TypeDefinitionIndex = 48515;

class Class_3_E1F2A691ADC0B3B3 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::BoomRobotGameplayTriggerStart*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::BoomRobotGameplayTriggerStart* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::BoomRobotGameplayTriggerStart*))((::PBYTE)hIl2Cpp + CLASS_3_E1F2A691ADC0B3B3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E1F2A691ADC0B3B3_ONTASKBEGIN_OFFSET))(this);
	}
};
