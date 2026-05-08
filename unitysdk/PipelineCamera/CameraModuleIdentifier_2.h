#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

namespace PipelineCamera
{
	inline static constexpr unsigned int CameraModuleIdentifier_2_TypeDefinitionIndex = 35953;

	template <typename TCameraController, typename TPlayerController>
	struct CameraModuleIdentifier_2
	{
		TCameraController Controller; // 0x0
		::System::Int32 PipelineType; // 0x0
		::System::Int32 ModuleIndex; // 0x0
	};
}
