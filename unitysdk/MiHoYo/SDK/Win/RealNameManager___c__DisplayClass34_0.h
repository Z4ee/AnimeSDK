#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK::Win { class RealNameManager; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_REALNAMEMANAGER___C__DISPLAYCLASS34_0__CTOR_OFFSET UNITYSDK_OFFSET(0x174B9330)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER___C__DISPLAYCLASS34_0__SHOWGRANTPHONEPLUGINUI_B__0_OFFSET UNITYSDK_OFFSET(0x174BBED0)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER___C__DISPLAYCLASS34_0__SHOWGRANTPHONEPLUGINUI_B__1_OFFSET UNITYSDK_OFFSET(0x174BBEF0)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER___C__DISPLAYCLASS34_0__SHOWGRANTPHONEPLUGINUI_B__2_OFFSET UNITYSDK_OFFSET(0x174BBF20)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER___C__DISPLAYCLASS34_0__SHOWGRANTPHONEPLUGINUI_B__3_OFFSET UNITYSDK_OFFSET(0x174BC250)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER___C__DISPLAYCLASS34_0__SHOWGRANTPHONEPLUGINUI_B__4_OFFSET UNITYSDK_OFFSET(0x174BC290)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int RealNameManager___c__DisplayClass34_0_TypeDefinitionIndex = 8110;

	class RealNameManager___c__DisplayClass34_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::AccountModel* account; // 0x10
		::System::Action* getCaptchaAction; // 0x18
		::System::Action_1<::System::String*>* verifyAction; // 0x20
		::MiHoYo::SDK::Win::RealNameManager* __4__this; // 0x28
		::System::Boolean isShowOtherVerify; // 0x30
		::System::Boolean isShowRedirect; // 0x31

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER___C__DISPLAYCLASS34_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowGrantPhonePluginUI_b__0(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER___C__DISPLAYCLASS34_0__SHOWGRANTPHONEPLUGINUI_B__0_OFFSET))(this, strArgs, callback);
		}

		::System::Void _ShowGrantPhonePluginUI_b__1(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER___C__DISPLAYCLASS34_0__SHOWGRANTPHONEPLUGINUI_B__1_OFFSET))(this, strArgs, callback);
		}

		::System::Void _ShowGrantPhonePluginUI_b__2(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER___C__DISPLAYCLASS34_0__SHOWGRANTPHONEPLUGINUI_B__2_OFFSET))(this, strArgs, callback);
		}

		::System::Void _ShowGrantPhonePluginUI_b__3(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER___C__DISPLAYCLASS34_0__SHOWGRANTPHONEPLUGINUI_B__3_OFFSET))(this, strArgs, callback);
		}

		::System::Void _ShowGrantPhonePluginUI_b__4(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER___C__DISPLAYCLASS34_0__SHOWGRANTPHONEPLUGINUI_B__4_OFFSET))(this, strArgs, callback);
		}
	};
}
