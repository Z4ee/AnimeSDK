#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/DialogType.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Win { class LoginManager; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS34_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B86B2C0)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS34_0__SHOWQRCODELOGINPLUGINUI_B__0_OFFSET UNITYSDK_OFFSET(0x1B881190)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS34_0__SHOWQRCODELOGINPLUGINUI_B__1_OFFSET UNITYSDK_OFFSET(0x1B8811D0)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS34_0__SHOWQRCODELOGINPLUGINUI_B__2_OFFSET UNITYSDK_OFFSET(0x1B881220)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS34_0__SHOWQRCODELOGINPLUGINUI_B__3_OFFSET UNITYSDK_OFFSET(0x1B881240)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS34_0__SHOWQRCODELOGINPLUGINUI_B__4_OFFSET UNITYSDK_OFFSET(0x1B881260)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int LoginManager___c__DisplayClass34_0_TypeDefinitionIndex = 9388;

	class LoginManager___c__DisplayClass34_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Win::LoginManager* __4__this; // 0x10
		::MiHoYo::SDK::DialogType type; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS34_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowQRCodeLoginPluginUI_b__0(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS34_0__SHOWQRCODELOGINPLUGINUI_B__0_OFFSET))(this, a1, a2);
		}

		::System::Void _ShowQRCodeLoginPluginUI_b__1(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS34_0__SHOWQRCODELOGINPLUGINUI_B__1_OFFSET))(this, a1, a2);
		}

		::System::Void _ShowQRCodeLoginPluginUI_b__2(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS34_0__SHOWQRCODELOGINPLUGINUI_B__2_OFFSET))(this, a1, a2);
		}

		::System::Void _ShowQRCodeLoginPluginUI_b__3(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS34_0__SHOWQRCODELOGINPLUGINUI_B__3_OFFSET))(this, a1, a2);
		}

		::System::Void _ShowQRCodeLoginPluginUI_b__4(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS34_0__SHOWQRCODELOGINPLUGINUI_B__4_OFFSET))(this, a1, a2);
		}
	};
}
