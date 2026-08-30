#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class Extension; }
namespace Google::Protobuf::Reflection { class FieldDescriptor; }
namespace Google::Protobuf::Reflection { class FieldDescriptorProto; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }

#define GOOGLE_PROTOBUF_REFLECTION_EXTENSIONCOLLECTION___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B373500)
#define GOOGLE_PROTOBUF_REFLECTION_EXTENSIONCOLLECTION___C__DISPLAYCLASS3_0___CTOR_B__0_OFFSET UNITYSDK_OFFSET(0x1B375040)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int ExtensionCollection___c__DisplayClass3_0_TypeDefinitionIndex = 5532;

	class ExtensionCollection___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::Google::Protobuf::Reflection::MessageDescriptor* message; // 0x10
		::Il2CppArray<::Google::Protobuf::Extension*>* extensions; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_EXTENSIONCOLLECTION___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::FieldDescriptor* __ctor_b__0(::Google::Protobuf::Reflection::FieldDescriptorProto* a1, ::System::Int32 a2)
		{
			return ((::Google::Protobuf::Reflection::FieldDescriptor*(*)(::PVOID, ::Google::Protobuf::Reflection::FieldDescriptorProto*, ::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_EXTENSIONCOLLECTION___C__DISPLAYCLASS3_0___CTOR_B__0_OFFSET))(this, a1, a2);
		}
	};
}
