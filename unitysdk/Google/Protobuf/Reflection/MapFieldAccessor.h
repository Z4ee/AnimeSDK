#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Google/Protobuf/Reflection/FieldAccessorBase.h"

namespace Google::Protobuf { class IMessage; }
namespace Google::Protobuf::Reflection { class FieldDescriptor; }
namespace System { class Object; }
namespace System::Reflection { class PropertyInfo; }

#define GOOGLE_PROTOBUF_REFLECTION_MAPFIELDACCESSOR_HASVALUE_OFFSET UNITYSDK_OFFSET(0x1AAB36A0)
#define GOOGLE_PROTOBUF_REFLECTION_MAPFIELDACCESSOR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x1AAB36F0)
#define GOOGLE_PROTOBUF_REFLECTION_MAPFIELDACCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA9EFC0)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int MapFieldAccessor_TypeDefinitionIndex = 5542;

	class MapFieldAccessor : public ::Google::Protobuf::Reflection::FieldAccessorBase
	{
	public:
		::System::Void _ctor(::System::Reflection::PropertyInfo* a1, ::Google::Protobuf::Reflection::FieldDescriptor* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::PropertyInfo*, ::Google::Protobuf::Reflection::FieldDescriptor*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_MAPFIELDACCESSOR__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean HasValue(::Google::Protobuf::IMessage* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Google::Protobuf::IMessage*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_MAPFIELDACCESSOR_HASVALUE_OFFSET))(this, a1);
		}

		::System::Void SetValue(::Google::Protobuf::IMessage* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::IMessage*, ::System::Object*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_MAPFIELDACCESSOR_SETVALUE_OFFSET))(this, a1, a2);
		}
	};
}
