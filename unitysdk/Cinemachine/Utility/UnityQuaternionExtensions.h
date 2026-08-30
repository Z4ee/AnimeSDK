#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CINEMACHINE_UTILITY_UNITYQUATERNIONEXTENSIONS_APPLYCAMERAROTATION_OFFSET UNITYSDK_OFFSET(0x1EF13120)
#define CINEMACHINE_UTILITY_UNITYQUATERNIONEXTENSIONS_GETCAMERAROTATIONTOTARGET_OFFSET UNITYSDK_OFFSET(0x1EF12940)
#define CINEMACHINE_UTILITY_UNITYQUATERNIONEXTENSIONS_NORMALIZED_OFFSET UNITYSDK_OFFSET(0x1EF128C0)
#define CINEMACHINE_UTILITY_UNITYQUATERNIONEXTENSIONS_SLERPWITHREFERENCEUP_OFFSET UNITYSDK_OFFSET(0x1EF11D70)

namespace Cinemachine::Utility
{
	inline static constexpr unsigned int UnityQuaternionExtensions_TypeDefinitionIndex = 38601;

	class UnityQuaternionExtensions : public ::System::Object
	{
	public:
		static ::UnityEngine::Quaternion SlerpWithReferenceUp(::UnityEngine::Quaternion a1, ::UnityEngine::Quaternion a2, ::System::Single a3, ::UnityEngine::Vector3 a4)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_UNITYQUATERNIONEXTENSIONS_SLERPWITHREFERENCEUP_OFFSET))(a1, a2, a3, a4);
		}

		static ::UnityEngine::Quaternion Normalized(::UnityEngine::Quaternion a1)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_UNITYQUATERNIONEXTENSIONS_NORMALIZED_OFFSET))(a1);
		}

		static ::UnityEngine::Vector2 GetCameraRotationToTarget(::UnityEngine::Quaternion a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_UNITYQUATERNIONEXTENSIONS_GETCAMERAROTATIONTOTARGET_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Quaternion ApplyCameraRotation(::UnityEngine::Quaternion a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion, ::UnityEngine::Vector2, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_UNITYQUATERNIONEXTENSIONS_APPLYCAMERAROTATION_OFFSET))(a1, a2, a3);
		}
	};
}
