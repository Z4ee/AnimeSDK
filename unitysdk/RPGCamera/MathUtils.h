#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPGCAMERA_MATHUTILS_ALMOSTZERO_OFFSET UNITYSDK_OFFSET(0x1B757C90)
#define RPGCAMERA_MATHUTILS_CARTESIAN2SPHERIAL_1_OFFSET UNITYSDK_OFFSET(0x1B7535A0)
#define RPGCAMERA_MATHUTILS_CARTESIAN2SPHERIAL_OFFSET UNITYSDK_OFFSET(0x1B757A10)
#define RPGCAMERA_MATHUTILS_GETCAMHALFSIZE_OFFSET UNITYSDK_OFFSET(0x1B757F40)
#define RPGCAMERA_MATHUTILS_LINEARLERPPOLEANGLE_OFFSET UNITYSDK_OFFSET(0x1B757D20)
#define RPGCAMERA_MATHUTILS_NORMALIZEDROTATERADIAN_OFFSET UNITYSDK_OFFSET(0x1B751CF0)
#define RPGCAMERA_MATHUTILS_PROJECTONTOPLANE_OFFSET UNITYSDK_OFFSET(0x1B757CC0)
#define RPGCAMERA_MATHUTILS_SIGNEDRADIANDIFF_OFFSET UNITYSDK_OFFSET(0x1B757B70)
#define RPGCAMERA_MATHUTILS_SLERPWITHREFERENCEUP_OFFSET UNITYSDK_OFFSET(0x1B752C80)
#define RPGCAMERA_MATHUTILS_SPHERIAL2CARTESIAN_OFFSET UNITYSDK_OFFSET(0x1B7525C0)
#define RPGCAMERA_MATHUTILS_SPRINGSYSTEM1D_ACCURATE_OFFSET UNITYSDK_OFFSET(0x1B757BC0)
#define RPGCAMERA_MATHUTILS_TO180ANGLE_OFFSET UNITYSDK_OFFSET(0x1B757AC0)
#define RPGCAMERA_MATHUTILS_TO360ANGLE_OFFSET UNITYSDK_OFFSET(0x1B757B20)

namespace RPGCamera
{
	inline static constexpr unsigned int MathUtils_TypeDefinitionIndex = 42637;

	class MathUtils : public ::System::Object
	{
	public:
		// static const ::System::Single Epsilon; // 0x0

		static ::UnityEngine::Vector3 Cartesian2Spherial(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPGCAMERA_MATHUTILS_CARTESIAN2SPHERIAL_OFFSET))(a1);
		}

		static ::UnityEngine::Vector3 Cartesian2Spherial_1(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single& a4, ::System::Single& a5)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + RPGCAMERA_MATHUTILS_CARTESIAN2SPHERIAL_1_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::UnityEngine::Vector3 Spherial2Cartesian(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPGCAMERA_MATHUTILS_SPHERIAL2CARTESIAN_OFFSET))(a1);
		}

		static ::System::Single To180Angle(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + RPGCAMERA_MATHUTILS_TO180ANGLE_OFFSET))(a1);
		}

		static ::System::Single To360Angle(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + RPGCAMERA_MATHUTILS_TO360ANGLE_OFFSET))(a1);
		}

		static ::System::Single SignedRadianDiff(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPGCAMERA_MATHUTILS_SIGNEDRADIANDIFF_OFFSET))(a1, a2);
		}

		static ::System::Single NormalizedRotateRadian(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPGCAMERA_MATHUTILS_NORMALIZEDROTATERADIAN_OFFSET))(a1, a2);
		}

		static ::System::Single SpringSystem1D_Accurate(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::System::Single& a7)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single&))((::PBYTE)hIl2Cpp + RPGCAMERA_MATHUTILS_SPRINGSYSTEM1D_ACCURATE_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Boolean AlmostZero(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPGCAMERA_MATHUTILS_ALMOSTZERO_OFFSET))(a1);
		}

		static ::UnityEngine::Vector3 ProjectOntoPlane(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPGCAMERA_MATHUTILS_PROJECTONTOPLANE_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Quaternion SlerpWithReferenceUp(::UnityEngine::Quaternion a1, ::UnityEngine::Quaternion a2, ::System::Single a3, ::UnityEngine::Vector3 a4)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPGCAMERA_MATHUTILS_SLERPWITHREFERENCEUP_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Single LinearLerpPoleAngle(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPGCAMERA_MATHUTILS_LINEARLERPPOLEANGLE_OFFSET))(a1, a2, a3, a4);
		}

		static ::UnityEngine::Vector2 GetCamHalfSize(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector2(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPGCAMERA_MATHUTILS_GETCAMHALFSIZE_OFFSET))(a1, a2, a3);
		}
	};
}
