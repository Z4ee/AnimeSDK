#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK { class JSONObject; }
namespace MiHoYo::SDK::PluginUI { class PluginUIBridgeNotifyMessageModel; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_ACCOUNTLISTMANAGER_DELETEACCOUNTBYINDEX_OFFSET UNITYSDK_OFFSET(0x188540D0)
#define MIHOYO_SDK_ACCOUNTLISTMANAGER_GETACCOUNTBYINDEX_OFFSET UNITYSDK_OFFSET(0x18853460)
#define MIHOYO_SDK_ACCOUNTLISTMANAGER_GETACCOUNTICON_OFFSET UNITYSDK_OFFSET(0x18854CD0)
#define MIHOYO_SDK_ACCOUNTLISTMANAGER_GETACCOUNTINDEX_OFFSET UNITYSDK_OFFSET(0x188554C0)
#define MIHOYO_SDK_ACCOUNTLISTMANAGER_GETACCOUNTLISTCOUNT_OFFSET UNITYSDK_OFFSET(0x18854B30)
#define MIHOYO_SDK_ACCOUNTLISTMANAGER_GETACCOUNTLISTJSON_OFFSET UNITYSDK_OFFSET(0x18855640)
#define MIHOYO_SDK_ACCOUNTLISTMANAGER_GETCURRENTACCOUNTLOGINTYPE_OFFSET UNITYSDK_OFFSET(0x18854FB0)
#define MIHOYO_SDK_ACCOUNTLISTMANAGER_GETCURRENTACCOUNT_OFFSET UNITYSDK_OFFSET(0x18853410)
#define MIHOYO_SDK_ACCOUNTLISTMANAGER_GETINDEX_OFFSET UNITYSDK_OFFSET(0x188552D0)
#define MIHOYO_SDK_ACCOUNTLISTMANAGER_GETSHOWACCOUNTLISTJSON_OFFSET UNITYSDK_OFFSET(0x18853E70)
#define MIHOYO_SDK_ACCOUNTLISTMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x188530F0)
#define MIHOYO_SDK_ACCOUNTLISTMANAGER_ONDELETEACCOUNT_OFFSET UNITYSDK_OFFSET(0x18855010)
#define MIHOYO_SDK_ACCOUNTLISTMANAGER_ONOPERATEACCOUNT_OFFSET UNITYSDK_OFFSET(0x18853560)
#define MIHOYO_SDK_ACCOUNTLISTMANAGER_ONSELECTACCOUNT_OFFSET UNITYSDK_OFFSET(0x18855170)
#define MIHOYO_SDK_ACCOUNTLISTMANAGER_RESETPLUGINACCOUNTLIST_OFFSET UNITYSDK_OFFSET(0x188555C0)
#define MIHOYO_SDK_ACCOUNTLISTMANAGER_UPDATEACCOUNTLISTSHOWSTATUS_OFFSET UNITYSDK_OFFSET(0x18853D80)
#define MIHOYO_SDK_ACCOUNTLISTMANAGER_UPDATEOPERATEBUTTON_OFFSET UNITYSDK_OFFSET(0x18853DF0)
#define MIHOYO_SDK_ACCOUNTLISTMANAGER_UPDATESHOWACCOUNT_OFFSET UNITYSDK_OFFSET(0x18854B50)
#define MIHOYO_SDK_ACCOUNTLISTMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x18856060)
#define MIHOYO_SDK_ACCOUNTLISTMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x18853090)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int AccountListManager_TypeDefinitionIndex = 7936;

	class AccountListManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::AccountListManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::AccountListManager**)Il2CppClass::FromTypeDefinitionIndex(AccountListManager_TypeDefinitionIndex)->GetStaticField(0xD920);
		}
		::System::Collections::Generic::List_1<::MiHoYo::SDK::AccountModel*>* accountList; // 0x10
		::System::Boolean foldNow; // 0x18
		::System::Boolean singleAccount; // 0x19
		::System::Int32 currentSelectedIndex; // 0x1C

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

		::MiHoYo::SDK::AccountModel* GetAccountByIndex(::System::Int32 a1)
		{
			return ((::MiHoYo::SDK::AccountModel*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTLISTMANAGER_GETACCOUNTBYINDEX_OFFSET))(this, a1);
		}

		::System::Void OnOperateAccount(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTLISTMANAGER_ONOPERATEACCOUNT_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateAccountListShowStatus(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTLISTMANAGER_UPDATEACCOUNTLISTSHOWSTATUS_OFFSET))(this, a1);
		}

		::MiHoYo::SDK::PluginUI::PluginUIBridgeNotifyMessageModel* GetShowAccountListJson(::System::Boolean a1)
		{
			return ((::MiHoYo::SDK::PluginUI::PluginUIBridgeNotifyMessageModel*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTLISTMANAGER_GETSHOWACCOUNTLISTJSON_OFFSET))(this, a1);
		}

		::System::Void DeleteAccountByIndex(::System::Int32 a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTLISTMANAGER_DELETEACCOUNTBYINDEX_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateOperateButton(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTLISTMANAGER_UPDATEOPERATEBUTTON_OFFSET))(this, a1);
		}

		::System::Void UpdateShowAccount(::MiHoYo::SDK::AccountModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTLISTMANAGER_UPDATESHOWACCOUNT_OFFSET))(this, a1);
		}

		::System::String* GetCurrentAccountLoginType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTLISTMANAGER_GETCURRENTACCOUNTLOGINTYPE_OFFSET))(this);
		}

		::System::Int32 GetAccountListCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTLISTMANAGER_GETACCOUNTLISTCOUNT_OFFSET))(this);
		}

		::System::Void OnDeleteAccount(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTLISTMANAGER_ONDELETEACCOUNT_OFFSET))(this, a1, a2);
		}

		::System::Void OnSelectAccount(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTLISTMANAGER_ONSELECTACCOUNT_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetIndex(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTLISTMANAGER_GETINDEX_OFFSET))(this, a1);
		}

		::System::Int32 GetAccountIndex(::MiHoYo::SDK::AccountModel* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTLISTMANAGER_GETACCOUNTINDEX_OFFSET))(this, a1);
		}

		::System::Void ResetPluginAccountList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTLISTMANAGER_RESETPLUGINACCOUNTLIST_OFFSET))(this);
		}

		static ::System::String* GetAccountIcon(::MiHoYo::SDK::AccountModel* a1)
		{
			return ((::System::String*(*)(::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTLISTMANAGER_GETACCOUNTICON_OFFSET))(a1);
		}

		::MiHoYo::SDK::JSONObject* GetAccountListJson()
		{
			return ((::MiHoYo::SDK::JSONObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTLISTMANAGER_GETACCOUNTLISTJSON_OFFSET))(this);
		}
	};
}
