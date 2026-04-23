#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK::Win { class BindManager; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS18_0__CTOR_OFFSET UNITYSDK_OFFSET(0x176B9CD0)
#define MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS18_0__SHOWOVERSEAVERIFYPHONEPLUGINUI_B__0_OFFSET UNITYSDK_OFFSET(0x176C2130)
#define MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS18_0__SHOWOVERSEAVERIFYPHONEPLUGINUI_B__1_OFFSET UNITYSDK_OFFSET(0x176C2180)
#define MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS18_0__SHOWOVERSEAVERIFYPHONEPLUGINUI_B__2_OFFSET UNITYSDK_OFFSET(0x176C2230)
#define MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS18_0__SHOWOVERSEAVERIFYPHONEPLUGINUI_B__3_OFFSET UNITYSDK_OFFSET(0x176C2360)
#define MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS18_0__SHOWOVERSEAVERIFYPHONEPLUGINUI_B__5_OFFSET UNITYSDK_OFFSET(0x176C2820)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int BindManager___c__DisplayClass18_0_TypeDefinitionIndex = 8134;

	class BindManager___c__DisplayClass18_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::AccountModel* userData; // 0x10
		::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* __9__5; // 0x18
		::MiHoYo::SDK::Win::BindManager* __4__this; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS18_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowOverseaVerifyPhonePluginUI_b__0(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS18_0__SHOWOVERSEAVERIFYPHONEPLUGINUI_B__0_OFFSET))(this, strArgs, callback);
		}

		::System::Void _ShowOverseaVerifyPhonePluginUI_b__1(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS18_0__SHOWOVERSEAVERIFYPHONEPLUGINUI_B__1_OFFSET))(this, strArgs, callback);
		}

		::System::Void _ShowOverseaVerifyPhonePluginUI_b__2(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS18_0__SHOWOVERSEAVERIFYPHONEPLUGINUI_B__2_OFFSET))(this, strArgs, callback);
		}

		::System::Void _ShowOverseaVerifyPhonePluginUI_b__3(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS18_0__SHOWOVERSEAVERIFYPHONEPLUGINUI_B__3_OFFSET))(this, strArgs, callback);
		}

		::System::Void _ShowOverseaVerifyPhonePluginUI_b__5(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS18_0__SHOWOVERSEAVERIFYPHONEPLUGINUI_B__5_OFFSET))(this, response);
		}
	};
}
