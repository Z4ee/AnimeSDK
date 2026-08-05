#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/ReportType.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountManager_NetworkAdapterInfo; }
namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK { class BindInfo; }
namespace MiHoYo::SDK { class ComboUserModel; }
namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class LoginDataModel; }
namespace MiHoYo::SDK { template <typename T> class CallbackModel_1; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_ACCOUNTMANAGER_ACCOUNTLISTMARKDELETE_1_OFFSET UNITYSDK_OFFSET(0x1C7AB3E0)
#define MIHOYO_SDK_ACCOUNTMANAGER_ACCOUNTLISTMARKDELETE_OFFSET UNITYSDK_OFFSET(0x1C7B1060)
#define MIHOYO_SDK_ACCOUNTMANAGER_APPLYLOGINTIME_OFFSET UNITYSDK_OFFSET(0x1C7B1510)
#define MIHOYO_SDK_ACCOUNTMANAGER_CHECKLOGOUTSTATUS_OFFSET UNITYSDK_OFFSET(0x1C7B0270)
#define MIHOYO_SDK_ACCOUNTMANAGER_CLEARACCOUNTLIST_OFFSET UNITYSDK_OFFSET(0x1C7B1140)
#define MIHOYO_SDK_ACCOUNTMANAGER_CLEARCACHE_OFFSET UNITYSDK_OFFSET(0x1C7AD6B0)
#define MIHOYO_SDK_ACCOUNTMANAGER_DELETEACCOUNT_OFFSET UNITYSDK_OFFSET(0x1C7B0E00)
#define MIHOYO_SDK_ACCOUNTMANAGER_DELETECURRENTACCOUNT_OFFSET UNITYSDK_OFFSET(0x1C7B0B90)
#define MIHOYO_SDK_ACCOUNTMANAGER_GETACCOUNTDATALISTKEY_OFFSET UNITYSDK_OFFSET(0x1C7AEAC0)
#define MIHOYO_SDK_ACCOUNTMANAGER_GETACCOUNTLISTINFO_OFFSET UNITYSDK_OFFSET(0x1C7AA3D0)
#define MIHOYO_SDK_ACCOUNTMANAGER_GETACCOUNTNAME_OFFSET UNITYSDK_OFFSET(0x1C7ADD40)
#define MIHOYO_SDK_ACCOUNTMANAGER_GETACCOUNTPASSWORDLOGINACCOUNTNUMBER_OFFSET UNITYSDK_OFFSET(0x1C7B0B70)
#define MIHOYO_SDK_ACCOUNTMANAGER_GETACCOUNT_OFFSET UNITYSDK_OFFSET(0x1C7AD7D0)
#define MIHOYO_SDK_ACCOUNTMANAGER_GETASTERISKNAMEANDICON_OFFSET UNITYSDK_OFFSET(0x1C7AEF20)
#define MIHOYO_SDK_ACCOUNTMANAGER_GETASTERISKNAME_OFFSET UNITYSDK_OFFSET(0x1C7AEED0)
#define MIHOYO_SDK_ACCOUNTMANAGER_GETBINDINFO_OFFSET UNITYSDK_OFFSET(0x1C7ADE30)
#define MIHOYO_SDK_ACCOUNTMANAGER_GETCACHEACCOUNT_OFFSET UNITYSDK_OFFSET(0x1C7AD6F0)
#define MIHOYO_SDK_ACCOUNTMANAGER_GETCOMBOUSERMODEL_OFFSET UNITYSDK_OFFSET(0x1C7AFC50)
#define MIHOYO_SDK_ACCOUNTMANAGER_GETCURRENTACCOUNT_OFFSET UNITYSDK_OFFSET(0x1C7AD710)
#define MIHOYO_SDK_ACCOUNTMANAGER_GETDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x1C7AC240)
#define MIHOYO_SDK_ACCOUNTMANAGER_GETFALLBACKDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x1C7AFC10)
#define MIHOYO_SDK_ACCOUNTMANAGER_GETFORMATLASTLOGINTIME_OFFSET UNITYSDK_OFFSET(0x1C7AD0E0)
#define MIHOYO_SDK_ACCOUNTMANAGER_GETOLDACCOUNT_OFFSET UNITYSDK_OFFSET(0x1C7AECB0)
#define MIHOYO_SDK_ACCOUNTMANAGER_GETSERIALIZEDACCOUNTLIST_OFFSET UNITYSDK_OFFSET(0x1C7B0A70)
#define MIHOYO_SDK_ACCOUNTMANAGER_GET_CACHEDAID_OFFSET UNITYSDK_OFFSET(0x1C7AD650)
#define MIHOYO_SDK_ACCOUNTMANAGER_GET_LOGINSUCESSTYPE_OFFSET UNITYSDK_OFFSET(0x1C7AD690)
#define MIHOYO_SDK_ACCOUNTMANAGER_GET_USERINPUTNAME_OFFSET UNITYSDK_OFFSET(0x1C7AD670)
#define MIHOYO_SDK_ACCOUNTMANAGER_ISACCOUNTBINDMOBILE_OFFSET UNITYSDK_OFFSET(0x1C7ADDC0)
#define MIHOYO_SDK_ACCOUNTMANAGER_ISACCOUNTREALNAME_OFFSET UNITYSDK_OFFSET(0x1C7ADDF0)
#define MIHOYO_SDK_ACCOUNTMANAGER_ISBINDMAILACCOUNT_OFFSET UNITYSDK_OFFSET(0x1C7B0430)
#define MIHOYO_SDK_ACCOUNTMANAGER_ISBINDMOBILEACCOUNT_OFFSET UNITYSDK_OFFSET(0x1C7B0410)
#define MIHOYO_SDK_ACCOUNTMANAGER_ISOFFICIALACCOUNT_OFFSET UNITYSDK_OFFSET(0x1C7AE840)
#define MIHOYO_SDK_ACCOUNTMANAGER_ISONLYUSERNAMEACCOUNT_OFFSET UNITYSDK_OFFSET(0x1C7B0450)
#define MIHOYO_SDK_ACCOUNTMANAGER_ISREALNAMEACCOUNT_OFFSET UNITYSDK_OFFSET(0x1C7AFD50)
#define MIHOYO_SDK_ACCOUNTMANAGER_ONREACTIVATECALLBACK_OFFSET UNITYSDK_OFFSET(0x1C7B01E0)
#define MIHOYO_SDK_ACCOUNTMANAGER_REACTIVATEACCOUNT_OFFSET UNITYSDK_OFFSET(0x1C7AFD70)
#define MIHOYO_SDK_ACCOUNTMANAGER_RECORDLOGINTIME_OFFSET UNITYSDK_OFFSET(0x1C7AE400)
#define MIHOYO_SDK_ACCOUNTMANAGER_REDECODEACCOUNTLISTSTRING_OFFSET UNITYSDK_OFFSET(0x1C7B05F0)
#define MIHOYO_SDK_ACCOUNTMANAGER_REMOVESPAREOFFICIALACCOUNT_OFFSET UNITYSDK_OFFSET(0x1C7AE870)
#define MIHOYO_SDK_ACCOUNTMANAGER_RESETOLDACCOUNT_OFFSET UNITYSDK_OFFSET(0x1C7AEDE0)
#define MIHOYO_SDK_ACCOUNTMANAGER_SENDNOTICEEMAIL_OFFSET UNITYSDK_OFFSET(0x1C7B11F0)
#define MIHOYO_SDK_ACCOUNTMANAGER_SETACCOUNT_OFFSET UNITYSDK_OFFSET(0x1C7AE450)
#define MIHOYO_SDK_ACCOUNTMANAGER_SETAUTOLOGINACCOUNT_OFFSET UNITYSDK_OFFSET(0x1C7ADF70)
#define MIHOYO_SDK_ACCOUNTMANAGER_SETCACHEACCOUNT_OFFSET UNITYSDK_OFFSET(0x1C7AD700)
#define MIHOYO_SDK_ACCOUNTMANAGER_SETCOMBOUSERMODEL_OFFSET UNITYSDK_OFFSET(0x1C7AFC60)
#define MIHOYO_SDK_ACCOUNTMANAGER_SETCURRENTACCOUNTLOGOUT_OFFSET UNITYSDK_OFFSET(0x1C7AFC70)
#define MIHOYO_SDK_ACCOUNTMANAGER_SETSERIALIZEDACCOUNTLIST_OFFSET UNITYSDK_OFFSET(0x1C7B0AF0)
#define MIHOYO_SDK_ACCOUNTMANAGER_SET_CACHEDAID_OFFSET UNITYSDK_OFFSET(0x1C7AD660)
#define MIHOYO_SDK_ACCOUNTMANAGER_SET_LOGINSUCESSTYPE_OFFSET UNITYSDK_OFFSET(0x1C7AD6A0)
#define MIHOYO_SDK_ACCOUNTMANAGER_SET_USERINPUTNAME_OFFSET UNITYSDK_OFFSET(0x1C7AD680)
#define MIHOYO_SDK_ACCOUNTMANAGER_TRYGETVALIDACCOUNTLIST_OFFSET UNITYSDK_OFFSET(0x1C7B0490)
#define MIHOYO_SDK_ACCOUNTMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C7B1550)
#define MIHOYO_SDK_ACCOUNTMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C7B1540)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int AccountManager_TypeDefinitionIndex = 20059;

