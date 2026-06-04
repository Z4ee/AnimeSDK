#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf { class IMessage; }
namespace System::Reflection { class MethodInfo; }

#define MIHOYO_SDK_PROTOBUF_REFLECTION_REFLECTIONUTIL___C__DISPLAYCLASS3_0__CREATEACTIONIMESSAGEOBJECT_B__0_OFFSET UNITYSDK_OFFSET(0x181C47A0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_REFLECTIONUTIL___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x181C4710)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int ReflectionUtil___c__DisplayClass3_0_TypeDefinitionIndex = 34043;

	class ReflectionUtil___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::System::Reflection::MethodInfo* method; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_REFLECTIONUTIL___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Void _CreateActionIMessageObject_b__0(::MiHoYo::SDK::Protobuf::IMessage* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::IMessage*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_REFLECTIONUTIL___C__DISPLAYCLASS3_0__CREATEACTIONIMESSAGEOBJECT_B__0_OFFSET))(this, a1, a2);
		}
	};
}
