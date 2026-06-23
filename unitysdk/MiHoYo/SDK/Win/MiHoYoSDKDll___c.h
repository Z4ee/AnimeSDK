#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class Web; }
namespace MiHoYo::SDK { class Web_OnWebViewPageClose; }

#define MIHOYO_SDK_WIN_MIHOYOSDKDLL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A9E1BF0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A9E1C30)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL___C__LOGIN_OPEN_URL_WITH_LOGIN_STATUS_B__94_1_OFFSET UNITYSDK_OFFSET(0x1A9E1C40)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int MiHoYoSDKDll___c_TypeDefinitionIndex = 21187;

	class MiHoYoSDKDll___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Web_OnWebViewPageClose** StaticGet___9__94_1()
		{
			return (::MiHoYo::SDK::Web_OnWebViewPageClose**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll___c_TypeDefinitionIndex)->GetStaticField(0x9FF0);
		}
		static ::MiHoYo::SDK::Win::MiHoYoSDKDll___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::Win::MiHoYoSDKDll___c**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll___c_TypeDefinitionIndex)->GetStaticField(0x9FF8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL___C__CTOR_OFFSET))(this);
		}

		::System::Void _login_open_url_with_login_status_b__94_1(::MiHoYo::SDK::Web* Web)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL___C__LOGIN_OPEN_URL_WITH_LOGIN_STATUS_B__94_1_OFFSET))(this, Web);
		}
	};
}
