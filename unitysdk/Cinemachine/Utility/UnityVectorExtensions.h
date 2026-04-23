#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CINEMACHINE_UTILITY_UNITYVECTOREXTENSIONS_ABS_OFFSET UNITYSDK_OFFSET(0x12BB0CD0)
#define CINEMACHINE_UTILITY_UNITYVECTOREXTENSIONS_ALMOSTZERO_OFFSET UNITYSDK_OFFSET(0x12BAD5C0)
#define CINEMACHINE_UTILITY_UNITYVECTOREXTENSIONS_ANGLE_OFFSET UNITYSDK_OFFSET(0x12BB0D00)
#define CINEMACHINE_UTILITY_UNITYVECTOREXTENSIONS_CLOSESTPOINTONSEGMENT_1_OFFSET UNITYSDK_OFFSET(0x12BB0C40)
#define CINEMACHINE_UTILITY_UNITYVECTOREXTENSIONS_CLOSESTPOINTONSEGMENT_OFFSET UNITYSDK_OFFSET(0x12BB0B90)
#define CINEMACHINE_UTILITY_UNITYVECTOREXTENSIONS_PROJECTONTOPLANE_OFFSET UNITYSDK_OFFSET(0x12BB0050)
#define CINEMACHINE_UTILITY_UNITYVECTOREXTENSIONS_SAFEFROMTOROTATION_OFFSET UNITYSDK_OFFSET(0x12BB0EC0)
#define CINEMACHINE_UTILITY_UNITYVECTOREXTENSIONS_SIGNEDANGLE_OFFSET UNITYSDK_OFFSET(0x12BB06C0)
#define CINEMACHINE_UTILITY_UNITYVECTOREXTENSIONS_SLERPWITHREFERENCEUP_OFFSET UNITYSDK_OFFSET(0x12BB1160)

namespace Cinemachine::Utility
{
	inline static constexpr unsigned int UnityVectorExtensions_TypeDefinitionIndex = 36659;

	class UnityVectorExtensions : public ::System::Object
	{
	public:
		// static const ::System::Single Epsilon; // 0x0

		static ::System::Single ClosestPointOnSegment(::UnityEngine::Vector3 p, ::UnityEngine::Vector3 s0, ::UnityEngine::Vector3 s1)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_UNITYVECTOREXTENSIONS_CLOSESTPOINTONSEGMENT_OFFSET))(p, s0, s1);
		}

		static ::System::Single ClosestPointOnSegment_1(::UnityEngine::Vector2 p, ::UnityEngine::Vector2 s0, ::UnityEngine::Vector2 s1)
		{
			return ((::System::Single(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_UNITYVECTOREXTENSIONS_CLOSESTPOINTONSEGMENT_1_OFFSET))(p, s0, s1);
		}

		static ::UnityEngine::Vector3 ProjectOntoPlane(::UnityEngine::Vector3 vector, ::UnityEngine::Vector3 planeNormal)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_UNITYVECTOREXTENSIONS_PROJECTONTOPLANE_OFFSET))(vector, planeNormal);
		}

		static ::UnityEngine::Vector3 Abs(::UnityEngine::Vector3 v)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_UNITYVECTOREXTENSIONS_ABS_OFFSET))(v);
		}

		static ::System::Boolean AlmostZero(::UnityEngine::Vector3 v)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_UNITYVECTOREXTENSIONS_ALMOSTZERO_OFFSET))(v);
		}

		static ::System::Single Angle(::UnityEngine::Vector3 v1, ::UnityEngine::Vector3 v2)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_UNITYVECTOREXTENSIONS_ANGLE_OFFSET))(v1, v2);
		}

		static ::System::Single SignedAngle(::UnityEngine::Vector3 v1, ::UnityEngine::Vector3 v2, ::UnityEngine::Vector3 up)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_UNITYVECTOREXTENSIONS_SIGNEDANGLE_OFFSET))(v1, v2, up);
		}

		static ::UnityEngine::Quaternion SafeFromToRotation(::UnityEngine::Vector3 v1, ::UnityEngine::Vector3 v2, ::UnityEngine::Vector3 up)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_UNITYVECTOREXTENSIONS_SAFEFROMTOROTATION_OFFSET))(v1, v2, up);
		}

		static ::UnityEngine::Vector3 SlerpWithReferenceUp(::UnityEngine::Vector3 vA, ::UnityEngine::Vector3 vB, ::System::Single t, ::UnityEngine::Vector3 up)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_UNITYVECTOREXTENSIONS_SLERPWITHREFERENCEUP_OFFSET))(vA, vB, t, up);
		}
	};
}
