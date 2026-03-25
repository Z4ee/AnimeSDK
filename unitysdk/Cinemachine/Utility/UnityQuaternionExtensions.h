#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CINEMACHINE_UTILITY_UNITYQUATERNIONEXTENSIONS_APPLYCAMERAROTATION_OFFSET UNITYSDK_OFFSET(0x119E25B0)
#define CINEMACHINE_UTILITY_UNITYQUATERNIONEXTENSIONS_GETCAMERAROTATIONTOTARGET_OFFSET UNITYSDK_OFFSET(0x119E1DD0)
#define CINEMACHINE_UTILITY_UNITYQUATERNIONEXTENSIONS_NORMALIZED_OFFSET UNITYSDK_OFFSET(0x119E1D50)
#define CINEMACHINE_UTILITY_UNITYQUATERNIONEXTENSIONS_SLERPWITHREFERENCEUP_OFFSET UNITYSDK_OFFSET(0x119E13D0)

namespace Cinemachine::Utility
{
	inline static constexpr unsigned int UnityQuaternionExtensions_TypeDefinitionIndex = 30940;

	class UnityQuaternionExtensions : public ::System::Object
	{
	public:
		static ::UnityEngine::Quaternion SlerpWithReferenceUp(::UnityEngine::Quaternion qA, ::UnityEngine::Quaternion qB, ::System::Single t, ::UnityEngine::Vector3 up)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_UNITYQUATERNIONEXTENSIONS_SLERPWITHREFERENCEUP_OFFSET))(qA, qB, t, up);
		}

		static ::UnityEngine::Quaternion Normalized(::UnityEngine::Quaternion q)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_UNITYQUATERNIONEXTENSIONS_NORMALIZED_OFFSET))(q);
		}

		static ::UnityEngine::Vector2 GetCameraRotationToTarget(::UnityEngine::Quaternion orient, ::UnityEngine::Vector3 lookAtDir, ::UnityEngine::Vector3 worldUp)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_UNITYQUATERNIONEXTENSIONS_GETCAMERAROTATIONTOTARGET_OFFSET))(orient, lookAtDir, worldUp);
		}

		static ::UnityEngine::Quaternion ApplyCameraRotation(::UnityEngine::Quaternion orient, ::UnityEngine::Vector2 rot, ::UnityEngine::Vector3 worldUp)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion, ::UnityEngine::Vector2, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_UNITYQUATERNIONEXTENSIONS_APPLYCAMERAROTATION_OFFSET))(orient, rot, worldUp);
		}
	};
}
