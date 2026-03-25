#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf::Reflection { class OneofDescriptorProto; }

#define MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15DBC520)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15DBC560)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO___C___CCTOR_B__29_0_OFFSET UNITYSDK_OFFSET(0x15DBC570)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int OneofDescriptorProto___c_TypeDefinitionIndex = 28062;

	class OneofDescriptorProto___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Protobuf::Reflection::OneofDescriptorProto___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::Protobuf::Reflection::OneofDescriptorProto___c**)Il2CppClass::FromTypeDefinitionIndex(OneofDescriptorProto___c_TypeDefinitionIndex)->GetStaticField(0x224A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO___C__CTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::Reflection::OneofDescriptorProto* __cctor_b__29_0()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::OneofDescriptorProto*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO___C___CCTOR_B__29_0_OFFSET))(this);
		}
	};
}
