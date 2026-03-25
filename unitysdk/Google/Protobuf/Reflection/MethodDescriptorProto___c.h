#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf::Reflection { class MethodDescriptorProto; }

#define GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15B18BA0)
#define GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15B18BE0)
#define GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO___C___CCTOR_B__74_0_OFFSET UNITYSDK_OFFSET(0x15B18BF0)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int MethodDescriptorProto___c_TypeDefinitionIndex = 6274;

	class MethodDescriptorProto___c : public ::System::Object
	{
	public:
		static ::Google::Protobuf::Reflection::MethodDescriptorProto___c** StaticGet___9()
		{
			return (::Google::Protobuf::Reflection::MethodDescriptorProto___c**)Il2CppClass::FromTypeDefinitionIndex(MethodDescriptorProto___c_TypeDefinitionIndex)->GetStaticField(0xE0F0);
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
