#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_MIHOYOSDK___C__DISPLAYCLASS20_0__CTOR_OFFSET UNITYSDK_OFFSET(0x8505E40)
#define MIHOYO_SDK_MIHOYOSDK___C__DISPLAYCLASS20_0__INVOKE_B__0_OFFSET UNITYSDK_OFFSET(0x85063C0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDK___c__DisplayClass20_0_TypeDefinitionIndex = 37023;

	class MiHoYoSDK___c__DisplayClass20_0 : public ::System::Object
	{
	public:
		::System::String* funcName; // 0x10
		::System::Action_1<::System::String*>* callback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDK___C__DISPLAYCLASS20_0__CTOR_OFFSET))(this);
		}

		::System::Void _Invoke_b__0(::System::String* response)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDK___C__DISPLAYCLASS20_0__INVOKE_B__0_OFFSET))(this, response);
		}
	};
}
