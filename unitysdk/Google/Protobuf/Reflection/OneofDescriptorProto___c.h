#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf::Reflection { class OneofDescriptorProto; }

#define GOOGLE_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BDC54C0)
#define GOOGLE_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDC5500)
#define GOOGLE_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO___C___CCTOR_B__37_0_OFFSET UNITYSDK_OFFSET(0x1BDC5510)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int OneofDescriptorProto___c_TypeDefinitionIndex = 5480;

	class OneofDescriptorProto___c : public ::System::Object
	{
	public:
		static ::Google::Protobuf::Reflection::OneofDescriptorProto___c** StaticGet___9()
		{
			return (::Google::Protobuf::Reflection::OneofDescriptorProto___c**)Il2CppClass::FromTypeDefinitionIndex(OneofDescriptorProto___c_TypeDefinitionIndex)->GetStaticField(0x39450);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO___C__CTOR_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::OneofDescriptorProto* __cctor_b__37_0()
		{
			return ((::Google::Protobuf::Reflection::OneofDescriptorProto*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO___C___CCTOR_B__37_0_OFFSET))(this);
		}
	};
}
