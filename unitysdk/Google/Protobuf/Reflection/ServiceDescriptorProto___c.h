#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf::Reflection { class ServiceDescriptorProto; }

#define GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17E7CFC0)
#define GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17E7D000)
#define GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO___C___CCTOR_B__42_0_OFFSET UNITYSDK_OFFSET(0x17E7D010)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int ServiceDescriptorProto___c_TypeDefinitionIndex = 5484;

	class ServiceDescriptorProto___c : public ::System::Object
	{
	public:
		static ::Google::Protobuf::Reflection::ServiceDescriptorProto___c** StaticGet___9()
		{
			return (::Google::Protobuf::Reflection::ServiceDescriptorProto___c**)Il2CppClass::FromTypeDefinitionIndex(ServiceDescriptorProto___c_TypeDefinitionIndex)->GetStaticField(0x421F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO___C__CTOR_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::ServiceDescriptorProto* __cctor_b__42_0()
		{
			return ((::Google::Protobuf::Reflection::ServiceDescriptorProto*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO___C___CCTOR_B__42_0_OFFSET))(this);
		}
	};
}
