#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf::Reflection { class EnumDescriptorProto; }

#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15AF79D0)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15AF7A10)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x15AF7A20)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int EnumDescriptorProto___c_TypeDefinitionIndex = 6268;

	class EnumDescriptorProto___c : public ::System::Object
	{
	public:
		static ::Google::Protobuf::Reflection::EnumDescriptorProto___c** StaticGet___9()
		{
			return (::Google::Protobuf::Reflection::EnumDescriptorProto___c**)Il2CppClass::FromTypeDefinitionIndex(EnumDescriptorProto___c_TypeDefinitionIndex)->GetStaticField(0xC9E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO___C__CTOR_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::EnumDescriptorProto* __cctor_b__53_0()
		{
			return ((::Google::Protobuf::Reflection::EnumDescriptorProto*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO___C___CCTOR_B__53_0_OFFSET))(this);
		}
	};
}
