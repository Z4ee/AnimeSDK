#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf { class IMessage; }
namespace System::Reflection { class MethodInfo; }

#define MIHOYO_SDK_PROTOBUF_REFLECTION_REFLECTIONUTIL___C__DISPLAYCLASS4_0__CREATEACTIONIMESSAGE_B__0_OFFSET UNITYSDK_OFFSET(0x196C54E0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_REFLECTIONUTIL___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x196C52E0)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int ReflectionUtil___c__DisplayClass4_0_TypeDefinitionIndex = 34415;

	class ReflectionUtil___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::Reflection::MethodInfo* method; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_REFLECTIONUTIL___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Void _CreateActionIMessage_b__0(::MiHoYo::SDK::Protobuf::IMessage* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::IMessage*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_REFLECTIONUTIL___C__DISPLAYCLASS4_0__CREATEACTIONIMESSAGE_B__0_OFFSET))(this, a1);
		}
	};
}
