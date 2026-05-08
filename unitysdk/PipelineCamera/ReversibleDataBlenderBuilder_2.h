#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraDataBlenderBuilder_1.h"

namespace PipelineCamera { class ICameraDataBlender; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

namespace PipelineCamera
{
	inline static constexpr unsigned int ReversibleDataBlenderBuilder_2_TypeDefinitionIndex = 35972;

	template <typename TReverseKey, typename TPriority>
	class ReversibleDataBlenderBuilder_2 : public ::PipelineCamera::CameraDataBlenderBuilder_1<TPriority>
	{
	public:
		TReverseKey ReverseKey; // 0x0
		::PipelineCamera::CameraDataBlenderBuilder_1<TPriority>* FallbackBuilder; // 0x0
		TPriority Priority; // 0x0
		::System::Action_1<::PipelineCamera::ICameraDataBlender*>* OnConstructAction; // 0x0
		::System::String* DebugName; // 0x0
	};
}
