#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/HoYoPass/HoYoPassSDK_AgeGateInfoType.h"
#include "unitysdk/MiHoYo/SDK/HoYoPass/HoYoPassSDK_AuthTicketLoginType.h"
#include "unitysdk/MiHoYo/SDK/HoYoPass/HoYoPassSDK_ErrorCode.h"
#include "unitysdk/MiHoYo/SDK/HoYoPass/HoYoPassSDK_EventId.h"
#include "unitysdk/MiHoYo/SDK/HoYoPass/HoYoPassSDK_LoginType.h"
#include "unitysdk/MiHoYo/SDK/HoYoPass/HoYoPassSDK_Region.h"
#include "unitysdk/MiHoYo/SDK/HoYoPass/HoYoPassSDK_ThirdpartyLoginMethod.h"
#include "unitysdk/MiHoYo/SDK/HoYoPass/HoYoPassSDK_TokenType.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::HoYoPass { class HoYoPassSDK_EventHandlerDelegate; }
namespace MiHoYo::SDK::HoYoPass { class HoYoPassSDK_GetCrossTokenUrlBySTokenResultHandlerDelegate; }
namespace MiHoYo::SDK::HoYoPass { class HoYoPassSDK_GetRegionSwitchStatusHandlerDelegate; }
namespace MiHoYo::SDK::HoYoPass { class HoYoPassSDK_GetTokenResultHandlerDelegate; }
namespace MiHoYo::SDK::HoYoPass { class HoYoPassSDK_KibanaReportHandlerDelegate; }
namespace MiHoYo::SDK::HoYoPass { class HoYoPassSDK_RefreshAccountInfoResultHandlerDelegate; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Text { class StringBuilder; }

#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_ABORTAGEGATE_OFFSET UNITYSDK_OFFSET(0x1B94BB90)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_ABORTREACTIVATION_OFFSET UNITYSDK_OFFSET(0x1B9516F0)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_ABORTRISKCHECK_OFFSET UNITYSDK_OFFSET(0x1B9513A0)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_ABORTTHIRDPARTYACCOUNTBINDING_OFFSET UNITYSDK_OFFSET(0x1B951540)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_ABORTTHIRDPARTYLOGIN_OFFSET UNITYSDK_OFFSET(0x1B9508D0)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_ABORTTHIRDPARTYOAUTH_OFFSET UNITYSDK_OFFSET(0x1B950700)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_ABORTVERIFICATION_OFFSET UNITYSDK_OFFSET(0x1B9518A0)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_AUTOLOGIN_OFFSET UNITYSDK_OFFSET(0x1B950200)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_CONTINUEAGEGATE_OFFSET UNITYSDK_OFFSET(0x1B94B940)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_CONTINUEREACTIVATION_OFFSET UNITYSDK_OFFSET(0x1B951610)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_CONTINUERISKCHECK_OFFSET UNITYSDK_OFFSET(0x1B9512C0)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_CONTINUETHIRDPARTYACCOUNTBINDING_OFFSET UNITYSDK_OFFSET(0x1B951470)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_CONTINUEVERIFICATION_OFFSET UNITYSDK_OFFSET(0x1B9517C0)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_DELETEACCOUNT_OFFSET UNITYSDK_OFFSET(0x1B951100)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_DELETEALLACCOUNTS_OFFSET UNITYSDK_OFFSET(0x1B953810)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_EXCHANGETOKEN_OFFSET UNITYSDK_OFFSET(0x1B953CD0)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_FROMUTF8_OFFSET UNITYSDK_OFFSET(0x1B9540E0)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_GETACCOUNTLISTCAPACITY_OFFSET UNITYSDK_OFFSET(0x1B950B60)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_GETACCOUNTLISTCOUNT_OFFSET UNITYSDK_OFFSET(0x1B950C50)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_GETACCOUNTLIST_OFFSET UNITYSDK_OFFSET(0x1B950D40)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_GETAGEAPPEALURL_OFFSET UNITYSDK_OFFSET(0x1B952D90)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_GETAGEGATESTAUTS_OFFSET UNITYSDK_OFFSET(0x1B94B5C0)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_GETAGEGATEVERIFICATIONURL_OFFSET UNITYSDK_OFFSET(0x1B952980)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_GETCROSSTOKENURLBYSTOKEN_OFFSET UNITYSDK_OFFSET(0x1B953F90)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_GETEMAILBINDINGURL_OFFSET UNITYSDK_OFFSET(0x1B9531A0)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_GETFORGOTPASSWORDURL_OFFSET UNITYSDK_OFFSET(0x1B951E10)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_GETREGISTERACCOUNTURL_OFFSET UNITYSDK_OFFSET(0x1B951A50)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_GETSECURITYVERIFICATIONURL_OFFSET UNITYSDK_OFFSET(0x1B9525C0)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_GETTHIRDPARTYACCOUNTBINDINGURL_OFFSET UNITYSDK_OFFSET(0x1B9521D0)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_GETUSERCENTERURL_OFFSET UNITYSDK_OFFSET(0x1B9538E0)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_ABORTAGEGATE_OFFSET UNITYSDK_OFFSET(0x1B94EA00)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_ABORTREACTIVATION_OFFSET UNITYSDK_OFFSET(0x1B94E6E0)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_ABORTRISKCHECK_OFFSET UNITYSDK_OFFSET(0x1B94E4D0)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_ABORTTHIRDPARTYACCOUNTBINDING_OFFSET UNITYSDK_OFFSET(0x1B94E5D0)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_ABORTTHIRDPARTYLOGIN_OFFSET UNITYSDK_OFFSET(0x1B94DF30)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_ABORTTHIRDPARTYOAUTH_OFFSET UNITYSDK_OFFSET(0x1B94DE10)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_ABORTVERIFICATION_OFFSET UNITYSDK_OFFSET(0x1B94E7F0)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_AUTOLOGIN_OFFSET UNITYSDK_OFFSET(0x1B94DBB0)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_CONTINUEAGEGATE_OFFSET UNITYSDK_OFFSET(0x1B94E980)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_CONTINUEREACTIVATION_OFFSET UNITYSDK_OFFSET(0x1B94E650)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_CONTINUERISKCHECK_OFFSET UNITYSDK_OFFSET(0x1B94E440)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_CONTINUETHIRDPARTYACCOUNTBINDING_OFFSET UNITYSDK_OFFSET(0x1B94E550)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_CONTINUEVERIFICATION_OFFSET UNITYSDK_OFFSET(0x1B94E760)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_DELETEACCOUNT_OFFSET UNITYSDK_OFFSET(0x1B94E320)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_DELETEALLACCOUNTS_OFFSET UNITYSDK_OFFSET(0x1B94F1D0)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_EXCHANGETOKEN_OFFSET UNITYSDK_OFFSET(0x1B94F3C0)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_GETACCOUNTLISTCAPACITY_OFFSET UNITYSDK_OFFSET(0x1B94E160)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_GETACCOUNTLISTCOUNT_OFFSET UNITYSDK_OFFSET(0x1B94E1E0)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_GETACCOUNTLIST_OFFSET UNITYSDK_OFFSET(0x1B94E260)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_GETAGEAPPEALURL_OFFSET UNITYSDK_OFFSET(0x1B94EFC0)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_GETAGEGATESTATUS_OFFSET UNITYSDK_OFFSET(0x1B94E870)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_GETAGEGATEVERIFICATIONURL_OFFSET UNITYSDK_OFFSET(0x1B94EE10)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_GETCROSSTOKENURLBYSTOKEN_OFFSET UNITYSDK_OFFSET(0x1B94F490)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_GETEMAILBINDINGURL_OFFSET UNITYSDK_OFFSET(0x1B94EF00)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_GETFORGOTPASSWORDURL_OFFSET UNITYSDK_OFFSET(0x1B94EBD0)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_GETREGISTERACCOUNTURL_OFFSET UNITYSDK_OFFSET(0x1B94EB10)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_GETSECURITYVERIFICATIONURL_OFFSET UNITYSDK_OFFSET(0x1B94ED50)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_GETTHIRDPARTYACCOUNTBINDINGURL_OFFSET UNITYSDK_OFFSET(0x1B94EC90)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_GETUSERCENTERURL_OFFSET UNITYSDK_OFFSET(0x1B94F2E0)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1B94DA00)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_LOGINBYACCOUNTLIST_OFFSET UNITYSDK_OFFSET(0x1B94E050)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_LOGINBYACCOUNT_OFFSET UNITYSDK_OFFSET(0x1B94DC30)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_LOGINBYAUTHTICKET_OFFSET UNITYSDK_OFFSET(0x1B94DCE0)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_LOGINBYGAMETOKEN_OFFSET UNITYSDK_OFFSET(0x1B94DFB0)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_LOGINBYTHIRDPARTY_OFFSET UNITYSDK_OFFSET(0x1B94DE90)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_LOGOUT_OFFSET UNITYSDK_OFFSET(0x1B94EA80)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_MIGRATEACCOUNTS_OFFSET UNITYSDK_OFFSET(0x1B94F140)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_REFRESHCURRENTACCOUNTINFO_OFFSET UNITYSDK_OFFSET(0x1B94F530)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_SETACCOUNTLISTCAPACITY_OFFSET UNITYSDK_OFFSET(0x1B94E0E0)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_SETCURRENTACCOUNT_OFFSET UNITYSDK_OFFSET(0x1B94F5C0)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_SETGETREGIONSWITCHSTATUSHANDLER_OFFSET UNITYSDK_OFFSET(0x1B94F650)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_SETKIBANAREPORTHANDLER_OFFSET UNITYSDK_OFFSET(0x1B94F0B0)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_SETLIFECYCLEID_OFFSET UNITYSDK_OFFSET(0x1B94E3B0)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_STARTTHIRDPARTYOAUTH_OFFSET UNITYSDK_OFFSET(0x1B94DD80)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_UNINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1B94DAA0)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_UPDATEAGEGATEUSERDATA_OFFSET UNITYSDK_OFFSET(0x1B94E8F0)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_UPDATECONFIG_OFFSET UNITYSDK_OFFSET(0x1B94DB20)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_UPDATECURRENTACCOUNTREGION_OFFSET UNITYSDK_OFFSET(0x1B94F6E0)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_UPDATECURRENTACCOUNTTOKEN_OFFSET UNITYSDK_OFFSET(0x1B94F250)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1B94FC30)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_LOGINBYACCOUNTLIST_OFFSET UNITYSDK_OFFSET(0x1B9509A0)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_LOGINBYACCOUNT_OFFSET UNITYSDK_OFFSET(0x1B9502D0)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_LOGINBYAUTHTICKET_OFFSET UNITYSDK_OFFSET(0x1B9503E0)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_LOGINBYGAMETOKEN_OFFSET UNITYSDK_OFFSET(0x1B9504E0)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_LOGINBYTHIRDPARTY_OFFSET UNITYSDK_OFFSET(0x1B9507E0)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_LOGOUT_OFFSET UNITYSDK_OFFSET(0x1B951970)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_MIGRATEACCOUNTS_OFFSET UNITYSDK_OFFSET(0x1B953730)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_NATIVEEVENTHANDLER_OFFSET UNITYSDK_OFFSET(0x1B94D3F0)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_NATIVEEXCHANGETOKENRESULTHANDLER_OFFSET UNITYSDK_OFFSET(0x1B94D790)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_NATIVEGETCROSSTOKENURLBYSTOKENRESULTHANDLER_OFFSET UNITYSDK_OFFSET(0x1B94D930)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_NATIVEGETREGIONSWITCHSTATUSHANDLER_OFFSET UNITYSDK_OFFSET(0x1B94D560)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_NATIVEKIBANAREPORTHANDLER_OFFSET UNITYSDK_OFFSET(0x1B94D4B0)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_NATIVEREFRESHACCOUNTINFORESULTHANDLER_OFFSET UNITYSDK_OFFSET(0x1B94D860)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_NATIVETHIRDPARTYOAUTHRESULTHANDLER_OFFSET UNITYSDK_OFFSET(0x1B94D6C0)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_REFRESHCURRENTACCOUNTINFO_OFFSET UNITYSDK_OFFSET(0x1B953E60)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_SETACCOUNTLISTCAPACITY_OFFSET UNITYSDK_OFFSET(0x1B950A80)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_SETEVENTHANDLER_OFFSET UNITYSDK_OFFSET(0x1B94F770)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_SETGETREGIONSWITCHSTATUSHANDLER_OFFSET UNITYSDK_OFFSET(0x1B94FA00)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_SETH5LOGREPORTHANDLER_OFFSET UNITYSDK_OFFSET(0x1B94F7D0)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_SETLIFECYCLEID_OFFSET UNITYSDK_OFFSET(0x1B9511E0)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_STARTTHIRDPARTYOAUTH_OFFSET UNITYSDK_OFFSET(0x1B9505D0)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_TOUTF8_OFFSET UNITYSDK_OFFSET(0x1B94FE70)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_UNINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1B950050)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_UPDATEAGEGATEUSERDATA_OFFSET UNITYSDK_OFFSET(0x1B94B850)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_UPDATECONFIG_OFFSET UNITYSDK_OFFSET(0x1B950120)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_UPDATECURRENTACCOUNTREGION_OFFSET UNITYSDK_OFFSET(0x1B953650)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_UPDATECURRENTACCOUNTTOKEN_OFFSET UNITYSDK_OFFSET(0x1B953560)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B9542B0)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9542A0)

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int HoYoPassSDK_TypeDefinitionIndex = 8237;

