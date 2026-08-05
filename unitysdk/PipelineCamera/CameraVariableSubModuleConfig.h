#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define PIPELINECAMERA_CAMERAVARIABLESUBMODULECONFIG_GET_ACTIVECHANNEL_OFFSET UNITYSDK_OFFSET(0x325570)
#define PIPELINECAMERA_CAMERAVARIABLESUBMODULECONFIG_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x32EEE0)
#define PIPELINECAMERA_CAMERAVARIABLESUBMODULECONFIG_GET_PROCESSCHANNELMASK_OFFSET UNITYSDK_OFFSET(0x424ED0)
#define PIPELINECAMERA_CAMERAVARIABLESUBMODULECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x9CE040)

namespace PipelineCamera
{
	inline static constexpr unsigned int CameraVariableSubModuleConfig_TypeDefinitionIndex = 38200;

	struct alignas(8) CameraVariableSubModuleConfig
	{
		::System::Int32 _ActiveChannel_k__BackingField; // 0x10
		::System::Int32 _ProcessChannelMask_k__BackingField; // 0x14
		::System::Int32 _Priority_k__BackingField; // 0x18
		::System::String* DebugName; // 0x20

		::System::Void _ctor(::System::Int32 activeChannel, ::System::Int32 processChannelMask, ::System::Int32 priority)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERAVARIABLESUBMODULECONFIG__CTOR_OFFSET))(this, activeChannel, processChannelMask, priority);
		}

		::System::Int32 get_ActiveChannel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERAVARIABLESUBMODULECONFIG_GET_ACTIVECHANNEL_OFFSET))(this);
		}

		::System::Int32 get_ProcessChannelMask()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERAVARIABLESUBMODULECONFIG_GET_PROCESSCHANNELMASK_OFFSET))(this);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERAVARIABLESUBMODULECONFIG_GET_PRIORITY_OFFSET))(this);
		}
	};
}
