#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }

#define CINEMACHINE_UTILITY_UNITYQUATERNIONEXTENSIONS_APPLYCAMERAROTATION_OFFSET UNITYSDK_OFFSET(0x1E69F1F0)
#define CINEMACHINE_UTILITY_UNITYQUATERNIONEXTENSIONS_GETCAMERAROTATIONTOTARGET_OFFSET UNITYSDK_OFFSET(0x1E69EC60)
#define CINEMACHINE_UTILITY_UNITYQUATERNIONEXTENSIONS_NORMALIZED_OFFSET UNITYSDK_OFFSET(0x1E69EBE0)
#define CINEMACHINE_UTILITY_UNITYQUATERNIONEXTENSIONS_SLERPWITHREFERENCEUPANTICLOCKWISE_OFFSET UNITYSDK_OFFSET(0x1E69EAD0)
#define CINEMACHINE_UTILITY_UNITYQUATERNIONEXTENSIONS_SLERPWITHREFERENCEUPCLOCKWISE_OFFSET UNITYSDK_OFFSET(0x1E69E090)
#define CINEMACHINE_UTILITY_UNITYQUATERNIONEXTENSIONS_SLERPWITHREFERENCEUP_OFFSET UNITYSDK_OFFSET(0x1E69D770)
#define CINEMACHINE_UTILITY_UNITYQUATERNIONEXTENSIONS_SLERPWITHREFERENCE_OFFSET UNITYSDK_OFFSET(0x1E69E1A0)
#define CINEMACHINE_UTILITY_UNITYQUATERNIONEXTENSIONS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E69F440)

namespace Cinemachine::Utility
{
	inline static constexpr unsigned int UnityQuaternionExtensions_TypeDefinitionIndex = 34202;

	class UnityQuaternionExtensions : public ::System::Object
	{
	public:
		static ::System::Func_4<::System::Single, ::System::Single, ::System::Single, ::System::Single>** StaticGet_lerpAnagleAnticlockwise()
		{
			return (::System::Func_4<::System::Single, ::System::Single, ::System::Single, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(UnityQuaternionExtensions_TypeDefinitionIndex)->GetStaticField(0x27810);
		}
		static ::System::Func_4<::System::Single, ::System::Single, ::System::Single, ::System::Single>** StaticGet_lerpAnagleClockwise()
		{
			return (::System::Func_4<::System::Single, ::System::Single, ::System::Single, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(UnityQuaternionExtensions_TypeDefinitionIndex)->GetStaticField(0x27818);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_UNITYQUATERNIONEXTENSIONS__CCTOR_OFFSET))();
		}

		static ::UnityEngine::Quaternion SlerpWithReferenceUp(::UnityEngine::Quaternion qA, ::UnityEngine::Quaternion qB, ::System::Single t, ::UnityEngine::Vector3 up)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_UNITYQUATERNIONEXTENSIONS_SLERPWITHREFERENCEUP_OFFSET))(qA, qB, t, up);
		}

		static ::UnityEngine::Quaternion SlerpWithReferenceUpClockwise(::UnityEngine::Quaternion qA, ::UnityEngine::Quaternion qB, ::System::Single t, ::UnityEngine::Vector3 up)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_UNITYQUATERNIONEXTENSIONS_SLERPWITHREFERENCEUPCLOCKWISE_OFFSET))(qA, qB, t, up);
		}

		static ::UnityEngine::Quaternion SlerpWithReferenceUpAnticlockwise(::UnityEngine::Quaternion qA, ::UnityEngine::Quaternion qB, ::System::Single t, ::UnityEngine::Vector3 up)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_UNITYQUATERNIONEXTENSIONS_SLERPWITHREFERENCEUPANTICLOCKWISE_OFFSET))(qA, qB, t, up);
		}

		static ::UnityEngine::Quaternion SlerpWithReference(::UnityEngine::Quaternion qA, ::UnityEngine::Quaternion qB, ::System::Single t, ::UnityEngine::Vector3 up, ::System::Func_4<::System::Single, ::System::Single, ::System::Single, ::System::Single>* lerpMethodAxisY)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::System::Single, ::UnityEngine::Vector3, ::System::Func_4<::System::Single, ::System::Single, ::System::Single, ::System::Single>*))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_UNITYQUATERNIONEXTENSIONS_SLERPWITHREFERENCE_OFFSET))(qA, qB, t, up, lerpMethodAxisY);
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
