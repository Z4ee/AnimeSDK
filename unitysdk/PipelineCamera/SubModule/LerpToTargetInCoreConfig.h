#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/Module/WorldBasicCameraDataChannel.h"
#include "unitysdk/System/ValueType.h"

namespace PipelineCamera { class ICameraTimestamp; }
namespace System { class String; }

#define PIPELINECAMERA_SUBMODULE_LERPTOTARGETINCORECONFIG_GET_ACTIVECHANNEL_OFFSET UNITYSDK_OFFSET(0x2E87C0)
#define PIPELINECAMERA_SUBMODULE_LERPTOTARGETINCORECONFIG_GET_DEBUGNAME_OFFSET UNITYSDK_OFFSET(0x28B580)
#define PIPELINECAMERA_SUBMODULE_LERPTOTARGETINCORECONFIG_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x3A4E50)
#define PIPELINECAMERA_SUBMODULE_LERPTOTARGETINCORECONFIG_GET_TIMESTAMP_OFFSET UNITYSDK_OFFSET(0x381840)
#define PIPELINECAMERA_SUBMODULE_LERPTOTARGETINCORECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x9AA470)

namespace PipelineCamera::SubModule
{
	inline static constexpr unsigned int LerpToTargetInCoreConfig_TypeDefinitionIndex = 36415;

	struct alignas(8) LerpToTargetInCoreConfig
	{
		::PipelineCamera::Module::WorldBasicCameraDataChannel _ActiveChannel_k__BackingField; // 0x10
		::System::Int32 _Priority_k__BackingField; // 0x14
		::System::String* _DebugName_k__BackingField; // 0x18
		::PipelineCamera::ICameraTimestamp* _Timestamp_k__BackingField; // 0x20

		::System::Void _ctor(::PipelineCamera::Module::WorldBasicCameraDataChannel activeChannel, ::System::Int32 priority, ::System::String* debugName, ::PipelineCamera::ICameraTimestamp* timestamp)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::Module::WorldBasicCameraDataChannel, ::System::Int32, ::System::String*, ::PipelineCamera::ICameraTimestamp*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_SUBMODULE_LERPTOTARGETINCORECONFIG__CTOR_OFFSET))(this, activeChannel, priority, debugName, timestamp);
		}

		::PipelineCamera::Module::WorldBasicCameraDataChannel get_ActiveChannel()
		{
			return ((::PipelineCamera::Module::WorldBasicCameraDataChannel(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_SUBMODULE_LERPTOTARGETINCORECONFIG_GET_ACTIVECHANNEL_OFFSET))(this);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_SUBMODULE_LERPTOTARGETINCORECONFIG_GET_PRIORITY_OFFSET))(this);
		}

		::System::String* get_DebugName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_SUBMODULE_LERPTOTARGETINCORECONFIG_GET_DEBUGNAME_OFFSET))(this);
		}

		::PipelineCamera::ICameraTimestamp* get_Timestamp()
		{
			return ((::PipelineCamera::ICameraTimestamp*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_SUBMODULE_LERPTOTARGETINCORECONFIG_GET_TIMESTAMP_OFFSET))(this);
		}
	};
}
