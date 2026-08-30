#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class Camera; }

#define RPG_CUSTOMRP_DLSSPASS_CAMERAPARAMETERS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3AE0A70)
#define RPG_CUSTOMRP_DLSSPASS_CAMERAPARAMETERS__CTOR_OFFSET UNITYSDK_OFFSET(0x3AE0A40)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int DLSSPass_CameraParameters_TypeDefinitionIndex = 36867;

	struct alignas(8) DLSSPass_CameraParameters
	{
		::UnityEngine::Camera* camera; // 0x10
		::System::Boolean enabled; // 0x18
		::System::Int32 quality; // 0x1C
		::System::Single sharpness; // 0x20
		::UnityEngine::Vector2 taaJitter; // 0x24

		::System::Void _ctor(::UnityEngine::Camera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DLSSPASS_CAMERAPARAMETERS__CTOR_OFFSET))(this, a1);
		}

		/*
		::System::Void _ctor_1(::UnityEngine::Camera* a1, ::UnityEngine::Rendering::DLSSData& a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::Rendering::DLSSData&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DLSSPASS_CAMERAPARAMETERS__CTOR_1_OFFSET))(this, a1, a2);
		}
		*/
	};
}
