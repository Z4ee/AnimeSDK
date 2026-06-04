#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf::Reflection { class MethodDescriptorProto; }

#define GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17E76030)
#define GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17E76070)
#define GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO___C___CCTOR_B__74_0_OFFSET UNITYSDK_OFFSET(0x17E76080)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int MethodDescriptorProto___c_TypeDefinitionIndex = 5486;

	class MethodDescriptorProto___c : public ::System::Object
	{
	public:
		static ::Google::Protobuf::Reflection::MethodDescriptorProto___c** StaticGet___9()
		{
			return (::Google::Protobuf::Reflection::MethodDescriptorProto___c**)Il2CppClass::FromTypeDefinitionIndex(MethodDescriptorProto___c_TypeDefinitionIndex)->GetStaticField(0x41F30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO___C__CTOR_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::MethodDescriptorProto* __cctor_b__74_0()
		{
			return ((::Google::Protobuf::Reflection::MethodDescriptorProto*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO___C___CCTOR_B__74_0_OFFSET))(this);
		}
	};
}
