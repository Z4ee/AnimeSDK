#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CINEMACHINE_UTILITY_UNITYVECTOREXTENSIONS_ABS_OFFSET UNITYSDK_OFFSET(0x1648E480)
#define CINEMACHINE_UTILITY_UNITYVECTOREXTENSIONS_ALMOSTZERO_OFFSET UNITYSDK_OFFSET(0x1648B070)
#define CINEMACHINE_UTILITY_UNITYVECTOREXTENSIONS_ANGLE_OFFSET UNITYSDK_OFFSET(0x1648E4B0)
#define CINEMACHINE_UTILITY_UNITYVECTOREXTENSIONS_CLOSESTPOINTONSEGMENT_1_OFFSET UNITYSDK_OFFSET(0x1648E3F0)
#define CINEMACHINE_UTILITY_UNITYVECTOREXTENSIONS_CLOSESTPOINTONSEGMENT_OFFSET UNITYSDK_OFFSET(0x1648E340)
#define CINEMACHINE_UTILITY_UNITYVECTOREXTENSIONS_PROJECTONTOPLANE_OFFSET UNITYSDK_OFFSET(0x1648D800)
#define CINEMACHINE_UTILITY_UNITYVECTOREXTENSIONS_SAFEFROMTOROTATION_OFFSET UNITYSDK_OFFSET(0x1648E670)
#define CINEMACHINE_UTILITY_UNITYVECTOREXTENSIONS_SIGNEDANGLE_OFFSET UNITYSDK_OFFSET(0x1648DE70)
#define CINEMACHINE_UTILITY_UNITYVECTOREXTENSIONS_SLERPWITHREFERENCEUP_OFFSET UNITYSDK_OFFSET(0x1648E910)

namespace Cinemachine::Utility
{
	inline static constexpr unsigned int UnityVectorExtensions_TypeDefinitionIndex = 38600;

	class UnityVectorExtensions : public ::System::Object
	{
	public:
		// static const ::System::Single Epsilon; // 0x0

		static ::System::Single ClosestPointOnSegment(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_UNITYVECTOREXTENSIONS_CLOSESTPOINTONSEGMENT_OFFSET))(a1, a2, a3);
		}

		static ::System::Single ClosestPointOnSegment_1(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2 a3)
		{
			return ((::System::Single(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_UNITYVECTOREXTENSIONS_CLOSESTPOINTONSEGMENT_1_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Vector3 ProjectOntoPlane(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_UNITYVECTOREXTENSIONS_PROJECTONTOPLANE_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector3 Abs(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_UNITYVECTOREXTENSIONS_ABS_OFFSET))(a1);
		}

		static ::System::Boolean AlmostZero(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_UNITYVECTOREXTENSIONS_ALMOSTZERO_OFFSET))(a1);
		}

		static ::System::Single Angle(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_UNITYVECTOREXTENSIONS_ANGLE_OFFSET))(a1, a2);
		}

		static ::System::Single SignedAngle(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_UNITYVECTOREXTENSIONS_SIGNEDANGLE_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Quaternion SafeFromToRotation(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_UNITYVECTOREXTENSIONS_SAFEFROMTOROTATION_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Vector3 SlerpWithReferenceUp(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::Vector3 a4)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_UNITYVECTOREXTENSIONS_SLERPWITHREFERENCEUP_OFFSET))(a1, a2, a3, a4);
		}
	};
}
