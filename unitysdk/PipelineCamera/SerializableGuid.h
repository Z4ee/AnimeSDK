#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define PIPELINECAMERA_SERIALIZABLEGUID_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA38B80)
#define PIPELINECAMERA_SERIALIZABLEGUID_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x98EEF0)
#define PIPELINECAMERA_SERIALIZABLEGUID_ISEMPTY_OFFSET UNITYSDK_OFFSET(0xA38BE0)
#define PIPELINECAMERA_SERIALIZABLEGUID_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1DC2FFD0)
#define PIPELINECAMERA_SERIALIZABLEGUID_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1DC2FF70)
#define PIPELINECAMERA_SERIALIZABLEGUID_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0xA38B10)
#define PIPELINECAMERA_SERIALIZABLEGUID_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0xA38AD0)
#define PIPELINECAMERA_SERIALIZABLEGUID___BASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA38CB0)

namespace PipelineCamera
{
	inline static constexpr unsigned int SerializableGuid_TypeDefinitionIndex = 37696;

	struct alignas(8) SerializableGuid
	{
		::System::Guid _guid; // 0x10
		::System::String* serializedString; // 0x20

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_SERIALIZABLEGUID_GET_VALUE_OFFSET))(this);
		}

		::System::Void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_SERIALIZABLEGUID_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_SERIALIZABLEGUID_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_SERIALIZABLEGUID_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_SERIALIZABLEGUID_ISEMPTY_OFFSET))(this);
		}

		static ::System::Guid op_Implicit(::PipelineCamera::SerializableGuid& item)
		{
			return ((::System::Guid(*)(::PipelineCamera::SerializableGuid&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_SERIALIZABLEGUID_OP_IMPLICIT_OFFSET))(item);
		}

		static ::PipelineCamera::SerializableGuid op_Implicit_1(::System::Guid& item)
		{
			return ((::PipelineCamera::SerializableGuid(*)(::System::Guid&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_SERIALIZABLEGUID_OP_IMPLICIT_1_OFFSET))(item);
		}

		::System::Int32 __base_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_SERIALIZABLEGUID___BASE_GETHASHCODE_OFFSET))(this);
		}
	};
}
