#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL___C__DISPLAYCLASS27_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15F30F00)
#define MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL___C__DISPLAYCLASS27_0__INVOKERETURN_B__0_OFFSET UNITYSDK_OFFSET(0x15F335C0)

namespace MiHoYo::SDK::MiHoYoCloud
{
	inline static constexpr unsigned int MiHoYoSDKDll___c__DisplayClass27_0_TypeDefinitionIndex = 7736;

	class MiHoYoSDKDll___c__DisplayClass27_0 : public ::System::Object
	{
	public:
		::System::String* r; // 0x10
		::System::Boolean isResponse; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL___C__DISPLAYCLASS27_0__CTOR_OFFSET))(this);
		}

		::System::Void _InvokeReturn_b__0(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL___C__DISPLAYCLASS27_0__INVOKERETURN_B__0_OFFSET))(this, message);
		}
	};
}
