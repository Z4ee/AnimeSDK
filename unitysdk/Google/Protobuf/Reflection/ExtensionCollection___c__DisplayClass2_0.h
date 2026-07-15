#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class Extension; }
namespace Google::Protobuf::Reflection { class FieldDescriptor; }
namespace Google::Protobuf::Reflection { class FieldDescriptorProto; }
namespace Google::Protobuf::Reflection { class FileDescriptor; }

#define GOOGLE_PROTOBUF_REFLECTION_EXTENSIONCOLLECTION___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19059C00)
#define GOOGLE_PROTOBUF_REFLECTION_EXTENSIONCOLLECTION___C__DISPLAYCLASS2_0___CTOR_B__0_OFFSET UNITYSDK_OFFSET(0x1905B0F0)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int ExtensionCollection___c__DisplayClass2_0_TypeDefinitionIndex = 5542;

	class ExtensionCollection___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::Google::Protobuf::Reflection::FileDescriptor* file; // 0x10
		::Il2CppArray<::Google::Protobuf::Extension*>* extensions; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_EXTENSIONCOLLECTION___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::FieldDescriptor* __ctor_b__0(::Google::Protobuf::Reflection::FieldDescriptorProto* a1, ::System::Int32 a2)
		{
			return ((::Google::Protobuf::Reflection::FieldDescriptor*(*)(::PVOID, ::Google::Protobuf::Reflection::FieldDescriptorProto*, ::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_EXTENSIONCOLLECTION___C__DISPLAYCLASS2_0___CTOR_B__0_OFFSET))(this, a1, a2);
		}
	};
}
