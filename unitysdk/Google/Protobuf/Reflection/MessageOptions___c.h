#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf::Reflection { class MessageOptions; }

#define GOOGLE_PROTOBUF_REFLECTION_MESSAGEOPTIONS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15B16080)
#define GOOGLE_PROTOBUF_REFLECTION_MESSAGEOPTIONS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15B160C0)
#define GOOGLE_PROTOBUF_REFLECTION_MESSAGEOPTIONS___C___CCTOR_B__70_0_OFFSET UNITYSDK_OFFSET(0x15B160D0)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int MessageOptions___c_TypeDefinitionIndex = 6280;

	class MessageOptions___c : public ::System::Object
	{
	public:
		static ::Google::Protobuf::Reflection::MessageOptions___c** StaticGet___9()
		{
			return (::Google::Protobuf::Reflection::MessageOptions___c**)Il2CppClass::FromTypeDefinitionIndex(MessageOptions___c_TypeDefinitionIndex)->GetStaticField(0xE080);
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
