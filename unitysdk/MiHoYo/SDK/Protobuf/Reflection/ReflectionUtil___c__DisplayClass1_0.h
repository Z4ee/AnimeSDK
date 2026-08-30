#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf { class IMessage; }
namespace System::Reflection { class MethodInfo; }

#define MIHOYO_SDK_PROTOBUF_REFLECTION_REFLECTIONUTIL___C__DISPLAYCLASS1_0__CREATEFUNCIMESSAGEOBJECT_B__0_OFFSET UNITYSDK_OFFSET(0x1B710D50)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_REFLECTIONUTIL___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B710C60)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int ReflectionUtil___c__DisplayClass1_0_TypeDefinitionIndex = 35179;

	class ReflectionUtil___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::System::Reflection::MethodInfo* method; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_REFLECTIONUTIL___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
		}

		::System::Object* _CreateFuncIMessageObject_b__0(::MiHoYo::SDK::Protobuf::IMessage* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::MiHoYo::SDK::Protobuf::IMessage*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_REFLECTIONUTIL___C__DISPLAYCLASS1_0__CREATEFUNCIMESSAGEOBJECT_B__0_OFFSET))(this, a1);
		}
	};
}
