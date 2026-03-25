#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/GrantType.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_GRANTMANAGER_BACK_OFFSET UNITYSDK_OFFSET(0x160A9E30)
#define MIHOYO_SDK_WIN_GRANTMANAGER_CHECKGRANTDEVICE_OFFSET UNITYSDK_OFFSET(0x160586B0)
#define MIHOYO_SDK_WIN_GRANTMANAGER_CLOSE_OFFSET UNITYSDK_OFFSET(0x160A9E40)
#define MIHOYO_SDK_WIN_GRANTMANAGER_GETGRANTTICKET_OFFSET UNITYSDK_OFFSET(0x160A9710)
#define MIHOYO_SDK_WIN_GRANTMANAGER_GRANTDEVICEFAIL_OFFSET UNITYSDK_OFFSET(0x160AC2D0)
#define MIHOYO_SDK_WIN_GRANTMANAGER_GRANTDEVICESUCCESS_OFFSET UNITYSDK_OFFSET(0x160A9860)
#define MIHOYO_SDK_WIN_GRANTMANAGER_GRANTDEVICE_OFFSET UNITYSDK_OFFSET(0x160AA1D0)
#define MIHOYO_SDK_WIN_GRANTMANAGER_HIDEGRANTPLUGINUI_OFFSET UNITYSDK_OFFSET(0x160AA3C0)
#define MIHOYO_SDK_WIN_GRANTMANAGER_NEWDEVICEGRANTMESSAGE_OFFSET UNITYSDK_OFFSET(0x160A9FE0)
#define MIHOYO_SDK_WIN_GRANTMANAGER_ONGETCODE_OFFSET UNITYSDK_OFFSET(0x160A9E50)
#define MIHOYO_SDK_WIN_GRANTMANAGER_ONGETPREGRANTMESSAGE_OFFSET UNITYSDK_OFFSET(0x160AB530)
#define MIHOYO_SDK_WIN_GRANTMANAGER_ONGRANTDEVICE_OFFSET UNITYSDK_OFFSET(0x160ABF60)
#define MIHOYO_SDK_WIN_GRANTMANAGER_QUERYGETCAPTCHAELEMENTID_OFFSET UNITYSDK_OFFSET(0x160AB450)
#define MIHOYO_SDK_WIN_GRANTMANAGER_REQUESTGRANT_OFFSET UNITYSDK_OFFSET(0x160ABD40)
#define MIHOYO_SDK_WIN_GRANTMANAGER_RESETTICKET_OFFSET UNITYSDK_OFFSET(0x160AA940)
#define MIHOYO_SDK_WIN_GRANTMANAGER_SHOWGRANTDEVICE_OFFSET UNITYSDK_OFFSET(0x16058730)
#define MIHOYO_SDK_WIN_GRANTMANAGER_SHOWGRANTPHONEPLUGINUI_OFFSET UNITYSDK_OFFSET(0x160AA470)
#define MIHOYO_SDK_WIN_GRANTMANAGER_SHOWGRANTPHONE_OFFSET UNITYSDK_OFFSET(0x160A9D10)
#define MIHOYO_SDK_WIN_GRANTMANAGER_SHOWOVERSEAGRANTMAILPLUGINUI_OFFSET UNITYSDK_OFFSET(0x160AA950)
#define MIHOYO_SDK_WIN_GRANTMANAGER_SHOWOVERSEAGRANTMAIL_OFFSET UNITYSDK_OFFSET(0x160A9BA0)
#define MIHOYO_SDK_WIN_GRANTMANAGER_SHOWOVERSEAGRANTPHONEPLUGINUI_OFFSET UNITYSDK_OFFSET(0x160AAEC0)
#define MIHOYO_SDK_WIN_GRANTMANAGER_SHOWOVERSEAGRANTPHONE_OFFSET UNITYSDK_OFFSET(0x160A9A30)
#define MIHOYO_SDK_WIN_GRANTMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x160AC300)
#define MIHOYO_SDK_WIN_GRANTMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x160AC2F0)
#define MIHOYO_SDK_WIN_GRANTMANAGER__SHOWGRANTPHONEPLUGINUI_B__20_0_OFFSET UNITYSDK_OFFSET(0x160AC350)
#define MIHOYO_SDK_WIN_GRANTMANAGER__SHOWGRANTPHONEPLUGINUI_B__20_1_OFFSET UNITYSDK_OFFSET(0x160AC380)
#define MIHOYO_SDK_WIN_GRANTMANAGER__SHOWGRANTPHONEPLUGINUI_B__20_2_OFFSET UNITYSDK_OFFSET(0x160AC3B0)
#define MIHOYO_SDK_WIN_GRANTMANAGER__SHOWGRANTPHONEPLUGINUI_B__20_3_OFFSET UNITYSDK_OFFSET(0x160AC3C0)
#define MIHOYO_SDK_WIN_GRANTMANAGER__SHOWGRANTPHONE_B__21_0_OFFSET UNITYSDK_OFFSET(0x160AC6B0)
#define MIHOYO_SDK_WIN_GRANTMANAGER__SHOWOVERSEAGRANTMAILPLUGINUI_B__22_0_OFFSET UNITYSDK_OFFSET(0x160AC740)
#define MIHOYO_SDK_WIN_GRANTMANAGER__SHOWOVERSEAGRANTMAILPLUGINUI_B__22_2_OFFSET UNITYSDK_OFFSET(0x160AC770)
#define MIHOYO_SDK_WIN_GRANTMANAGER__SHOWOVERSEAGRANTMAILPLUGINUI_B__22_3_OFFSET UNITYSDK_OFFSET(0x160AC780)
#define MIHOYO_SDK_WIN_GRANTMANAGER__SHOWOVERSEAGRANTMAILPLUGINUI_B__22_4_OFFSET UNITYSDK_OFFSET(0x160ACA70)
#define MIHOYO_SDK_WIN_GRANTMANAGER__SHOWOVERSEAGRANTMAIL_B__23_0_OFFSET UNITYSDK_OFFSET(0x160ACA90)
#define MIHOYO_SDK_WIN_GRANTMANAGER__SHOWOVERSEAGRANTMAIL_B__23_1_OFFSET UNITYSDK_OFFSET(0x160ACB20)
#define MIHOYO_SDK_WIN_GRANTMANAGER__SHOWOVERSEAGRANTPHONEPLUGINUI_B__24_0_OFFSET UNITYSDK_OFFSET(0x160ACC60)
#define MIHOYO_SDK_WIN_GRANTMANAGER__SHOWOVERSEAGRANTPHONEPLUGINUI_B__24_2_OFFSET UNITYSDK_OFFSET(0x160ACC90)
#define MIHOYO_SDK_WIN_GRANTMANAGER__SHOWOVERSEAGRANTPHONEPLUGINUI_B__24_3_OFFSET UNITYSDK_OFFSET(0x160ACCA0)
#define MIHOYO_SDK_WIN_GRANTMANAGER__SHOWOVERSEAGRANTPHONEPLUGINUI_B__24_4_OFFSET UNITYSDK_OFFSET(0x160ACF90)
#define MIHOYO_SDK_WIN_GRANTMANAGER__SHOWOVERSEAGRANTPHONE_B__25_0_OFFSET UNITYSDK_OFFSET(0x160ACFB0)
#define MIHOYO_SDK_WIN_GRANTMANAGER__SHOWOVERSEAGRANTPHONE_B__25_1_OFFSET UNITYSDK_OFFSET(0x160AD040)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int GrantManager_TypeDefinitionIndex = 7971;

	class GrantManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Win::GrantManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Win::GrantManager**)Il2CppClass::FromTypeDefinitionIndex(GrantManager_TypeDefinitionIndex)->GetStaticField(0x13570);
		}
		::System::Action* OnClose; // 0x10
		::System::Action* OnBack; // 0x18
		::System::String* m_strShowingGrantPluginUIName; // 0x20
		::System::Action_1<::System::String*>* m_requestCaptchaAction; // 0x28
		::System::Action_2<::System::Int32, ::System::String*>* OnGrantDeviceFail; // 0x30
		::System::String* grantTicket; // 0x38
		::System::Action_1<::MiHoYo::SDK::AccountModel*>* OnGrantDeviceSuccess; // 0x40
		::MiHoYo::SDK::AccountModel* accountModel; // 0x48
		::System::String* ticket; // 0x50
		::MiHoYo::SDK::GrantType currentGrantType; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GRANTMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GRANTMANAGER__CCTOR_OFFSET))();
		}

		::System::Boolean CheckGrantDevice(::MiHoYo::SDK::JSONNode* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GRANTMANAGER_CHECKGRANTDEVICE_OFFSET))(this, data);
		}

		::System::Void GetGrantTicket(::MiHoYo::SDK::JSONNode* data)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GRANTMANAGER_GETGRANTTICKET_OFFSET))(this, data);
		}

		::System::Void ShowGrantDevice(::MiHoYo::SDK::AccountModel* account)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GRANTMANAGER_SHOWGRANTDEVICE_OFFSET))(this, account);
		}

		::System::Void Back()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GRANTMANAGER_BACK_OFFSET))(this);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GRANTMANAGER_CLOSE_OFFSET))(this);
		}

		::System::Void OnGetCode(::MiHoYo::SDK::GrantType type)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::GrantType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GRANTMANAGER_ONGETCODE_OFFSET))(this, type);
		}

		::System::Void NewDeviceGrantMessage(::System::String* ticket, ::MiHoYo::SDK::GrantType type, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::GrantType, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GRANTMANAGER_NEWDEVICEGRANTMESSAGE_OFFSET))(this, ticket, type, callback);
		}

		::System::Void GrantDevice(::System::String* ticket, ::System::String* code, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GRANTMANAGER_GRANTDEVICE_OFFSET))(this, ticket, code, callback);
		}

		::System::Void HideGrantPluginUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GRANTMANAGER_HIDEGRANTPLUGINUI_OFFSET))(this);
		}

		::System::Boolean ShowGrantPhonePluginUI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GRANTMANAGER_SHOWGRANTPHONEPLUGINUI_OFFSET))(this);
		}

		::System::Void ShowGrantPhone()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GRANTMANAGER_SHOWGRANTPHONE_OFFSET))(this);
		}

		::System::Boolean ShowOverseaGrantMailPluginUI(::MiHoYo::SDK::AccountModel* accountInfo)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GRANTMANAGER_SHOWOVERSEAGRANTMAILPLUGINUI_OFFSET))(this, accountInfo);
		}

		::System::Void ShowOverseaGrantMail()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GRANTMANAGER_SHOWOVERSEAGRANTMAIL_OFFSET))(this);
		}

		::System::Boolean ShowOverseaGrantPhonePluginUI(::MiHoYo::SDK::AccountModel* accountInfo)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GRANTMANAGER_SHOWOVERSEAGRANTPHONEPLUGINUI_OFFSET))(this, accountInfo);
		}

		::System::Void ShowOverseaGrantPhone()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GRANTMANAGER_SHOWOVERSEAGRANTPHONE_OFFSET))(this);
		}

		::System::String* QueryGetCaptchaElementID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GRANTMANAGER_QUERYGETCAPTCHAELEMENTID_OFFSET))(this);
		}

		::System::Void OnGetPreGrantMessage(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GRANTMANAGER_ONGETPREGRANTMESSAGE_OFFSET))(this, response);
		}

		::System::Void RequestGrant(::System::String* code)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GRANTMANAGER_REQUESTGRANT_OFFSET))(this, code);
		}

		::System::Void OnGrantDevice(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GRANTMANAGER_ONGRANTDEVICE_OFFSET))(this, response);
		}

		::System::Void GrantDeviceSuccess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GRANTMANAGER_GRANTDEVICESUCCESS_OFFSET))(this);
		}

		::System::Void GrantDeviceFail(::System::Int32 ret, ::System::String* msg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GRANTMANAGER_GRANTDEVICEFAIL_OFFSET))(this, ret, msg);
		}

		::System::Void ResetTicket()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GRANTMANAGER_RESETTICKET_OFFSET))(this);
		}

		::System::Void _ShowGrantPhonePluginUI_b__20_0(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GRANTMANAGER__SHOWGRANTPHONEPLUGINUI_B__20_0_OFFSET))(this, strArgs, callback);
		}

		::System::Void _ShowGrantPhonePluginUI_b__20_1(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GRANTMANAGER__SHOWGRANTPHONEPLUGINUI_B__20_1_OFFSET))(this, strArgs, callback);
		}

		::System::Void _ShowGrantPhonePluginUI_b__20_2(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GRANTMANAGER__SHOWGRANTPHONEPLUGINUI_B__20_2_OFFSET))(this, strArgs, callback);
		}

		::System::Void _ShowGrantPhonePluginUI_b__20_3(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GRANTMANAGER__SHOWGRANTPHONEPLUGINUI_B__20_3_OFFSET))(this, strArgs, callback);
		}

		::System::Void _ShowGrantPhone_b__21_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GRANTMANAGER__SHOWGRANTPHONE_B__21_0_OFFSET))(this);
		}

		::System::Void _ShowOverseaGrantMailPluginUI_b__22_0(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GRANTMANAGER__SHOWOVERSEAGRANTMAILPLUGINUI_B__22_0_OFFSET))(this, strArgs, callback);
		}

		::System::Void _ShowOverseaGrantMailPluginUI_b__22_2(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GRANTMANAGER__SHOWOVERSEAGRANTMAILPLUGINUI_B__22_2_OFFSET))(this, strArgs, callback);
		}

		::System::Void _ShowOverseaGrantMailPluginUI_b__22_3(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GRANTMANAGER__SHOWOVERSEAGRANTMAILPLUGINUI_B__22_3_OFFSET))(this, strArgs, callback);
		}

		::System::Void _ShowOverseaGrantMailPluginUI_b__22_4(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GRANTMANAGER__SHOWOVERSEAGRANTMAILPLUGINUI_B__22_4_OFFSET))(this, strArgs, callback);
		}

		::System::Void _ShowOverseaGrantMail_b__23_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GRANTMANAGER__SHOWOVERSEAGRANTMAIL_B__23_0_OFFSET))(this);
		}

		::System::Void _ShowOverseaGrantMail_b__23_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GRANTMANAGER__SHOWOVERSEAGRANTMAIL_B__23_1_OFFSET))(this);
		}

		::System::Void _ShowOverseaGrantPhonePluginUI_b__24_0(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GRANTMANAGER__SHOWOVERSEAGRANTPHONEPLUGINUI_B__24_0_OFFSET))(this, strArgs, callback);
		}

		::System::Void _ShowOverseaGrantPhonePluginUI_b__24_2(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GRANTMANAGER__SHOWOVERSEAGRANTPHONEPLUGINUI_B__24_2_OFFSET))(this, strArgs, callback);
		}

		::System::Void _ShowOverseaGrantPhonePluginUI_b__24_3(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GRANTMANAGER__SHOWOVERSEAGRANTPHONEPLUGINUI_B__24_3_OFFSET))(this, strArgs, callback);
		}

		::System::Void _ShowOverseaGrantPhonePluginUI_b__24_4(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GRANTMANAGER__SHOWOVERSEAGRANTPHONEPLUGINUI_B__24_4_OFFSET))(this, strArgs, callback);
		}

		::System::Void _ShowOverseaGrantPhone_b__25_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GRANTMANAGER__SHOWOVERSEAGRANTPHONE_B__25_0_OFFSET))(this);
		}

		::System::Void _ShowOverseaGrantPhone_b__25_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GRANTMANAGER__SHOWOVERSEAGRANTPHONE_B__25_1_OFFSET))(this);
		}
	};
}
