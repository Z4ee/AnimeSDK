#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL___C__DISPLAYCLASS24_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1B6250)
#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL___C__DISPLAYCLASS24_0__INVOKERETURN_B__0_OFFSET UNITYSDK_OFFSET(0x1D1B6260)

namespace MiHoYo::SDK::Cloud
{
	inline static constexpr unsigned int MiHoYoSDKDll___c__DisplayClass24_0_TypeDefinitionIndex = 20982;

	class MiHoYoSDKDll___c__DisplayClass24_0 : public ::System::Object
	{
	public:
		::System::String* r; // 0x10
		::System::Boolean isResponse; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL___C__DISPLAYCLASS24_0__CTOR_OFFSET))(this);
		}

		::System::Void _InvokeReturn_b__0(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL___C__DISPLAYCLASS24_0__INVOKERETURN_B__0_OFFSET))(this, message);
		}
	};
}
