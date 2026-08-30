#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGCamera/CameraStateData.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class EasingFunction_Function;
class EasingFunction_FunctionValue;

#define RPGCAMERA_BLENDERUTILS_LERPPOS_OFFSET UNITYSDK_OFFSET(0xB2D9330)
#define RPGCAMERA_BLENDERUTILS_LERPRADIUS_OFFSET UNITYSDK_OFFSET(0xB2D88F0)
#define RPGCAMERA_BLENDERUTILS_LERPSPHERICAL_OFFSET UNITYSDK_OFFSET(0xB2D89D0)
#define RPGCAMERA_BLENDERUTILS_LERPSPH_OFFSET UNITYSDK_OFFSET(0xB2D8B00)
#define RPGCAMERA_BLENDERUTILS_LERPVECTOR3_OFFSET UNITYSDK_OFFSET(0xB2D8820)

namespace RPGCamera
{
	inline static constexpr unsigned int BlenderUtils_TypeDefinitionIndex = 44818;

	class BlenderUtils : public ::System::Object
	{
	public:
		static ::UnityEngine::Vector3 LerpVector3(::System::Single a1, ::EasingFunction_Function* a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4)
		{
			return ((::UnityEngine::Vector3(*)(::System::Single, ::EasingFunction_Function*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPGCAMERA_BLENDERUTILS_LERPVECTOR3_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Single LerpRadius(::System::Single a1, ::EasingFunction_FunctionValue* a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Single(*)(::System::Single, ::EasingFunction_FunctionValue*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPGCAMERA_BLENDERUTILS_LERPRADIUS_OFFSET))(a1, a2, a3, a4);
		}

		static ::UnityEngine::Vector3 LerpSpherical(::System::Single a1, ::EasingFunction_FunctionValue* a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4)
		{
			return ((::UnityEngine::Vector3(*)(::System::Single, ::EasingFunction_FunctionValue*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPGCAMERA_BLENDERUTILS_LERPSPHERICAL_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPGCamera::CameraStateData LerpSph(::System::Single a1, ::EasingFunction_FunctionValue* a2, ::RPGCamera::CameraStateData a3, ::RPGCamera::CameraStateData a4, ::RPGCamera::CameraStateData& a5)
		{
			return ((::RPGCamera::CameraStateData(*)(::System::Single, ::EasingFunction_FunctionValue*, ::RPGCamera::CameraStateData, ::RPGCamera::CameraStateData, ::RPGCamera::CameraStateData&))((::PBYTE)hIl2Cpp + RPGCAMERA_BLENDERUTILS_LERPSPH_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::RPGCamera::CameraStateData LerpPos(::System::Single a1, ::EasingFunction_FunctionValue* a2, ::RPGCamera::CameraStateData a3, ::RPGCamera::CameraStateData a4, ::RPGCamera::CameraStateData& a5)
		{
			return ((::RPGCamera::CameraStateData(*)(::System::Single, ::EasingFunction_FunctionValue*, ::RPGCamera::CameraStateData, ::RPGCamera::CameraStateData, ::RPGCamera::CameraStateData&))((::PBYTE)hIl2Cpp + RPGCAMERA_BLENDERUTILS_LERPPOS_OFFSET))(a1, a2, a3, a4, a5);
		}
	};
}
