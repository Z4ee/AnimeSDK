#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CinemachineImpulseDefinition_RepeatMode.h"
#include "unitysdk/Cinemachine/CinemachineImpulseManager_EnvelopeDefinition.h"
#include "unitysdk/Cinemachine/CinemachineImpulseManager_ImpulseEvent_DirectionMode.h"
#include "unitysdk/Cinemachine/CinemachineImpulseManager_ImpulseEvent_DissipationMode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Cinemachine { class CinemachineImpulseManager_ImpulseEvent; }
namespace Cinemachine { class SignalSourceAsset; }

#define CINEMACHINE_CINEMACHINEIMPULSEDEFINITION_CREATEANDRETURNEVENT_OFFSET UNITYSDK_OFFSET(0x1C4E5DD0)
#define CINEMACHINE_CINEMACHINEIMPULSEDEFINITION_CREATEEVENT_OFFSET UNITYSDK_OFFSET(0x1C4E5D90)
#define CINEMACHINE_CINEMACHINEIMPULSEDEFINITION_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1C4E5D50)
#define CINEMACHINE_CINEMACHINEIMPULSEDEFINITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4E6230)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineImpulseDefinition_TypeDefinitionIndex = 32624;

	class CinemachineImpulseDefinition : public ::System::Object
	{
	public:
		::System::Int32 m_ImpulseChannel; // 0x10
		::Cinemachine::SignalSourceAsset* m_RawSignal; // 0x18
		::System::Single m_AmplitudeGain; // 0x20
		::System::Single m_FrequencyGain; // 0x24
		::Cinemachine::CinemachineImpulseDefinition_RepeatMode m_RepeatMode; // 0x28
		::System::Boolean m_Randomize; // 0x2C
		::Cinemachine::CinemachineImpulseManager_EnvelopeDefinition m_TimeEnvelope; // 0x30
		::System::Single m_ImpactRadius; // 0x50
		::Cinemachine::CinemachineImpulseManager_ImpulseEvent_DirectionMode m_DirectionMode; // 0x54
		::Cinemachine::CinemachineImpulseManager_ImpulseEvent_DissipationMode m_DissipationMode; // 0x58
		::System::Single m_DissipationDistance; // 0x5C
		::System::Single m_PropagationSpeed; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEIMPULSEDEFINITION__CTOR_OFFSET))(this);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEIMPULSEDEFINITION_ONVALIDATE_OFFSET))(this);
		}

		::System::Void CreateEvent(::UnityEngine::Vector3 position, ::UnityEngine::Vector3 velocity)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEIMPULSEDEFINITION_CREATEEVENT_OFFSET))(this, position, velocity);
		}

		::Cinemachine::CinemachineImpulseManager_ImpulseEvent* CreateAndReturnEvent(::UnityEngine::Vector3 position, ::UnityEngine::Vector3 velocity)
		{
			return ((::Cinemachine::CinemachineImpulseManager_ImpulseEvent*(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEIMPULSEDEFINITION_CREATEANDRETURNEVENT_OFFSET))(this, position, velocity);
		}
	};
}
