#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Cinemachine { class CinemachineImpulseDefinition; }

#define CINEMACHINE_CINEMACHINEIMPULSESOURCE_GENERATEIMPULSEAT_OFFSET UNITYSDK_OFFSET(0x1E814650)
#define CINEMACHINE_CINEMACHINEIMPULSESOURCE_GENERATEIMPULSE_1_OFFSET UNITYSDK_OFFSET(0x1E814730)
#define CINEMACHINE_CINEMACHINEIMPULSESOURCE_GENERATEIMPULSE_2_OFFSET UNITYSDK_OFFSET(0x1E8147E0)
#define CINEMACHINE_CINEMACHINEIMPULSESOURCE_GENERATEIMPULSE_OFFSET UNITYSDK_OFFSET(0x1E8146A0)
#define CINEMACHINE_CINEMACHINEIMPULSESOURCE_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1E8145F0)
#define CINEMACHINE_CINEMACHINEIMPULSESOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E814890)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineImpulseSource_TypeDefinitionIndex = 34186;

	class CinemachineImpulseSource : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Cinemachine::CinemachineImpulseDefinition* m_ImpulseDefinition; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEIMPULSESOURCE__CTOR_OFFSET))(this);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEIMPULSESOURCE_ONVALIDATE_OFFSET))(this);
		}

		::System::Void GenerateImpulseAt(::UnityEngine::Vector3 position, ::UnityEngine::Vector3 velocity)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEIMPULSESOURCE_GENERATEIMPULSEAT_OFFSET))(this, position, velocity);
		}

		::System::Void GenerateImpulse(::UnityEngine::Vector3 velocity)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEIMPULSESOURCE_GENERATEIMPULSE_OFFSET))(this, velocity);
		}

		::System::Void GenerateImpulse_1(::System::Single force)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEIMPULSESOURCE_GENERATEIMPULSE_1_OFFSET))(this, force);
		}

		::System::Void GenerateImpulse_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEIMPULSESOURCE_GENERATEIMPULSE_2_OFFSET))(this);
		}
	};
}
