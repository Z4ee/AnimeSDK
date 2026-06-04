#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf::Reflection { class DescriptorProto; }
namespace Google::Protobuf::Reflection { class EnumDescriptor; }
namespace Google::Protobuf::Reflection { class EnumDescriptorProto; }
namespace Google::Protobuf::Reflection { class FieldDescriptor; }
namespace Google::Protobuf::Reflection { class FieldDescriptorProto; }
namespace Google::Protobuf::Reflection { class FileDescriptor; }
namespace Google::Protobuf::Reflection { class GeneratedClrTypeInfo; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Google::Protobuf::Reflection { class OneofDescriptor; }
namespace Google::Protobuf::Reflection { class OneofDescriptorProto; }

#define GOOGLE_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17E70470)
#define GOOGLE_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR___C__DISPLAYCLASS4_0___CTOR_B__0_OFFSET UNITYSDK_OFFSET(0x17E70E90)
#define GOOGLE_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR___C__DISPLAYCLASS4_0___CTOR_B__1_OFFSET UNITYSDK_OFFSET(0x17E70F40)
#define GOOGLE_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR___C__DISPLAYCLASS4_0___CTOR_B__2_OFFSET UNITYSDK_OFFSET(0x17E70FF0)
#define GOOGLE_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR___C__DISPLAYCLASS4_0___CTOR_B__3_OFFSET UNITYSDK_OFFSET(0x17E710A0)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int MessageDescriptor___c__DisplayClass4_0_TypeDefinitionIndex = 5552;

	class MessageDescriptor___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::Google::Protobuf::Reflection::GeneratedClrTypeInfo* generatedCodeInfo; // 0x10
		::Google::Protobuf::Reflection::FileDescriptor* file; // 0x18
		::Google::Protobuf::Reflection::MessageDescriptor* __4__this; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::OneofDescriptor* __ctor_b__0(::Google::Protobuf::Reflection::OneofDescriptorProto* a1, ::System::Int32 a2)
		{
			return ((::Google::Protobuf::Reflection::OneofDescriptor*(*)(::PVOID, ::Google::Protobuf::Reflection::OneofDescriptorProto*, ::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR___C__DISPLAYCLASS4_0___CTOR_B__0_OFFSET))(this, a1, a2);
		}

		::Google::Protobuf::Reflection::MessageDescriptor* __ctor_b__1(::Google::Protobuf::Reflection::DescriptorProto* a1, ::System::Int32 a2)
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID, ::Google::Protobuf::Reflection::DescriptorProto*, ::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR___C__DISPLAYCLASS4_0___CTOR_B__1_OFFSET))(this, a1, a2);
		}

		::Google::Protobuf::Reflection::EnumDescriptor* __ctor_b__2(::Google::Protobuf::Reflection::EnumDescriptorProto* a1, ::System::Int32 a2)
		{
			return ((::Google::Protobuf::Reflection::EnumDescriptor*(*)(::PVOID, ::Google::Protobuf::Reflection::EnumDescriptorProto*, ::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR___C__DISPLAYCLASS4_0___CTOR_B__2_OFFSET))(this, a1, a2);
		}

		::Google::Protobuf::Reflection::FieldDescriptor* __ctor_b__3(::Google::Protobuf::Reflection::FieldDescriptorProto* a1, ::System::Int32 a2)
		{
			return ((::Google::Protobuf::Reflection::FieldDescriptor*(*)(::PVOID, ::Google::Protobuf::Reflection::FieldDescriptorProto*, ::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR___C__DISPLAYCLASS4_0___CTOR_B__3_OFFSET))(this, a1, a2);
		}
	};
}
