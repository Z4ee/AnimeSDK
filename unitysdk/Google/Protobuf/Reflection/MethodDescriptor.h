#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Google/Protobuf/Reflection/DescriptorBase.h"

namespace Google::Protobuf::Reflection { class FileDescriptor; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Google::Protobuf::Reflection { class MethodDescriptorProto; }
namespace Google::Protobuf::Reflection { class ServiceDescriptor; }
namespace System { class String; }

#define GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTOR_CROSSLINK_OFFSET UNITYSDK_OFFSET(0x171138D0)
#define GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTOR_GET_NAME_OFFSET UNITYSDK_OFFSET(0x17113860)
#define GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTOR_GET_PROTO_OFFSET UNITYSDK_OFFSET(0x17113850)
#define GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x171136F0)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int MethodDescriptor_TypeDefinitionIndex = 6351;

	class MethodDescriptor : public ::Google::Protobuf::Reflection::DescriptorBase
	{
	public:
		::Google::Protobuf::Reflection::MessageDescriptor* inputType; // 0x28
		::Google::Protobuf::Reflection::ServiceDescriptor* service; // 0x30
		::Google::Protobuf::Reflection::MessageDescriptor* outputType; // 0x38
		::Google::Protobuf::Reflection::MethodDescriptorProto* proto; // 0x40

		::System::Void _ctor(::Google::Protobuf::Reflection::MethodDescriptorProto* proto, ::Google::Protobuf::Reflection::FileDescriptor* file, ::Google::Protobuf::Reflection::ServiceDescriptor* parent, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::MethodDescriptorProto*, ::Google::Protobuf::Reflection::FileDescriptor*, ::Google::Protobuf::Reflection::ServiceDescriptor*, ::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTOR__CTOR_OFFSET))(this, proto, file, parent, index);
		}

		::Google::Protobuf::Reflection::MethodDescriptorProto* get_Proto()
		{
			return ((::Google::Protobuf::Reflection::MethodDescriptorProto*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTOR_GET_PROTO_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTOR_GET_NAME_OFFSET))(this);
		}

		::System::Void CrossLink()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTOR_CROSSLINK_OFFSET))(this);
		}
	};
}
