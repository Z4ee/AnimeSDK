#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class Camera; }

#define CINEMACHINE_LENSSETTINGS_FROMCAMERA_OFFSET UNITYSDK_OFFSET(0x14663D40)
#define CINEMACHINE_LENSSETTINGS_GET_ASPECT_OFFSET UNITYSDK_OFFSET(0x2BD11E0)
#define CINEMACHINE_LENSSETTINGS_GET_ISPHYSICALCAMERA_OFFSET UNITYSDK_OFFSET(0x5D4D0)
#define CINEMACHINE_LENSSETTINGS_GET_ORTHOGRAPHIC_OFFSET UNITYSDK_OFFSET(0x2BBAA60)
#define CINEMACHINE_LENSSETTINGS_GET_SENSORSIZE_OFFSET UNITYSDK_OFFSET(0x2AD20)
#define CINEMACHINE_LENSSETTINGS_LERP_OFFSET UNITYSDK_OFFSET(0x14663FC0)
#define CINEMACHINE_LENSSETTINGS_SET_ISPHYSICALCAMERA_OFFSET UNITYSDK_OFFSET(0x5EB40)
#define CINEMACHINE_LENSSETTINGS_SET_ORTHOGRAPHIC_OFFSET UNITYSDK_OFFSET(0x2BBAA70)
#define CINEMACHINE_LENSSETTINGS_SET_SENSORSIZE_OFFSET UNITYSDK_OFFSET(0x2AD30)
#define CINEMACHINE_LENSSETTINGS_SNAPSHOTCAMERAREADONLYPROPERTIES_1_OFFSET UNITYSDK_OFFSET(0x2BD1290)
#define CINEMACHINE_LENSSETTINGS_SNAPSHOTCAMERAREADONLYPROPERTIES_OFFSET UNITYSDK_OFFSET(0x2BD1210)
#define CINEMACHINE_LENSSETTINGS_VALIDATE_OFFSET UNITYSDK_OFFSET(0x2BD1300)
#define CINEMACHINE_LENSSETTINGS__CCTOR_OFFSET UNITYSDK_OFFSET(0x14664150)
#define CINEMACHINE_LENSSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x2BD12C0)

namespace Cinemachine
{
	inline static constexpr unsigned int LensSettings_TypeDefinitionIndex = 36901;

	struct alignas(4) LensSettings
	{
		static ::Cinemachine::LensSettings* StaticGet_Default()
		{
			return (::Cinemachine::LensSettings*)Il2CppClass::FromTypeDefinitionIndex(LensSettings_TypeDefinitionIndex)->GetStaticField(0x860);
		}
		::System::Single FieldOfView; // 0x10
		::System::Single OrthographicSize; // 0x14
		::System::Single NearClipPlane; // 0x18
		::System::Single FarClipPlane; // 0x1C
		::System::Single Dutch; // 0x20
		::System::Boolean _Orthographic_k__BackingField; // 0x24
		::UnityEngine::Vector2 _SensorSize_k__BackingField; // 0x28
		::System::Boolean _IsPhysicalCamera_k__BackingField; // 0x30
		::UnityEngine::Vector2 LensShift; // 0x34

		::System::Void _ctor(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_LENSSETTINGS__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CINEMACHINE_LENSSETTINGS__CCTOR_OFFSET))();
		}

		::System::Boolean get_Orthographic()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_LENSSETTINGS_GET_ORTHOGRAPHIC_OFFSET))(this);
		}

		::System::Void set_Orthographic(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CINEMACHINE_LENSSETTINGS_SET_ORTHOGRAPHIC_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 get_SensorSize()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_LENSSETTINGS_GET_SENSORSIZE_OFFSET))(this);
		}

		::System::Void set_SensorSize(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CINEMACHINE_LENSSETTINGS_SET_SENSORSIZE_OFFSET))(this, a1);
		}

		::System::Single get_Aspect()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_LENSSETTINGS_GET_ASPECT_OFFSET))(this);
		}

		::System::Boolean get_IsPhysicalCamera()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_LENSSETTINGS_GET_ISPHYSICALCAMERA_OFFSET))(this);
		}

		::System::Void set_IsPhysicalCamera(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CINEMACHINE_LENSSETTINGS_SET_ISPHYSICALCAMERA_OFFSET))(this, a1);
		}

		static ::Cinemachine::LensSettings FromCamera(::UnityEngine::Camera* a1)
		{
			return ((::Cinemachine::LensSettings(*)(::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + CINEMACHINE_LENSSETTINGS_FROMCAMERA_OFFSET))(a1);
		}

		::System::Void SnapshotCameraReadOnlyProperties(::UnityEngine::Camera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + CINEMACHINE_LENSSETTINGS_SNAPSHOTCAMERAREADONLYPROPERTIES_OFFSET))(this, a1);
		}

		::System::Void SnapshotCameraReadOnlyProperties_1(::Cinemachine::LensSettings& a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::LensSettings&))((::PBYTE)hIl2Cpp + CINEMACHINE_LENSSETTINGS_SNAPSHOTCAMERAREADONLYPROPERTIES_1_OFFSET))(this, a1);
		}

		static ::Cinemachine::LensSettings Lerp(::Cinemachine::LensSettings a1, ::Cinemachine::LensSettings a2, ::System::Single a3)
		{
			return ((::Cinemachine::LensSettings(*)(::Cinemachine::LensSettings, ::Cinemachine::LensSettings, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_LENSSETTINGS_LERP_OFFSET))(a1, a2, a3);
		}

		::System::Void Validate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_LENSSETTINGS_VALIDATE_OFFSET))(this);
		}
	};
}
