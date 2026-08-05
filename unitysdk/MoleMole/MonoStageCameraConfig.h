#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace Cinemachine { class CinemachineBlenderSettings; }
namespace Cinemachine { class CinemachineVirtualCameraBase; }

#define MOLEMOLE_MONOSTAGECAMERACONFIG_GET_CHILDCAMERAS_OFFSET UNITYSDK_OFFSET(0x136DFDF0)
#define MOLEMOLE_MONOSTAGECAMERACONFIG_METHOD_5_25EC451C0EA68F53_OFFSET UNITYSDK_OFFSET(0x136DFE10)
#define MOLEMOLE_MONOSTAGECAMERACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x136E0160)

namespace MoleMole
{
	inline static constexpr unsigned int MonoStageCameraConfig_TypeDefinitionIndex = 78255;

	class MonoStageCameraConfig : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Cinemachine::CinemachineBlenderSettings* globalStageCameraBlends; // 0x18
		::Cinemachine::CinemachineBlenderSettings* customStageCameraBlends; // 0x20
		::Il2CppArray<::Cinemachine::CinemachineVirtualCameraBase*>* m_ChildCameras; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGECAMERACONFIG__CTOR_OFFSET))(this);
		}

		::Il2CppArray<::Cinemachine::CinemachineVirtualCameraBase*>* get_ChildCameras()
		{
			return ((::Il2CppArray<::Cinemachine::CinemachineVirtualCameraBase*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGECAMERACONFIG_GET_CHILDCAMERAS_OFFSET))(this);
		}

		::System::Void Method_5_25EC451C0EA68F53()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGECAMERACONFIG_METHOD_5_25EC451C0EA68F53_OFFSET))(this);
		}
	};
}
