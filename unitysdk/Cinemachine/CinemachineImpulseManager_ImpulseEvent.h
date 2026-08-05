#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CinemachineImpulseManager_EnvelopeDefinition.h"
#include "unitysdk/Cinemachine/CinemachineImpulseManager_ImpulseEvent_DirectionMode.h"
#include "unitysdk/Cinemachine/CinemachineImpulseManager_ImpulseEvent_DissipationMode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Cinemachine { class ISignalSource6D; }

#define CINEMACHINE_CINEMACHINEIMPULSEMANAGER_IMPULSEEVENT_CANCEL_OFFSET UNITYSDK_OFFSET(0x1FB2EA00)
#define CINEMACHINE_CINEMACHINEIMPULSEMANAGER_IMPULSEEVENT_CLEAR_OFFSET UNITYSDK_OFFSET(0x1FB2F1C0)
#define CINEMACHINE_CINEMACHINEIMPULSEMANAGER_IMPULSEEVENT_DISTANCEDECAY_OFFSET UNITYSDK_OFFSET(0x1FB2EA50)
#define CINEMACHINE_CINEMACHINEIMPULSEMANAGER_IMPULSEEVENT_GETDECAYEDSIGNAL_OFFSET UNITYSDK_OFFSET(0x1FB2EB20)
#define CINEMACHINE_CINEMACHINEIMPULSEMANAGER_IMPULSEEVENT_GET_EXPIRED_OFFSET UNITYSDK_OFFSET(0x1FB2E8D0)
#define CINEMACHINE_CINEMACHINEIMPULSEMANAGER_IMPULSEEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB2F210)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineImpulseManager_ImpulseEvent_TypeDefinitionIndex = 34819;

	class CinemachineImpulseManager_ImpulseEvent : public ::System::Object
	{
	public:
		::Cinemachine::CinemachineImpulseManager_EnvelopeDefinition m_Envelope; // 0x10
		::Cinemachine::ISignalSource6D* m_SignalSource; // 0x30
		::Cinemachine::CinemachineImpulseManager_ImpulseEvent_DissipationMode m_DissipationMode; // 0x38
		::System::Single m_DissipationDistance; // 0x3C
		::System::Single m_PropagationSpeed; // 0x40
		::System::Int32 m_Channel; // 0x44
		::Cinemachine::CinemachineImpulseManager_ImpulseEvent_DirectionMode m_DirectionMode; // 0x48
		::System::Single m_StartTime; // 0x4C
		::UnityEngine::Vector3 m_Position; // 0x50
		::System::Single m_Radius; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEIMPULSEMANAGER_IMPULSEEVENT__CTOR_OFFSET))(this);
		}

		::System::Boolean get_Expired()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEIMPULSEMANAGER_IMPULSEEVENT_GET_EXPIRED_OFFSET))(this);
		}

		::System::Void Cancel(::System::Single time, ::System::Boolean forceNoDecay)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEIMPULSEMANAGER_IMPULSEEVENT_CANCEL_OFFSET))(this, time, forceNoDecay);
		}

		::System::Single DistanceDecay(::System::Single distance)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEIMPULSEMANAGER_IMPULSEEVENT_DISTANCEDECAY_OFFSET))(this, distance);
		}

		::System::Boolean GetDecayedSignal(::UnityEngine::Vector3 listenerPosition, ::System::Boolean use2D, ::UnityEngine::Vector3& pos, ::UnityEngine::Quaternion& rot)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEIMPULSEMANAGER_IMPULSEEVENT_GETDECAYEDSIGNAL_OFFSET))(this, listenerPosition, use2D, pos, rot);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEIMPULSEMANAGER_IMPULSEEVENT_CLEAR_OFFSET))(this);
		}
	};
}
