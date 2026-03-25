#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class Extension; }
namespace Google::Protobuf { class IMessage; }
namespace Google::Protobuf::Reflection { class FieldDescriptor; }
namespace Google::Protobuf::Reflection { class ReflectionUtil_IExtensionReflectionHelper; }

#define GOOGLE_PROTOBUF_REFLECTION_EXTENSIONACCESSOR_GETVALUE_OFFSET UNITYSDK_OFFSET(0x15AFBA80)
#define GOOGLE_PROTOBUF_REFLECTION_EXTENSIONACCESSOR_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x15AFB990)
#define GOOGLE_PROTOBUF_REFLECTION_EXTENSIONACCESSOR_HASVALUE_OFFSET UNITYSDK_OFFSET(0x15AFB9A0)
#define GOOGLE_PROTOBUF_REFLECTION_EXTENSIONACCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x15AFB920)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int ExtensionAccessor_TypeDefinitionIndex = 6322;

	class ExtensionAccessor : public ::System::Object
	{
	public:
		::Google::Protobuf::Reflection::ReflectionUtil_IExtensionReflectionHelper* helper; // 0x10
		::Google::Protobuf::Extension* extension; // 0x18
		::Google::Protobuf::Reflection::FieldDescriptor* _Descriptor_k__BackingField; // 0x20

		::System::Void _ctor(::Google::Protobuf::Reflection::FieldDescriptor* descriptor)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::FieldDescriptor*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_EXTENSIONACCESSOR__CTOR_OFFSET))(this, descriptor);
		}

		::Google::Protobuf::Reflection::FieldDescriptor* get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::FieldDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_EXTENSIONACCESSOR_GET_DESCRIPTOR_OFFSET))(this);
		}

		::System::Boolean HasValue(::Google::Protobuf::IMessage* message)
		{
			return ((::System::Boolean(*)(::PVOID, ::Google::Protobuf::IMessage*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_EXTENSIONACCESSOR_HASVALUE_OFFSET))(this, message);
		}

		::System::Object* GetValue(::Google::Protobuf::IMessage* message)
		{
			return ((::System::Object*(*)(::PVOID, ::Google::Protobuf::IMessage*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_EXTENSIONACCESSOR_GETVALUE_OFFSET))(this, message);
		}
	};
}
