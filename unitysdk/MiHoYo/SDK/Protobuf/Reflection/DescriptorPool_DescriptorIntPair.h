#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MiHoYo::SDK::Protobuf::Reflection { class IDescriptor; }
namespace System { class Object; }

#define MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPOOL_DESCRIPTORINTPAIR_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x229ADE0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPOOL_DESCRIPTORINTPAIR_EQUALS_OFFSET UNITYSDK_OFFSET(0x1792250)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPOOL_DESCRIPTORINTPAIR_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1792280)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPOOL_DESCRIPTORINTPAIR__CTOR_OFFSET UNITYSDK_OFFSET(0x1792240)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int DescriptorPool_DescriptorIntPair_TypeDefinitionIndex = 33733;

	struct alignas(8) DescriptorPool_DescriptorIntPair
	{
		::System::Int32 number; // 0x10
		::MiHoYo::SDK::Protobuf::Reflection::IDescriptor* descriptor; // 0x18

		::System::Void _ctor(::MiHoYo::SDK::Protobuf::Reflection::IDescriptor* descriptor, ::System::Int32 number)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::Reflection::IDescriptor*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPOOL_DESCRIPTORINTPAIR__CTOR_OFFSET))(this, descriptor, number);
		}

		::System::Boolean Equals(::MiHoYo::SDK::Protobuf::Reflection::DescriptorPool_DescriptorIntPair other)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::Protobuf::Reflection::DescriptorPool_DescriptorIntPair))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPOOL_DESCRIPTORINTPAIR_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPOOL_DESCRIPTORINTPAIR_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPOOL_DESCRIPTORINTPAIR_GETHASHCODE_OFFSET))(this);
		}
	};
}
