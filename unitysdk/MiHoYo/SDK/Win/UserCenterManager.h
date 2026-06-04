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

#define MIHOYO_SDK_WIN_USERCENTERMANAGER_CANOPENUSERCENTER_OFFSET UNITYSDK_OFFSET(0x182D36B0)
#define MIHOYO_SDK_WIN_USERCENTERMANAGER_CLOSE_OFFSET UNITYSDK_OFFSET(0x182D4960)
#define MIHOYO_SDK_WIN_USERCENTERMANAGER_GETUSERCENTERABMODEL_OFFSET UNITYSDK_OFFSET(0x182D7360)
#define MIHOYO_SDK_WIN_USERCENTERMANAGER_ISENABLENEWUSERCENTER_OFFSET UNITYSDK_OFFSET(0x182D7AA0)
#define MIHOYO_SDK_WIN_USERCENTERMANAGER_LOADUSERCENTERABTESTCONFIG_OFFSET UNITYSDK_OFFSET(0x182D7B80)
#define MIHOYO_SDK_WIN_USERCENTERMANAGER_MANUALLYCLOSE_OFFSET UNITYSDK_OFFSET(0x182D4C20)
#define MIHOYO_SDK_WIN_USERCENTERMANAGER_NOTIFYOPENERROR_OFFSET UNITYSDK_OFFSET(0x182D4950)
#define MIHOYO_SDK_WIN_USERCENTERMANAGER_NOTIFYOPENNORMALCLOSED_OFFSET UNITYSDK_OFFSET(0x182D4F10)
#define MIHOYO_SDK_WIN_USERCENTERMANAGER_NOTIFYOPENRESULT_OFFSET UNITYSDK_OFFSET(0x182D4C60)
#define MIHOYO_SDK_WIN_USERCENTERMANAGER_ONGETNATIVECALLBACK_OFFSET UNITYSDK_OFFSET(0x182D65F0)
#define MIHOYO_SDK_WIN_USERCENTERMANAGER_ONGETPAGECLOSE_OFFSET UNITYSDK_OFFSET(0x182D6350)
#define MIHOYO_SDK_WIN_USERCENTERMANAGER_ONGETPRELOADRESULT_OFFSET UNITYSDK_OFFSET(0x182D6E90)
#define MIHOYO_SDK_WIN_USERCENTERMANAGER_ONGETUNIWEBVIEWMESSAGE_OFFSET UNITYSDK_OFFSET(0x182D5180)
#define MIHOYO_SDK_WIN_USERCENTERMANAGER_ONLOGOUT_OFFSET UNITYSDK_OFFSET(0x182D6590)
#define MIHOYO_SDK_WIN_USERCENTERMANAGER_OPEN_OFFSET UNITYSDK_OFFSET(0x182D3780)
#define MIHOYO_SDK_WIN_USERCENTERMANAGER_PARSENEWTOKEN_OFFSET UNITYSDK_OFFSET(0x182D4F20)
#define MIHOYO_SDK_WIN_USERCENTERMANAGER_PRELOADNEWUSERCENTER_OFFSET UNITYSDK_OFFSET(0x182D7EF0)
#define MIHOYO_SDK_WIN_USERCENTERMANAGER_REQUESTUSERCENTERABTEST_OFFSET UNITYSDK_OFFSET(0x182D6EC0)
#define MIHOYO_SDK_WIN_USERCENTERMANAGER_SAVEUSERCENTERABTEST_OFFSET UNITYSDK_OFFSET(0x182D78C0)
#define MIHOYO_SDK_WIN_USERCENTERMANAGER_UPDATEUSERCENTERABTESTCONFIG_OFFSET UNITYSDK_OFFSET(0x182D74D0)
#define MIHOYO_SDK_WIN_USERCENTERMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x182D8410)
#define MIHOYO_SDK_WIN_USERCENTERMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x182D8150)
#define MIHOYO_SDK_WIN_USERCENTERMANAGER__REQUESTUSERCENTERABTEST_B__22_0_OFFSET UNITYSDK_OFFSET(0x182D8460)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int UserCenterManager_TypeDefinitionIndex = 9129;

	class UserCenterManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Win::UserCenterManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Win::UserCenterManager**)Il2CppClass::FromTypeDefinitionIndex(UserCenterManager_TypeDefinitionIndex)->GetStaticField(0x820);
		}
		// static const ::System::String* USER_CENTER_AB_TEST_CONFIGS_KEY; // 0x0
		::System::Action_1<::System::String*>* m_callbackOpenUserCenter; // 0x10
		::MiHoYo::SDK::Win::UserCenterManager_UserCenterABTest* m_ucABtest; // 0x18
		::System::String* m_strOpenUserCenterResult; // 0x20
		::MiHoYo::SDK::Web* webView; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* m_dicUserCenterEvent2Msg; // 0x30

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

		::System::Void Open(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_USERCENTERMANAGER_OPEN_OFFSET))(this, a1);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_USERCENTERMANAGER_CLOSE_OFFSET))(this);
		}

		::System::Void ManuallyClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_USERCENTERMANAGER_MANUALLYCLOSE_OFFSET))(this);
		}

		::System::Void NotifyOpenError(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_USERCENTERMANAGER_NOTIFYOPENERROR_OFFSET))(this, a1);
		}

		::System::Void NotifyOpenNormalClosed(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_USERCENTERMANAGER_NOTIFYOPENNORMALCLOSED_OFFSET))(this, a1);
		}

		::System::Void NotifyOpenResult(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_USERCENTERMANAGER_NOTIFYOPENRESULT_OFFSET))(this, a1, a2);
		}

		::System::String* ParseNewToken(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_USERCENTERMANAGER_PARSENEWTOKEN_OFFSET))(this, a1);
		}

		::System::Void OnGetUniWebViewMessage(::MiHoYo::SDK::Web* a1, ::MiHoYo::SDK::UniWebViewMessage a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*, ::MiHoYo::SDK::UniWebViewMessage))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_USERCENTERMANAGER_ONGETUNIWEBVIEWMESSAGE_OFFSET))(this, a1, a2);
		}

		::System::Void OnGetPageClose(::MiHoYo::SDK::Web* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_USERCENTERMANAGER_ONGETPAGECLOSE_OFFSET))(this, a1);
		}

		::System::Void OnLogout(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_USERCENTERMANAGER_ONLOGOUT_OFFSET))(this, a1);
		}

		::System::Void OnGetNativeCallback(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_USERCENTERMANAGER_ONGETNATIVECALLBACK_OFFSET))(this, a1);
		}

		::System::Void OnGetPreLoadResult(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_USERCENTERMANAGER_ONGETPRELOADRESULT_OFFSET))(this, a1);
		}

		::System::Void RequestUserCenterABTest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_USERCENTERMANAGER_REQUESTUSERCENTERABTEST_OFFSET))(this);
		}

		::MiHoYo::SDK::Base::ABTestPlatform::Const::ABTestRequestParam* GetUserCenterAbModel()
		{
			return ((::MiHoYo::SDK::Base::ABTestPlatform::Const::ABTestRequestParam*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_USERCENTERMANAGER_GETUSERCENTERABMODEL_OFFSET))(this);
		}

		::System::Void UpdateUserCenterABTestConfig(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_USERCENTERMANAGER_UPDATEUSERCENTERABTESTCONFIG_OFFSET))(this, a1);
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

		::System::Void _RequestUserCenterABTest_b__22_0(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_USERCENTERMANAGER__REQUESTUSERCENTERABTEST_B__22_0_OFFSET))(this, a1);
		}
	};
}
