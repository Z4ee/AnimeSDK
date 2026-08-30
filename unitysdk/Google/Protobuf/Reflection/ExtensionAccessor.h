#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class Extension; }
namespace Google::Protobuf { class IMessage; }
namespace Google::Protobuf::Reflection { class FieldDescriptor; }
namespace Google::Protobuf::Reflection { class ReflectionUtil_IExtensionReflectionHelper; }

#define GOOGLE_PROTOBUF_REFLECTION_EXTENSIONACCESSOR_GETVALUE_OFFSET UNITYSDK_OFFSET(0x1AA9B780)
#define GOOGLE_PROTOBUF_REFLECTION_EXTENSIONACCESSOR_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1AA9B640)
#define GOOGLE_PROTOBUF_REFLECTION_EXTENSIONACCESSOR_HASVALUE_OFFSET UNITYSDK_OFFSET(0x1AA9B650)
#define GOOGLE_PROTOBUF_REFLECTION_EXTENSIONACCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA9B5D0)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int ExtensionAccessor_TypeDefinitionIndex = 5528;

	class ExtensionAccessor : public ::System::Object
	{
	public:
		::Google::Protobuf::Reflection::ReflectionUtil_IExtensionReflectionHelper* helper; // 0x10
		::Google::Protobuf::Reflection::FieldDescriptor* _Descriptor_k__BackingField; // 0x18
		::Google::Protobuf::Extension* extension; // 0x20

		::System::Void _ctor(::Google::Protobuf::Reflection::FieldDescriptor* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::FieldDescriptor*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_EXTENSIONACCESSOR__CTOR_OFFSET))(this, a1);
		}

		::Google::Protobuf::Reflection::FieldDescriptor* get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::FieldDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_EXTENSIONACCESSOR_GET_DESCRIPTOR_OFFSET))(this);
		}

		::System::Boolean HasValue(::Google::Protobuf::IMessage* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Google::Protobuf::IMessage*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_EXTENSIONACCESSOR_HASVALUE_OFFSET))(this, a1);
		}

		::System::Object* GetValue(::Google::Protobuf::IMessage* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::Google::Protobuf::IMessage*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_EXTENSIONACCESSOR_GETVALUE_OFFSET))(this, a1);
		}
	};
}
