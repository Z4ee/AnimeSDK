#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UniWebViewMessage.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK { class Web; }
namespace MiHoYo::SDK::Base::ABTestPlatform::Const { class ABTestRequestParam; }
namespace MiHoYo::SDK::Win { class UserCenterManager_UserCenterABTest; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_WIN_USERCENTERMANAGER_CANOPENUSERCENTER_OFFSET UNITYSDK_OFFSET(0x15E9DA90)
#define MIHOYO_SDK_WIN_USERCENTERMANAGER_CLOSE_OFFSET UNITYSDK_OFFSET(0x15E9EF90)
#define MIHOYO_SDK_WIN_USERCENTERMANAGER_GETUSERCENTERABMODEL_OFFSET UNITYSDK_OFFSET(0x15EA1880)
#define MIHOYO_SDK_WIN_USERCENTERMANAGER_ISENABLENEWUSERCENTER_OFFSET UNITYSDK_OFFSET(0x15EA2130)
#define MIHOYO_SDK_WIN_USERCENTERMANAGER_LOADUSERCENTERABTESTCONFIG_OFFSET UNITYSDK_OFFSET(0x15EA2210)
#define MIHOYO_SDK_WIN_USERCENTERMANAGER_MANUALLYCLOSE_OFFSET UNITYSDK_OFFSET(0x15E9F250)
#define MIHOYO_SDK_WIN_USERCENTERMANAGER_NOTIFYOPENERROR_OFFSET UNITYSDK_OFFSET(0x15E9EF80)
#define MIHOYO_SDK_WIN_USERCENTERMANAGER_NOTIFYOPENNORMALCLOSED_OFFSET UNITYSDK_OFFSET(0x15E9F540)
#define MIHOYO_SDK_WIN_USERCENTERMANAGER_NOTIFYOPENRESULT_OFFSET UNITYSDK_OFFSET(0x15E9F290)
#define MIHOYO_SDK_WIN_USERCENTERMANAGER_ONGETNATIVECALLBACK_OFFSET UNITYSDK_OFFSET(0x15EA0B00)
#define MIHOYO_SDK_WIN_USERCENTERMANAGER_ONGETPAGECLOSE_OFFSET UNITYSDK_OFFSET(0x15EA08A0)
#define MIHOYO_SDK_WIN_USERCENTERMANAGER_ONGETPRELOADRESULT_OFFSET UNITYSDK_OFFSET(0x15EA13D0)
#define MIHOYO_SDK_WIN_USERCENTERMANAGER_ONGETUNIWEBVIEWMESSAGE_OFFSET UNITYSDK_OFFSET(0x15E9F780)
#define MIHOYO_SDK_WIN_USERCENTERMANAGER_ONLOGOUT_OFFSET UNITYSDK_OFFSET(0x15EA0AA0)
#define MIHOYO_SDK_WIN_USERCENTERMANAGER_OPEN_OFFSET UNITYSDK_OFFSET(0x15E9DC00)
#define MIHOYO_SDK_WIN_USERCENTERMANAGER_PARSENEWTOKEN_OFFSET UNITYSDK_OFFSET(0x15E9F550)
#define MIHOYO_SDK_WIN_USERCENTERMANAGER_PRELOADNEWUSERCENTER_OFFSET UNITYSDK_OFFSET(0x15EA2680)
#define MIHOYO_SDK_WIN_USERCENTERMANAGER_REQUESTUSERCENTERABTEST_OFFSET UNITYSDK_OFFSET(0x15EA1400)
#define MIHOYO_SDK_WIN_USERCENTERMANAGER_SAVEUSERCENTERABTEST_OFFSET UNITYSDK_OFFSET(0x15EA1E90)
#define MIHOYO_SDK_WIN_USERCENTERMANAGER_UPDATEUSERCENTERABTESTCONFIG_OFFSET UNITYSDK_OFFSET(0x15EA1A80)
#define MIHOYO_SDK_WIN_USERCENTERMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x15EA2BF0)
#define MIHOYO_SDK_WIN_USERCENTERMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x15EA2930)
#define MIHOYO_SDK_WIN_USERCENTERMANAGER__REQUESTUSERCENTERABTEST_B__22_0_OFFSET UNITYSDK_OFFSET(0x15EA2C40)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int UserCenterManager_TypeDefinitionIndex = 8080;

