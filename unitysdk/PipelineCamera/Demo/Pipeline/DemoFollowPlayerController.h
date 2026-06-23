#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PIPELINECAMERA_DEMO_PIPELINE_DEMOFOLLOWPLAYERCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD42100)

namespace PipelineCamera::Demo::Pipeline
{
	inline static constexpr unsigned int DemoFollowPlayerController_TypeDefinitionIndex = 37766;

	class DemoFollowPlayerController : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DEMO_PIPELINE_DEMOFOLLOWPLAYERCONTROLLER__CTOR_OFFSET))(this);
		}
	};
}
