#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf::Reflection { class EnumValueDescriptorProto; }

#define MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA9E9B0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1FA9E9F0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO___C___CCTOR_B__34_0_OFFSET UNITYSDK_OFFSET(0x1FA9EA00)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int EnumValueDescriptorProto___c_TypeDefinitionIndex = 29120;

	class EnumValueDescriptorProto___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Protobuf::Reflection::EnumValueDescriptorProto___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::Protobuf::Reflection::EnumValueDescriptorProto___c**)Il2CppClass::FromTypeDefinitionIndex(EnumValueDescriptorProto___c_TypeDefinitionIndex)->GetStaticField(0x246F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO___C__CTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::Reflection::EnumValueDescriptorProto* __cctor_b__34_0()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::EnumValueDescriptorProto*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO___C___CCTOR_B__34_0_OFFSET))(this);
		}
	};
}
