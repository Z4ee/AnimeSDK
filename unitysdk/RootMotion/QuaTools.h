#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define ROOTMOTION_QUATOOLS_CLAMPANGLE_OFFSET UNITYSDK_OFFSET(0xA27A880)
#define ROOTMOTION_QUATOOLS_CLAMPROTATION_OFFSET UNITYSDK_OFFSET(0xA27A650)
#define ROOTMOTION_QUATOOLS_FROMTOAROUNDAXIS_OFFSET UNITYSDK_OFFSET(0xA27A300)
#define ROOTMOTION_QUATOOLS_FROMTOROTATION_OFFSET UNITYSDK_OFFSET(0xA27A430)
#define ROOTMOTION_QUATOOLS_GETAXIS_OFFSET UNITYSDK_OFFSET(0xA27A550)
#define ROOTMOTION_QUATOOLS_LERP_OFFSET UNITYSDK_OFFSET(0xA27A120)
#define ROOTMOTION_QUATOOLS_LINEARBLEND_OFFSET UNITYSDK_OFFSET(0xA27A200)
#define ROOTMOTION_QUATOOLS_ROTATIONTOLOCALSPACE_OFFSET UNITYSDK_OFFSET(0xA2622F0)
#define ROOTMOTION_QUATOOLS_SLERP_OFFSET UNITYSDK_OFFSET(0xA27A190)
#define ROOTMOTION_QUATOOLS_SPHERICALBLEND_OFFSET UNITYSDK_OFFSET(0xA27A280)
#define ROOTMOTION_QUATOOLS_TOX0Z_OFFSET UNITYSDK_OFFSET(0xA266FB0)

namespace RootMotion
{
	inline static constexpr unsigned int QuaTools_TypeDefinitionIndex = 41796;

	class QuaTools : public ::System::Object
	{
	public:
		static ::UnityEngine::Vector3 ToX0Z(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_QUATOOLS_TOX0Z_OFFSET))(a1);
		}

		static ::UnityEngine::Quaternion Lerp(::UnityEngine::Quaternion a1, ::UnityEngine::Quaternion a2, ::System::Single a3)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_QUATOOLS_LERP_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Quaternion Slerp(::UnityEngine::Quaternion a1, ::UnityEngine::Quaternion a2, ::System::Single a3)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_QUATOOLS_SLERP_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Quaternion LinearBlend(::UnityEngine::Quaternion a1, ::System::Single a2)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_QUATOOLS_LINEARBLEND_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Quaternion SphericalBlend(::UnityEngine::Quaternion a1, ::System::Single a2)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_QUATOOLS_SPHERICALBLEND_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Quaternion FromToAroundAxis(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_QUATOOLS_FROMTOAROUNDAXIS_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Quaternion RotationToLocalSpace(::UnityEngine::Quaternion a1, ::UnityEngine::Quaternion a2)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + ROOTMOTION_QUATOOLS_ROTATIONTOLOCALSPACE_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Quaternion FromToRotation(::UnityEngine::Quaternion a1, ::UnityEngine::Quaternion a2)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + ROOTMOTION_QUATOOLS_FROMTOROTATION_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector3 GetAxis(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_QUATOOLS_GETAXIS_OFFSET))(a1);
		}

		static ::UnityEngine::Quaternion ClampRotation(::UnityEngine::Quaternion a1, ::System::Single a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + ROOTMOTION_QUATOOLS_CLAMPROTATION_OFFSET))(a1, a2, a3);
		}

		static ::System::Single ClampAngle(::System::Single a1, ::System::Single a2, ::System::Int32 a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + ROOTMOTION_QUATOOLS_CLAMPANGLE_OFFSET))(a1, a2, a3);
		}
	};
}
