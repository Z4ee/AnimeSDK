#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define PIPELINECAMERA_SERIALIZABLEHASHSTRING_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA3E150)
#define PIPELINECAMERA_SERIALIZABLEHASHSTRING_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xA3E000)
#define PIPELINECAMERA_SERIALIZABLEHASHSTRING_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1DD43480)
#define PIPELINECAMERA_SERIALIZABLEHASHSTRING_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1DD43440)
#define PIPELINECAMERA_SERIALIZABLEHASHSTRING_SET_VALUE_OFFSET UNITYSDK_OFFSET(0xA3E090)
#define PIPELINECAMERA_SERIALIZABLEHASHSTRING_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0xA3E0E0)
#define PIPELINECAMERA_SERIALIZABLEHASHSTRING_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0xA3E0A0)
#define PIPELINECAMERA_SERIALIZABLEHASHSTRING___BASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA3E160)

namespace PipelineCamera
{
	inline static constexpr unsigned int SerializableHashString_TypeDefinitionIndex = 37641;

	struct alignas(8) SerializableHashString
	{
		::Foundation::Unreal::FName _hashString; // 0x10
		::System::String* serializedString; // 0x18

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_SERIALIZABLEHASHSTRING_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_SERIALIZABLEHASHSTRING_SET_VALUE_OFFSET))(this, value);
		}

		::System::Void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_SERIALIZABLEHASHSTRING_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_SERIALIZABLEHASHSTRING_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_SERIALIZABLEHASHSTRING_GETHASHCODE_OFFSET))(this);
		}

		static ::Foundation::Unreal::FName op_Implicit(::PipelineCamera::SerializableHashString& str)
		{
			return ((::Foundation::Unreal::FName(*)(::PipelineCamera::SerializableHashString&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_SERIALIZABLEHASHSTRING_OP_IMPLICIT_OFFSET))(str);
		}

		static ::PipelineCamera::SerializableHashString op_Implicit_1(::Foundation::Unreal::FName str)
		{
			return ((::PipelineCamera::SerializableHashString(*)(::Foundation::Unreal::FName))((::PBYTE)hIl2Cpp + PIPELINECAMERA_SERIALIZABLEHASHSTRING_OP_IMPLICIT_1_OFFSET))(str);
		}

		::System::Int32 __base_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_SERIALIZABLEHASHSTRING___BASE_GETHASHCODE_OFFSET))(this);
		}
	};
}
