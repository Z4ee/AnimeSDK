#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGCamera/CameraStateData.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class EasingFunction_Function;
class EasingFunction_FunctionValue;

#define RPGCAMERA_BLENDERUTILS_LERPPOS_OFFSET UNITYSDK_OFFSET(0x8DEF7D0)
#define RPGCAMERA_BLENDERUTILS_LERPRADIUS_OFFSET UNITYSDK_OFFSET(0x8DEED90)
#define RPGCAMERA_BLENDERUTILS_LERPSPHERICAL_OFFSET UNITYSDK_OFFSET(0x8DEEE70)
#define RPGCAMERA_BLENDERUTILS_LERPSPH_OFFSET UNITYSDK_OFFSET(0x8DEEFA0)
#define RPGCAMERA_BLENDERUTILS_LERPVECTOR3_OFFSET UNITYSDK_OFFSET(0x8DEECE0)

namespace RPGCamera
{
	inline static constexpr unsigned int BlenderUtils_TypeDefinitionIndex = 40957;

	class BlenderUtils : public ::System::Object
	{
	public:
		static ::UnityEngine::Vector3 LerpVector3(::System::Single t, ::EasingFunction_Function* lerpFunc, ::UnityEngine::Vector3 fromVec, ::UnityEngine::Vector3 toVec)
		{
			return ((::UnityEngine::Vector3(*)(::System::Single, ::EasingFunction_Function*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPGCAMERA_BLENDERUTILS_LERPVECTOR3_OFFSET))(t, lerpFunc, fromVec, toVec);
		}

		static ::System::Single LerpRadius(::System::Single t, ::EasingFunction_FunctionValue* lerpFunc, ::System::Single from, ::System::Single to)
		{
			return ((::System::Single(*)(::System::Single, ::EasingFunction_FunctionValue*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPGCAMERA_BLENDERUTILS_LERPRADIUS_OFFSET))(t, lerpFunc, from, to);
		}

		static ::UnityEngine::Vector3 LerpSpherical(::System::Single t, ::EasingFunction_FunctionValue* lerpFunc, ::UnityEngine::Vector3 fromSph, ::UnityEngine::Vector3 toSph)
		{
			return ((::UnityEngine::Vector3(*)(::System::Single, ::EasingFunction_FunctionValue*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPGCAMERA_BLENDERUTILS_LERPSPHERICAL_OFFSET))(t, lerpFunc, fromSph, toSph);
		}

		static ::RPGCamera::CameraStateData LerpSph(::System::Single t, ::EasingFunction_FunctionValue* lerpFunc, ::RPGCamera::CameraStateData fromData, ::RPGCamera::CameraStateData toData, ::RPGCamera::CameraStateData& retData)
		{
			return ((::RPGCamera::CameraStateData(*)(::System::Single, ::EasingFunction_FunctionValue*, ::RPGCamera::CameraStateData, ::RPGCamera::CameraStateData, ::RPGCamera::CameraStateData&))((::PBYTE)hIl2Cpp + RPGCAMERA_BLENDERUTILS_LERPSPH_OFFSET))(t, lerpFunc, fromData, toData, retData);
		}

		static ::RPGCamera::CameraStateData LerpPos(::System::Single t, ::EasingFunction_FunctionValue* lerpFunc, ::RPGCamera::CameraStateData fromData, ::RPGCamera::CameraStateData toData, ::RPGCamera::CameraStateData& retData)
		{
			return ((::RPGCamera::CameraStateData(*)(::System::Single, ::EasingFunction_FunctionValue*, ::RPGCamera::CameraStateData, ::RPGCamera::CameraStateData, ::RPGCamera::CameraStateData&))((::PBYTE)hIl2Cpp + RPGCAMERA_BLENDERUTILS_LERPPOS_OFFSET))(t, lerpFunc, fromData, toData, retData);
		}
	};
}
