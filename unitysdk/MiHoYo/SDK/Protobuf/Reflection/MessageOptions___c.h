#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf::Reflection { class MessageOptions; }

#define MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEOPTIONS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15DB9540)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEOPTIONS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15DB9580)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEOPTIONS___C___CCTOR_B__44_0_OFFSET UNITYSDK_OFFSET(0x15DB9590)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int MessageOptions___c_TypeDefinitionIndex = 28076;

	class MessageOptions___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Protobuf::Reflection::MessageOptions___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::Protobuf::Reflection::MessageOptions___c**)Il2CppClass::FromTypeDefinitionIndex(MessageOptions___c_TypeDefinitionIndex)->GetStaticField(0x222D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEOPTIONS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEOPTIONS___C__CTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::Reflection::MessageOptions* __cctor_b__44_0()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::MessageOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEOPTIONS___C___CCTOR_B__44_0_OFFSET))(this);
		}
	};
}
