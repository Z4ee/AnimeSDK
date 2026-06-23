#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf::Reflection { class DescriptorProto_Types_ExtensionRange; }

#define MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_EXTENSIONRANGE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E88F1F0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_EXTENSIONRANGE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E88F230)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_EXTENSIONRANGE___C___CCTOR_B__29_0_OFFSET UNITYSDK_OFFSET(0x1E88F240)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int DescriptorProto_Types_ExtensionRange___c_TypeDefinitionIndex = 28502;

	class DescriptorProto_Types_ExtensionRange___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Protobuf::Reflection::DescriptorProto_Types_ExtensionRange___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::Protobuf::Reflection::DescriptorProto_Types_ExtensionRange___c**)Il2CppClass::FromTypeDefinitionIndex(DescriptorProto_Types_ExtensionRange___c_TypeDefinitionIndex)->GetStaticField(0x22E00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_EXTENSIONRANGE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_EXTENSIONRANGE___C__CTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::Reflection::DescriptorProto_Types_ExtensionRange* __cctor_b__29_0()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::DescriptorProto_Types_ExtensionRange*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_EXTENSIONRANGE___C___CCTOR_B__29_0_OFFSET))(this);
		}
	};
}
