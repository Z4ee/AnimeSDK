#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Camera_FieldOfViewAxis.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCAMERAINIT_GETZOOMRANGE_OFFSET UNITYSDK_OFFSET(0x134FD4C0)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCAMERAINIT_INITCAMERAPIPELINE_OFFSET UNITYSDK_OFFSET(0x134FD0E0)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCAMERAINIT_ONCHANGEUSECAMERAPIPELINE_OFFSET UNITYSDK_OFFSET(0x134FD0A0)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCAMERAINIT__CTOR_OFFSET UNITYSDK_OFFSET(0x134FD550)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowCameraInit_TypeDefinitionIndex = 65533;

	class ConfigHollowCameraInit : public ::System::Object
	{
	public:
		::System::String* centerKey; // 0x10
		::System::String* safeAreaKey; // 0x18
		::System::Single fieldOfView; // 0x20
		::UnityEngine::Vector3 eulerAngle; // 0x24
		::UnityEngine::Vector2 initZRange; // 0x30
		::System::Single zZoomDumpTime; // 0x38
		::UnityEngine::Camera_FieldOfViewAxis foxAxis; // 0x3C
		::System::Single initZ; // 0x40
		::System::Single zZoomChangeSpeed; // 0x44
		::System::Single zZoomChangeSpeedMouseScroll; // 0x48
		::System::Boolean EnableGuiCamAnim; // 0x4C
		::System::Boolean OpenPipelineFullLog; // 0x4D
		::System::Boolean UseCameraPipeline; // 0x4E
		::System::Boolean IsEnableLog; // 0x4F
		::System::Single zZoomChangeSpeedBtn; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCAMERAINIT__CTOR_OFFSET))(this);
		}

		::System::Void OnChangeUseCameraPipeline()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCAMERAINIT_ONCHANGEUSECAMERAPIPELINE_OFFSET))(this);
		}

		::System::Void InitCameraPipeline()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCAMERAINIT_INITCAMERAPIPELINE_OFFSET))(this);
		}

		::UnityEngine::Vector2 GetZoomRange(::System::Single baseZ, ::System::Single curBaseZ)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCAMERAINIT_GETZOOMRANGE_OFFSET))(this, baseZ, curBaseZ);
		}
	};
}
