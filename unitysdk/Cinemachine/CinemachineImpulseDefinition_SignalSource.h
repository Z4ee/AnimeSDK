#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Cinemachine { class CinemachineImpulseDefinition; }

#define CINEMACHINE_CINEMACHINEIMPULSEDEFINITION_SIGNALSOURCE_GETSIGNAL_OFFSET UNITYSDK_OFFSET(0x1E6968F0)
#define CINEMACHINE_CINEMACHINEIMPULSEDEFINITION_SIGNALSOURCE_GET_SIGNALDURATION_OFFSET UNITYSDK_OFFSET(0x1E6968B0)
#define CINEMACHINE_CINEMACHINEIMPULSEDEFINITION_SIGNALSOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E696840)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineImpulseDefinition_SignalSource_TypeDefinitionIndex = 34177;

	class CinemachineImpulseDefinition_SignalSource : public ::System::Object
	{
	public:
		::Cinemachine::CinemachineImpulseDefinition* m_Def; // 0x10
		::UnityEngine::Vector3 m_Velocity; // 0x18
		::System::Single m_StartTimeOffset; // 0x24

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
