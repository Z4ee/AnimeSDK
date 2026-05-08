#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CINEMACHINE_CINEMACHINEINDEPENDENTIMPULSELISTENER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1C3578D0)
#define CINEMACHINE_CINEMACHINEINDEPENDENTIMPULSELISTENER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1C3576C0)
#define CINEMACHINE_CINEMACHINEINDEPENDENTIMPULSELISTENER_RESET_OFFSET UNITYSDK_OFFSET(0x1C3576A0)
#define CINEMACHINE_CINEMACHINEINDEPENDENTIMPULSELISTENER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1C3576E0)
#define CINEMACHINE_CINEMACHINEINDEPENDENTIMPULSELISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C357C10)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineIndependentImpulseListener_TypeDefinitionIndex = 32636;

	class CinemachineIndependentImpulseListener : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Vector3 impulsePosLastFrame; // 0x18
		::UnityEngine::Quaternion impulseRotLastFrame; // 0x24
		::System::Int32 m_ChannelMask; // 0x34
		::System::Single m_Gain; // 0x38
		::System::Boolean m_Use2DDistance; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEINDEPENDENTIMPULSELISTENER__CTOR_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEINDEPENDENTIMPULSELISTENER_RESET_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEINDEPENDENTIMPULSELISTENER_ONENABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEINDEPENDENTIMPULSELISTENER_UPDATE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEINDEPENDENTIMPULSELISTENER_LATEUPDATE_OFFSET))(this);
		}
	};
}
