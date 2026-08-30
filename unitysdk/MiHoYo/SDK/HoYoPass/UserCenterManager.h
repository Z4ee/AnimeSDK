#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class Web; }
namespace MiHoYo::SDK::HoYoPass { class UserCenterManager_UserCenterJsBridge; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER_CANOPENUSERCENTER_OFFSET UNITYSDK_OFFSET(0x1AEA81A0)
#define MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER_MANUALLYCLOSE_OFFSET UNITYSDK_OFFSET(0x1AEA85C0)
#define MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER_NOTIFYNORMALCLOSE_OFFSET UNITYSDK_OFFSET(0x1AEA9290)
#define MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER_NOTIFYOPENERROR_OFFSET UNITYSDK_OFFSET(0x1AEA85B0)
#define MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER_NOTIFYUSERCENTERRESULT_OFFSET UNITYSDK_OFFSET(0x1AEA9300)
#define MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER_ONGETTHIRDTOKENINVOKED_OFFSET UNITYSDK_OFFSET(0x1AEA8720)
#define MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER_ONLOGOUT_OFFSET UNITYSDK_OFFSET(0x1AEA92A0)
#define MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER_ONUSERCENTERRESULT_OFFSET UNITYSDK_OFFSET(0x1AEA8F70)
#define MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER_OPEN_OFFSET UNITYSDK_OFFSET(0x1AEA8260)
#define MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER_REGISTERRESULTHANDLER_OFFSET UNITYSDK_OFFSET(0x1AEA7F20)
#define MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AEA9620)
#define MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AEA7E70)
#define MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER__REGISTERRESULTHANDLER_B__15_0_OFFSET UNITYSDK_OFFSET(0x1AEA9750)
#define MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER__REGISTERRESULTHANDLER_B__15_1_OFFSET UNITYSDK_OFFSET(0x1AEA9880)
#define MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER__REGISTERRESULTHANDLER_B__15_3_OFFSET UNITYSDK_OFFSET(0x1AEA9820)
#define MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER__REGISTERRESULTHANDLER_B__15_4_OFFSET UNITYSDK_OFFSET(0x1AEA9950)

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int UserCenterManager_TypeDefinitionIndex = 8230;

	class UserCenterManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::HoYoPass::UserCenterManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::HoYoPass::UserCenterManager**)Il2CppClass::FromTypeDefinitionIndex(UserCenterManager_TypeDefinitionIndex)->GetStaticField(0x148C0);
		}
		static ::System::String** StaticGet_CURRENT_USER_INVALID_MSG()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UserCenterManager_TypeDefinitionIndex)->GetStaticField(0x148C8);
		}
		static ::System::String** StaticGet_USER_CENTER_NOMALLY_CLOSE_MSG()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UserCenterManager_TypeDefinitionIndex)->GetStaticField(0x148D0);
		}
		static ::System::String** StaticGet_COOKIE_TOKEN_INVALID_MSG()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UserCenterManager_TypeDefinitionIndex)->GetStaticField(0x148D8);
		}
		// static const ::System::String* MODULE_NAME; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MiHoYo::SDK::HoYoPass::UserCenterManager_UserCenterJsBridge*>* resultHandlerMap; // 0x10
		::System::Action_1<::System::String*>* userCenterCallback; // 0x18
		::System::Int32 TOKEN_INVALID; // 0x20
		::System::Int32 NOTICE_ERROR_CODE; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER__CCTOR_OFFSET))();
		}

		::System::Boolean CanOpenUserCenter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER_CANOPENUSERCENTER_OFFSET))(this);
		}

		::System::Void Open(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER_OPEN_OFFSET))(this, a1);
		}

		::System::Void ManuallyClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER_MANUALLYCLOSE_OFFSET))(this);
		}

		::System::Void RegisterResultHandler()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER_REGISTERRESULTHANDLER_OFFSET))(this);
		}

		::System::Void OnGetThirdTokenInvoked(::MiHoYo::SDK::Web* a1, ::MiHoYo::SDK::JSONNode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER_ONGETTHIRDTOKENINVOKED_OFFSET))(this, a1, a2);
		}

		::System::Void OnUserCenterResult(::System::Int32 a1, ::System::String* a2, ::MiHoYo::SDK::JSONNode* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER_ONUSERCENTERRESULT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void onLogout()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER_ONLOGOUT_OFFSET))(this);
		}

		::System::Void NotifyOpenError(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER_NOTIFYOPENERROR_OFFSET))(this, a1);
		}

		::System::Void NotifyNormalClose(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER_NOTIFYNORMALCLOSE_OFFSET))(this, a1);
		}

		::System::Void NotifyUserCenterResult(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER_NOTIFYUSERCENTERRESULT_OFFSET))(this, a1, a2);
		}

		::System::Void _RegisterResultHandler_b__15_0(::System::Int32 a1, ::MiHoYo::SDK::JSONNode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER__REGISTERRESULTHANDLER_B__15_0_OFFSET))(this, a1, a2);
		}

		::System::Void _RegisterResultHandler_b__15_3(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER__REGISTERRESULTHANDLER_B__15_3_OFFSET))(this, a1);
		}

		::System::Void _RegisterResultHandler_b__15_1(::System::Int32 a1, ::MiHoYo::SDK::JSONNode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER__REGISTERRESULTHANDLER_B__15_1_OFFSET))(this, a1, a2);
		}

		::System::Void _RegisterResultHandler_b__15_4(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER__REGISTERRESULTHANDLER_B__15_4_OFFSET))(this, a1);
		}
	};
}
