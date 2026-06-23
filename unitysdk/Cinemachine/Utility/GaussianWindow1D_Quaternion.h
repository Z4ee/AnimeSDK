#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/Utility/GaussianWindow1d_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"

#define CINEMACHINE_UTILITY_GAUSSIANWINDOW1D_QUATERNION_COMPUTE_OFFSET UNITYSDK_OFFSET(0x1E81D6C0)
#define CINEMACHINE_UTILITY_GAUSSIANWINDOW1D_QUATERNION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E81D640)

namespace Cinemachine::Utility
{
	inline static constexpr unsigned int GaussianWindow1D_Quaternion_TypeDefinitionIndex = 34194;

	class GaussianWindow1D_Quaternion : public ::Cinemachine::Utility::GaussianWindow1d_1<::UnityEngine::Quaternion>
	{
	public:
		::System::Void _ctor(::System::Single sigma, ::System::Int32 maxKernelRadius)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_GAUSSIANWINDOW1D_QUATERNION__CTOR_OFFSET))(this, sigma, maxKernelRadius);
		}

		::UnityEngine::Quaternion Compute(::System::Int32 windowPos)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_GAUSSIANWINDOW1D_QUATERNION_COMPUTE_OFFSET))(this, windowPos);
		}
	};
}
