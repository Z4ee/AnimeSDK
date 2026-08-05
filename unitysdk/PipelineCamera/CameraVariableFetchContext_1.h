#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraSubModuleEvaluateContext_1.h"
#include "unitysdk/System/ValueType.h"

namespace PipelineCamera
{
	inline static constexpr unsigned int CameraVariableFetchContext_1_TypeDefinitionIndex = 38201;

	template <typename T>
	struct CameraVariableFetchContext_1
	{
		T Input; // 0x0
		::PipelineCamera::CameraSubModuleEvaluateContext_1<T> ModuleContext; // 0x0
	};
}
