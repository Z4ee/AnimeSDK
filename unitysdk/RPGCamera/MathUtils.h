#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPGCAMERA_MATHUTILS_ALMOSTZERO_OFFSET UNITYSDK_OFFSET(0x85BE5F0)
#define RPGCAMERA_MATHUTILS_CARTESIAN2SPHERIAL_1_OFFSET UNITYSDK_OFFSET(0x85BA680)
#define RPGCAMERA_MATHUTILS_CARTESIAN2SPHERIAL_OFFSET UNITYSDK_OFFSET(0x85BE370)
#define RPGCAMERA_MATHUTILS_GETCAMHALFSIZE_OFFSET UNITYSDK_OFFSET(0x85BE8A0)
#define RPGCAMERA_MATHUTILS_LINEARLERPPOLEANGLE_OFFSET UNITYSDK_OFFSET(0x85BE680)
#define RPGCAMERA_MATHUTILS_NORMALIZEDROTATERADIAN_OFFSET UNITYSDK_OFFSET(0x85B8DE0)
#define RPGCAMERA_MATHUTILS_PROJECTONTOPLANE_OFFSET UNITYSDK_OFFSET(0x85BE620)
#define RPGCAMERA_MATHUTILS_SIGNEDRADIANDIFF_OFFSET UNITYSDK_OFFSET(0x85BE4D0)
#define RPGCAMERA_MATHUTILS_SLERPWITHREFERENCEUP_OFFSET UNITYSDK_OFFSET(0x85B9D60)
#define RPGCAMERA_MATHUTILS_SPHERIAL2CARTESIAN_OFFSET UNITYSDK_OFFSET(0x85B96B0)
#define RPGCAMERA_MATHUTILS_SPRINGSYSTEM1D_ACCURATE_OFFSET UNITYSDK_OFFSET(0x85BE520)
#define RPGCAMERA_MATHUTILS_TO180ANGLE_OFFSET UNITYSDK_OFFSET(0x85BE420)
#define RPGCAMERA_MATHUTILS_TO360ANGLE_OFFSET UNITYSDK_OFFSET(0x85BE480)

namespace RPGCamera
{
	inline static constexpr unsigned int MathUtils_TypeDefinitionIndex = 35130;

	class MathUtils : public ::System::Object
	{
	public:
		// static const ::System::Single Epsilon; // 0x0

		static ::UnityEngine::Vector3 Cartesian2Spherial(::UnityEngine::Vector3 cPos)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPGCAMERA_MATHUTILS_CARTESIAN2SPHERIAL_OFFSET))(cPos);
		}

		static ::UnityEngine::Vector3 Cartesian2Spherial_1(::UnityEngine::Vector3 pos, ::UnityEngine::Vector3 forward, ::UnityEngine::Vector3 lookAt, ::System::Single& deltaPole, ::System::Single& deltaElev)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + RPGCAMERA_MATHUTILS_CARTESIAN2SPHERIAL_1_OFFSET))(pos, forward, lookAt, deltaPole, deltaElev);
		}

		static ::UnityEngine::Vector3 Spherial2Cartesian(::UnityEngine::Vector3 sPos)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPGCAMERA_MATHUTILS_SPHERIAL2CARTESIAN_OFFSET))(sPos);
		}

		static ::System::Single To180Angle(::System::Single f)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + RPGCAMERA_MATHUTILS_TO180ANGLE_OFFSET))(f);
		}

		static ::System::Single To360Angle(::System::Single f)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + RPGCAMERA_MATHUTILS_TO360ANGLE_OFFSET))(f);
		}

		static ::System::Single SignedRadianDiff(::System::Single from, ::System::Single to)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPGCAMERA_MATHUTILS_SIGNEDRADIANDIFF_OFFSET))(from, to);
		}

		static ::System::Single NormalizedRotateRadian(::System::Single from, ::System::Single to)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPGCAMERA_MATHUTILS_NORMALIZEDROTATERADIAN_OFFSET))(from, to);
		}

		static ::System::Single SpringSystem1D_Accurate(::System::Single kd, ::System::Single fromP, ::System::Single toP, ::System::Single deltaT, ::System::Single minChange, ::System::Single maxChange, ::System::Single& curVelocity)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single&))((::PBYTE)hIl2Cpp + RPGCAMERA_MATHUTILS_SPRINGSYSTEM1D_ACCURATE_OFFSET))(kd, fromP, toP, deltaT, minChange, maxChange, curVelocity);
		}

		static ::System::Boolean AlmostZero(::UnityEngine::Vector3 v)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPGCAMERA_MATHUTILS_ALMOSTZERO_OFFSET))(v);
		}

		static ::UnityEngine::Vector3 ProjectOntoPlane(::UnityEngine::Vector3 vector, ::UnityEngine::Vector3 planeNormal)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPGCAMERA_MATHUTILS_PROJECTONTOPLANE_OFFSET))(vector, planeNormal);
		}

		static ::UnityEngine::Quaternion SlerpWithReferenceUp(::UnityEngine::Quaternion qA, ::UnityEngine::Quaternion qB, ::System::Single t, ::UnityEngine::Vector3 up)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPGCAMERA_MATHUTILS_SLERPWITHREFERENCEUP_OFFSET))(qA, qB, t, up);
		}

		static ::System::Single LinearLerpPoleAngle(::System::Single fromAngle, ::System::Single toAngle, ::System::Single lerpRatio, ::System::Single deltaT)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPGCAMERA_MATHUTILS_LINEARLERPPOLEANGLE_OFFSET))(fromAngle, toAngle, lerpRatio, deltaT);
		}

		static ::UnityEngine::Vector2 GetCamHalfSize(::System::Single nearClipPlane, ::System::Single halfFov, ::System::Single aspect)
		{
			return ((::UnityEngine::Vector2(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPGCAMERA_MATHUTILS_GETCAMHALFSIZE_OFFSET))(nearClipPlane, halfFov, aspect);
		}
	};
}
