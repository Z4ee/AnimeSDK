#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf::Reflection { class EnumDescriptor; }
namespace Google::Protobuf::Reflection { class EnumValueDescriptor; }
namespace Google::Protobuf::Reflection { class EnumValueDescriptorProto; }
namespace Google::Protobuf::Reflection { class FileDescriptor; }

#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTOR___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15AF5970)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTOR___C__DISPLAYCLASS4_0___CTOR_B__0_OFFSET UNITYSDK_OFFSET(0x15AF5C30)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int EnumDescriptor___c__DisplayClass4_0_TypeDefinitionIndex = 6320;

	class EnumDescriptor___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::Google::Protobuf::Reflection::EnumDescriptor* __4__this; // 0x10
		::Google::Protobuf::Reflection::FileDescriptor* file; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTOR___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::EnumValueDescriptor* __ctor_b__0(::Google::Protobuf::Reflection::EnumValueDescriptorProto* value, ::System::Int32 i)
		{
			return ((::Google::Protobuf::Reflection::EnumValueDescriptor*(*)(::PVOID, ::Google::Protobuf::Reflection::EnumValueDescriptorProto*, ::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTOR___C__DISPLAYCLASS4_0___CTOR_B__0_OFFSET))(this, value, i);
		}
	};
}
