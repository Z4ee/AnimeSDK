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

#define MIHOYO_SDK_ACCOUNTMANAGER_ACCOUNTLISTMARKDELETE_1_OFFSET UNITYSDK_OFFSET(0x1A18C070)
#define MIHOYO_SDK_ACCOUNTMANAGER_ACCOUNTLISTMARKDELETE_OFFSET UNITYSDK_OFFSET(0x1A191DE0)
#define MIHOYO_SDK_ACCOUNTMANAGER_APPLYLOGINTIME_OFFSET UNITYSDK_OFFSET(0x1A192580)
#define MIHOYO_SDK_ACCOUNTMANAGER_CHECKLOGOUTSTATUS_OFFSET UNITYSDK_OFFSET(0x1A190E20)
#define MIHOYO_SDK_ACCOUNTMANAGER_CLEARACCOUNTLIST_OFFSET UNITYSDK_OFFSET(0x1A191F10)
#define MIHOYO_SDK_ACCOUNTMANAGER_CLEARCACHE_OFFSET UNITYSDK_OFFSET(0x1A18DD90)
#define MIHOYO_SDK_ACCOUNTMANAGER_DELETEACCOUNT_OFFSET UNITYSDK_OFFSET(0x1A191AB0)
#define MIHOYO_SDK_ACCOUNTMANAGER_DELETECURRENTACCOUNT_OFFSET UNITYSDK_OFFSET(0x1A191780)
#define MIHOYO_SDK_ACCOUNTMANAGER_GETACCOUNTDATALISTKEY_OFFSET UNITYSDK_OFFSET(0x1A18F420)
#define MIHOYO_SDK_ACCOUNTMANAGER_GETACCOUNTLISTINFO_OFFSET UNITYSDK_OFFSET(0x1A18AB90)
#define MIHOYO_SDK_ACCOUNTMANAGER_GETACCOUNTNAME_OFFSET UNITYSDK_OFFSET(0x1A18E410)
#define MIHOYO_SDK_ACCOUNTMANAGER_GETACCOUNTPASSWORDLOGINACCOUNTNUMBER_OFFSET UNITYSDK_OFFSET(0x1A191760)
#define MIHOYO_SDK_ACCOUNTMANAGER_GETACCOUNT_OFFSET UNITYSDK_OFFSET(0x1A18DE80)
#define MIHOYO_SDK_ACCOUNTMANAGER_GETASTERISKNAMEANDICON_OFFSET UNITYSDK_OFFSET(0x1A18F7B0)
#define MIHOYO_SDK_ACCOUNTMANAGER_GETASTERISKNAME_OFFSET UNITYSDK_OFFSET(0x1A18F780)
#define MIHOYO_SDK_ACCOUNTMANAGER_GETBINDINFO_OFFSET UNITYSDK_OFFSET(0x1A18E4E0)
#define MIHOYO_SDK_ACCOUNTMANAGER_GETCACHEACCOUNT_OFFSET UNITYSDK_OFFSET(0x1A18DDB0)
#define MIHOYO_SDK_ACCOUNTMANAGER_GETCOMBOUSERMODEL_OFFSET UNITYSDK_OFFSET(0x1A1907F0)
#define MIHOYO_SDK_ACCOUNTMANAGER_GETCURRENTACCOUNT_OFFSET UNITYSDK_OFFSET(0x1A18DDD0)
#define MIHOYO_SDK_ACCOUNTMANAGER_GETDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x1A18C950)
#define MIHOYO_SDK_ACCOUNTMANAGER_GETFALLBACKDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x1A1907B0)
#define MIHOYO_SDK_ACCOUNTMANAGER_GETFORMATLASTLOGINTIME_OFFSET UNITYSDK_OFFSET(0x1A18D680)
#define MIHOYO_SDK_ACCOUNTMANAGER_GETOLDACCOUNT_OFFSET UNITYSDK_OFFSET(0x1A18F5E0)
#define MIHOYO_SDK_ACCOUNTMANAGER_GETSERIALIZEDACCOUNTLIST_OFFSET UNITYSDK_OFFSET(0x1A1916B0)
#define MIHOYO_SDK_ACCOUNTMANAGER_GET_CACHEDAID_OFFSET UNITYSDK_OFFSET(0x1A18DD30)
#define MIHOYO_SDK_ACCOUNTMANAGER_GET_LOGINSUCESSTYPE_OFFSET UNITYSDK_OFFSET(0x1A18DD70)
#define MIHOYO_SDK_ACCOUNTMANAGER_GET_USERINPUTNAME_OFFSET UNITYSDK_OFFSET(0x1A18DD50)
#define MIHOYO_SDK_ACCOUNTMANAGER_ISACCOUNTBINDMOBILE_OFFSET UNITYSDK_OFFSET(0x1A18E470)
#define MIHOYO_SDK_ACCOUNTMANAGER_ISACCOUNTREALNAME_OFFSET UNITYSDK_OFFSET(0x1A18E4A0)
#define MIHOYO_SDK_ACCOUNTMANAGER_ISBINDMAILACCOUNT_OFFSET UNITYSDK_OFFSET(0x1A191070)
#define MIHOYO_SDK_ACCOUNTMANAGER_ISBINDMOBILEACCOUNT_OFFSET UNITYSDK_OFFSET(0x1A191050)
#define MIHOYO_SDK_ACCOUNTMANAGER_ISOFFICIALACCOUNT_OFFSET UNITYSDK_OFFSET(0x1A18EFB0)
#define MIHOYO_SDK_ACCOUNTMANAGER_ISONLYUSERNAMEACCOUNT_OFFSET UNITYSDK_OFFSET(0x1A191090)
#define MIHOYO_SDK_ACCOUNTMANAGER_ISREALNAMEACCOUNT_OFFSET UNITYSDK_OFFSET(0x1A1908F0)
#define MIHOYO_SDK_ACCOUNTMANAGER_ONREACTIVATECALLBACK_OFFSET UNITYSDK_OFFSET(0x1A190D90)
#define MIHOYO_SDK_ACCOUNTMANAGER_REACTIVATEACCOUNT_OFFSET UNITYSDK_OFFSET(0x1A190910)
#define MIHOYO_SDK_ACCOUNTMANAGER_RECORDLOGINTIME_OFFSET UNITYSDK_OFFSET(0x1A18E950)
#define MIHOYO_SDK_ACCOUNTMANAGER_REDECODEACCOUNTLISTSTRING_OFFSET UNITYSDK_OFFSET(0x1A191250)
#define MIHOYO_SDK_ACCOUNTMANAGER_REMOVESPAREOFFICIALACCOUNT_OFFSET UNITYSDK_OFFSET(0x1A18EFF0)
#define MIHOYO_SDK_ACCOUNTMANAGER_RESETOLDACCOUNT_OFFSET UNITYSDK_OFFSET(0x1A18F6D0)
#define MIHOYO_SDK_ACCOUNTMANAGER_SENDNOTICEEMAIL_OFFSET UNITYSDK_OFFSET(0x1A192240)
#define MIHOYO_SDK_ACCOUNTMANAGER_SETACCOUNT_OFFSET UNITYSDK_OFFSET(0x1A18E9A0)
#define MIHOYO_SDK_ACCOUNTMANAGER_SETAUTOLOGINACCOUNT_OFFSET UNITYSDK_OFFSET(0x1A18E620)
#define MIHOYO_SDK_ACCOUNTMANAGER_SETCACHEACCOUNT_OFFSET UNITYSDK_OFFSET(0x1A18DDC0)
#define MIHOYO_SDK_ACCOUNTMANAGER_SETCOMBOUSERMODEL_OFFSET UNITYSDK_OFFSET(0x1A190800)
#define MIHOYO_SDK_ACCOUNTMANAGER_SETCURRENTACCOUNTLOGOUT_OFFSET UNITYSDK_OFFSET(0x1A190810)
#define MIHOYO_SDK_ACCOUNTMANAGER_SETSERIALIZEDACCOUNTLIST_OFFSET UNITYSDK_OFFSET(0x1A191700)
#define MIHOYO_SDK_ACCOUNTMANAGER_SET_CACHEDAID_OFFSET UNITYSDK_OFFSET(0x1A18DD40)
#define MIHOYO_SDK_ACCOUNTMANAGER_SET_LOGINSUCESSTYPE_OFFSET UNITYSDK_OFFSET(0x1A18DD80)
#define MIHOYO_SDK_ACCOUNTMANAGER_SET_USERINPUTNAME_OFFSET UNITYSDK_OFFSET(0x1A18DD60)
#define MIHOYO_SDK_ACCOUNTMANAGER_TRYGETVALIDACCOUNTLIST_OFFSET UNITYSDK_OFFSET(0x1A1910D0)
#define MIHOYO_SDK_ACCOUNTMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A1925C0)
#define MIHOYO_SDK_ACCOUNTMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1925B0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int AccountManager_TypeDefinitionIndex = 7906;

	class AccountManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::AccountManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::AccountManager**)Il2CppClass::FromTypeDefinitionIndex(AccountManager_TypeDefinitionIndex)->GetStaticField(0x1F00);
		}
		// static const ::System::String* OLD_ACCOUNT_DATA_LIST; // 0x0
		// static const ::System::String* ACCOUNT_DATA_LIST; // 0x0
		// static const ::System::Int16 MAX_ACCOUNT_LIST_COUNT = 0x3; // 0x0
		::System::String* _UserInputName_k__BackingField; // 0x10
		::MiHoYo::SDK::AccountModel* userData; // 0x18
		::System::Collections::Generic::List_1<::MiHoYo::SDK::AccountManager_NetworkAdapterInfo*>* m_lstAdapter; // 0x20
		::MiHoYo::SDK::ComboUserModel* comboUserData; // 0x28
		::System::String* _CachedAID_k__BackingField; // 0x30
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

		::System::Void set_CachedAID(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTMANAGER_SET_CACHEDAID_OFFSET))(this, a1);
		}

		::System::String* get_UserInputName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTMANAGER_GET_USERINPUTNAME_OFFSET))(this);
		}

		::System::Void set_UserInputName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTMANAGER_SET_USERINPUTNAME_OFFSET))(this, a1);
		}

		::MiHoYo::SDK::ReportType get_loginSucessType()
		{
			return ((::MiHoYo::SDK::ReportType(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTMANAGER_GET_LOGINSUCESSTYPE_OFFSET))(this);
		}

		::System::Void set_loginSucessType(::MiHoYo::SDK::ReportType a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ReportType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTMANAGER_SET_LOGINSUCESSTYPE_OFFSET))(this, a1);
		}

		::System::Void ClearCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTMANAGER_CLEARCACHE_OFFSET))(this);
		}

		::MiHoYo::SDK::AccountModel* GetCacheAccount()
		{
			return ((::MiHoYo::SDK::AccountModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTMANAGER_GETCACHEACCOUNT_OFFSET))(this);
		}

		::System::Void SetCacheAccount(::MiHoYo::SDK::AccountModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTMANAGER_SETCACHEACCOUNT_OFFSET))(this, a1);
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

		::MiHoYo::SDK::BindInfo* GetBindInfo(::MiHoYo::SDK::AccountModel* a1)
		{
			return ((::MiHoYo::SDK::BindInfo*(*)(::PVOID, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTMANAGER_GETBINDINFO_OFFSET))(this, a1);
		}

		::System::Void SetAutoLoginAccount(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTMANAGER_SETAUTOLOGINACCOUNT_OFFSET))(this, a1);
		}

		::System::Boolean IsOfficialAccount(::MiHoYo::SDK::AccountModel* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTMANAGER_ISOFFICIALACCOUNT_OFFSET))(this, a1);
		}

		::System::Void RemoveSpareOfficialAccount(::System::Collections::Generic::List_1<::MiHoYo::SDK::AccountModel*>*& a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MiHoYo::SDK::AccountModel*>*&))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTMANAGER_REMOVESPAREOFFICIALACCOUNT_OFFSET))(this, a1);
		}

		::System::Void SetAccount(::MiHoYo::SDK::AccountModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTMANAGER_SETACCOUNT_OFFSET))(this, a1);
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

		::System::Void SetComboUserModel(::MiHoYo::SDK::ComboUserModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ComboUserModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTMANAGER_SETCOMBOUSERMODEL_OFFSET))(this, a1);
		}

		::System::Void SetCurrentAccountLogout()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTMANAGER_SETCURRENTACCOUNTLOGOUT_OFFSET))(this);
		}

		static ::System::Boolean IsRealNameAccount(::MiHoYo::SDK::AccountModel* a1)
		{
			return ((::System::Boolean(*)(::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTMANAGER_ISREALNAMEACCOUNT_OFFSET))(a1);
		}

		::System::Void ReactivateAccount(::System::String* a1, ::MiHoYo::SDK::AccountModel* a2, ::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::LoginDataModel*>*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::AccountModel*, ::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::LoginDataModel*>*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTMANAGER_REACTIVATEACCOUNT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnReactivateCallback(::System::Int32 a1, ::System::String* a2, ::MiHoYo::SDK::LoginDataModel* a3, ::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::LoginDataModel*>*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::MiHoYo::SDK::LoginDataModel*, ::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::LoginDataModel*>*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTMANAGER_ONREACTIVATECALLBACK_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::Boolean CheckLogoutStatus(::MiHoYo::SDK::JSONNode* a1)
		{
			return ((::System::Boolean(*)(::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTMANAGER_CHECKLOGOUTSTATUS_OFFSET))(a1);
		}

		static ::System::Boolean IsBindMobileAccount(::MiHoYo::SDK::AccountModel* a1)
		{
			return ((::System::Boolean(*)(::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTMANAGER_ISBINDMOBILEACCOUNT_OFFSET))(a1);
		}

		static ::System::Boolean IsBindMailAccount(::MiHoYo::SDK::AccountModel* a1)
		{
			return ((::System::Boolean(*)(::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTMANAGER_ISBINDMAILACCOUNT_OFFSET))(a1);
		}

		static ::System::Boolean IsOnlyUserNameAccount(::MiHoYo::SDK::AccountModel* a1)
		{
			return ((::System::Boolean(*)(::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTMANAGER_ISONLYUSERNAMEACCOUNT_OFFSET))(a1);
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

		::System::Void SetSerializedAccountList(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTMANAGER_SETSERIALIZEDACCOUNTLIST_OFFSET))(this, a1);
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

		::System::Void DeleteAccount(::MiHoYo::SDK::AccountModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTMANAGER_DELETEACCOUNT_OFFSET))(this, a1);
		}

		::System::Void AccountListMarkDelete(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTMANAGER_ACCOUNTLISTMARKDELETE_OFFSET))(this, a1);
		}

		::System::Void AccountListMarkDelete_1(::MiHoYo::SDK::AccountModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTMANAGER_ACCOUNTLISTMARKDELETE_1_OFFSET))(this, a1);
		}

		::System::Void ClearAccountList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTMANAGER_CLEARACCOUNTLIST_OFFSET))(this);
		}

		::System::String* GetAccountDataListKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTMANAGER_GETACCOUNTDATALISTKEY_OFFSET))(this);
		}

		::System::Void RecordLoginTime(::MiHoYo::SDK::AccountModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTMANAGER_RECORDLOGINTIME_OFFSET))(this, a1);
		}

		::System::String* GetDisplayName(::MiHoYo::SDK::AccountModel* a1)
		{
			return ((::System::String*(*)(::PVOID, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTMANAGER_GETDISPLAYNAME_OFFSET))(this, a1);
		}

		::System::String* GetFallbackDisplayName(::MiHoYo::SDK::AccountModel* a1)
		{
			return ((::System::String*(*)(::PVOID, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTMANAGER_GETFALLBACKDISPLAYNAME_OFFSET))(this, a1);
		}

		::System::String* GetFormatLastLoginTime(::MiHoYo::SDK::AccountModel* a1)
		{
			return ((::System::String*(*)(::PVOID, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTMANAGER_GETFORMATLASTLOGINTIME_OFFSET))(this, a1);
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

		::System::Boolean TryGetValidAccountList(::System::String* a1, ::System::Collections::Generic::List_1<::MiHoYo::SDK::AccountModel*>*& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::MiHoYo::SDK::AccountModel*>*&))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTMANAGER_TRYGETVALIDACCOUNTLIST_OFFSET))(this, a1, a2);
		}
	};
}
