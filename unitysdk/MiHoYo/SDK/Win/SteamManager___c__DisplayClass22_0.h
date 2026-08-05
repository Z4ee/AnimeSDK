#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModelEx; }
namespace MiHoYo::SDK::Win { class SteamManager; }
namespace System { class String; }

#define MIHOYO_SDK_WIN_STEAMMANAGER___C__DISPLAYCLASS22_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4C8570)
#define MIHOYO_SDK_WIN_STEAMMANAGER___C__DISPLAYCLASS22_0__ONCREATEORDER_G__CANCELCALLBACK_0_OFFSET UNITYSDK_OFFSET(0x1D4C8580)
#define MIHOYO_SDK_WIN_STEAMMANAGER___C__DISPLAYCLASS22_0__ONCREATEORDER_G__FAILEDCALLBACK_1_OFFSET UNITYSDK_OFFSET(0x1D4C8600)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int SteamManager___c__DisplayClass22_0_TypeDefinitionIndex = 21464;

	class SteamManager___c__DisplayClass22_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Win::SteamManager* __4__this; // 0x10
		::MiHoYo::SDK::NetworkResponseModelEx* response; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_STEAMMANAGER___C__DISPLAYCLASS22_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnCreateOrder_g__cancelCallback_0(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_STEAMMANAGER___C__DISPLAYCLASS22_0__ONCREATEORDER_G__CANCELCALLBACK_0_OFFSET))(this, message);
		}

		::System::Void _OnCreateOrder_g__failedCallback_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_STEAMMANAGER___C__DISPLAYCLASS22_0__ONCREATEORDER_G__FAILEDCALLBACK_1_OFFSET))(this);
		}
	};
}
