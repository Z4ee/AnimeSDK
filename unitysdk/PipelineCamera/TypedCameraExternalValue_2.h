#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraExternalValueCollection.h"
#include "unitysdk/PipelineCamera/CameraExternalValueType.h"
#include "unitysdk/PipelineCamera/CameraExternalValue_1.h"
#include "unitysdk/PipelineCamera/ExternalValueTupleSlot.h"

namespace PipelineCamera
{
	inline static constexpr unsigned int TypedCameraExternalValue_2_TypeDefinitionIndex = 35904;

	template <typename TController, typename T>
	class TypedCameraExternalValue_2 : public ::PipelineCamera::CameraExternalValue_1<TController>
	{
	public:
	};
}
