#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf::Reflection { class DescriptorProto; }
namespace MiHoYo::SDK::Protobuf::Reflection { class EnumDescriptor; }
namespace MiHoYo::SDK::Protobuf::Reflection { class EnumDescriptorProto; }
namespace MiHoYo::SDK::Protobuf::Reflection { class FieldDescriptor; }
namespace MiHoYo::SDK::Protobuf::Reflection { class FieldDescriptorProto; }
namespace MiHoYo::SDK::Protobuf::Reflection { class FileDescriptor; }
namespace MiHoYo::SDK::Protobuf::Reflection { class GeneratedClrTypeInfo; }
namespace MiHoYo::SDK::Protobuf::Reflection { class MessageDescriptor; }
namespace MiHoYo::SDK::Protobuf::Reflection { class OneofDescriptor; }
namespace MiHoYo::SDK::Protobuf::Reflection { class OneofDescriptorProto; }

#define MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0F8FF0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR___C__DISPLAYCLASS4_0___CTOR_B__0_OFFSET UNITYSDK_OFFSET(0x1B0FA000)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR___C__DISPLAYCLASS4_0___CTOR_B__1_OFFSET UNITYSDK_OFFSET(0x1B0FA170)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR___C__DISPLAYCLASS4_0___CTOR_B__2_OFFSET UNITYSDK_OFFSET(0x1B0FA220)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR___C__DISPLAYCLASS4_0___CTOR_B__3_OFFSET UNITYSDK_OFFSET(0x1B0FA2D0)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int MessageDescriptor___c__DisplayClass4_0_TypeDefinitionIndex = 35171;

	class MessageDescriptor___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Protobuf::Reflection::GeneratedClrTypeInfo* generatedCodeInfo; // 0x10
		::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* __4__this; // 0x18
		::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor* file; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::Reflection::OneofDescriptor* __ctor_b__0(::MiHoYo::SDK::Protobuf::Reflection::OneofDescriptorProto* a1, ::System::Int32 a2)
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::OneofDescriptor*(*)(::PVOID, ::MiHoYo::SDK::Protobuf::Reflection::OneofDescriptorProto*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR___C__DISPLAYCLASS4_0___CTOR_B__0_OFFSET))(this, a1, a2);
		}

		::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* __ctor_b__1(::MiHoYo::SDK::Protobuf::Reflection::DescriptorProto* a1, ::System::Int32 a2)
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID, ::MiHoYo::SDK::Protobuf::Reflection::DescriptorProto*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR___C__DISPLAYCLASS4_0___CTOR_B__1_OFFSET))(this, a1, a2);
		}

		::MiHoYo::SDK::Protobuf::Reflection::EnumDescriptor* __ctor_b__2(::MiHoYo::SDK::Protobuf::Reflection::EnumDescriptorProto* a1, ::System::Int32 a2)
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::EnumDescriptor*(*)(::PVOID, ::MiHoYo::SDK::Protobuf::Reflection::EnumDescriptorProto*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR___C__DISPLAYCLASS4_0___CTOR_B__2_OFFSET))(this, a1, a2);
		}

		::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptor* __ctor_b__3(::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptorProto* a1, ::System::Int32 a2)
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptor*(*)(::PVOID, ::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptorProto*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR___C__DISPLAYCLASS4_0___CTOR_B__3_OFFSET))(this, a1, a2);
		}
	};
}
