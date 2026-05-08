#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Camera_FieldOfViewAxis.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCAMERAINIT_GETZOOMRANGE_OFFSET UNITYSDK_OFFSET(0x159ED510)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCAMERAINIT_INITCAMERAPIPELINE_OFFSET UNITYSDK_OFFSET(0x159ED140)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCAMERAINIT_ONCHANGEUSECAMERAPIPELINE_OFFSET UNITYSDK_OFFSET(0x159ED100)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCAMERAINIT__CTOR_OFFSET UNITYSDK_OFFSET(0x159ED5A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowCameraInit_TypeDefinitionIndex = 46135;

	class ConfigHollowCameraInit : public ::System::Object
	{
	public:
		::System::String* safeAreaKey; // 0x10
		::System::String* centerKey; // 0x18
		::UnityEngine::Vector2 initZRange; // 0x20
		::System::Single zZoomChangeSpeedMouseScroll; // 0x28
		::UnityEngine::Vector3 eulerAngle; // 0x2C
		::System::Single zZoomChangeSpeedBtn; // 0x38
		::UnityEngine::Camera_FieldOfViewAxis foxAxis; // 0x3C
		::System::Single zZoomDumpTime; // 0x40
		::System::Single initZ; // 0x44
		::System::Boolean IsEnableLog; // 0x48
		::System::Boolean OpenPipelineFullLog; // 0x49
		::System::Boolean EnableGuiCamAnim; // 0x4A
		::System::Boolean UseCameraPipeline; // 0x4B
		::System::Single zZoomChangeSpeed; // 0x4C
		::System::Single fieldOfView; // 0x50

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
