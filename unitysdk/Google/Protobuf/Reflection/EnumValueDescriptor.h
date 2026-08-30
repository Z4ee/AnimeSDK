#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Google/Protobuf/Reflection/DescriptorBase.h"

namespace Google::Protobuf::Reflection { class EnumDescriptor; }
namespace Google::Protobuf::Reflection { class EnumValueDescriptorProto; }
namespace Google::Protobuf::Reflection { class FileDescriptor; }
namespace System { class String; }

#define GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTOR_GET_ENUMDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1AA98FD0)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTOR_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1AA98F00)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTOR_GET_NUMBER_OFFSET UNITYSDK_OFFSET(0x1AA8C120)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTOR_GET_PROTO_OFFSET UNITYSDK_OFFSET(0x1AA98EF0)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA95240)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int EnumValueDescriptor_TypeDefinitionIndex = 5527;

	class EnumValueDescriptor : public ::Google::Protobuf::Reflection::DescriptorBase
	{
	public:
		::Google::Protobuf::Reflection::EnumDescriptor* enumDescriptor; // 0x28
		::Google::Protobuf::Reflection::EnumValueDescriptorProto* proto; // 0x30

		::System::Void _ctor(::Google::Protobuf::Reflection::EnumValueDescriptorProto* a1, ::Google::Protobuf::Reflection::FileDescriptor* a2, ::Google::Protobuf::Reflection::EnumDescriptor* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::EnumValueDescriptorProto*, ::Google::Protobuf::Reflection::FileDescriptor*, ::Google::Protobuf::Reflection::EnumDescriptor*, ::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTOR__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::Google::Protobuf::Reflection::EnumValueDescriptorProto* get_Proto()
		{
			return ((::Google::Protobuf::Reflection::EnumValueDescriptorProto*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTOR_GET_PROTO_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTOR_GET_NAME_OFFSET))(this);
		}

		::System::Int32 get_Number()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTOR_GET_NUMBER_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::EnumDescriptor* get_EnumDescriptor()
		{
			return ((::Google::Protobuf::Reflection::EnumDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTOR_GET_ENUMDESCRIPTOR_OFFSET))(this);
		}
	};
}
