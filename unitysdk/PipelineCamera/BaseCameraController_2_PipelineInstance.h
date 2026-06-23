#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace PipelineCamera { class ICameraDataBlenderBuilder; }

namespace PipelineCamera
{
	inline static constexpr unsigned int BaseCameraController_2_PipelineInstance_TypeDefinitionIndex = 37497;

	template <typename TController, typename TPostPipeline>
	struct BaseCameraController_2_PipelineInstance
	{
		::System::UInt64 UniqueId; // 0x0
		::System::Int32 Index; // 0x0
		::PipelineCamera::ICameraDataBlenderBuilder* BlendIn; // 0x0
		::PipelineCamera::ICameraDataBlenderBuilder* BlendOut; // 0x0
		static ::PipelineCamera::BaseCameraController_2_PipelineInstance<TController, TPostPipeline>* StaticGet_Invalid()
		{
			return (::PipelineCamera::BaseCameraController_2_PipelineInstance<TController, TPostPipeline>*)Il2CppClass::FromTypeDefinitionIndex(BaseCameraController_2_PipelineInstance_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