	class AccountManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::AccountManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::AccountManager**)Il2CppClass::FromTypeDefinitionIndex(AccountManager_TypeDefinitionIndex)->GetStaticField(0x9310);
		}
		// static const ::System::String* OLD_ACCOUNT_DATA_LIST; // 0x0
		// static const ::System::String* ACCOUNT_DATA_LIST; // 0x0
		// static const ::System::Int16 MAX_ACCOUNT_LIST_COUNT = 0x3; // 0x0
		::System::String* _CachedAID_k__BackingField; // 0x10
		::MiHoYo::SDK::AccountModel* userData; // 0x18
		::System::String* _UserInputName_k__BackingField; // 0x20
		::MiHoYo::SDK::ComboUserModel* comboUserData; // 0x28
		::System::Collections::Generic::List_1<::MiHoYo::SDK::AccountManager_NetworkAdapterInfo*>* m_lstAdapter; // 0x30
		::System::Int64 CurrentUserLoginTime; // 0x38
		::MiHoYo::SDK::ReportType _loginSucessType_k__BackingField; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTMANAGER__CCTOR_OFFSET))();
		}

		::System::String* get_CachedAID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTMANAGER_GET_CACHEDAID_OFFSET))(this);
		}

		::System::Void set_CachedAID(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTMANAGER_SET_CACHEDAID_OFFSET))(this, value);
		}

		::System::String* get_UserInputName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTMANAGER_GET_USERINPUTNAME_OFFSET))(this);
		}

		::System::Void set_UserInputName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTMANAGER_SET_USERINPUTNAME_OFFSET))(this, value);
		}

		::MiHoYo::SDK::ReportType get_loginSucessType()
		{
			return ((::MiHoYo::SDK::ReportType(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTMANAGER_GET_LOGINSUCESSTYPE_OFFSET))(this);
		}

		::System::Void set_loginSucessType(::MiHoYo::SDK::ReportType value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ReportType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTMANAGER_SET_LOGINSUCESSTYPE_OFFSET))(this, value);
		}

		::System::Void ClearCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTMANAGER_CLEARCACHE_OFFSET))(this);
		}

		::MiHoYo::SDK::AccountModel* GetCacheAccount()
		{
			return ((::MiHoYo::SDK::AccountModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTMANAGER_GETCACHEACCOUNT_OFFSET))(this);
		}

		::System::Void SetCacheAccount(::MiHoYo::SDK::AccountModel* account)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTMANAGER_SETCACHEACCOUNT_OFFSET))(this, account);
		}

		::MiHoYo::SDK::AccountModel* GetCurrentAccount()
		{
			return ((::MiHoYo::SDK::AccountModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTMANAGER_GETCURRENTACCOUNT_OFFSET))(this);
		}

		::System::String* GetAccountName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTMANAGER_GETACCOUNTNAME_OFFSET))(this);
		}

		::System::Boolean IsAccountBindMobile()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTMANAGER_ISACCOUNTBINDMOBILE_OFFSET))(this);
		}

		::System::Boolean IsAccountRealName()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTMANAGER_ISACCOUNTREALNAME_OFFSET))(this);
		}

		::MiHoYo::SDK::BindInfo* GetBindInfo(::MiHoYo::SDK::AccountModel* model)
		{
			return ((::MiHoYo::SDK::BindInfo*(*)(::PVOID, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTMANAGER_GETBINDINFO_OFFSET))(this, model);
		}

		::System::Void SetAutoLoginAccount(::System::String* jsonString)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTMANAGER_SETAUTOLOGINACCOUNT_OFFSET))(this, jsonString);
		}

		::System::Boolean IsOfficialAccount(::MiHoYo::SDK::AccountModel* userData)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTMANAGER_ISOFFICIALACCOUNT_OFFSET))(this, userData);
		}

		::System::Void RemoveSpareOfficialAccount(::System::Collections::Generic::List_1<::MiHoYo::SDK::AccountModel*>*& dataList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MiHoYo::SDK::AccountModel*>*&))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTMANAGER_REMOVESPAREOFFICIALACCOUNT_OFFSET))(this, dataList);
		}

		::System::Void SetAccount(::MiHoYo::SDK::AccountModel* account)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTMANAGER_SETACCOUNT_OFFSET))(this, account);
		}

		::System::String* GetAsteriskName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTMANAGER_GETASTERISKNAME_OFFSET))(this);
		}

		::MiHoYo::SDK::AccountModel* GetAsteriskNameAndIcon()
		{
			return ((::MiHoYo::SDK::AccountModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTMANAGER_GETASTERISKNAMEANDICON_OFFSET))(this);
		}

		::MiHoYo::SDK::ComboUserModel* GetComboUserModel()
		{
			return ((::MiHoYo::SDK::ComboUserModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTMANAGER_GETCOMBOUSERMODEL_OFFSET))(this);
		}

		::System::Void SetComboUserModel(::MiHoYo::SDK::ComboUserModel* model)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ComboUserModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTMANAGER_SETCOMBOUSERMODEL_OFFSET))(this, model);
		}

		::System::Void SetCurrentAccountLogout()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTMANAGER_SETCURRENTACCOUNTLOGOUT_OFFSET))(this);
		}

		static ::System::Boolean IsRealNameAccount(::MiHoYo::SDK::AccountModel* account)
		{
			return ((::System::Boolean(*)(::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTMANAGER_ISREALNAMEACCOUNT_OFFSET))(account);
		}

		::System::Void ReactivateAccount(::System::String* reactivateTicket, ::MiHoYo::SDK::AccountModel* accountModel, ::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::LoginDataModel*>*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::AccountModel*, ::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::LoginDataModel*>*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTMANAGER_REACTIVATEACCOUNT_OFFSET))(this, reactivateTicket, accountModel, callback);
		}

		::System::Void OnReactivateCallback(::System::Int32 retcode, ::System::String* message, ::MiHoYo::SDK::LoginDataModel* model, ::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::LoginDataModel*>*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::MiHoYo::SDK::LoginDataModel*, ::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::LoginDataModel*>*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTMANAGER_ONREACTIVATECALLBACK_OFFSET))(this, retcode, message, model, callback);
		}

		static ::System::Boolean CheckLogoutStatus(::MiHoYo::SDK::JSONNode* data)
		{
			return ((::System::Boolean(*)(::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTMANAGER_CHECKLOGOUTSTATUS_OFFSET))(data);
		}

		static ::System::Boolean IsBindMobileAccount(::MiHoYo::SDK::AccountModel* user)
		{
			return ((::System::Boolean(*)(::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTMANAGER_ISBINDMOBILEACCOUNT_OFFSET))(user);
		}

		static ::System::Boolean IsBindMailAccount(::MiHoYo::SDK::AccountModel* user)
		{
			return ((::System::Boolean(*)(::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTMANAGER_ISBINDMAILACCOUNT_OFFSET))(user);
		}

		static ::System::Boolean IsOnlyUserNameAccount(::MiHoYo::SDK::AccountModel* model)
		{
			return ((::System::Boolean(*)(::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTMANAGER_ISONLYUSERNAMEACCOUNT_OFFSET))(model);
		}

		::System::Collections::Generic::List_1<::MiHoYo::SDK::AccountModel*>* GetOldAccount()
		{
			return ((::System::Collections::Generic::List_1<::MiHoYo::SDK::AccountModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTMANAGER_GETOLDACCOUNT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MiHoYo::SDK::AccountModel*>* GetAccount()
		{
			return ((::System::Collections::Generic::List_1<::MiHoYo::SDK::AccountModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTMANAGER_GETACCOUNT_OFFSET))(this);
		}

		::System::String* GetSerializedAccountList()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTMANAGER_GETSERIALIZEDACCOUNTLIST_OFFSET))(this);
		}

		::System::Void SetSerializedAccountList(::System::String* strAccountList)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTMANAGER_SETSERIALIZEDACCOUNTLIST_OFFSET))(this, strAccountList);
		}

		::System::Int32 GetAccountPasswordLoginAccountNumber()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTMANAGER_GETACCOUNTPASSWORDLOGINACCOUNTNUMBER_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MiHoYo::SDK::AccountModel*>* GetAccountListInfo()
		{
			return ((::System::Collections::Generic::List_1<::MiHoYo::SDK::AccountModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTMANAGER_GETACCOUNTLISTINFO_OFFSET))(this);
		}

		::System::Void ResetOldAccount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTMANAGER_RESETOLDACCOUNT_OFFSET))(this);
		}

		::System::Void DeleteCurrentAccount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTMANAGER_DELETECURRENTACCOUNT_OFFSET))(this);
		}

		::System::Void DeleteAccount(::MiHoYo::SDK::AccountModel* account)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTMANAGER_DELETEACCOUNT_OFFSET))(this, account);
		}

		::System::Void AccountListMarkDelete(::System::String* strUid)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTMANAGER_ACCOUNTLISTMARKDELETE_OFFSET))(this, strUid);
		}

		::System::Void AccountListMarkDelete_1(::MiHoYo::SDK::AccountModel* account)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTMANAGER_ACCOUNTLISTMARKDELETE_1_OFFSET))(this, account);
		}

		::System::Void ClearAccountList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTMANAGER_CLEARACCOUNTLIST_OFFSET))(this);
		}

		::System::String* GetAccountDataListKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTMANAGER_GETACCOUNTDATALISTKEY_OFFSET))(this);
		}

		::System::Void RecordLoginTime(::MiHoYo::SDK::AccountModel* account)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTMANAGER_RECORDLOGINTIME_OFFSET))(this, account);
		}

		::System::String* GetDisplayName(::MiHoYo::SDK::AccountModel* account)
		{
			return ((::System::String*(*)(::PVOID, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTMANAGER_GETDISPLAYNAME_OFFSET))(this, account);
		}

		::System::String* GetFallbackDisplayName(::MiHoYo::SDK::AccountModel* account)
		{
			return ((::System::String*(*)(::PVOID, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTMANAGER_GETFALLBACKDISPLAYNAME_OFFSET))(this, account);
		}

		::System::String* GetFormatLastLoginTime(::MiHoYo::SDK::AccountModel* account)
		{
			return ((::System::String*(*)(::PVOID, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTMANAGER_GETFORMATLASTLOGINTIME_OFFSET))(this, account);
		}

		::System::Void SendNoticeEmail()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTMANAGER_SENDNOTICEEMAIL_OFFSET))(this);
		}

		::System::Void ApplyLoginTime()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTMANAGER_APPLYLOGINTIME_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MiHoYo::SDK::AccountModel*>* ReDecodeAccountListString()
		{
			return ((::System::Collections::Generic::List_1<::MiHoYo::SDK::AccountModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTMANAGER_REDECODEACCOUNTLISTSTRING_OFFSET))(this);
		}

		::System::Boolean TryGetValidAccountList(::System::String* strAccountList, ::System::Collections::Generic::List_1<::MiHoYo::SDK::AccountModel*>*& lstAccountList)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::MiHoYo::SDK::AccountModel*>*&))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTMANAGER_TRYGETVALIDACCOUNTLIST_OFFSET))(this, strAccountList, lstAccountList);
		}
	};
}
