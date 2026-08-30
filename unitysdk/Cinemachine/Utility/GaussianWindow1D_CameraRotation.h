#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/Utility/GaussianWindow1d_1.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define CINEMACHINE_UTILITY_GAUSSIANWINDOW1D_CAMERAROTATION_COMPUTE_OFFSET UNITYSDK_OFFSET(0x1648A1B0)
#define CINEMACHINE_UTILITY_GAUSSIANWINDOW1D_CAMERAROTATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1648A160)

namespace Cinemachine::Utility
{
	inline static constexpr unsigned int GaussianWindow1D_CameraRotation_TypeDefinitionIndex = 38594;

	class GaussianWindow1D_CameraRotation : public ::Cinemachine::Utility::GaussianWindow1d_1<::UnityEngine::Vector2>
	{
	public:
		::System::Void _ctor(::System::Single a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_GAUSSIANWINDOW1D_CAMERAROTATION__CTOR_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector2 Compute(::System::Int32 a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_GAUSSIANWINDOW1D_CAMERAROTATION_COMPUTE_OFFSET))(this, a1);
		}
	};
}
