#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf::Reflection { class FieldDescriptorProto; }

#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17E5FA40)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17E5FA80)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO___C___CCTOR_B__111_0_OFFSET UNITYSDK_OFFSET(0x17E5FA90)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int FieldDescriptorProto___c_TypeDefinitionIndex = 5473;

	class FieldDescriptorProto___c : public ::System::Object
	{
	public:
		static ::Google::Protobuf::Reflection::FieldDescriptorProto___c** StaticGet___9()
		{
			return (::Google::Protobuf::Reflection::FieldDescriptorProto___c**)Il2CppClass::FromTypeDefinitionIndex(FieldDescriptorProto___c_TypeDefinitionIndex)->GetStaticField(0x3DCE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO___C__CTOR_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::FieldDescriptorProto* __cctor_b__111_0()
		{
			return ((::Google::Protobuf::Reflection::FieldDescriptorProto*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO___C___CCTOR_B__111_0_OFFSET))(this);
		}
	};
}
