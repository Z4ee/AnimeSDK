#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/Struct_2_7E9A981C4706FCC7.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_484FC6C8D28A6453;
class Class_2_EF480C3F09B3116B;
namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace MoleMole::Battle { class Entity; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Renderer; }

#define MOLEMOLE_VEHICLE_VEHICLETESTCAMERAMONO_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x15B20B50)
#define MOLEMOLE_VEHICLE_VEHICLETESTCAMERAMONO_UPDATE_OFFSET UNITYSDK_OFFSET(0x15B20690)
#define MOLEMOLE_VEHICLE_VEHICLETESTCAMERAMONO__CTOR_OFFSET UNITYSDK_OFFSET(0x15B20BA0)

namespace MoleMole::Vehicle
{
	inline static constexpr unsigned int VehicleTestCameraMono_TypeDefinitionIndex = 57312;

	class VehicleTestCameraMono : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Cinemachine::CinemachineVirtualCameraBase* virtualCamera; // 0x18
		::System::Boolean catchAvatar; // 0x20
		::System::Single fieldOfView; // 0x24
		::UnityEngine::Vector3 followOffset; // 0x28
		::UnityEngine::Vector3 cameraOffset; // 0x34
		::UnityEngine::Vector3 cameraOffsetDamping; // 0x40
		::UnityEngine::Vector3 cameraRotation; // 0x4C
		::UnityEngine::AnimationCurve* acceleratePullCurve; // 0x58
		::System::Single curveBlend; // 0x60
		::MoleMole::Battle::Entity* Field_5_10; // 0x68
		::Il2CppArray<::UnityEngine::Renderer*>* Field_5_9; // 0x70
		::Class_1_484FC6C8D28A6453* Field_5_8; // 0x78
		::Class_2_EF480C3F09B3116B* Field_5_15; // 0x80
		::Cinemachine::CameraState Field_5_14; // 0x88
		::Struct_2_7E9A981C4706FCC7 Field_5_13; // 0x170

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VEHICLE_VEHICLETESTCAMERAMONO__CTOR_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VEHICLE_VEHICLETESTCAMERAMONO_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VEHICLE_VEHICLETESTCAMERAMONO_ONDESTROY_OFFSET))(this);
		}
	};
}
