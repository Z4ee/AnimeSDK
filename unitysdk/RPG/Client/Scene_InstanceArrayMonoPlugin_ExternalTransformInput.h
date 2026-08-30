#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

namespace RPG::Client
{
	inline static constexpr unsigned int Scene_InstanceArrayMonoPlugin_ExternalTransformInput_TypeDefinitionIndex = 70820;

	struct alignas(8) Scene_InstanceArrayMonoPlugin_ExternalTransformInput
	{
		::UnityEngine::Matrix4x4 WorldMatrix; // 0x10
		::UnityEngine::Vector3 LossyScale; // 0x50
		::System::Int32 Priority; // 0x5C
		::System::Int32 FrameStamp; // 0x60
		::System::Int64 Sequence; // 0x68
		::System::String* SourceTag; // 0x70
	};
}
