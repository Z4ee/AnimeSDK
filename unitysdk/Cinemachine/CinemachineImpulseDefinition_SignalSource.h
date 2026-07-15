#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Cinemachine { class CinemachineImpulseDefinition; }

#define CINEMACHINE_CINEMACHINEIMPULSEDEFINITION_SIGNALSOURCE_GETSIGNAL_OFFSET UNITYSDK_OFFSET(0x1728AB80)
#define CINEMACHINE_CINEMACHINEIMPULSEDEFINITION_SIGNALSOURCE_GET_SIGNALDURATION_OFFSET UNITYSDK_OFFSET(0x1728AAE0)
#define CINEMACHINE_CINEMACHINEIMPULSEDEFINITION_SIGNALSOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1728A7E0)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineImpulseDefinition_SignalSource_TypeDefinitionIndex = 37712;

	class CinemachineImpulseDefinition_SignalSource : public ::System::Object
	{
	public:
		::Cinemachine::CinemachineImpulseDefinition* m_Def; // 0x10
		::System::Single m_StartTimeOffset; // 0x18
		::UnityEngine::Vector3 m_Velocity; // 0x1C

		::System::Void _ctor(::Cinemachine::CinemachineImpulseDefinition* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineImpulseDefinition*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEIMPULSEDEFINITION_SIGNALSOURCE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Single get_SignalDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEIMPULSEDEFINITION_SIGNALSOURCE_GET_SIGNALDURATION_OFFSET))(this);
		}

		::System::Void GetSignal(::System::Single a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Quaternion& a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEIMPULSEDEFINITION_SIGNALSOURCE_GETSIGNAL_OFFSET))(this, a1, a2, a3);
		}
	};
}
