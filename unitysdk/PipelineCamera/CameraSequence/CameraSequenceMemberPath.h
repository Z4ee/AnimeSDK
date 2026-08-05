#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceMemberPath___path_e__FixedBuffer.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEMEMBERPATH_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1F1B4510)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEMEMBERPATH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xA94CC0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEMEMBERPATH_EQUALS_OFFSET UNITYSDK_OFFSET(0xA94BE0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEMEMBERPATH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA94CD0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEMEMBERPATH_ISEMPTY_OFFSET UNITYSDK_OFFSET(0xA949D0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEMEMBERPATH_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0xA94DD0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEMEMBERPATH_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0xA94DC0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEMEMBERPATH_PUSH_OFFSET UNITYSDK_OFFSET(0xA94A80)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEMEMBERPATH_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1F1B4230)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEMEMBERPATH_STEPINTO_1_OFFSET UNITYSDK_OFFSET(0xA94B00)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEMEMBERPATH_STEPINTO_OFFSET UNITYSDK_OFFSET(0xA94AE0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEMEMBERPATH_TOVARIABLESTRING_OFFSET UNITYSDK_OFFSET(0xA94A20)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEMEMBERPATH__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F1B4830)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEMEMBERPATH___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA94E50)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEMEMBERPATH___BASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA94DE0)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int CameraSequenceMemberPath_TypeDefinitionIndex = 38621;

	struct alignas(8) CameraSequenceMemberPath
	{
		static ::System::Text::StringBuilder** StaticGet__stringBuilder()
		{
			return (::System::Text::StringBuilder**)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceMemberPath_TypeDefinitionIndex)->GetStaticField(0x2A560);
		}
		::System::Int32 _current; // 0x10
		::PipelineCamera::CameraSequence::CameraSequenceMemberPath___path_e__FixedBuffer _path; // 0x14
		::System::String* serializedString; // 0x38

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEMEMBERPATH__CCTOR_OFFSET))();
		}

		::System::Boolean IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEMEMBERPATH_ISEMPTY_OFFSET))(this);
		}

		::System::String* ToVariableString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEMEMBERPATH_TOVARIABLESTRING_OFFSET))(this);
		}

		::System::Void Push(::System::UInt32 elem)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEMEMBERPATH_PUSH_OFFSET))(this, elem);
		}

		/*
		::PipelineCamera::CameraSequence::CameraSequenceMemberPath StepInto(::Foundation::Unreal::FName id)
		{
			return ((::PipelineCamera::CameraSequence::CameraSequenceMemberPath(*)(::PVOID, ::Foundation::Unreal::FName))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEMEMBERPATH_STEPINTO_OFFSET))(this, id);
		}
		*/

		/*
		::PipelineCamera::CameraSequence::CameraSequenceMemberPath StepInto_1(::Foundation::Unreal::FNameEntryId id)
		{
			return ((::PipelineCamera::CameraSequence::CameraSequenceMemberPath(*)(::PVOID, ::Foundation::Unreal::FNameEntryId))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEMEMBERPATH_STEPINTO_1_OFFSET))(this, id);
		}
		*/

		::System::Boolean Equals(::PipelineCamera::CameraSequence::CameraSequenceMemberPath other)
		{
			return ((::System::Boolean(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEMEMBERPATH_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEMEMBERPATH_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEMEMBERPATH_GETHASHCODE_OFFSET))(this);
		}

		/*
		static ::System::Void Serialize(::System::ReadOnlySpan_1<::System::UInt32> path, ::System::String*& output)
		{
			return ((::System::Void(*)(::System::ReadOnlySpan_1<::System::UInt32>, ::System::String*&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEMEMBERPATH_SERIALIZE_OFFSET))(path, output);
		}
		*/

		/*
		static ::System::Int32 Deserialize(::System::String* input, ::System::Span_1<::System::UInt32> output)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Span_1<::System::UInt32>))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEMEMBERPATH_DESERIALIZE_OFFSET))(input, output);
		}
		*/

		::System::Void OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEMEMBERPATH_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEMEMBERPATH_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Int32 __base_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEMEMBERPATH___BASE_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean __base_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEMEMBERPATH___BASE_EQUALS_OFFSET))(this, P0);
		}
	};
}
