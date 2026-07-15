#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf::Reflection { class DescriptorProto; }
namespace Google::Protobuf::Reflection { class EnumDescriptor; }
namespace Google::Protobuf::Reflection { class EnumDescriptorProto; }
namespace Google::Protobuf::Reflection { class FileDescriptor; }
namespace Google::Protobuf::Reflection { class GeneratedClrTypeInfo; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Google::Protobuf::Reflection { class ServiceDescriptor; }
namespace Google::Protobuf::Reflection { class ServiceDescriptorProto; }

#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTOR___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19062320)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTOR___C__DISPLAYCLASS2_0___CTOR_B__0_OFFSET UNITYSDK_OFFSET(0x19065E20)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTOR___C__DISPLAYCLASS2_0___CTOR_B__1_OFFSET UNITYSDK_OFFSET(0x19066320)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTOR___C__DISPLAYCLASS2_0___CTOR_B__2_OFFSET UNITYSDK_OFFSET(0x190663D0)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int FileDescriptor___c__DisplayClass2_0_TypeDefinitionIndex = 5549;

	class FileDescriptor___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::Google::Protobuf::Reflection::GeneratedClrTypeInfo* generatedCodeInfo; // 0x10
		::Google::Protobuf::Reflection::FileDescriptor* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTOR___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::MessageDescriptor* __ctor_b__0(::Google::Protobuf::Reflection::DescriptorProto* a1, ::System::Int32 a2)
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID, ::Google::Protobuf::Reflection::DescriptorProto*, ::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTOR___C__DISPLAYCLASS2_0___CTOR_B__0_OFFSET))(this, a1, a2);
		}

		::Google::Protobuf::Reflection::EnumDescriptor* __ctor_b__1(::Google::Protobuf::Reflection::EnumDescriptorProto* a1, ::System::Int32 a2)
		{
			return ((::Google::Protobuf::Reflection::EnumDescriptor*(*)(::PVOID, ::Google::Protobuf::Reflection::EnumDescriptorProto*, ::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTOR___C__DISPLAYCLASS2_0___CTOR_B__1_OFFSET))(this, a1, a2);
		}

		::Google::Protobuf::Reflection::ServiceDescriptor* __ctor_b__2(::Google::Protobuf::Reflection::ServiceDescriptorProto* a1, ::System::Int32 a2)
		{
			return ((::Google::Protobuf::Reflection::ServiceDescriptor*(*)(::PVOID, ::Google::Protobuf::Reflection::ServiceDescriptorProto*, ::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTOR___C__DISPLAYCLASS2_0___CTOR_B__2_OFFSET))(this, a1, a2);
		}
	};
}
