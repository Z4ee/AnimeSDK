#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/ChannelType.h"
#include "unitysdk/MiHoYo/SDK/ClientType.h"
#include "unitysdk/MiHoYo/SDK/PS_IssuerID.h"
#include "unitysdk/MiHoYo/SDK/SubChannelType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::UI { class InputField; }

#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_ADDINPUTFIELD_OFFSET UNITYSDK_OFFSET(0x18244280)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_ALL_SET_DEVICE_ID_OFFSET UNITYSDK_OFFSET(0x18248620)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_ALL_SET_ENV_AND_GAMEBIZ_OFFSET UNITYSDK_OFFSET(0x18245430)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_ALL_SET_ENV_OFFSET UNITYSDK_OFFSET(0x18245330)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_ALL_SET_LANGUAGE_OFFSET UNITYSDK_OFFSET(0x182486D0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_AWAKE_OFFSET UNITYSDK_OFFSET(0x18243D50)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CAMERA_SET_UI_CAMERA_OFFSET UNITYSDK_OFFSET(0x18249130)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CHECKINIT_OFFSET UNITYSDK_OFFSET(0x182459D0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_ACHIEVEMENT_DESTORY_OFFSET UNITYSDK_OFFSET(0x1824A8D0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_ACHIEVEMENT_INIT_OFFSET UNITYSDK_OFFSET(0x1824A8A0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_CHECK_PERMISSION_OFFSET UNITYSDK_OFFSET(0x1824A870)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_CHECK_PRIVILEGE_OFFSET UNITYSDK_OFFSET(0x1824A7E0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_CREATE_MATCH_OFFSET UNITYSDK_OFFSET(0x1824AA20)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_CREATE_SESSION_OFFSET UNITYSDK_OFFSET(0x1824A5B0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_GET_ACCOUNT_COUNTRY_OFFSET UNITYSDK_OFFSET(0x18245E80)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_GET_ACCOUNT_ID_OFFSET UNITYSDK_OFFSET(0x18245E00)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_GET_ACHIEVEMENTS_OFFSET UNITYSDK_OFFSET(0x1824A930)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_GET_ACTIVITIES_OFFSET UNITYSDK_OFFSET(0x1824A6C0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_GET_BLOCK_LIST_OFFSET UNITYSDK_OFFSET(0x1824A370)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_GET_CURRENT_SESSION_ID_OFFSET UNITYSDK_OFFSET(0x1824A960)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_GET_FRIEND_LIST_OFFSET UNITYSDK_OFFSET(0x1824A2A0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_GET_LEADERBOARDS_OFFSET UNITYSDK_OFFSET(0x1824A7B0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_GET_MATCH_DETAIL_OFFSET UNITYSDK_OFFSET(0x1824AA50)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_GET_ONLINE_ID_OFFSET UNITYSDK_OFFSET(0x18245E50)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_GET_PLAYER_SESSION_INFO_OFFSET UNITYSDK_OFFSET(0x1824A9F0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_GET_SANDBOX_ID_OFFSET UNITYSDK_OFFSET(0x18245EB0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_GET_SESSION_LEADER_ACCOUNT_ID_OFFSET UNITYSDK_OFFSET(0x1824A990)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_GET_STATISTICS_OFFSET UNITYSDK_OFFSET(0x1824A780)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_GET_USER_PROFILE_OFFSET UNITYSDK_OFFSET(0x18245EE0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_HAS_JOIN_SESSION_OFFSET UNITYSDK_OFFSET(0x1824A670)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_JOIN_MATCH_OFFSET UNITYSDK_OFFSET(0x1824AAE0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_JOIN_SESSION_OFFSET UNITYSDK_OFFSET(0x1824A610)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_LEAVE_MATCH_OFFSET UNITYSDK_OFFSET(0x1824AB10)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_LEAVE_SESSION_OFFSET UNITYSDK_OFFSET(0x1824A640)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_REGISTER_RECEIVE_INVITE_OFFSET UNITYSDK_OFFSET(0x1824A720)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_REPORT_MATCH_RESULTS_OFFSET UNITYSDK_OFFSET(0x1824AB40)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_RESOLVE_PRIVILEGE_OFFSET UNITYSDK_OFFSET(0x1824A840)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_SEND_SESSION_INVITE_OFFSET UNITYSDK_OFFSET(0x1824A520)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_SESSION_DESTORY_OFFSET UNITYSDK_OFFSET(0x1824A580)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_SESSION_INIT_OFFSET UNITYSDK_OFFSET(0x1824A550)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_SET_SESSION_OFFSET UNITYSDK_OFFSET(0x1824A5E0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_SHOW_ERROR_DIALOG_OFFSET UNITYSDK_OFFSET(0x1824A4C0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_SHOW_MESSAGE_DIALOG_OFFSET UNITYSDK_OFFSET(0x1824A490)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_SHOW_PROFILE_CARD_OFFSET UNITYSDK_OFFSET(0x1824A460)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_SHOW_SESSION_INVITE_OFFSET UNITYSDK_OFFSET(0x1824A4F0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_SWITCH_CONTROL_OFFSET UNITYSDK_OFFSET(0x1824AB70)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_UPDATE_ACHIEVEMENT_OFFSET UNITYSDK_OFFSET(0x1824A900)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_UPDATE_MATCH_DETAIL_OFFSET UNITYSDK_OFFSET(0x1824AA80)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_UPDATE_MATCH_STATUS_OFFSET UNITYSDK_OFFSET(0x1824AAB0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_UPDATE_RECENT_PLAYERS_OFFSET UNITYSDK_OFFSET(0x1824A6F0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_UPDATE_STATISTICS_OFFSET UNITYSDK_OFFSET(0x1824A750)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_GETINITSTATUS_OFFSET UNITYSDK_OFFSET(0x1821D8F0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_GET_ACCOUNT_ID_BY_ONLINE_ID_OFFSET UNITYSDK_OFFSET(0x18249800)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_GET_ONLINE_ID_LIST_BY_ACCOUNT_ID_LIST_OFFSET UNITYSDK_OFFSET(0x18249840)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_GET_PS_ACCOUNT_COUNTRY_OFFSET UNITYSDK_OFFSET(0x18249560)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_GET_PS_ACCOUNT_ID_OFFSET UNITYSDK_OFFSET(0x182494E0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_GET_PS_BLOCK_LIST_OFFSET UNITYSDK_OFFSET(0x182498C0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_GET_PS_FRIEND_LIST_OFFSET UNITYSDK_OFFSET(0x18249880)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_GET_PS_ONLINE_ID_OFFSET UNITYSDK_OFFSET(0x18249530)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_GET_PS_USER_ID_OFFSET UNITYSDK_OFFSET(0x18249490)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_HIDE_PS_STORE_ICON_OFFSET UNITYSDK_OFFSET(0x182495D0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_INFO_GET_CHANNEL_ID_OFFSET UNITYSDK_OFFSET(0x18245D40)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_INFO_GET_CPS_OFFSET UNITYSDK_OFFSET(0x182490A0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_INFO_GET_DEVICE_ID_OFFSET UNITYSDK_OFFSET(0x18245CF0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_INFO_GET_REGION_MULTIPLE_LANGUAGE_OFFSET UNITYSDK_OFFSET(0x18245DA0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_INFO_GET_SUB_CHANNEL_ID_OFFSET UNITYSDK_OFFSET(0x18248850)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_INFO_SET_GAME_PARAMETERS_OFFSET UNITYSDK_OFFSET(0x182488C0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_INFO_SET_GAME_VERSION_OFFSET UNITYSDK_OFFSET(0x18248FC0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_INIT_OFFSET UNITYSDK_OFFSET(0x18244B10)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_INIT_PS_TROPHY_OFFSET UNITYSDK_OFFSET(0x182496D0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_INNER_SDK_INNER_GET_LANG_OFFSET UNITYSDK_OFFSET(0x1824B890)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_INNER_SDK_INNER_REPORT_EVENT_OFFSET UNITYSDK_OFFSET(0x1824B2C0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LAUNCH_CLOSE_ALL_UI_OFFSET UNITYSDK_OFFSET(0x18249380)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LAUNCH_ENABLE_AUTO_TEST_OFFSET UNITYSDK_OFFSET(0x182490B0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LAUNCH_OPEN_URL_OFFSET UNITYSDK_OFFSET(0x18245FA0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_CREATE_ROLE_OFFSET UNITYSDK_OFFSET(0x182484C0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_ENTER_GAME_OFFSET UNITYSDK_OFFSET(0x18247C50)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_GET_ACCOUNT_NAME_OFFSET UNITYSDK_OFFSET(0x18245C70)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_GET_ASTERISK_NAME_OFFSET UNITYSDK_OFFSET(0x18245C80)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_GET_BIND_STATE_OFFSET UNITYSDK_OFFSET(0x18248EE0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_GET_PRICE_TIER_OFFSET UNITYSDK_OFFSET(0x18248380)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_GET_PRODUCT_LIST_OFFSET UNITYSDK_OFFSET(0x182483C0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_HAS_CUSTOMER_SERVICE_OFFSET UNITYSDK_OFFSET(0x18248600)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_HAS_FORUM_OFFSET UNITYSDK_OFFSET(0x182485C0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_HAS_SCAN_FUNC_OFFSET UNITYSDK_OFFSET(0x18248D90)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_HAS_USER_CENTER_OFFSET UNITYSDK_OFFSET(0x18248CD0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_IS_ACCOUNT_BIND_MOBILE_OFFSET UNITYSDK_OFFSET(0x18248DB0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_IS_ACCOUNT_REAL_NAME_OFFSET UNITYSDK_OFFSET(0x18248E40)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_LEVEL_UP_OFFSET UNITYSDK_OFFSET(0x182484D0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_LIST_GOODS_OFFSET UNITYSDK_OFFSET(0x18248310)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_LOGIN_OFFSET UNITYSDK_OFFSET(0x182457F0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_LOGOUT_OFFSET UNITYSDK_OFFSET(0x18245AE0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_LOGOUT_WITHOUT_CONFIRM_OFFSET UNITYSDK_OFFSET(0x18245B60)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_OPEN_FORUM_OFFSET UNITYSDK_OFFSET(0x182485E0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_OPEN_PROTOCOL_WEBVIEW_OFFSET UNITYSDK_OFFSET(0x18245F70)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_OPEN_URL_WITH_LOGIN_STATUS_OFFSET UNITYSDK_OFFSET(0x18246110)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_OPEN_USER_CENTER_OFFSET UNITYSDK_OFFSET(0x18248D60)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_PAY_OFFSET UNITYSDK_OFFSET(0x18248740)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_SET_ACCOUNT_OFFSET UNITYSDK_OFFSET(0x18248F60)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_SET_SERVER_ID_OFFSET UNITYSDK_OFFSET(0x182473B0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_SHOW_PRIVACY_PROTOCOL_OFFSET UNITYSDK_OFFSET(0x18245F40)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_SHOW_USER_AGREEMENT_OFFSET UNITYSDK_OFFSET(0x18245F10)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_SWITCH_ROLE_OFFSET UNITYSDK_OFFSET(0x18245BE0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_WILL_ENTER_GAME_OFFSET UNITYSDK_OFFSET(0x18247AC0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_NOTICE_SET_NOTICE_URL_OFFSET UNITYSDK_OFFSET(0x18248C20)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_NOTICE_SHOW_NOTICE_OFFSET UNITYSDK_OFFSET(0x182469B0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_NOTICE_SHOW_POP_IMAGE_OFFSET UNITYSDK_OFFSET(0x18248A00)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_NOTICE_SHOW_POP_NOTICE_OFFSET UNITYSDK_OFFSET(0x18247250)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_ONNOTIFICATIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x18244250)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_ACTIVITY_CHANGE_AVAILABILITY_LIST_OFFSET UNITYSDK_OFFSET(0x18249BA0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_ACTIVITY_CHANGE_AVAILABILITY_OFFSET UNITYSDK_OFFSET(0x18249B50)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_ACTIVITY_END_OFFSET UNITYSDK_OFFSET(0x18249AB0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_ACTIVITY_MANAGER_DESTORY_OFFSET UNITYSDK_OFFSET(0x18249A30)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_ACTIVITY_MANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x182499E0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_ACTIVITY_RESUME_OFFSET UNITYSDK_OFFSET(0x18249BF0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_ACTIVITY_START_OFFSET UNITYSDK_OFFSET(0x18249A60)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_ACTIVITY_TERMINATE_OFFSET UNITYSDK_OFFSET(0x18249B00)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_DIALOG_OPEN_PLAYGO_DIALOG_OFFSET UNITYSDK_OFFSET(0x1824A270)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_DLC_PAY_OFFSET UNITYSDK_OFFSET(0x18249F10)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_GAMEINTENT_DESTORY_OFFSET UNITYSDK_OFFSET(0x18249C90)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_GAMEINTENT_INIT_OFFSET UNITYSDK_OFFSET(0x18249C40)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_GET_COMMUNICATION_RESTRICTION_STATUS_OFFSET UNITYSDK_OFFSET(0x18249FE0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_HAS_PREMIUM_OFFSET UNITYSDK_OFFSET(0x18249DA0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_NOTIFY_PREMIUM_FEATURE_OFFSET UNITYSDK_OFFSET(0x18249FA0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_PLAYGO_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1824A0E0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_PLAYGO_GET_CHUNK_INFO_OFFSET UNITYSDK_OFFSET(0x1824A130)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_PLAYGO_GET_CHUNK_LOCUS_OFFSET UNITYSDK_OFFSET(0x1824A170)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_PLAYGO_GET_CHUNK_PROGRESS_SIZE_OFFSET UNITYSDK_OFFSET(0x1824A200)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_PLAYGO_GET_CHUNK_TOTAL_SIZE_OFFSET UNITYSDK_OFFSET(0x1824A1C0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_PLAYGO_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1824A090)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_PLAYGO_SET_LANGUAGE_MASK_OFFSET UNITYSDK_OFFSET(0x1824A240)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_PREMIUM_PAY_OFFSET UNITYSDK_OFFSET(0x18249DF0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_REGISTER_GAMEINTENT_GET_ACTIVITY_ID_OFFSET UNITYSDK_OFFSET(0x18249CC0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_REGISTER_GAMEINTENT_GET_SESSION_ID_OFFSET UNITYSDK_OFFSET(0x18249D00)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_REGISTER_NP_STATE_OFFSET UNITYSDK_OFFSET(0x1824A020)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_UNREGISTER_GAMEINTENT_GET_ACTIVITY_ID_OFFSET UNITYSDK_OFFSET(0x18249D40)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_UNREGISTER_GAMEINTENT_GET_SESSION_ID_OFFSET UNITYSDK_OFFSET(0x18249D70)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_UNREGISTER_NP_STATE_OFFSET UNITYSDK_OFFSET(0x1824A060)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_REGISTER_CONSOLE_BLOCK_UPDATE_OFFSET UNITYSDK_OFFSET(0x1824A3D0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_REGISTER_CONSOLE_FRIEND_UPDATE_OFFSET UNITYSDK_OFFSET(0x1824A3A0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_REGISTER_PS_BLOCK_UPDATE_OFFSET UNITYSDK_OFFSET(0x18249940)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_REGISTER_PS_FRIEND_UPDATE_OFFSET UNITYSDK_OFFSET(0x18249900)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_REPORT_SET_INFO_OFFSET UNITYSDK_OFFSET(0x182487D0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_SDKINVOKE_OFFSET UNITYSDK_OFFSET(0x182442B0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_SET_PS_CLIENT_ID_OFFSET UNITYSDK_OFFSET(0x18249450)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_SET_PS_TROPHY_OFFSET UNITYSDK_OFFSET(0x18249600)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_SHOW_EMPTY_STORE_DIALOG_OFFSET UNITYSDK_OFFSET(0x18249780)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_SHOW_PS_STORE_ICON_OFFSET UNITYSDK_OFFSET(0x18249590)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_SHOW_SYSTEM_MESSAGE_DIALOG_OFFSET UNITYSDK_OFFSET(0x182497C0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_UGC_SET_TOKEN_OFFSET UNITYSDK_OFFSET(0x182491D0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_UGC_SHOW_BBS_AGREEMENT_OFFSET UNITYSDK_OFFSET(0x182492F0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_UNREGISTER_CONSOLE_BLOCK_UPDATE_OFFSET UNITYSDK_OFFSET(0x1824A430)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_UNREGISTER_CONSOLE_FRIEND_UPDATE_OFFSET UNITYSDK_OFFSET(0x1824A400)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_UNREGISTER_PS_BLOCK_UPDATE_OFFSET UNITYSDK_OFFSET(0x182499B0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_UNREGISTER_PS_FRIEND_UPDATE_OFFSET UNITYSDK_OFFSET(0x18249980)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_UPDATE_OFFSET UNITYSDK_OFFSET(0x18243E00)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_WATERMARK_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x18248460)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_WATERMARK_SET_ENABLE_OFFSET UNITYSDK_OFFSET(0x18248400)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1824B940)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL__CTOR_OFFSET UNITYSDK_OFFSET(0x1824B930)

