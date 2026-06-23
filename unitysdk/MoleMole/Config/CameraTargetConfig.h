#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Config { class CameraChangeAttribute; }
namespace MoleMole::Config { class CameraChangeAttribute_FOV; }
template <typename T> class Class_2_4884F46B6DD72B5E_Class_1_E8C576B7D37F4D22;

#define MOLEMOLE_CONFIG_CAMERATARGETCONFIG_GETFOVPARAM_OFFSET UNITYSDK_OFFSET(0x106C7BC0)
#define MOLEMOLE_CONFIG_CAMERATARGETCONFIG_GETPOSITIONPARAM_OFFSET UNITYSDK_OFFSET(0x106C7600)
#define MOLEMOLE_CONFIG_CAMERATARGETCONFIG_GETROTATIONPARAM_OFFSET UNITYSDK_OFFSET(0x106C78A0)
#define MOLEMOLE_CONFIG_CAMERATARGETCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x106C7CA0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int CameraTargetConfig_TypeDefinitionIndex = 86117;

	class CameraTargetConfig : public ::System::Object
	{
	public:
		::MoleMole::Config::CameraChangeAttribute* posConfig; // 0x10
		::MoleMole::Config::CameraChangeAttribute* rotateConfig; // 0x18
		::MoleMole::Config::CameraChangeAttribute_FOV* fovConfig; // 0x20
		::System::Single changeTime; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERATARGETCONFIG__CTOR_OFFSET))(this);
		}

		::Class_2_4884F46B6DD72B5E_Class_1_E8C576B7D37F4D22<::UnityEngine::Vector3>* GetPositionParam(::UnityEngine::Vector3 now_position)
		{
			return ((::Class_2_4884F46B6DD72B5E_Class_1_E8C576B7D37F4D22<::UnityEngine::Vector3>*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERATARGETCONFIG_GETPOSITIONPARAM_OFFSET))(this, now_position);
		}

		::Class_2_4884F46B6DD72B5E_Class_1_E8C576B7D37F4D22<::UnityEngine::Quaternion>* GetRotationParam(::UnityEngine::Quaternion now_rotation)
		{
			return ((::Class_2_4884F46B6DD72B5E_Class_1_E8C576B7D37F4D22<::UnityEngine::Quaternion>*(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERATARGETCONFIG_GETROTATIONPARAM_OFFSET))(this, now_rotation);
		}

		::Class_2_4884F46B6DD72B5E_Class_1_E8C576B7D37F4D22<::System::Single>* GetFOVParam(::System::Single now_fov)
		{
			return ((::Class_2_4884F46B6DD72B5E_Class_1_E8C576B7D37F4D22<::System::Single>*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERATARGETCONFIG_GETFOVPARAM_OFFSET))(this, now_fov);
		}
	};
}
