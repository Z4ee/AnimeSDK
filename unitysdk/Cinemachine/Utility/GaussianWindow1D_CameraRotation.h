#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/Utility/GaussianWindow1d_1.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define CINEMACHINE_UTILITY_GAUSSIANWINDOW1D_CAMERAROTATION_COMPUTE_OFFSET UNITYSDK_OFFSET(0x1E699570)
#define CINEMACHINE_UTILITY_GAUSSIANWINDOW1D_CAMERAROTATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E6994F0)

namespace Cinemachine::Utility
{
	inline static constexpr unsigned int GaussianWindow1D_CameraRotation_TypeDefinitionIndex = 34195;

	class GaussianWindow1D_CameraRotation : public ::Cinemachine::Utility::GaussianWindow1d_1<::UnityEngine::Vector2>
	{
	public:
		::System::Void _ctor(::System::Single sigma, ::System::Int32 maxKernelRadius)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_GAUSSIANWINDOW1D_CAMERAROTATION__CTOR_OFFSET))(this, sigma, maxKernelRadius);
		}

		::UnityEngine::Vector2 Compute(::System::Int32 windowPos)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_GAUSSIANWINDOW1D_CAMERAROTATION_COMPUTE_OFFSET))(this, windowPos);
		}
	};
}
