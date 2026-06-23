#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/LensSettings_OverrideModes.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Camera_GateFitMode.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class Camera; }

#define CINEMACHINE_LENSSETTINGS_FROMCAMERA_OFFSET UNITYSDK_OFFSET(0x1E425380)
#define CINEMACHINE_LENSSETTINGS_GET_ASPECT_OFFSET UNITYSDK_OFFSET(0xA64A00)
#define CINEMACHINE_LENSSETTINGS_GET_ISPHYSICALCAMERA_OFFSET UNITYSDK_OFFSET(0xA64A30)
#define CINEMACHINE_LENSSETTINGS_GET_ORTHOGRAPHIC_OFFSET UNITYSDK_OFFSET(0xA649B0)
#define CINEMACHINE_LENSSETTINGS_GET_SENSORSIZE_OFFSET UNITYSDK_OFFSET(0x701DB0)
#define CINEMACHINE_LENSSETTINGS_LERP_OFFSET UNITYSDK_OFFSET(0x1E4259B0)
#define CINEMACHINE_LENSSETTINGS_SET_ISPHYSICALCAMERA_OFFSET UNITYSDK_OFFSET(0xA64A50)
#define CINEMACHINE_LENSSETTINGS_SET_ORTHOGRAPHIC_OFFSET UNITYSDK_OFFSET(0xA649D0)
#define CINEMACHINE_LENSSETTINGS_SET_SENSORSIZE_OFFSET UNITYSDK_OFFSET(0xA649F0)
#define CINEMACHINE_LENSSETTINGS_SNAPSHOTCAMERAREADONLYPROPERTIES_1_OFFSET UNITYSDK_OFFSET(0xA64A70)
#define CINEMACHINE_LENSSETTINGS_SNAPSHOTCAMERAREADONLYPROPERTIES_OFFSET UNITYSDK_OFFSET(0xA64A60)
#define CINEMACHINE_LENSSETTINGS_VALIDATE_OFFSET UNITYSDK_OFFSET(0xA64B20)
#define CINEMACHINE_LENSSETTINGS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E425B40)
#define CINEMACHINE_LENSSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0xA64AD0)

namespace Cinemachine
{
	inline static constexpr unsigned int LensSettings_TypeDefinitionIndex = 34139;

	struct alignas(4) LensSettings
	{
		static ::Cinemachine::LensSettings* StaticGet_Default()
		{
			return (::Cinemachine::LensSettings*)Il2CppClass::FromTypeDefinitionIndex(LensSettings_TypeDefinitionIndex)->GetStaticField(0x8290);
		}
		::System::Single FieldOfView; // 0x10
		::System::Single OrthographicSize; // 0x14
		::System::Single NearClipPlane; // 0x18
		::System::Single FarClipPlane; // 0x1C
		::System::Single Dutch; // 0x20
		::Cinemachine::LensSettings_OverrideModes ModeOverride; // 0x24
		::UnityEngine::Vector2 LensShift; // 0x28
		::UnityEngine::Camera_GateFitMode GateFit; // 0x30
		::UnityEngine::Vector2 m_SensorSize; // 0x34
		::System::Boolean m_OrthoFromCamera; // 0x3C
		::System::Boolean m_PhysicalFromCamera; // 0x3D

		::System::Void _ctor(::System::Single verticalFOV, ::System::Single orthographicSize, ::System::Single nearClip, ::System::Single farClip, ::System::Single dutch)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_LENSSETTINGS__CTOR_OFFSET))(this, verticalFOV, orthographicSize, nearClip, farClip, dutch);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CINEMACHINE_LENSSETTINGS__CCTOR_OFFSET))();
		}

		::System::Boolean get_Orthographic()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_LENSSETTINGS_GET_ORTHOGRAPHIC_OFFSET))(this);
		}

		::System::Void set_Orthographic(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CINEMACHINE_LENSSETTINGS_SET_ORTHOGRAPHIC_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_SensorSize()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_LENSSETTINGS_GET_SENSORSIZE_OFFSET))(this);
		}

		::System::Void set_SensorSize(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CINEMACHINE_LENSSETTINGS_SET_SENSORSIZE_OFFSET))(this, value);
		}

		::System::Single get_Aspect()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_LENSSETTINGS_GET_ASPECT_OFFSET))(this);
		}

		::System::Boolean get_IsPhysicalCamera()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_LENSSETTINGS_GET_ISPHYSICALCAMERA_OFFSET))(this);
		}

		::System::Void set_IsPhysicalCamera(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CINEMACHINE_LENSSETTINGS_SET_ISPHYSICALCAMERA_OFFSET))(this, value);
		}

		static ::Cinemachine::LensSettings FromCamera(::UnityEngine::Camera* fromCamera)
		{
			return ((::Cinemachine::LensSettings(*)(::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + CINEMACHINE_LENSSETTINGS_FROMCAMERA_OFFSET))(fromCamera);
		}

		::System::Void SnapshotCameraReadOnlyProperties(::UnityEngine::Camera* camera)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + CINEMACHINE_LENSSETTINGS_SNAPSHOTCAMERAREADONLYPROPERTIES_OFFSET))(this, camera);
		}

		::System::Void SnapshotCameraReadOnlyProperties_1(::Cinemachine::LensSettings& lens)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::LensSettings&))((::PBYTE)hIl2Cpp + CINEMACHINE_LENSSETTINGS_SNAPSHOTCAMERAREADONLYPROPERTIES_1_OFFSET))(this, lens);
		}

		static ::Cinemachine::LensSettings Lerp(::Cinemachine::LensSettings lensA, ::Cinemachine::LensSettings lensB, ::System::Single t)
		{
			return ((::Cinemachine::LensSettings(*)(::Cinemachine::LensSettings, ::Cinemachine::LensSettings, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_LENSSETTINGS_LERP_OFFSET))(lensA, lensB, t);
		}

		::System::Void Validate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_LENSSETTINGS_VALIDATE_OFFSET))(this);
		}
	};
}
