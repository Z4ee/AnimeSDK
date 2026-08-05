#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }

#define CINEMACHINE_UTILITY_UNITYQUATERNIONEXTENSIONS_APPLYCAMERAROTATION_OFFSET UNITYSDK_OFFSET(0x1FA7ADF0)
#define CINEMACHINE_UTILITY_UNITYQUATERNIONEXTENSIONS_GETCAMERAROTATIONTOTARGET_OFFSET UNITYSDK_OFFSET(0x1FA7A850)
#define CINEMACHINE_UTILITY_UNITYQUATERNIONEXTENSIONS_NORMALIZED_OFFSET UNITYSDK_OFFSET(0x1FA7A800)
#define CINEMACHINE_UTILITY_UNITYQUATERNIONEXTENSIONS_SLERPWITHREFERENCEUPANTICLOCKWISE_OFFSET UNITYSDK_OFFSET(0x1FA7A6F0)
#define CINEMACHINE_UTILITY_UNITYQUATERNIONEXTENSIONS_SLERPWITHREFERENCEUPCLOCKWISE_OFFSET UNITYSDK_OFFSET(0x1FA79CB0)
#define CINEMACHINE_UTILITY_UNITYQUATERNIONEXTENSIONS_SLERPWITHREFERENCEUP_OFFSET UNITYSDK_OFFSET(0x1FA79370)
#define CINEMACHINE_UTILITY_UNITYQUATERNIONEXTENSIONS_SLERPWITHREFERENCE_OFFSET UNITYSDK_OFFSET(0x1FA79DC0)
#define CINEMACHINE_UTILITY_UNITYQUATERNIONEXTENSIONS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA7B030)

namespace Cinemachine::Utility
{
	inline static constexpr unsigned int UnityQuaternionExtensions_TypeDefinitionIndex = 34838;

	class UnityQuaternionExtensions : public ::System::Object
	{
	public:
		static ::System::Func_4<::System::Single, ::System::Single, ::System::Single, ::System::Single>** StaticGet_lerpAnagleClockwise()
		{
			return (::System::Func_4<::System::Single, ::System::Single, ::System::Single, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(UnityQuaternionExtensions_TypeDefinitionIndex)->GetStaticField(0x29030);
		}
		static ::System::Func_4<::System::Single, ::System::Single, ::System::Single, ::System::Single>** StaticGet_lerpAnagleAnticlockwise()
		{
			return (::System::Func_4<::System::Single, ::System::Single, ::System::Single, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(UnityQuaternionExtensions_TypeDefinitionIndex)->GetStaticField(0x29038);
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
