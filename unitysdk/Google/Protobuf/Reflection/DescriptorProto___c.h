#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf::Reflection { class DescriptorProto; }

#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17E4C790)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17E4C7D0)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO___C___CCTOR_B__78_0_OFFSET UNITYSDK_OFFSET(0x17E4C7E0)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int DescriptorProto___c_TypeDefinitionIndex = 5466;

	class DescriptorProto___c : public ::System::Object
	{
	public:
		static ::Google::Protobuf::Reflection::DescriptorProto___c** StaticGet___9()
		{
			return (::Google::Protobuf::Reflection::DescriptorProto___c**)Il2CppClass::FromTypeDefinitionIndex(DescriptorProto___c_TypeDefinitionIndex)->GetStaticField(0x3D2A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO___C__CTOR_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::DescriptorProto* __cctor_b__78_0()
		{
			return ((::Google::Protobuf::Reflection::DescriptorProto*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO___C___CCTOR_B__78_0_OFFSET))(this);
		}
	};
}
