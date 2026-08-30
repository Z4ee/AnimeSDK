#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Google/Protobuf/Reflection/DescriptorBase.h"

namespace Google::Protobuf::Reflection { class FileDescriptor; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Google::Protobuf::Reflection { class MethodDescriptorProto; }
namespace Google::Protobuf::Reflection { class ServiceDescriptor; }
namespace System { class String; }

#define GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTOR_CROSSLINK_OFFSET UNITYSDK_OFFSET(0x1DBA75B0)
#define GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTOR_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1DBA7540)
#define GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTOR_GET_PROTO_OFFSET UNITYSDK_OFFSET(0x1DBA7530)
#define GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1DBA73D0)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int MethodDescriptor_TypeDefinitionIndex = 5547;

	class MethodDescriptor : public ::Google::Protobuf::Reflection::DescriptorBase
	{
	public:
		::Google::Protobuf::Reflection::MessageDescriptor* outputType; // 0x28
		::Google::Protobuf::Reflection::ServiceDescriptor* service; // 0x30
		::Google::Protobuf::Reflection::MethodDescriptorProto* proto; // 0x38
		::Google::Protobuf::Reflection::MessageDescriptor* inputType; // 0x40

		::System::Void _ctor(::Google::Protobuf::Reflection::MethodDescriptorProto* a1, ::Google::Protobuf::Reflection::FileDescriptor* a2, ::Google::Protobuf::Reflection::ServiceDescriptor* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::MethodDescriptorProto*, ::Google::Protobuf::Reflection::FileDescriptor*, ::Google::Protobuf::Reflection::ServiceDescriptor*, ::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTOR__CTOR_OFFSET))(this, a1, a2, a3, a4);
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
