#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CinemachineImpulseManager_EnvelopeDefinition.h"
#include "unitysdk/Cinemachine/CinemachineImpulseManager_ImpulseEvent_DirectionMode.h"
#include "unitysdk/Cinemachine/CinemachineImpulseManager_ImpulseEvent_DissipationMode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Cinemachine { class ISignalSource6D; }

#define CINEMACHINE_CINEMACHINEIMPULSEMANAGER_IMPULSEEVENT_CANCEL_OFFSET UNITYSDK_OFFSET(0x1464B720)
#define CINEMACHINE_CINEMACHINEIMPULSEMANAGER_IMPULSEEVENT_CLEAR_OFFSET UNITYSDK_OFFSET(0x1464ABD0)
#define CINEMACHINE_CINEMACHINEIMPULSEMANAGER_IMPULSEEVENT_DISTANCEDECAY_OFFSET UNITYSDK_OFFSET(0x1464B770)
#define CINEMACHINE_CINEMACHINEIMPULSEMANAGER_IMPULSEEVENT_GETDECAYEDSIGNAL_OFFSET UNITYSDK_OFFSET(0x1464AC20)
#define CINEMACHINE_CINEMACHINEIMPULSEMANAGER_IMPULSEEVENT_GET_EXPIRED_OFFSET UNITYSDK_OFFSET(0x1464AA40)
#define CINEMACHINE_CINEMACHINEIMPULSEMANAGER_IMPULSEEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1464B400)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineImpulseManager_ImpulseEvent_TypeDefinitionIndex = 36936;

	class CinemachineImpulseManager_ImpulseEvent : public ::System::Object
	{
	public:
		::Cinemachine::ISignalSource6D* m_SignalSource; // 0x10
		::Cinemachine::CinemachineImpulseManager_EnvelopeDefinition m_Envelope; // 0x18
		::System::Single m_StartTime; // 0x38
		::System::Int32 m_Channel; // 0x3C
		::Cinemachine::CinemachineImpulseManager_ImpulseEvent_DissipationMode m_DissipationMode; // 0x40
		::System::Single m_PropagationSpeed; // 0x44
		::UnityEngine::Vector3 m_Position; // 0x48
		::Cinemachine::CinemachineImpulseManager_ImpulseEvent_DirectionMode m_DirectionMode; // 0x54
		::System::Single m_Radius; // 0x58
		::System::Single m_DissipationDistance; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEIMPULSEMANAGER_IMPULSEEVENT__CTOR_OFFSET))(this);
		}

		::System::Boolean get_Expired()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEIMPULSEMANAGER_IMPULSEEVENT_GET_EXPIRED_OFFSET))(this);
		}

		::System::Void Cancel(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEIMPULSEMANAGER_IMPULSEEVENT_CANCEL_OFFSET))(this, a1, a2);
		}

		::System::Single DistanceDecay(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEIMPULSEMANAGER_IMPULSEEVENT_DISTANCEDECAY_OFFSET))(this, a1);
		}

		::System::Boolean GetDecayedSignal(::UnityEngine::Vector3 a1, ::System::Boolean a2, ::UnityEngine::Vector3& a3, ::UnityEngine::Quaternion& a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEIMPULSEMANAGER_IMPULSEEVENT_GETDECAYEDSIGNAL_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEIMPULSEMANAGER_IMPULSEEVENT_CLEAR_OFFSET))(this);
		}
	};
}
