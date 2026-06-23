#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define FOUNDATION_DUALQUATERNION_POLICY_FOUNDATION_IMAGNITUDEFUNC_UNITYENGINE_QUATERNION__MAGNITUDE_OFFSET UNITYSDK_OFFSET(0x987FD0)
#define FOUNDATION_DUALQUATERNION_POLICY_FOUNDATION_INEGATEFUNC_UNITYENGINE_QUATERNION__NEGATE_OFFSET UNITYSDK_OFFSET(0x988080)
#define FOUNDATION_DUALQUATERNION_POLICY_FOUNDATION_IPLUSFUNC_UNITYENGINE_QUATERNION__PLUS_OFFSET UNITYSDK_OFFSET(0x987ED0)
#define FOUNDATION_DUALQUATERNION_POLICY_FOUNDATION_ISCALEFUNC_UNITYENGINE_QUATERNION__SCALE_OFFSET UNITYSDK_OFFSET(0x987F50)

namespace Foundation
{
	inline static constexpr unsigned int DualQuaternion_Policy_TypeDefinitionIndex = 8546;

	struct alignas(1) DualQuaternion_Policy
	{
		/*
		::UnityEngine::Quaternion Foundation_IPlusFunc_UnityEngine_Quaternion__Plus(::UnityEngine::Quaternion left, ::UnityEngine::Quaternion right)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + FOUNDATION_DUALQUATERNION_POLICY_FOUNDATION_IPLUSFUNC_UNITYENGINE_QUATERNION__PLUS_OFFSET))(this, left, right);
		}
		*/

		/*
		::UnityEngine::Quaternion Foundation_IScaleFunc_UnityEngine_Quaternion__Scale(::UnityEngine::Quaternion value, ::System::Double scale)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Quaternion, ::System::Double))((::PBYTE)hIl2Cpp + FOUNDATION_DUALQUATERNION_POLICY_FOUNDATION_ISCALEFUNC_UNITYENGINE_QUATERNION__SCALE_OFFSET))(this, value, scale);
		}
		*/

		/*
		::System::Double Foundation_IMagnitudeFunc_UnityEngine_Quaternion__Magnitude(::UnityEngine::Quaternion value)
		{
			return ((::System::Double(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + FOUNDATION_DUALQUATERNION_POLICY_FOUNDATION_IMAGNITUDEFUNC_UNITYENGINE_QUATERNION__MAGNITUDE_OFFSET))(this, value);
		}
		*/

		/*
		::UnityEngine::Quaternion Foundation_INegateFunc_UnityEngine_Quaternion__Negate(::UnityEngine::Quaternion value)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + FOUNDATION_DUALQUATERNION_POLICY_FOUNDATION_INEGATEFUNC_UNITYENGINE_QUATERNION__NEGATE_OFFSET))(this, value);
		}
		*/
	};
}
