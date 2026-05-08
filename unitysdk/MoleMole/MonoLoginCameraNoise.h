#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"

class Class_2_5F64140FAB2210F3;
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace MoleMole::Config { class ConfigCameraNoise; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Camera; }

#define MOLEMOLE_MONOLOGINCAMERANOISE_AWAKE_OFFSET UNITYSDK_OFFSET(0x10BD32E0)
#define MOLEMOLE_MONOLOGINCAMERANOISE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x10BD3440)
#define MOLEMOLE_MONOLOGINCAMERANOISE_STARTNOISE_OFFSET UNITYSDK_OFFSET(0x10BD3070)
#define MOLEMOLE_MONOLOGINCAMERANOISE_TICK_OFFSET UNITYSDK_OFFSET(0x10BD36E0)
#define MOLEMOLE_MONOLOGINCAMERANOISE__CTOR_OFFSET UNITYSDK_OFFSET(0x10BD3D20)

namespace MoleMole
{
	inline static constexpr unsigned int MonoLoginCameraNoise_TypeDefinitionIndex = 56946;

	class MonoLoginCameraNoise : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		::Cinemachine::CinemachineVirtualCamera* loginTV; // 0x58
		::MoleMole::Config::ConfigCameraNoise* cameraNoiseProfile; // 0x60
		::System::Single noiseDelayTime; // 0x68
		::System::Single noiseBlendDuration; // 0x6C
		::UnityEngine::AnimationCurve* noiseBlendSpeedCurve; // 0x70
		::UnityEngine::Camera* _mainCam; // 0x78
		::Class_2_5F64140FAB2210F3* _cameraClipPost; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLOGINCAMERANOISE__CTOR_OFFSET))(this);
		}

		::System::Void StartNoise()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLOGINCAMERANOISE_STARTNOISE_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLOGINCAMERANOISE_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLOGINCAMERANOISE_ONDESTROY_OFFSET))(this);
		}

		::System::Void Tick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLOGINCAMERANOISE_TICK_OFFSET))(this);
		}
	};
}
