#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Cinemachine { class CinemachineImpulseDefinition; }

#define CINEMACHINE_CINEMACHINEIMPULSEDEFINITION_SIGNALSOURCE_GETSIGNAL_OFFSET UNITYSDK_OFFSET(0x1C353F20)
#define CINEMACHINE_CINEMACHINEIMPULSEDEFINITION_SIGNALSOURCE_GET_SIGNALDURATION_OFFSET UNITYSDK_OFFSET(0x1C353EE0)
#define CINEMACHINE_CINEMACHINEIMPULSEDEFINITION_SIGNALSOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C353E70)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineImpulseDefinition_SignalSource_TypeDefinitionIndex = 32626;

	class CinemachineImpulseDefinition_SignalSource : public ::System::Object
	{
	public:
		::Cinemachine::CinemachineImpulseDefinition* m_Def; // 0x10
		::System::Single m_StartTimeOffset; // 0x18
		::UnityEngine::Vector3 m_Velocity; // 0x1C

		::System::Void _ctor(::Cinemachine::CinemachineImpulseDefinition* def, ::UnityEngine::Vector3 velocity)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineImpulseDefinition*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEIMPULSEDEFINITION_SIGNALSOURCE__CTOR_OFFSET))(this, def, velocity);
		}

		::System::Single get_SignalDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEIMPULSEDEFINITION_SIGNALSOURCE_GET_SIGNALDURATION_OFFSET))(this);
		}

		::System::Void GetSignal(::System::Single timeSinceSignalStart, ::UnityEngine::Vector3& pos, ::UnityEngine::Quaternion& rot)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEIMPULSEDEFINITION_SIGNALSOURCE_GETSIGNAL_OFFSET))(this, timeSinceSignalStart, pos, rot);
		}
	};
}
