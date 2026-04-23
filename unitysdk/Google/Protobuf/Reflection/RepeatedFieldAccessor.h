#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Google/Protobuf/Reflection/FieldAccessorBase.h"

namespace Google::Protobuf { class IMessage; }
namespace Google::Protobuf::Reflection { class FieldDescriptor; }
namespace System { class Object; }
namespace System::Reflection { class PropertyInfo; }

#define GOOGLE_PROTOBUF_REFLECTION_REPEATEDFIELDACCESSOR_HASVALUE_OFFSET UNITYSDK_OFFSET(0x1711AF80)
#define GOOGLE_PROTOBUF_REFLECTION_REPEATEDFIELDACCESSOR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x1711AFD0)
#define GOOGLE_PROTOBUF_REFLECTION_REPEATEDFIELDACCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1711AF00)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int RepeatedFieldAccessor_TypeDefinitionIndex = 6368;

	class RepeatedFieldAccessor : public ::Google::Protobuf::Reflection::FieldAccessorBase
	{
	public:
		::System::Void _ctor(::System::Reflection::PropertyInfo* property, ::Google::Protobuf::Reflection::FieldDescriptor* descriptor)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::PropertyInfo*, ::Google::Protobuf::Reflection::FieldDescriptor*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_REPEATEDFIELDACCESSOR__CTOR_OFFSET))(this, property, descriptor);
		}

		::System::Boolean HasValue(::Google::Protobuf::IMessage* message)
		{
			return ((::System::Boolean(*)(::PVOID, ::Google::Protobuf::IMessage*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_REPEATEDFIELDACCESSOR_HASVALUE_OFFSET))(this, message);
		}

		::System::Void SetValue(::Google::Protobuf::IMessage* message, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::IMessage*, ::System::Object*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_REPEATEDFIELDACCESSOR_SETVALUE_OFFSET))(this, message, value);
		}
	};
}
