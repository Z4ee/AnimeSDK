#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf::Reflection { class FieldDescriptor; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C377B60)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C377BA0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR___C___CTOR_B__4_4_OFFSET UNITYSDK_OFFSET(0x1C377BB0)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int MessageDescriptor___c_TypeDefinitionIndex = 26084;

	class MessageDescriptor___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor___c**)Il2CppClass::FromTypeDefinitionIndex(MessageDescriptor___c_TypeDefinitionIndex)->GetStaticField(0x1F170);
		}
		static ::System::Func_2<::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptor*, ::System::Int32>** StaticGet___9__4_4()
		{
			return (::System::Func_2<::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptor*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MessageDescriptor___c_TypeDefinitionIndex)->GetStaticField(0x1F178);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __ctor_b__4_4(::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptor* field)
		{
			return ((::System::Int32(*)(::PVOID, ::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptor*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR___C___CTOR_B__4_4_OFFSET))(this, field);
		}
	};
}
