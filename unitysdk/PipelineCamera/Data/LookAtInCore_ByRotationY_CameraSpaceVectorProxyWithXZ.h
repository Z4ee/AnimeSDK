#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Function/Sinusoidal.h"
#include "unitysdk/Foundation/Function/WithConstant_1.h"
#include "unitysdk/System/ValueType.h"

#define PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATIONY_CAMERASPACEVECTORPROXYWITHXZ_CREATE_OFFSET UNITYSDK_OFFSET(0x1D832F20)
#define PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATIONY_CAMERASPACEVECTORPROXYWITHXZ__CTOR_OFFSET UNITYSDK_OFFSET(0xA0F370)

namespace PipelineCamera::Data
{
	inline static constexpr unsigned int LookAtInCore_ByRotationY_CameraSpaceVectorProxyWithXZ_TypeDefinitionIndex = 37777;

	struct alignas(8) LookAtInCore_ByRotationY_CameraSpaceVectorProxyWithXZ
	{
		::Foundation::Function::WithConstant_1<::Foundation::Function::Sinusoidal> Right; // 0x10
		::Foundation::Function::WithConstant_1<::Foundation::Function::Sinusoidal> Forward; // 0x40
		::Foundation::Function::WithConstant_1<::Foundation::Function::Sinusoidal> Up; // 0x70

		::System::Void _ctor(::Foundation::Function::WithConstant_1<::Foundation::Function::Sinusoidal> right, ::Foundation::Function::WithConstant_1<::Foundation::Function::Sinusoidal> forward, ::Foundation::Function::WithConstant_1<::Foundation::Function::Sinusoidal> up)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::Function::WithConstant_1<::Foundation::Function::Sinusoidal>, ::Foundation::Function::WithConstant_1<::Foundation::Function::Sinusoidal>, ::Foundation::Function::WithConstant_1<::Foundation::Function::Sinusoidal>))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATIONY_CAMERASPACEVECTORPROXYWITHXZ__CTOR_OFFSET))(this, right, forward, up);
		}

		/*
		static ::PipelineCamera::Data::LookAtInCore_ByRotationY_CameraSpaceVectorProxyWithXZ Create(::UnityEngine::Vector3& worldSpaceVector, ::System::Single pitch, ::System::Single roll)
		{
			return ((::PipelineCamera::Data::LookAtInCore_ByRotationY_CameraSpaceVectorProxyWithXZ(*)(::UnityEngine::Vector3&, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATIONY_CAMERASPACEVECTORPROXYWITHXZ_CREATE_OFFSET))(worldSpaceVector, pitch, roll);
		}
		*/
	};
}