	class HoYoPassSDK : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_MODULE_NAME()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(HoYoPassSDK_TypeDefinitionIndex)->GetStaticField(0x11DB0);
		}
		static ::System::Func_1<::System::Boolean>** StaticGet_GetRegionSwitchStatusHandler()
		{
			return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(HoYoPassSDK_TypeDefinitionIndex)->GetStaticField(0x11DB8);
		}
		static ::System::Action_1<::System::String*>** StaticGet_KibanaReportHandler()
		{
			return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(HoYoPassSDK_TypeDefinitionIndex)->GetStaticField(0x11DC0);
		}
		static ::System::Action_2<::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode, ::System::String*>** StaticGet_ExchangeTokenResultHandler()
		{
			return (::System::Action_2<::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(HoYoPassSDK_TypeDefinitionIndex)->GetStaticField(0x11DC8);
		}
		static ::System::Action_2<::MiHoYo::SDK::HoYoPass::HoYoPassSDK_EventId, ::System::String*>** StaticGet_EventHandler()
		{
			return (::System::Action_2<::MiHoYo::SDK::HoYoPass::HoYoPassSDK_EventId, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(HoYoPassSDK_TypeDefinitionIndex)->GetStaticField(0x11DD0);
		}
		static ::System::Action_2<::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode, ::System::String*>** StaticGet_RefreshAccountInfoResultHandler()
		{
			return (::System::Action_2<::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(HoYoPassSDK_TypeDefinitionIndex)->GetStaticField(0x11DD8);
		}
		static ::System::Action_2<::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode, ::System::String*>** StaticGet_GetCrossTokenUrlBySTokenResultHandler()
		{
			return (::System::Action_2<::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(HoYoPassSDK_TypeDefinitionIndex)->GetStaticField(0x11DE0);
		}
		static ::System::Action_2<::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode, ::System::String*>** StaticGet_ThirdpartyOAuthResultHandler()
		{
			return (::System::Action_2<::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(HoYoPassSDK_TypeDefinitionIndex)->GetStaticField(0x11DE8);
		}
		// static const ::System::String* dllName; // 0x0
		// static const ::System::String* AIGIS; // 0x0
		// static const ::System::String* VERIFY; // 0x0
		// static const ::System::String* REACTIVATE_ACTION_TICKET; // 0x0
		// static const ::System::String* BIND_EMAIL_ACTION_TICKET; // 0x0
		// static const ::System::String* AGE_GATE_TIME; // 0x0
		// static const ::System::String* AGE_GATE_REGION; // 0x0
		// static const ::System::String* AGE_GATE_TICKET_TYPE; // 0x0
		// static const ::System::String* AGE_GATE_PAYLOAD; // 0x0
		// static const ::System::String* AGE_GATE_STAGE; // 0x0
		// static const ::System::String* AGE_GATE_TICKET; // 0x0
		// static const ::System::String* AID; // 0x0
		// static const ::System::String* MID; // 0x0
		// static const ::System::String* EMAIL; // 0x0
		// static const ::System::String* ACCOUNT_NAME; // 0x0
		// static const ::System::String* LOGIN_TIMESTAMP; // 0x0
		// static const ::System::String* LOGIN_TYPE; // 0x0
		// static const ::System::String* REPORT_ACTION_ID; // 0x0
		// static const ::System::String* REPORT_TYPE; // 0x0
		// static const ::System::String* REPORT_STAGE; // 0x0
		// static const ::System::String* REPORT_DATA; // 0x0
		// static const ::System::String* USER_AGREED_SAVE_ACCOUNT; // 0x0
		// static const ::System::String* STOKEN; // 0x0
		// static const ::System::String* ACCOUNT_INFO; // 0x0
		// static const ::System::String* IS_EMAIL_VERIFY; // 0x0
		// static const ::System::String* AREA_CODE; // 0x0
		// static const ::System::String* MOBILE; // 0x0
		// static const ::System::String* ACCESS_TOKEN; // 0x0
		// static const ::System::String* IS_LOGGED_IN; // 0x0
		// static const ::System::String* EXTRA_DATA; // 0x0
		// static const ::System::String* GAME_TOKEN; // 0x0
		// static const ::System::String* COUNTRY; // 0x0
		// static const ::System::String* REAL_NAME; // 0x0
		// static const ::System::String* IDENTITY_CARD; // 0x0
		// static const ::System::String* LOG_STRATEGY; // 0x0
		// static const ::System::String* BIND_THIRDPARTY_ACTION_TICKET; // 0x0
		// static const ::System::String* FORCE_THIRDPARTY_BIND_EMAIL; // 0x0
		// static const ::System::String* REGION; // 0x0
		// static const ::System::String* EXTERNAL_WEB_LOGIN_UID; // 0x0
		// static const ::System::String* EXTERNAL_WEB_LOGIN_MID; // 0x0
		// static const ::System::String* EXTERNAL_WEB_LOGIN_ACCOUNT; // 0x0
		// static const ::System::String* EXTERNAL_WEB_LOGIN_IS_LOGIN; // 0x0
		// static const ::System::String* EXTERNAL_WEB_LOGIN_LOGIN_TYPE; // 0x0
		// static const ::System::String* EXTERNAL_WEB_LOGIN_STOKEN; // 0x0
		// static const ::System::String* EXTERNAL_WEB_LOGIN_AGREE_PERSISTENT_LOGIN_DATA; // 0x0
		// static const ::System::String* EXTERNAL_WEB_LOGIN_LRSAG; // 0x0
		// static const ::System::Int32 ACCOUNT_LIST_DEFAULT_LEN = 0x400; // 0x0
		// static const ::System::Int32 WEBPAGE_URL_DEFAULT_LEN = 0x400; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK__CCTOR_OFFSET))();
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode HoYoPass_Initialize(::Il2CppArray<::System::Byte>* a1, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_EventHandlerDelegate* a2, ::System::IntPtr a3)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::Il2CppArray<::System::Byte>*, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_EventHandlerDelegate*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_INITIALIZE_OFFSET))(a1, a2, a3);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode HoYoPass_Uninitialize()
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_UNINITIALIZE_OFFSET))();
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode HoYoPass_UpdateConfig(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_UPDATECONFIG_OFFSET))(a1);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode HoYoPass_AutoLogin()
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_AUTOLOGIN_OFFSET))();
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode HoYoPass_LoginByAccount(::Il2CppArray<::System::Byte>* a1, ::Il2CppArray<::System::Byte>* a2, ::System::Boolean a3, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_LoginType a4)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*, ::System::Boolean, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_LoginType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_LOGINBYACCOUNT_OFFSET))(a1, a2, a3, a4);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode HoYoPass_LoginByAuthTicket(::Il2CppArray<::System::Byte>* a1, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_LoginType a2, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_AuthTicketLoginType a3, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_Region a4)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::Il2CppArray<::System::Byte>*, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_LoginType, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_AuthTicketLoginType, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_Region))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_LOGINBYAUTHTICKET_OFFSET))(a1, a2, a3, a4);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode HoYoPass_StartThirdpartyOAuth(::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ThirdpartyLoginMethod a1, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_GetTokenResultHandlerDelegate* a2)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ThirdpartyLoginMethod, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_GetTokenResultHandlerDelegate*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_STARTTHIRDPARTYOAUTH_OFFSET))(a1, a2);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode HoYoPass_AbortThirdpartyOAuth(::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ThirdpartyLoginMethod a1)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ThirdpartyLoginMethod))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_ABORTTHIRDPARTYOAUTH_OFFSET))(a1);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode HoYoPass_LoginByThirdparty(::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ThirdpartyLoginMethod a1, ::Il2CppArray<::System::Byte>* a2, ::System::Boolean a3)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ThirdpartyLoginMethod, ::Il2CppArray<::System::Byte>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_LOGINBYTHIRDPARTY_OFFSET))(a1, a2, a3);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode HoYoPass_AbortThirdpartyLogin()
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_ABORTTHIRDPARTYLOGIN_OFFSET))();
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode HoYoPass_LoginByGameToken(::System::UInt64 a1, ::Il2CppArray<::System::Byte>* a2, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_LoginType a3)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::System::UInt64, ::Il2CppArray<::System::Byte>*, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_LoginType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_LOGINBYGAMETOKEN_OFFSET))(a1, a2, a3);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode HoYoPass_LoginByAccountList(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_LOGINBYACCOUNTLIST_OFFSET))(a1);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode HoYoPass_SetAccountListCapacity(::System::UInt32 a1)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_SETACCOUNTLISTCAPACITY_OFFSET))(a1);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode HoYoPass_GetAccountListCapacity(::System::UInt32& a1)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::System::UInt32&))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_GETACCOUNTLISTCAPACITY_OFFSET))(a1);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode HoYoPass_GetAccountListCount(::System::UInt32& a1)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::System::UInt32&))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_GETACCOUNTLISTCOUNT_OFFSET))(a1);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode HoYoPass_GetAccountList(::System::Text::StringBuilder* a1, ::System::UInt64 a2, ::System::UInt64& a3)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::System::Text::StringBuilder*, ::System::UInt64, ::System::UInt64&))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_GETACCOUNTLIST_OFFSET))(a1, a2, a3);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode HoYoPass_DeleteAccount(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_DELETEACCOUNT_OFFSET))(a1);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode HoYoPass_SetLifecycleId(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_SETLIFECYCLEID_OFFSET))(a1);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode HoYoPass_ContinueRiskCheck(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_CONTINUERISKCHECK_OFFSET))(a1);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode HoYoPass_AbortRiskCheck()
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_ABORTRISKCHECK_OFFSET))();
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode HoYoPass_ContinueThirdpartyAccountBinding()
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_CONTINUETHIRDPARTYACCOUNTBINDING_OFFSET))();
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode HoYoPass_AbortThirdpartyAccountBinding()
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_ABORTTHIRDPARTYACCOUNTBINDING_OFFSET))();
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode HoYoPass_ContinueReactivation(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_CONTINUEREACTIVATION_OFFSET))(a1);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode HoYoPass_AbortReactivation()
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_ABORTREACTIVATION_OFFSET))();
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode HoYoPass_ContinueVerification(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_CONTINUEVERIFICATION_OFFSET))(a1);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode HoYoPass_AbortVerification()
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_ABORTVERIFICATION_OFFSET))();
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode HoYoPass_GetAgeGateStatus()
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_GETAGEGATESTATUS_OFFSET))();
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode HoYoPass_UpdateAgeGateUserData(::Il2CppArray<::System::Byte>* a1, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_AgeGateInfoType a2)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::Il2CppArray<::System::Byte>*, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_AgeGateInfoType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_UPDATEAGEGATEUSERDATA_OFFSET))(a1, a2);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode HoYoPass_ContinueAgeGate()
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_CONTINUEAGEGATE_OFFSET))();
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode HoYoPass_AbortAgeGate()
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_ABORTAGEGATE_OFFSET))();
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode HoYoPass_Logout(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_LOGOUT_OFFSET))(a1, a2);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode HoYoPass_GetRegisterAccountUrl(::System::Text::StringBuilder* a1, ::System::UInt64 a2, ::System::UInt64& a3)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::System::Text::StringBuilder*, ::System::UInt64, ::System::UInt64&))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_GETREGISTERACCOUNTURL_OFFSET))(a1, a2, a3);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode HoYoPass_GetForgotPasswordUrl(::System::Text::StringBuilder* a1, ::System::UInt64 a2, ::System::UInt64& a3)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::System::Text::StringBuilder*, ::System::UInt64, ::System::UInt64&))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_GETFORGOTPASSWORDURL_OFFSET))(a1, a2, a3);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode HoYoPass_GetThirdpartyAccountBindingUrl(::System::Text::StringBuilder* a1, ::System::UInt64 a2, ::System::UInt64& a3, ::System::Boolean a4)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::System::Text::StringBuilder*, ::System::UInt64, ::System::UInt64&, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_GETTHIRDPARTYACCOUNTBINDINGURL_OFFSET))(a1, a2, a3, a4);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode HoYoPass_GetSecurityVerificationUrl(::System::Text::StringBuilder* a1, ::System::UInt64 a2, ::System::UInt64& a3)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::System::Text::StringBuilder*, ::System::UInt64, ::System::UInt64&))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_GETSECURITYVERIFICATIONURL_OFFSET))(a1, a2, a3);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode HoYoPass_GetAgeGateVerificationUrl(::System::Text::StringBuilder* a1, ::System::UInt64 a2, ::System::UInt64& a3, ::Il2CppArray<::System::Byte>* a4, ::Il2CppArray<::System::Byte>* a5)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::System::Text::StringBuilder*, ::System::UInt64, ::System::UInt64&, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_GETAGEGATEVERIFICATIONURL_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode HoYoPass_GetEmailBindingUrl(::System::Text::StringBuilder* a1, ::System::UInt64 a2, ::System::UInt64& a3)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::System::Text::StringBuilder*, ::System::UInt64, ::System::UInt64&))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_GETEMAILBINDINGURL_OFFSET))(a1, a2, a3);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode HoYoPass_GetAgeAppealUrl(::System::Text::StringBuilder* a1, ::System::UInt64 a2, ::System::UInt64& a3, ::Il2CppArray<::System::Byte>* a4, ::Il2CppArray<::System::Byte>* a5)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::System::Text::StringBuilder*, ::System::UInt64, ::System::UInt64&, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_GETAGEAPPEALURL_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode HoYoPass_SetKibanaReportHandler(::MiHoYo::SDK::HoYoPass::HoYoPassSDK_KibanaReportHandlerDelegate* a1)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::MiHoYo::SDK::HoYoPass::HoYoPassSDK_KibanaReportHandlerDelegate*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_SETKIBANAREPORTHANDLER_OFFSET))(a1);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode HoYoPass_MigrateAccounts(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_MIGRATEACCOUNTS_OFFSET))(a1);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode HoYoPass_DeleteAllAccounts()
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_DELETEALLACCOUNTS_OFFSET))();
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode HoYoPass_UpdateCurrentAccountToken(::Il2CppArray<::System::Byte>* a1, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_TokenType a2)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::Il2CppArray<::System::Byte>*, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_TokenType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_UPDATECURRENTACCOUNTTOKEN_OFFSET))(a1, a2);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode HoYoPass_GetUserCenterUrl(::System::Text::StringBuilder* a1, ::System::UInt64 a2, ::System::UInt64& a3, ::System::Boolean a4, ::Il2CppArray<::System::Byte>* a5)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::System::Text::StringBuilder*, ::System::UInt64, ::System::UInt64&, ::System::Boolean, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_GETUSERCENTERURL_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode HoYoPass_ExchangeToken(::Il2CppArray<::System::Byte>* a1, ::Il2CppArray<::System::Byte>* a2, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_TokenType a3, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_TokenType a4, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_GetTokenResultHandlerDelegate* a5)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_TokenType, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_TokenType, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_GetTokenResultHandlerDelegate*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_EXCHANGETOKEN_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode HoYoPass_GetCrossTokenUrlBySToken(::Il2CppArray<::System::Byte>* a1, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_GetCrossTokenUrlBySTokenResultHandlerDelegate* a2)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::Il2CppArray<::System::Byte>*, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_GetCrossTokenUrlBySTokenResultHandlerDelegate*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_GETCROSSTOKENURLBYSTOKEN_OFFSET))(a1, a2);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode HoYoPass_RefreshCurrentAccountInfo(::MiHoYo::SDK::HoYoPass::HoYoPassSDK_RefreshAccountInfoResultHandlerDelegate* a1)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::MiHoYo::SDK::HoYoPass::HoYoPassSDK_RefreshAccountInfoResultHandlerDelegate*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_REFRESHCURRENTACCOUNTINFO_OFFSET))(a1);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode HoYoPass_SetCurrentAccount(::Il2CppArray<::System::Byte>* a1, ::System::UInt64 a2)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::Il2CppArray<::System::Byte>*, ::System::UInt64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_SETCURRENTACCOUNT_OFFSET))(a1, a2);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode HoYoPass_SetGetRegionSwitchStatusHandler(::MiHoYo::SDK::HoYoPass::HoYoPassSDK_GetRegionSwitchStatusHandlerDelegate* a1)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::MiHoYo::SDK::HoYoPass::HoYoPassSDK_GetRegionSwitchStatusHandlerDelegate*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_SETGETREGIONSWITCHSTATUSHANDLER_OFFSET))(a1);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode HoYoPass_UpdateCurrentAccountRegion(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_UPDATECURRENTACCOUNTREGION_OFFSET))(a1);
		}

		static ::System::Void SetEventHandler(::System::Action_2<::MiHoYo::SDK::HoYoPass::HoYoPassSDK_EventId, ::System::String*>* a1)
		{
			return ((::System::Void(*)(::System::Action_2<::MiHoYo::SDK::HoYoPass::HoYoPassSDK_EventId, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_SETEVENTHANDLER_OFFSET))(a1);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode SetH5logReportHandler(::System::Action_1<::System::String*>* a1)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_SETH5LOGREPORTHANDLER_OFFSET))(a1);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode SetGetRegionSwitchStatusHandler(::System::Func_1<::System::Boolean>* a1)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_SETGETREGIONSWITCHSTATUSHANDLER_OFFSET))(a1);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode Initialize(::System::String* a1)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_INITIALIZE_OFFSET))(a1);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode Uninitialize()
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_UNINITIALIZE_OFFSET))();
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode UpdateConfig(::System::String* a1)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_UPDATECONFIG_OFFSET))(a1);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode AutoLogin()
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_AUTOLOGIN_OFFSET))();
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode LoginByAccount(::System::String* a1, ::System::String* a2, ::System::Boolean a3, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_LoginType a4)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::System::String*, ::System::String*, ::System::Boolean, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_LoginType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_LOGINBYACCOUNT_OFFSET))(a1, a2, a3, a4);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode LoginByAuthTicket(::System::String* a1, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_LoginType a2, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_AuthTicketLoginType a3, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_Region a4)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::System::String*, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_LoginType, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_AuthTicketLoginType, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_Region))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_LOGINBYAUTHTICKET_OFFSET))(a1, a2, a3, a4);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode LoginByGameToken(::System::String* a1, ::System::String* a2, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_LoginType a3)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::System::String*, ::System::String*, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_LoginType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_LOGINBYGAMETOKEN_OFFSET))(a1, a2, a3);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode StartThirdpartyOAuth(::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ThirdpartyLoginMethod a1, ::System::Action_2<::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode, ::System::String*>* a2)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ThirdpartyLoginMethod, ::System::Action_2<::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_STARTTHIRDPARTYOAUTH_OFFSET))(a1, a2);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode AbortThirdpartyOAuth(::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ThirdpartyLoginMethod a1)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ThirdpartyLoginMethod))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_ABORTTHIRDPARTYOAUTH_OFFSET))(a1);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode LoginByThirdparty(::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ThirdpartyLoginMethod a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ThirdpartyLoginMethod, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_LOGINBYTHIRDPARTY_OFFSET))(a1, a2, a3);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode AbortThirdpartyLogin()
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_ABORTTHIRDPARTYLOGIN_OFFSET))();
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode LoginByAccountList(::System::String* a1)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_LOGINBYACCOUNTLIST_OFFSET))(a1);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode SetAccountListCapacity(::System::UInt32 a1)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_SETACCOUNTLISTCAPACITY_OFFSET))(a1);
		}

		static ::System::UInt32 GetAccountListCapacity()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_GETACCOUNTLISTCAPACITY_OFFSET))();
		}

		static ::System::UInt32 GetAccountListCount()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_GETACCOUNTLISTCOUNT_OFFSET))();
		}

		static ::System::String* GetAccountList()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_GETACCOUNTLIST_OFFSET))();
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode DeleteAccount(::System::String* a1)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_DELETEACCOUNT_OFFSET))(a1);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode SetLifecycleId(::System::String* a1)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_SETLIFECYCLEID_OFFSET))(a1);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode ContinueRiskCheck(::System::String* a1)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_CONTINUERISKCHECK_OFFSET))(a1);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode AbortRiskCheck()
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_ABORTRISKCHECK_OFFSET))();
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode ContinueThirdpartyAccountBinding()
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_CONTINUETHIRDPARTYACCOUNTBINDING_OFFSET))();
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode AbortThirdpartyAccountBinding()
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_ABORTTHIRDPARTYACCOUNTBINDING_OFFSET))();
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode ContinueReactivation(::System::String* a1)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_CONTINUEREACTIVATION_OFFSET))(a1);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode AbortReactivation()
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_ABORTREACTIVATION_OFFSET))();
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode ContinueVerification(::System::String* a1)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_CONTINUEVERIFICATION_OFFSET))(a1);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode AbortVerification()
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_ABORTVERIFICATION_OFFSET))();
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode GetAgeGateStauts()
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_GETAGEGATESTAUTS_OFFSET))();
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode UpdateAgeGateUserData(::System::String* a1, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_AgeGateInfoType a2)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::System::String*, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_AgeGateInfoType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_UPDATEAGEGATEUSERDATA_OFFSET))(a1, a2);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode ContinueAgeGate()
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_CONTINUEAGEGATE_OFFSET))();
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode AbortAgeGate()
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_ABORTAGEGATE_OFFSET))();
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode Logout(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_LOGOUT_OFFSET))(a1, a2);
		}

		static ::System::String* GetRegisterAccountUrl()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_GETREGISTERACCOUNTURL_OFFSET))();
		}

		static ::System::String* GetForgotPasswordUrl()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_GETFORGOTPASSWORDURL_OFFSET))();
		}

		static ::System::String* GetThirdpartyAccountBindingUrl(::System::Boolean a1)
		{
			return ((::System::String*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_GETTHIRDPARTYACCOUNTBINDINGURL_OFFSET))(a1);
		}

		static ::System::String* GetSecurityVerificationUrl()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_GETSECURITYVERIFICATIONURL_OFFSET))();
		}

		static ::System::String* GetAgeGateVerificationUrl(::System::String* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_GETAGEGATEVERIFICATIONURL_OFFSET))(a1, a2);
		}

		static ::System::String* GetAgeAppealUrl(::System::String* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_GETAGEAPPEALURL_OFFSET))(a1, a2);
		}

		static ::System::String* GetEmailBindingUrl()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_GETEMAILBINDINGURL_OFFSET))();
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode UpdateCurrentAccountToken(::System::String* a1, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_TokenType a2)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::System::String*, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_TokenType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_UPDATECURRENTACCOUNTTOKEN_OFFSET))(a1, a2);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode UpdateCurrentAccountRegion(::System::String* a1)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_UPDATECURRENTACCOUNTREGION_OFFSET))(a1);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode MigrateAccounts(::System::String* a1)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_MIGRATEACCOUNTS_OFFSET))(a1);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode DeleteAllAccounts()
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_DELETEALLACCOUNTS_OFFSET))();
		}

		static ::System::String* GetUserCenterUrl(::System::Boolean a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_GETUSERCENTERURL_OFFSET))(a1, a2);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode ExchangeToken(::System::String* a1, ::System::String* a2, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_TokenType a3, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_TokenType a4, ::System::Action_2<::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode, ::System::String*>* a5)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::System::String*, ::System::String*, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_TokenType, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_TokenType, ::System::Action_2<::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_EXCHANGETOKEN_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode RefreshCurrentAccountInfo(::System::Action_2<::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode, ::System::String*>* a1)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::System::Action_2<::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_REFRESHCURRENTACCOUNTINFO_OFFSET))(a1);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode GetCrossTokenUrlBySToken(::System::String* a1, ::System::Action_2<::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode, ::System::String*>* a2)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::System::String*, ::System::Action_2<::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_GETCROSSTOKENURLBYSTOKEN_OFFSET))(a1, a2);
		}

		static ::System::Boolean NativeEventHandler(::MiHoYo::SDK::HoYoPass::HoYoPassSDK_EventId a1, ::Il2CppArray<::System::Byte>* a2, ::System::UInt64 a3, ::System::IntPtr a4)
		{
			return ((::System::Boolean(*)(::MiHoYo::SDK::HoYoPass::HoYoPassSDK_EventId, ::Il2CppArray<::System::Byte>*, ::System::UInt64, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_NATIVEEVENTHANDLER_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean NativeKibanaReportHandler(::Il2CppArray<::System::Byte>* a1, ::System::UInt64 a2)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Byte>*, ::System::UInt64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_NATIVEKIBANAREPORTHANDLER_OFFSET))(a1, a2);
		}

		static ::System::Boolean NativeGetRegionSwitchStatusHandler()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_NATIVEGETREGIONSWITCHSTATUSHANDLER_OFFSET))();
		}

		static ::System::Void NativeThirdpartyOAuthResultHandler(::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode a1, ::Il2CppArray<::System::Byte>* a2, ::System::UInt64 a3)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode, ::Il2CppArray<::System::Byte>*, ::System::UInt64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_NATIVETHIRDPARTYOAUTHRESULTHANDLER_OFFSET))(a1, a2, a3);
		}

		static ::System::Void NativeExchangeTokenResultHandler(::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode a1, ::Il2CppArray<::System::Byte>* a2, ::System::UInt64 a3)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode, ::Il2CppArray<::System::Byte>*, ::System::UInt64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_NATIVEEXCHANGETOKENRESULTHANDLER_OFFSET))(a1, a2, a3);
		}

		static ::System::Void NativeRefreshAccountInfoResultHandler(::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode a1, ::Il2CppArray<::System::Byte>* a2, ::System::UInt64 a3)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode, ::Il2CppArray<::System::Byte>*, ::System::UInt64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_NATIVEREFRESHACCOUNTINFORESULTHANDLER_OFFSET))(a1, a2, a3);
		}

		static ::System::Void NativeGetCrossTokenUrlBySTokenResultHandler(::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode a1, ::Il2CppArray<::System::Byte>* a2, ::System::UInt64 a3)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode, ::Il2CppArray<::System::Byte>*, ::System::UInt64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_NATIVEGETCROSSTOKENURLBYSTOKENRESULTHANDLER_OFFSET))(a1, a2, a3);
		}

		static ::Il2CppArray<::System::Byte>* ToUtf8(::System::String* a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_TOUTF8_OFFSET))(a1);
		}

		static ::System::String* FromUtf8(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_FROMUTF8_OFFSET))(a1);
		}
	};
}
