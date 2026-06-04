#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Cinemachine { class CinemachineImpulseDefinition; }

#define CINEMACHINE_CINEMACHINEIMPULSESOURCE_GENERATEIMPULSEAT_OFFSET UNITYSDK_OFFSET(0x1464B8D0)
#define CINEMACHINE_CINEMACHINEIMPULSESOURCE_GENERATEIMPULSE_1_OFFSET UNITYSDK_OFFSET(0x1464B920)
#define CINEMACHINE_CINEMACHINEIMPULSESOURCE_GENERATEIMPULSE_2_OFFSET UNITYSDK_OFFSET(0x1464B9D0)
#define CINEMACHINE_CINEMACHINEIMPULSESOURCE_GENERATEIMPULSE_OFFSET UNITYSDK_OFFSET(0x14634C00)
#define CINEMACHINE_CINEMACHINEIMPULSESOURCE_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1464B870)
#define CINEMACHINE_CINEMACHINEIMPULSESOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x14635250)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineImpulseSource_TypeDefinitionIndex = 36939;

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

		::System::Void GenerateImpulseAt(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEIMPULSESOURCE_GENERATEIMPULSEAT_OFFSET))(this, a1, a2);
		}

		::System::Void GenerateImpulse(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEIMPULSESOURCE_GENERATEIMPULSE_OFFSET))(this, a1);
		}

		::System::Void GenerateImpulse_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEIMPULSESOURCE_GENERATEIMPULSE_1_OFFSET))(this, a1);
		}

		::System::Void GenerateImpulse_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEIMPULSESOURCE_GENERATEIMPULSE_2_OFFSET))(this);
		}
	};
}
