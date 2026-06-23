#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL___C__DISPLAYCLASS25_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB33CA0)
#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL___C__DISPLAYCLASS25_0__ONINITRESPONSE_B__0_OFFSET UNITYSDK_OFFSET(0x1BB33CB0)

namespace MiHoYo::SDK::Cloud
{
	inline static constexpr unsigned int MiHoYoSDKDll___c__DisplayClass25_0_TypeDefinitionIndex = 20636;

	class MiHoYoSDKDll___c__DisplayClass25_0 : public ::System::Object
	{
	public:
		::System::String* response; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL___C__DISPLAYCLASS25_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitResponse_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL___C__DISPLAYCLASS25_0__ONINITRESPONSE_B__0_OFFSET))(this);
		}
	};
}
