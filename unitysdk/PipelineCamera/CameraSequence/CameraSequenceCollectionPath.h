#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceEnvironmentPath.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceMemberPath.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONPATH_CREATE_OFFSET UNITYSDK_OFFSET(0x1D8B71F0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONPATH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xA12C20)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONPATH_EQUALS_OFFSET UNITYSDK_OFFSET(0xA12BC0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONPATH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA12D50)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONPATH_GET_VARIABLE_OFFSET UNITYSDK_OFFSET(0xA12B90)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONPATH_GET_WORKSPACE_OFFSET UNITYSDK_OFFSET(0x338FF0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONPATH_TOVARIABLESTRING_OFFSET UNITYSDK_OFFSET(0xA12BB0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONPATH___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA12D60)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONPATH___BASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA12E00)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int CameraSequenceCollectionPath_TypeDefinitionIndex = 37931;

	struct alignas(8) CameraSequenceCollectionPath
	{
		::PipelineCamera::CameraSequence::CameraSequenceEnvironmentPath workspace; // 0x10
		::PipelineCamera::CameraSequence::CameraSequenceMemberPath variable; // 0x40

		::PipelineCamera::CameraSequence::CameraSequenceEnvironmentPath get_Workspace()
		{
			return ((::PipelineCamera::CameraSequence::CameraSequenceEnvironmentPath(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONPATH_GET_WORKSPACE_OFFSET))(this);
		}

		::PipelineCamera::CameraSequence::CameraSequenceMemberPath get_Variable()
		{
			return ((::PipelineCamera::CameraSequence::CameraSequenceMemberPath(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONPATH_GET_VARIABLE_OFFSET))(this);
		}

		static ::PipelineCamera::CameraSequence::CameraSequenceCollectionPath Create(::PipelineCamera::CameraSequence::CameraSequenceEnvironmentPath workspace, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath variablePath)
		{
			return ((::PipelineCamera::CameraSequence::CameraSequenceCollectionPath(*)(::PipelineCamera::CameraSequence::CameraSequenceEnvironmentPath, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONPATH_CREATE_OFFSET))(workspace, variablePath);
		}

		::System::String* ToVariableString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONPATH_TOVARIABLESTRING_OFFSET))(this);
		}

		::System::Boolean Equals(::PipelineCamera::CameraSequence::CameraSequenceCollectionPath other)
		{
			return ((::System::Boolean(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceCollectionPath))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONPATH_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONPATH_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONPATH_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean __base_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONPATH___BASE_EQUALS_OFFSET))(this, P0);
		}

		::System::Int32 __base_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONPATH___BASE_GETHASHCODE_OFFSET))(this);
		}
	};
}
