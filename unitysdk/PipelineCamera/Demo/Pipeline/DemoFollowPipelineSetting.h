#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define PIPELINECAMERA_DEMO_PIPELINE_DEMOFOLLOWPIPELINESETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x1EED2C90)

namespace PipelineCamera::Demo::Pipeline
{
	inline static constexpr unsigned int DemoFollowPipelineSetting_TypeDefinitionIndex = 38429;

	class DemoFollowPipelineSetting : public ::System::Object
	{
	public:
		::System::Single fieldOfView; // 0x10
		::System::Single radius; // 0x14
		::UnityEngine::Vector2 screenOffset; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DEMO_PIPELINE_DEMOFOLLOWPIPELINESETTING__CTOR_OFFSET))(this);
		}
	};
}