	class UserCenterManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Win::UserCenterManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Win::UserCenterManager**)Il2CppClass::FromTypeDefinitionIndex(UserCenterManager_TypeDefinitionIndex)->GetStaticField(0x13A10);
		}
		// static const ::System::String* USER_CENTER_AB_TEST_CONFIGS_KEY; // 0x0
		::MiHoYo::SDK::Web* webView; // 0x10
		::System::String* m_strOpenUserCenterResult; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* m_dicUserCenterEvent2Msg; // 0x20
		::System::Action_1<::System::String*>* m_callbackOpenUserCenter; // 0x28
		::MiHoYo::SDK::Win::UserCenterManager_UserCenterABTest* m_ucABtest; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_USERCENTERMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_USERCENTERMANAGER__CCTOR_OFFSET))();
		}

		::System::Boolean CanOpenUserCenter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_USERCENTERMANAGER_CANOPENUSERCENTER_OFFSET))(this);
		}

		::System::Void Open(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_USERCENTERMANAGER_OPEN_OFFSET))(this, callback);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_USERCENTERMANAGER_CLOSE_OFFSET))(this);
		}

		::System::Void ManuallyClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_USERCENTERMANAGER_MANUALLYCLOSE_OFFSET))(this);
		}

		::System::Void NotifyOpenError(::System::String* strMsg)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_USERCENTERMANAGER_NOTIFYOPENERROR_OFFSET))(this, strMsg);
		}

		::System::Void NotifyOpenNormalClosed(::System::String* strMsg)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_USERCENTERMANAGER_NOTIFYOPENNORMALCLOSED_OFFSET))(this, strMsg);
		}

		::System::Void NotifyOpenResult(::System::Int32 nRetCode, ::System::String* strMsg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_USERCENTERMANAGER_NOTIFYOPENRESULT_OFFSET))(this, nRetCode, strMsg);
		}

		::System::String* ParseNewToken(::System::String* query)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_USERCENTERMANAGER_PARSENEWTOKEN_OFFSET))(this, query);
		}

		::System::Void OnGetUniWebViewMessage(::MiHoYo::SDK::Web* webView, ::MiHoYo::SDK::UniWebViewMessage message)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*, ::MiHoYo::SDK::UniWebViewMessage))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_USERCENTERMANAGER_ONGETUNIWEBVIEWMESSAGE_OFFSET))(this, webView, message);
		}

		::System::Void OnGetPageClose(::MiHoYo::SDK::Web* webView)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_USERCENTERMANAGER_ONGETPAGECLOSE_OFFSET))(this, webView);
		}

		::System::Void OnLogout(::System::String* response)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_USERCENTERMANAGER_ONLOGOUT_OFFSET))(this, response);
		}

		::System::Void OnGetNativeCallback(::System::String* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_USERCENTERMANAGER_ONGETNATIVECALLBACK_OFFSET))(this, result);
		}

		::System::Void OnGetPreLoadResult(::System::String* response)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_USERCENTERMANAGER_ONGETPRELOADRESULT_OFFSET))(this, response);
		}

		::System::Void RequestUserCenterABTest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_USERCENTERMANAGER_REQUESTUSERCENTERABTEST_OFFSET))(this);
		}

		::MiHoYo::SDK::Base::ABTestPlatform::Const::ABTestRequestParam* GetUserCenterAbModel()
		{
			return ((::MiHoYo::SDK::Base::ABTestPlatform::Const::ABTestRequestParam*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_USERCENTERMANAGER_GETUSERCENTERABMODEL_OFFSET))(this);
		}

		::System::Void UpdateUserCenterABTestConfig(::System::String* data)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_USERCENTERMANAGER_UPDATEUSERCENTERABTESTCONFIG_OFFSET))(this, data);
		}

		::System::Void SaveUserCenterABTest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_USERCENTERMANAGER_SAVEUSERCENTERABTEST_OFFSET))(this);
		}

		::System::Void LoadUserCenterABTestConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_USERCENTERMANAGER_LOADUSERCENTERABTESTCONFIG_OFFSET))(this);
		}

		::System::Boolean IsEnableNewUserCenter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_USERCENTERMANAGER_ISENABLENEWUSERCENTER_OFFSET))(this);
		}

		::System::Void PreloadNewUserCenter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_USERCENTERMANAGER_PRELOADNEWUSERCENTER_OFFSET))(this);
		}

		::System::Void _RequestUserCenterABTest_b__22_0(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_USERCENTERMANAGER__REQUESTUSERCENTERABTEST_B__22_0_OFFSET))(this, response);
		}
	};
}
