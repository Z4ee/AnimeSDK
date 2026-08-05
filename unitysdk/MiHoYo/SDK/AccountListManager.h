#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK { class JSONObject; }
namespace MiHoYo::SDK::PluginUI { class PluginUIBridgeNotifyMessageModel; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_ACCOUNTLISTMANAGER_DELETEACCOUNTBYINDEX_OFFSET UNITYSDK_OFFSET(0x1C7AADC0)
#define MIHOYO_SDK_ACCOUNTLISTMANAGER_GETACCOUNTBYINDEX_OFFSET UNITYSDK_OFFSET(0x1C7AA650)
#define MIHOYO_SDK_ACCOUNTLISTMANAGER_GETACCOUNTICON_OFFSET UNITYSDK_OFFSET(0x1C7ABF90)
#define MIHOYO_SDK_ACCOUNTLISTMANAGER_GETACCOUNTINDEX_OFFSET UNITYSDK_OFFSET(0x1C7AC740)
#define MIHOYO_SDK_ACCOUNTLISTMANAGER_GETACCOUNTLISTCOUNT_OFFSET UNITYSDK_OFFSET(0x1C7ABDD0)
#define MIHOYO_SDK_ACCOUNTLISTMANAGER_GETACCOUNTLISTJSON_OFFSET UNITYSDK_OFFSET(0x1C7AC860)
#define MIHOYO_SDK_ACCOUNTLISTMANAGER_GETCURRENTACCOUNTLOGINTYPE_OFFSET UNITYSDK_OFFSET(0x1C7AC2A0)
#define MIHOYO_SDK_ACCOUNTLISTMANAGER_GETCURRENTACCOUNT_OFFSET UNITYSDK_OFFSET(0x1C7AA5F0)
#define MIHOYO_SDK_ACCOUNTLISTMANAGER_GETINDEX_OFFSET UNITYSDK_OFFSET(0x1C7AC640)
#define MIHOYO_SDK_ACCOUNTLISTMANAGER_GETSHOWACCOUNTLISTJSON_OFFSET UNITYSDK_OFFSET(0x1C7AAB20)
#define MIHOYO_SDK_ACCOUNTLISTMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x1C7AA310)
#define MIHOYO_SDK_ACCOUNTLISTMANAGER_ONDELETEACCOUNT_OFFSET UNITYSDK_OFFSET(0x1C7AC360)
#define MIHOYO_SDK_ACCOUNTLISTMANAGER_ONOPERATEACCOUNT_OFFSET UNITYSDK_OFFSET(0x1C7AA6D0)
#define MIHOYO_SDK_ACCOUNTLISTMANAGER_ONSELECTACCOUNT_OFFSET UNITYSDK_OFFSET(0x1C7AC4A0)
#define MIHOYO_SDK_ACCOUNTLISTMANAGER_RESETPLUGINACCOUNTLIST_OFFSET UNITYSDK_OFFSET(0x1C7AC820)
#define MIHOYO_SDK_ACCOUNTLISTMANAGER_UPDATEACCOUNTLISTSHOWSTATUS_OFFSET UNITYSDK_OFFSET(0x1C7AAA30)
#define MIHOYO_SDK_ACCOUNTLISTMANAGER_UPDATEOPERATEBUTTON_OFFSET UNITYSDK_OFFSET(0x1C7AAAA0)
#define MIHOYO_SDK_ACCOUNTLISTMANAGER_UPDATESHOWACCOUNT_OFFSET UNITYSDK_OFFSET(0x1C7ABDF0)
#define MIHOYO_SDK_ACCOUNTLISTMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C7AD590)
#define MIHOYO_SDK_ACCOUNTLISTMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C7AA280)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int AccountListManager_TypeDefinitionIndex = 20093;

