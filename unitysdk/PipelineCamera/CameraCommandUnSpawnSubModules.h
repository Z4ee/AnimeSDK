#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/PipelineCamera/CameraCommandType.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera { class ICameraDataBlenderBuilder; }
namespace PipelineCamera { template <typename T> class CameraSubModuleContainer_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define PIPELINECAMERA_CAMERACOMMANDUNSPAWNSUBMODULES_ADD_OFFSET UNITYSDK_OFFSET(0x1B504930)
#define PIPELINECAMERA_CAMERACOMMANDUNSPAWNSUBMODULES_PIPELINECAMERA_ICAMERACOMMAND_GET_COMMANDTYPE_OFFSET UNITYSDK_OFFSET(0x1B504790)
#define PIPELINECAMERA_CAMERACOMMANDUNSPAWNSUBMODULES_PIPELINECAMERA_ICAMERACOMMAND_GET_PIPELINE_OFFSET UNITYSDK_OFFSET(0x1B5047E0)
#define PIPELINECAMERA_CAMERACOMMANDUNSPAWNSUBMODULES__CTOR_OFFSET UNITYSDK_OFFSET(0x1B504820)

namespace PipelineCamera
{
	inline static constexpr unsigned int CameraCommandUnSpawnSubModules_TypeDefinitionIndex = 35872;

	class CameraCommandUnSpawnSubModules : public ::System::Object
	{
	public:
		::PipelineCamera::ICameraDataBlenderBuilder* _blendOut; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int64, ::System::Object*>* _subModules; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int64, ::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::Object*>*>* _specificSubModules; // 0x20
		::System::Int32 _pipeline; // 0x28

		::System::Void _ctor(::System::Int32 pipeline)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERACOMMANDUNSPAWNSUBMODULES__CTOR_OFFSET))(this, pipeline);
		}

		::PipelineCamera::CameraCommandType PipelineCamera_ICameraCommand_get_CommandType()
		{
			return ((::PipelineCamera::CameraCommandType(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERACOMMANDUNSPAWNSUBMODULES_PIPELINECAMERA_ICAMERACOMMAND_GET_COMMANDTYPE_OFFSET))(this);
		}

		::System::Int32 PipelineCamera_ICameraCommand_get_Pipeline()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERACOMMANDUNSPAWNSUBMODULES_PIPELINECAMERA_ICAMERACOMMAND_GET_PIPELINE_OFFSET))(this);
		}

		::System::Void Add(::PipelineCamera::ICameraDataBlenderBuilder* blendOut)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraDataBlenderBuilder*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERACOMMANDUNSPAWNSUBMODULES_ADD_OFFSET))(this, blendOut);
		}
	};
}
