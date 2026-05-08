#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf::Reflection { class DescriptorProto; }

#define MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPROTO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C519E50)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPROTO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C519E90)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPROTO___C___CCTOR_B__70_0_OFFSET UNITYSDK_OFFSET(0x1C519EA0)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int DescriptorProto___c_TypeDefinitionIndex = 26011;

	class DescriptorProto___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Protobuf::Reflection::DescriptorProto___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::Protobuf::Reflection::DescriptorProto___c**)Il2CppClass::FromTypeDefinitionIndex(DescriptorProto___c_TypeDefinitionIndex)->GetStaticField(0x1F3E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPROTO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPROTO___C__CTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::Reflection::DescriptorProto* __cctor_b__70_0()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::DescriptorProto*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPROTO___C___CCTOR_B__70_0_OFFSET))(this);
		}
	};
}