	class AccountListManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::AccountListManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::AccountListManager**)Il2CppClass::FromTypeDefinitionIndex(AccountListManager_TypeDefinitionIndex)->GetStaticField(0xA410);
		}
		::System::Collections::Generic::List_1<::MiHoYo::SDK::AccountModel*>* accountList; // 0x10
		::System::Int32 currentSelectedIndex; // 0x18
		::System::Boolean singleAccount; // 0x1C
		::System::Boolean foldNow; // 0x1D

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTLISTMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTLISTMANAGER__CCTOR_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTLISTMANAGER_INIT_OFFSET))(this);
		}

		::MiHoYo::SDK::AccountModel* GetCurrentAccount()
		{
			return ((::MiHoYo::SDK::AccountModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTLISTMANAGER_GETCURRENTACCOUNT_OFFSET))(this);
		}

		::MiHoYo::SDK::AccountModel* GetAccountByIndex(::System::Int32 index)
		{
			return ((::MiHoYo::SDK::AccountModel*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTLISTMANAGER_GETACCOUNTBYINDEX_OFFSET))(this, index);
		}

		::System::Void OnOperateAccount(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTLISTMANAGER_ONOPERATEACCOUNT_OFFSET))(this, strArgs, callback);
		}

		::System::Void UpdateAccountListShowStatus(::System::Boolean isShow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTLISTMANAGER_UPDATEACCOUNTLISTSHOWSTATUS_OFFSET))(this, isShow);
		}

		::MiHoYo::SDK::PluginUI::PluginUIBridgeNotifyMessageModel* GetShowAccountListJson(::System::Boolean isShow)
		{
			return ((::MiHoYo::SDK::PluginUI::PluginUIBridgeNotifyMessageModel*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTLISTMANAGER_GETSHOWACCOUNTLISTJSON_OFFSET))(this, isShow);
		}

		::System::Void DeleteAccountByIndex(::System::Int32 index, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTLISTMANAGER_DELETEACCOUNTBYINDEX_OFFSET))(this, index, callback);
		}

		::System::Void UpdateOperateButton(::System::String* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTLISTMANAGER_UPDATEOPERATEBUTTON_OFFSET))(this, type);
		}

		::System::Void UpdateShowAccount(::MiHoYo::SDK::AccountModel* account)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTLISTMANAGER_UPDATESHOWACCOUNT_OFFSET))(this, account);
		}

		::System::String* GetCurrentAccountLoginType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTLISTMANAGER_GETCURRENTACCOUNTLOGINTYPE_OFFSET))(this);
		}

		::System::Int32 GetAccountListCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTLISTMANAGER_GETACCOUNTLISTCOUNT_OFFSET))(this);
		}

		::System::Void OnDeleteAccount(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTLISTMANAGER_ONDELETEACCOUNT_OFFSET))(this, strArgs, callback);
		}

		::System::Void OnSelectAccount(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTLISTMANAGER_ONSELECTACCOUNT_OFFSET))(this, strArgs, callback);
		}

		::System::Int32 GetIndex(::System::String* input)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTLISTMANAGER_GETINDEX_OFFSET))(this, input);
		}

		::System::Int32 GetAccountIndex(::MiHoYo::SDK::AccountModel* account)
		{
			return ((::System::Int32(*)(::PVOID, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTLISTMANAGER_GETACCOUNTINDEX_OFFSET))(this, account);
		}

		::System::Void ResetPluginAccountList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTLISTMANAGER_RESETPLUGINACCOUNTLIST_OFFSET))(this);
		}

		static ::System::String* GetAccountIcon(::MiHoYo::SDK::AccountModel* account)
		{
			return ((::System::String*(*)(::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTLISTMANAGER_GETACCOUNTICON_OFFSET))(account);
		}

		::MiHoYo::SDK::JSONObject* GetAccountListJson()
		{
			return ((::MiHoYo::SDK::JSONObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTLISTMANAGER_GETACCOUNTLISTJSON_OFFSET))(this);
		}
	};
}
