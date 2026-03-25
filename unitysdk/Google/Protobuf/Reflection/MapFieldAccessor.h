#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Google/Protobuf/Reflection/FieldAccessorBase.h"

namespace Google::Protobuf { class IMessage; }
namespace Google::Protobuf::Reflection { class FieldDescriptor; }
namespace System { class Object; }
namespace System::Reflection { class PropertyInfo; }

#define GOOGLE_PROTOBUF_REFLECTION_MAPFIELDACCESSOR_HASVALUE_OFFSET UNITYSDK_OFFSET(0x15B12E60)
#define GOOGLE_PROTOBUF_REFLECTION_MAPFIELDACCESSOR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x15B12EB0)
#define GOOGLE_PROTOBUF_REFLECTION_MAPFIELDACCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x15AFEA80)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int MapFieldAccessor_TypeDefinitionIndex = 6336;

	class MapFieldAccessor : public ::Google::Protobuf::Reflection::FieldAccessorBase
	{
	public:
		::System::Void _ctor(::System::Reflection::PropertyInfo* property, ::Google::Protobuf::Reflection::FieldDescriptor* descriptor)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::PropertyInfo*, ::Google::Protobuf::Reflection::FieldDescriptor*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_MAPFIELDACCESSOR__CTOR_OFFSET))(this, property, descriptor);
		}

		::System::Boolean HasValue(::Google::Protobuf::IMessage* message)
		{
			return ((::System::Boolean(*)(::PVOID, ::Google::Protobuf::IMessage*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_MAPFIELDACCESSOR_HASVALUE_OFFSET))(this, message);
		}

		::System::Void SetValue(::Google::Protobuf::IMessage* message, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::IMessage*, ::System::Object*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_MAPFIELDACCESSOR_SETVALUE_OFFSET))(this, message, value);
		}
	};
}
