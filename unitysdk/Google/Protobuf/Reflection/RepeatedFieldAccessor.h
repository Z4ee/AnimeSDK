#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Google/Protobuf/Reflection/FieldAccessorBase.h"

namespace Google::Protobuf { class IMessage; }
namespace Google::Protobuf::Reflection { class FieldDescriptor; }
namespace System { class Object; }
namespace System::Reflection { class PropertyInfo; }

#define GOOGLE_PROTOBUF_REFLECTION_REPEATEDFIELDACCESSOR_HASVALUE_OFFSET UNITYSDK_OFFSET(0x1BDC7950)
#define GOOGLE_PROTOBUF_REFLECTION_REPEATEDFIELDACCESSOR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x1BDC79A0)
#define GOOGLE_PROTOBUF_REFLECTION_REPEATEDFIELDACCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDC7940)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int RepeatedFieldAccessor_TypeDefinitionIndex = 5575;

	class RepeatedFieldAccessor : public ::Google::Protobuf::Reflection::FieldAccessorBase
	{
	public:
		::System::Void _ctor(::System::Reflection::PropertyInfo* a1, ::Google::Protobuf::Reflection::FieldDescriptor* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::PropertyInfo*, ::Google::Protobuf::Reflection::FieldDescriptor*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_REPEATEDFIELDACCESSOR__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean HasValue(::Google::Protobuf::IMessage* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Google::Protobuf::IMessage*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_REPEATEDFIELDACCESSOR_HASVALUE_OFFSET))(this, a1);
		}

		::System::Void SetValue(::Google::Protobuf::IMessage* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::IMessage*, ::System::Object*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_REPEATEDFIELDACCESSOR_SETVALUE_OFFSET))(this, a1, a2);
		}
	};
}
