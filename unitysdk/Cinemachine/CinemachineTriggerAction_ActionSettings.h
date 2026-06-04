#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CinemachineTriggerAction_ActionSettings_Mode.h"
#include "unitysdk/Cinemachine/CinemachineTriggerAction_ActionSettings_TimeMode.h"
#include "unitysdk/System/ValueType.h"

namespace Cinemachine { class CinemachineTriggerAction_ActionSettings_TriggerEvent; }
namespace UnityEngine { class Object; }

#define CINEMACHINE_CINEMACHINETRIGGERACTION_ACTIONSETTINGS_INVOKE_OFFSET UNITYSDK_OFFSET(0x2BD1140)
#define CINEMACHINE_CINEMACHINETRIGGERACTION_ACTIONSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x2BD10D0)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineTriggerAction_ActionSettings_TypeDefinitionIndex = 36920;

	struct alignas(8) CinemachineTriggerAction_ActionSettings
	{
		::Cinemachine::CinemachineTriggerAction_ActionSettings_Mode m_Action; // 0x10
		::UnityEngine::Object* m_Target; // 0x18
		::System::Int32 m_BoostAmount; // 0x20
		::System::Single m_StartTime; // 0x24
		::Cinemachine::CinemachineTriggerAction_ActionSettings_TimeMode m_Mode; // 0x28
		::Cinemachine::CinemachineTriggerAction_ActionSettings_TriggerEvent* m_Event; // 0x30

		::System::Void _ctor(::Cinemachine::CinemachineTriggerAction_ActionSettings_Mode a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineTriggerAction_ActionSettings_Mode))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETRIGGERACTION_ACTIONSETTINGS__CTOR_OFFSET))(this, a1);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETRIGGERACTION_ACTIONSETTINGS_INVOKE_OFFSET))(this);
		}
	};
}
