#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf::Reflection { class EnumValueDescriptorProto; }

#define GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B372160)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3721A0)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO___C___CCTOR_B__47_0_OFFSET UNITYSDK_OFFSET(0x1B3721B0)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int EnumValueDescriptorProto___c_TypeDefinitionIndex = 5476;

	class EnumValueDescriptorProto___c : public ::System::Object
	{
	public:
		static ::Google::Protobuf::Reflection::EnumValueDescriptorProto___c** StaticGet___9()
		{
			return (::Google::Protobuf::Reflection::EnumValueDescriptorProto___c**)Il2CppClass::FromTypeDefinitionIndex(EnumValueDescriptorProto___c_TypeDefinitionIndex)->GetStaticField(0x1E720);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO___C__CTOR_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::EnumValueDescriptorProto* __cctor_b__47_0()
		{
			return ((::Google::Protobuf::Reflection::EnumValueDescriptorProto*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO___C___CCTOR_B__47_0_OFFSET))(this);
		}
	};
}
