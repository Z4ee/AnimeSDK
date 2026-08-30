#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf::Reflection { class MessageOptions; }

#define GOOGLE_PROTOBUF_REFLECTION_MESSAGEOPTIONS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DBA7300)
#define GOOGLE_PROTOBUF_REFLECTION_MESSAGEOPTIONS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1DBA7340)
#define GOOGLE_PROTOBUF_REFLECTION_MESSAGEOPTIONS___C___CCTOR_B__70_0_OFFSET UNITYSDK_OFFSET(0x1DBA7350)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int MessageOptions___c_TypeDefinitionIndex = 5486;

	class MessageOptions___c : public ::System::Object
	{
	public:
		static ::Google::Protobuf::Reflection::MessageOptions___c** StaticGet___9()
		{
			return (::Google::Protobuf::Reflection::MessageOptions___c**)Il2CppClass::FromTypeDefinitionIndex(MessageOptions___c_TypeDefinitionIndex)->GetStaticField(0x18D80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_MESSAGEOPTIONS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_MESSAGEOPTIONS___C__CTOR_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::MessageOptions* __cctor_b__70_0()
		{
			return ((::Google::Protobuf::Reflection::MessageOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_MESSAGEOPTIONS___C___CCTOR_B__70_0_OFFSET))(this);
		}
	};
}
