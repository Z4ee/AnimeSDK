#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf::Reflection { class FieldDescriptor; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define GOOGLE_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x190724C0)
#define GOOGLE_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19072500)
#define GOOGLE_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR___C___CTOR_B__4_4_OFFSET UNITYSDK_OFFSET(0x19072510)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int MessageDescriptor___c_TypeDefinitionIndex = 5556;

	class MessageDescriptor___c : public ::System::Object
	{
	public:
		static ::Google::Protobuf::Reflection::MessageDescriptor___c** StaticGet___9()
		{
			return (::Google::Protobuf::Reflection::MessageDescriptor___c**)Il2CppClass::FromTypeDefinitionIndex(MessageDescriptor___c_TypeDefinitionIndex)->GetStaticField(0x3E2C0);
		}
		static ::System::Func_2<::Google::Protobuf::Reflection::FieldDescriptor*, ::System::Int32>** StaticGet___9__4_4()
		{
			return (::System::Func_2<::Google::Protobuf::Reflection::FieldDescriptor*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MessageDescriptor___c_TypeDefinitionIndex)->GetStaticField(0x3E2C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __ctor_b__4_4(::Google::Protobuf::Reflection::FieldDescriptor* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::Google::Protobuf::Reflection::FieldDescriptor*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR___C___CTOR_B__4_4_OFFSET))(this, a1);
		}
	};
}
