#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/Utility/GaussianWindow1d_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CINEMACHINE_UTILITY_GAUSSIANWINDOW1D_VECTOR3_COMPUTE_OFFSET UNITYSDK_OFFSET(0x1FA36C60)
#define CINEMACHINE_UTILITY_GAUSSIANWINDOW1D_VECTOR3__CTOR_OFFSET UNITYSDK_OFFSET(0x1FA36BE0)

namespace Cinemachine::Utility
{
	inline static constexpr unsigned int GaussianWindow1D_Vector3_TypeDefinitionIndex = 34829;

	class GaussianWindow1D_Vector3 : public ::Cinemachine::Utility::GaussianWindow1d_1<::UnityEngine::Vector3>
	{
	public:
		::System::Void _ctor(::System::Single sigma, ::System::Int32 maxKernelRadius)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_GAUSSIANWINDOW1D_VECTOR3__CTOR_OFFSET))(this, sigma, maxKernelRadius);
		}

		::UnityEngine::Vector3 Compute(::System::Int32 windowPos)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_GAUSSIANWINDOW1D_VECTOR3_COMPUTE_OFFSET))(this, windowPos);
		}
	};
}
