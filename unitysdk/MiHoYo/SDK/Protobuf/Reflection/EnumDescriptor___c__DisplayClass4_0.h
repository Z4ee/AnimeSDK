#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf::Reflection { class EnumDescriptor; }
namespace MiHoYo::SDK::Protobuf::Reflection { class EnumValueDescriptor; }
namespace MiHoYo::SDK::Protobuf::Reflection { class EnumValueDescriptorProto; }
namespace MiHoYo::SDK::Protobuf::Reflection { class FileDescriptor; }

#define MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMDESCRIPTOR___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x181AEF40)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMDESCRIPTOR___C__DISPLAYCLASS4_0___CTOR_B__0_OFFSET UNITYSDK_OFFSET(0x181AEFE0)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int EnumDescriptor___c__DisplayClass4_0_TypeDefinitionIndex = 34020;

	class EnumDescriptor___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Protobuf::Reflection::EnumDescriptor* __4__this; // 0x10
		::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor* file; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMDESCRIPTOR___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::Reflection::EnumValueDescriptor* __ctor_b__0(::MiHoYo::SDK::Protobuf::Reflection::EnumValueDescriptorProto* a1, ::System::Int32 a2)
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::EnumValueDescriptor*(*)(::PVOID, ::MiHoYo::SDK::Protobuf::Reflection::EnumValueDescriptorProto*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMDESCRIPTOR___C__DISPLAYCLASS4_0___CTOR_B__0_OFFSET))(this, a1, a2);
		}
	};
}
