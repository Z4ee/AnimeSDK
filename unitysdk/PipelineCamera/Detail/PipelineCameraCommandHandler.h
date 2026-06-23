#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraCommandHandlerCollection.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera { class ICameraCommand; }
namespace System { template <typename T> class Action_1; }

#define PIPELINECAMERA_DETAIL_PIPELINECAMERACOMMANDHANDLER_PIPELINEVALUETOPIPELINEINDEX_OFFSET UNITYSDK_OFFSET(0x1D836950)
#define PIPELINECAMERA_DETAIL_PIPELINECAMERACOMMANDHANDLER_SENDCAMERACOMMAND_OFFSET UNITYSDK_OFFSET(0x1D836880)
#define PIPELINECAMERA_DETAIL_PIPELINECAMERACOMMANDHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D836830)

namespace PipelineCamera::Detail
{
	inline static constexpr unsigned int PipelineCameraCommandHandler_TypeDefinitionIndex = 38035;

	class PipelineCameraCommandHandler : public ::System::Object
	{
	public:
		::Il2CppArray<::PipelineCamera::CameraCommandHandlerCollection>* _cameraCommandHandlers; // 0x10
		::System::Int32 _pipelineCount; // 0x18

		::System::Void _ctor(::System::Int32 pipelineCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DETAIL_PIPELINECAMERACOMMANDHANDLER__CTOR_OFFSET))(this, pipelineCount);
		}

		::System::Void SendCameraCommand(::System::Int32 pipeline, ::PipelineCamera::ICameraCommand* command)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::PipelineCamera::ICameraCommand*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DETAIL_PIPELINECAMERACOMMANDHANDLER_SENDCAMERACOMMAND_OFFSET))(this, pipeline, command);
		}

		static ::System::Int32 PipelineValueToPipelineIndex(::System::Int32 pipeline, ::System::Int32 pipelineCount)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DETAIL_PIPELINECAMERACOMMANDHANDLER_PIPELINEVALUETOPIPELINEINDEX_OFFSET))(pipeline, pipelineCount);
		}
	};
}
