#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEENVIRONMENTPATH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xA5E510)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEENVIRONMENTPATH_EQUALS_OFFSET UNITYSDK_OFFSET(0xA5E4D0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEENVIRONMENTPATH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA5E610)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEENVIRONMENTPATH_GETPOPPED_OFFSET UNITYSDK_OFFSET(0xA5E410)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEENVIRONMENTPATH_GETPUSHED_OFFSET UNITYSDK_OFFSET(0xA5E3C0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEENVIRONMENTPATH_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xA5E320)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEENVIRONMENTPATH_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0xA5E4C0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEENVIRONMENTPATH_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0xA5E4B0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEENVIRONMENTPATH_POP_OFFSET UNITYSDK_OFFSET(0xA5E3F0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEENVIRONMENTPATH_PUSH_OFFSET UNITYSDK_OFFSET(0xA5E330)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEENVIRONMENTPATH__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EBC6550)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEENVIRONMENTPATH___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA5E730)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEENVIRONMENTPATH___BASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA5E6C0)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int CameraSequenceEnvironmentPath_TypeDefinitionIndex = 38620;

	struct alignas(8) CameraSequenceEnvironmentPath
	{
		static ::PipelineCamera::CameraSequence::CameraSequenceEnvironmentPath* StaticGet_Root()
		{
			return (::PipelineCamera::CameraSequence::CameraSequenceEnvironmentPath*)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceEnvironmentPath_TypeDefinitionIndex)->GetStaticField(0x2A500);
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
