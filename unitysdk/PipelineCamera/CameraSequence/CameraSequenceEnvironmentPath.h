#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEENVIRONMENTPATH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xA0F030)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEENVIRONMENTPATH_EQUALS_OFFSET UNITYSDK_OFFSET(0xA0EFF0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEENVIRONMENTPATH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA0F130)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEENVIRONMENTPATH_GETPOPPED_OFFSET UNITYSDK_OFFSET(0xA0EF30)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEENVIRONMENTPATH_GETPUSHED_OFFSET UNITYSDK_OFFSET(0xA0EEE0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEENVIRONMENTPATH_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xA0EE40)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEENVIRONMENTPATH_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0xA0EFE0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEENVIRONMENTPATH_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0xA0EFD0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEENVIRONMENTPATH_POP_OFFSET UNITYSDK_OFFSET(0xA0EF10)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEENVIRONMENTPATH_PUSH_OFFSET UNITYSDK_OFFSET(0xA0EE50)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEENVIRONMENTPATH__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D831D50)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEENVIRONMENTPATH___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA0F240)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEENVIRONMENTPATH___BASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA0F1D0)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int CameraSequenceEnvironmentPath_TypeDefinitionIndex = 37959;

	struct alignas(8) CameraSequenceEnvironmentPath
	{
		static ::PipelineCamera::CameraSequence::CameraSequenceEnvironmentPath* StaticGet_Root()
		{
			return (::PipelineCamera::CameraSequence::CameraSequenceEnvironmentPath*)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceEnvironmentPath_TypeDefinitionIndex)->GetStaticField(0x28BE0);
		}
		::System::Guid _top; // 0x10
		::System::Guid _bottom; // 0x20
		::System::Int32 _level; // 0x30
		::System::String* serializedString; // 0x38

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEENVIRONMENTPATH__CCTOR_OFFSET))();
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEENVIRONMENTPATH_GET_VALUE_OFFSET))(this);
		}

		::System::Void Push(::System::Guid env)
		{
			return ((::System::Void(*)(::PVOID, ::System::Guid))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEENVIRONMENTPATH_PUSH_OFFSET))(this, env);
		}

		::PipelineCamera::CameraSequence::CameraSequenceEnvironmentPath GetPushed(::System::Guid env)
		{
			return ((::PipelineCamera::CameraSequence::CameraSequenceEnvironmentPath(*)(::PVOID, ::System::Guid))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEENVIRONMENTPATH_GETPUSHED_OFFSET))(this, env);
		}

		::System::Guid Pop()
		{
			return ((::System::Guid(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEENVIRONMENTPATH_POP_OFFSET))(this);
		}

		::PipelineCamera::CameraSequence::CameraSequenceEnvironmentPath GetPopped()
		{
			return ((::PipelineCamera::CameraSequence::CameraSequenceEnvironmentPath(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEENVIRONMENTPATH_GETPOPPED_OFFSET))(this);
		}

		::System::Void OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEENVIRONMENTPATH_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEENVIRONMENTPATH_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Boolean Equals(::PipelineCamera::CameraSequence::CameraSequenceEnvironmentPath other)
		{
			return ((::System::Boolean(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceEnvironmentPath))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEENVIRONMENTPATH_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEENVIRONMENTPATH_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEENVIRONMENTPATH_GETHASHCODE_OFFSET))(this);
		}

		::System::Int32 __base_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEENVIRONMENTPATH___BASE_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean __base_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEENVIRONMENTPATH___BASE_EQUALS_OFFSET))(this, P0);
		}
	};
}