namespace MiHoYo::SDK::Console
{
	inline static constexpr unsigned int MiHoYoSDKDll_TypeDefinitionIndex = 8610;

	class MiHoYoSDKDll : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::Il2CppArray<::System::Object*>** StaticGet_parameters2()
		{
			return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0xDD30);
		}
		static ::Il2CppArray<::System::Object*>** StaticGet_parameters0()
		{
			return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0xDD38);
		}
		static ::Il2CppArray<::System::Object*>** StaticGet_parameters1()
		{
			return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0xDD40);
		}
		static ::System::Type** StaticGet_miHoYoDll()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0xDD48);
		}
		static ::MiHoYo::SDK::ChannelType* StaticGet_channel()
		{
			return (::MiHoYo::SDK::ChannelType*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x4A00);
		}
		static ::System::Int32* StaticGet_trophyContext()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x4A04);
		}
		static ::System::Boolean* StaticGet_isInit()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x4A08);
		}
		static ::System::Boolean* StaticGet_isSetEnv()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x4A09);
		}
		static ::System::Boolean* StaticGet_isBackground()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x4A0A);
		}
		static ::MiHoYo::SDK::ClientType* StaticGet_clientType()
		{
			return (::MiHoYo::SDK::ClientType*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x4A0C);
		}
		static ::MiHoYo::SDK::PS_IssuerID* StaticGet_issuerId()
		{
			return (::MiHoYo::SDK::PS_IssuerID*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x4A10);
		}
		static ::MiHoYo::SDK::SubChannelType* StaticGet_subChannel()
		{
			return (::MiHoYo::SDK::SubChannelType*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x4A14);
		}
		::System::Boolean isAppBackground; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL__CCTOR_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_AWAKE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_UPDATE_OFFSET))(this);
		}

		::System::Void OnNotificationCallback(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_ONNOTIFICATIONCALLBACK_OFFSET))(this, a1);
		}

		::System::Void AddInputField(::UnityEngine::UI::InputField* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::InputField*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_ADDINPUTFIELD_OFFSET))(this, a1);
		}

		static ::System::String* SDKInvoke(::System::String* a1, ::System::String* a2, ::System::Action_1<::System::String*>* a3)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_SDKINVOKE_OFFSET))(a1, a2, a3);
		}

		static ::System::Void Init(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_INIT_OFFSET))(a1);
		}

		static ::System::Boolean GetInitStatus()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_GETINITSTATUS_OFFSET))();
		}

		static ::System::String* all_set_env(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_ALL_SET_ENV_OFFSET))(a1);
		}

		static ::System::String* all_set_env_and_gamebiz(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_ALL_SET_ENV_AND_GAMEBIZ_OFFSET))(a1);
		}

		static ::System::String* login_login(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_LOGIN_OFFSET))(a1);
		}

		static ::System::String* login_logout(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_LOGOUT_OFFSET))(a1);
		}

		static ::System::String* login_logout_without_confirm(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_LOGOUT_WITHOUT_CONFIRM_OFFSET))(a1);
		}

		static ::System::String* login_switch_role(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_SWITCH_ROLE_OFFSET))(a1);
		}

		static ::System::String* login_get_account_name()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_GET_ACCOUNT_NAME_OFFSET))();
		}

		static ::System::String* login_get_asterisk_name()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_GET_ASTERISK_NAME_OFFSET))();
		}

		static ::System::String* info_get_device_id()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_INFO_GET_DEVICE_ID_OFFSET))();
		}

		static ::System::String* info_get_channel_id()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_INFO_GET_CHANNEL_ID_OFFSET))();
		}

		static ::System::String* info_get_region_multiple_language(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_INFO_GET_REGION_MULTIPLE_LANGUAGE_OFFSET))(a1);
		}

		static ::System::String* console_get_account_id()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_GET_ACCOUNT_ID_OFFSET))();
		}

		static ::System::String* console_get_online_id()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_GET_ONLINE_ID_OFFSET))();
		}

		static ::System::String* console_get_account_country()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_GET_ACCOUNT_COUNTRY_OFFSET))();
		}

		static ::System::String* console_get_sandbox_id()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_GET_SANDBOX_ID_OFFSET))();
		}

		static ::System::String* console_get_user_profile(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_GET_USER_PROFILE_OFFSET))(a1, a2);
		}

		static ::System::String* login_show_user_agreement()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_SHOW_USER_AGREEMENT_OFFSET))();
		}

		static ::System::String* login_show_privacy_protocol()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_SHOW_PRIVACY_PROTOCOL_OFFSET))();
		}

		static ::System::String* login_open_protocol_webview(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_OPEN_PROTOCOL_WEBVIEW_OFFSET))(a1);
		}

		static ::System::String* launch_open_url(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LAUNCH_OPEN_URL_OFFSET))(a1);
		}

		static ::System::String* login_open_url_with_login_status(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_OPEN_URL_WITH_LOGIN_STATUS_OFFSET))(a1);
		}

		static ::System::String* notice_show_notice(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_NOTICE_SHOW_NOTICE_OFFSET))(a1);
		}

		static ::System::String* notice_show_pop_notice()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_NOTICE_SHOW_POP_NOTICE_OFFSET))();
		}

		static ::System::String* login_set_server_id(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_SET_SERVER_ID_OFFSET))(a1);
		}

		static ::System::String* login_will_enter_game(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_WILL_ENTER_GAME_OFFSET))(a1, a2);
		}

		static ::System::String* login_enter_game(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_ENTER_GAME_OFFSET))(a1);
		}

		static ::System::String* login_list_goods(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_LIST_GOODS_OFFSET))(a1, a2);
		}

		static ::System::String* login_get_price_tier(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_GET_PRICE_TIER_OFFSET))(a1, a2);
		}

		static ::System::String* login_get_product_list(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_GET_PRODUCT_LIST_OFFSET))(a1, a2);
		}

		static ::System::String* watermark_set_enable(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_WATERMARK_SET_ENABLE_OFFSET))(a1);
		}

		static ::System::String* watermark_set_config(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_WATERMARK_SET_CONFIG_OFFSET))(a1);
		}

		static ::System::String* login_create_role(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_CREATE_ROLE_OFFSET))(a1);
		}

		static ::System::String* login_level_up(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_LEVEL_UP_OFFSET))(a1);
		}

		static ::System::String* login_has_forum()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_HAS_FORUM_OFFSET))();
		}

		static ::System::String* login_open_forum()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_OPEN_FORUM_OFFSET))();
		}

		static ::System::String* login_has_customer_service()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_HAS_CUSTOMER_SERVICE_OFFSET))();
		}

		static ::System::String* all_set_device_id(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_ALL_SET_DEVICE_ID_OFFSET))(a1);
		}

		static ::System::String* all_set_language(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_ALL_SET_LANGUAGE_OFFSET))(a1);
		}

		static ::System::String* login_pay(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_PAY_OFFSET))(a1, a2);
		}

		static ::System::String* report_set_info(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_REPORT_SET_INFO_OFFSET))(a1);
		}

		static ::System::String* info_get_sub_channel_id()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_INFO_GET_SUB_CHANNEL_ID_OFFSET))();
		}

		static ::System::String* info_set_game_parameters(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_INFO_SET_GAME_PARAMETERS_OFFSET))(a1);
		}

		static ::System::String* notice_show_pop_image(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_NOTICE_SHOW_POP_IMAGE_OFFSET))(a1);
		}

		static ::System::String* notice_set_notice_url(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_NOTICE_SET_NOTICE_URL_OFFSET))(a1);
		}

		static ::System::String* login_has_user_center()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_HAS_USER_CENTER_OFFSET))();
		}

		static ::System::String* login_open_user_center()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_OPEN_USER_CENTER_OFFSET))();
		}

		static ::System::String* login_has_scan_func()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_HAS_SCAN_FUNC_OFFSET))();
		}

		static ::System::String* login_is_account_bind_mobile()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_IS_ACCOUNT_BIND_MOBILE_OFFSET))();
		}

		static ::System::String* login_is_account_real_name()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_IS_ACCOUNT_REAL_NAME_OFFSET))();
		}

		static ::System::String* login_get_bind_state()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_GET_BIND_STATE_OFFSET))();
		}

		static ::System::String* login_set_account(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_SET_ACCOUNT_OFFSET))(a1);
		}

		static ::System::String* info_set_game_version(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_INFO_SET_GAME_VERSION_OFFSET))(a1);
		}

		static ::System::String* info_get_cps()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_INFO_GET_CPS_OFFSET))();
		}

		static ::System::String* launch_enable_auto_test(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LAUNCH_ENABLE_AUTO_TEST_OFFSET))(a1);
		}

		static ::System::String* camera_set_ui_camera(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CAMERA_SET_UI_CAMERA_OFFSET))(a1);
		}

		static ::System::String* ugc_set_token(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_UGC_SET_TOKEN_OFFSET))(a1);
		}

		static ::System::String* ugc_show_bbs_agreement(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_UGC_SHOW_BBS_AGREEMENT_OFFSET))(a1, a2);
		}

		static ::System::String* launch_close_all_ui()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LAUNCH_CLOSE_ALL_UI_OFFSET))();
		}

		static ::System::String* set_ps_client_id(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_SET_PS_CLIENT_ID_OFFSET))(a1);
		}

		static ::System::String* get_ps_user_id()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_GET_PS_USER_ID_OFFSET))();
		}

		static ::System::String* get_ps_account_id()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_GET_PS_ACCOUNT_ID_OFFSET))();
		}

		static ::System::String* get_ps_online_id()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_GET_PS_ONLINE_ID_OFFSET))();
		}

		static ::System::String* get_ps_account_country()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_GET_PS_ACCOUNT_COUNTRY_OFFSET))();
		}

		static ::System::String* show_ps_store_icon(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_SHOW_PS_STORE_ICON_OFFSET))(a1);
		}

		static ::System::String* hide_ps_store_icon()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_HIDE_PS_STORE_ICON_OFFSET))();
		}

		static ::System::String* set_ps_trophy(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_SET_PS_TROPHY_OFFSET))(a1);
		}

		static ::System::String* init_ps_trophy()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_INIT_PS_TROPHY_OFFSET))();
		}

		static ::System::String* show_empty_store_dialog(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_SHOW_EMPTY_STORE_DIALOG_OFFSET))(a1);
		}

		static ::System::String* show_system_message_dialog(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_SHOW_SYSTEM_MESSAGE_DIALOG_OFFSET))(a1, a2);
		}

		static ::System::String* get_account_id_by_online_id(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_GET_ACCOUNT_ID_BY_ONLINE_ID_OFFSET))(a1, a2);
		}

		static ::System::String* get_online_id_list_by_account_id_list(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_GET_ONLINE_ID_LIST_BY_ACCOUNT_ID_LIST_OFFSET))(a1, a2);
		}

		static ::System::String* get_ps_friend_list(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_GET_PS_FRIEND_LIST_OFFSET))(a1);
		}

		static ::System::String* get_ps_block_list(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_GET_PS_BLOCK_LIST_OFFSET))(a1);
		}

		static ::System::String* register_ps_friend_update(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_REGISTER_PS_FRIEND_UPDATE_OFFSET))(a1);
		}

		static ::System::String* register_ps_block_update(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_REGISTER_PS_BLOCK_UPDATE_OFFSET))(a1);
		}

		static ::System::String* unregister_ps_friend_update()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_UNREGISTER_PS_FRIEND_UPDATE_OFFSET))();
		}

		static ::System::String* unregister_ps_block_update()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_UNREGISTER_PS_BLOCK_UPDATE_OFFSET))();
		}

		static ::System::String* ps_activity_manager_init()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_ACTIVITY_MANAGER_INIT_OFFSET))();
		}

		static ::System::String* ps_activity_manager_destory()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_ACTIVITY_MANAGER_DESTORY_OFFSET))();
		}

		static ::System::String* ps_activity_start(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_ACTIVITY_START_OFFSET))(a1);
		}

		static ::System::String* ps_activity_end(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_ACTIVITY_END_OFFSET))(a1);
		}

		static ::System::String* ps_activity_terminate()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_ACTIVITY_TERMINATE_OFFSET))();
		}

		static ::System::String* ps_activity_change_availability(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_ACTIVITY_CHANGE_AVAILABILITY_OFFSET))(a1);
		}

		static ::System::String* ps_activity_change_availability_list(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_ACTIVITY_CHANGE_AVAILABILITY_LIST_OFFSET))(a1);
		}

		static ::System::String* ps_activity_resume(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_ACTIVITY_RESUME_OFFSET))(a1);
		}

		static ::System::String* ps_gameintent_init()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_GAMEINTENT_INIT_OFFSET))();
		}

		static ::System::String* ps_gameintent_destory()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_GAMEINTENT_DESTORY_OFFSET))();
		}

		static ::System::String* ps_register_gameintent_get_activity_id(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_REGISTER_GAMEINTENT_GET_ACTIVITY_ID_OFFSET))(a1);
		}

		static ::System::String* ps_register_gameintent_get_session_id(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_REGISTER_GAMEINTENT_GET_SESSION_ID_OFFSET))(a1);
		}

		static ::System::String* ps_unregister_gameintent_get_activity_id()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_UNREGISTER_GAMEINTENT_GET_ACTIVITY_ID_OFFSET))();
		}

		static ::System::String* ps_unregister_gameintent_get_session_id()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_UNREGISTER_GAMEINTENT_GET_SESSION_ID_OFFSET))();
		}

		static ::System::String* ps_has_premium()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_HAS_PREMIUM_OFFSET))();
		}

		static ::System::String* ps_premium_pay(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_PREMIUM_PAY_OFFSET))(a1);
		}

		static ::System::String* ps_dlc_pay(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_DLC_PAY_OFFSET))(a1, a2);
		}

		static ::System::String* ps_notify_premium_feature(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_NOTIFY_PREMIUM_FEATURE_OFFSET))(a1);
		}

		static ::System::String* ps_get_communication_restriction_status(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_GET_COMMUNICATION_RESTRICTION_STATUS_OFFSET))(a1);
		}

		static ::System::String* ps_register_np_state(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_REGISTER_NP_STATE_OFFSET))(a1);
		}

		static ::System::String* ps_unregister_np_state()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_UNREGISTER_NP_STATE_OFFSET))();
		}

		static ::System::String* ps_playgo_initialize()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_PLAYGO_INITIALIZE_OFFSET))();
		}

		static ::System::String* ps_playgo_finalize()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_PLAYGO_FINALIZE_OFFSET))();
		}

		static ::System::String* ps_playgo_get_chunk_info(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_PLAYGO_GET_CHUNK_INFO_OFFSET))(a1);
		}

		static ::System::String* ps_playgo_get_chunk_locus(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_PLAYGO_GET_CHUNK_LOCUS_OFFSET))(a1);
		}

		static ::System::String* ps_playgo_get_chunk_total_size(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_PLAYGO_GET_CHUNK_TOTAL_SIZE_OFFSET))(a1);
		}

		static ::System::String* ps_playgo_get_chunk_progress_size(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_PLAYGO_GET_CHUNK_PROGRESS_SIZE_OFFSET))(a1);
		}

		static ::System::String* ps_playgo_set_language_mask(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_PLAYGO_SET_LANGUAGE_MASK_OFFSET))(a1);
		}

		static ::System::String* ps_dialog_open_playgo_dialog(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_DIALOG_OPEN_PLAYGO_DIALOG_OFFSET))(a1, a2);
		}

		static ::System::String* console_get_friend_list(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_GET_FRIEND_LIST_OFFSET))(a1);
		}

		static ::System::String* console_get_block_list(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_GET_BLOCK_LIST_OFFSET))(a1);
		}

		static ::System::String* register_console_friend_update(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_REGISTER_CONSOLE_FRIEND_UPDATE_OFFSET))(a1);
		}

		static ::System::String* register_console_block_update(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_REGISTER_CONSOLE_BLOCK_UPDATE_OFFSET))(a1);
		}

		static ::System::String* unregister_console_friend_update()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_UNREGISTER_CONSOLE_FRIEND_UPDATE_OFFSET))();
		}

		static ::System::String* unregister_console_block_update()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_UNREGISTER_CONSOLE_BLOCK_UPDATE_OFFSET))();
		}

		static ::System::String* console_show_profile_card(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_SHOW_PROFILE_CARD_OFFSET))(a1, a2);
		}

		static ::System::String* console_show_message_dialog(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_SHOW_MESSAGE_DIALOG_OFFSET))(a1, a2);
		}

		static ::System::String* console_show_error_dialog(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_SHOW_ERROR_DIALOG_OFFSET))(a1, a2);
		}

		static ::System::String* console_show_session_invite(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_SHOW_SESSION_INVITE_OFFSET))(a1);
		}

		static ::System::String* console_send_session_invite(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_SEND_SESSION_INVITE_OFFSET))(a1, a2);
		}

		static ::System::String* console_session_init()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_SESSION_INIT_OFFSET))();
		}

		static ::System::String* console_session_destory()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_SESSION_DESTORY_OFFSET))();
		}

		static ::System::String* console_create_session(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_CREATE_SESSION_OFFSET))(a1, a2);
		}

		static ::System::String* console_set_session(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_SET_SESSION_OFFSET))(a1, a2);
		}

		static ::System::String* console_join_session(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_JOIN_SESSION_OFFSET))(a1, a2);
		}

		static ::System::String* console_leave_session(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_LEAVE_SESSION_OFFSET))(a1);
		}

		static ::System::String* console_has_join_session()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_HAS_JOIN_SESSION_OFFSET))();
		}

		static ::System::String* console_get_activities(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_GET_ACTIVITIES_OFFSET))(a1, a2);
		}

		static ::System::String* console_update_recent_players(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_UPDATE_RECENT_PLAYERS_OFFSET))(a1);
		}

		static ::System::String* console_register_receive_invite(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_REGISTER_RECEIVE_INVITE_OFFSET))(a1);
		}

		static ::System::String* console_update_statistics(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_UPDATE_STATISTICS_OFFSET))(a1);
		}

		static ::System::String* console_get_statistics(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_GET_STATISTICS_OFFSET))(a1, a2);
		}

		static ::System::String* console_get_leaderboards(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_GET_LEADERBOARDS_OFFSET))(a1, a2);
		}

		static ::System::String* console_check_privilege(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_CHECK_PRIVILEGE_OFFSET))(a1);
		}

		static ::System::String* console_resolve_privilege(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_RESOLVE_PRIVILEGE_OFFSET))(a1, a2);
		}

		static ::System::String* console_check_permission(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_CHECK_PERMISSION_OFFSET))(a1, a2);
		}

		static ::System::String* console_achievement_init()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_ACHIEVEMENT_INIT_OFFSET))();
		}

		static ::System::String* console_achievement_destory()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_ACHIEVEMENT_DESTORY_OFFSET))();
		}

		static ::System::String* console_update_achievement(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_UPDATE_ACHIEVEMENT_OFFSET))(a1);
		}

		static ::System::String* console_get_achievements(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_GET_ACHIEVEMENTS_OFFSET))(a1);
		}

		static ::System::String* console_get_current_session_id()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_GET_CURRENT_SESSION_ID_OFFSET))();
		}

		static ::System::String* console_get_session_leader_account_id()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_GET_SESSION_LEADER_ACCOUNT_ID_OFFSET))();
		}

		static ::System::String* console_get_player_session_info(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_GET_PLAYER_SESSION_INFO_OFFSET))(a1, a2);
		}

		static ::System::String* console_create_match(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_CREATE_MATCH_OFFSET))(a1, a2);
		}

		static ::System::String* console_get_match_detail(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_GET_MATCH_DETAIL_OFFSET))(a1, a2);
		}

		static ::System::String* console_update_match_detail(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_UPDATE_MATCH_DETAIL_OFFSET))(a1, a2);
		}

		static ::System::String* console_update_match_status(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_UPDATE_MATCH_STATUS_OFFSET))(a1, a2);
		}

		static ::System::String* console_join_match(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_JOIN_MATCH_OFFSET))(a1, a2);
		}

		static ::System::String* console_leave_match(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_LEAVE_MATCH_OFFSET))(a1, a2);
		}

		static ::System::String* console_report_match_results(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_REPORT_MATCH_RESULTS_OFFSET))(a1, a2);
		}

		static ::System::Void console_switch_control(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_SWITCH_CONTROL_OFFSET))(a1, a2);
		}

		static ::System::Void inner_sdk_inner_report_event(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_INNER_SDK_INNER_REPORT_EVENT_OFFSET))(a1);
		}

		static ::System::String* inner_sdk_inner_get_lang(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_INNER_SDK_INNER_GET_LANG_OFFSET))(a1);
		}

		static ::System::Boolean CheckInit()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CHECKINIT_OFFSET))();
		}
	};
}
