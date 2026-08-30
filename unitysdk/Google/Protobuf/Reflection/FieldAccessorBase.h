#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class IMessage; }
namespace Google::Protobuf::Reflection { class FieldDescriptor; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Reflection { class PropertyInfo; }

#define GOOGLE_PROTOBUF_REFLECTION_FIELDACCESSORBASE_GETVALUE_OFFSET UNITYSDK_OFFSET(0x1B375FD0)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDACCESSORBASE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1B375FC0)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDACCESSORBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B375EE0)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int FieldAccessorBase_TypeDefinitionIndex = 5533;

	class FieldAccessorBase : public ::System::Object
	{
	public:
		::System::Func_2<::Google::Protobuf::IMessage*, ::System::Object*>* getValueDelegate; // 0x10
		::Google::Protobuf::Reflection::FieldDescriptor* descriptor; // 0x18

		::System::Void _ctor(::System::Reflection::PropertyInfo* a1, ::Google::Protobuf::Reflection::FieldDescriptor* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::PropertyInfo*, ::Google::Protobuf::Reflection::FieldDescriptor*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDACCESSORBASE__CTOR_OFFSET))(this, a1, a2);
		}

		::Google::Protobuf::Reflection::FieldDescriptor* get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::FieldDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDACCESSORBASE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::System::Object* GetValue(::Google::Protobuf::IMessage* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::Google::Protobuf::IMessage*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDACCESSORBASE_GETVALUE_OFFSET))(this, a1);
		}
	};
}
