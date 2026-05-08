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

#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_ADDINPUTFIELD_OFFSET UNITYSDK_OFFSET(0x19C6A680)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_ALL_SET_DEVICE_ID_OFFSET UNITYSDK_OFFSET(0x19C6DD50)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_ALL_SET_ENV_AND_GAMEBIZ_OFFSET UNITYSDK_OFFSET(0x19C6B640)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_ALL_SET_ENV_OFFSET UNITYSDK_OFFSET(0x19C6B540)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_ALL_SET_LANGUAGE_OFFSET UNITYSDK_OFFSET(0x19C6DDE0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_AWAKE_OFFSET UNITYSDK_OFFSET(0x19C6A4F0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CAMERA_SET_UI_CAMERA_OFFSET UNITYSDK_OFFSET(0x19C6F820)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CHECKINIT_OFFSET UNITYSDK_OFFSET(0x19C6BCB0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_ACHIEVEMENT_DESTORY_OFFSET UNITYSDK_OFFSET(0x19C73930)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_ACHIEVEMENT_INIT_OFFSET UNITYSDK_OFFSET(0x19C73660)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_CHECK_PERMISSION_OFFSET UNITYSDK_OFFSET(0x19C73630)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_CHECK_PRIVILEGE_OFFSET UNITYSDK_OFFSET(0x19C73580)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_CREATE_MATCH_OFFSET UNITYSDK_OFFSET(0x19C74010)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_CREATE_SESSION_OFFSET UNITYSDK_OFFSET(0x19C72D80)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_GET_ACCOUNT_COUNTRY_OFFSET UNITYSDK_OFFSET(0x19C6C210)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_GET_ACCOUNT_ID_OFFSET UNITYSDK_OFFSET(0x19C6C1B0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_GET_ACHIEVEMENTS_OFFSET UNITYSDK_OFFSET(0x19C73990)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_GET_ACTIVITIES_OFFSET UNITYSDK_OFFSET(0x19C73460)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_GET_BLOCK_LIST_OFFSET UNITYSDK_OFFSET(0x19C72060)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_GET_CURRENT_SESSION_ID_OFFSET UNITYSDK_OFFSET(0x19C739C0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_GET_FRIEND_LIST_OFFSET UNITYSDK_OFFSET(0x19C71FC0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_GET_LEADERBOARDS_OFFSET UNITYSDK_OFFSET(0x19C73550)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_GET_MATCH_DETAIL_OFFSET UNITYSDK_OFFSET(0x19C74040)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_GET_ONLINE_ID_OFFSET UNITYSDK_OFFSET(0x19C6C1F0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_GET_PLAYER_SESSION_INFO_OFFSET UNITYSDK_OFFSET(0x19C73A60)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_GET_SANDBOX_ID_OFFSET UNITYSDK_OFFSET(0x19C6C230)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_GET_SESSION_LEADER_ACCOUNT_ID_OFFSET UNITYSDK_OFFSET(0x19C739E0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_GET_STATISTICS_OFFSET UNITYSDK_OFFSET(0x19C73520)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_GET_USER_PROFILE_OFFSET UNITYSDK_OFFSET(0x19C6C250)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_HAS_JOIN_SESSION_OFFSET UNITYSDK_OFFSET(0x19C733E0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_JOIN_MATCH_OFFSET UNITYSDK_OFFSET(0x19C74650)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_JOIN_SESSION_OFFSET UNITYSDK_OFFSET(0x19C73380)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_LEAVE_MATCH_OFFSET UNITYSDK_OFFSET(0x19C74680)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_LEAVE_SESSION_OFFSET UNITYSDK_OFFSET(0x19C733B0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_REGISTER_RECEIVE_INVITE_OFFSET UNITYSDK_OFFSET(0x19C734C0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_REPORT_MATCH_RESULTS_OFFSET UNITYSDK_OFFSET(0x19C746B0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_RESOLVE_PRIVILEGE_OFFSET UNITYSDK_OFFSET(0x19C73600)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_SEND_SESSION_INVITE_OFFSET UNITYSDK_OFFSET(0x19C72750)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_SESSION_DESTORY_OFFSET UNITYSDK_OFFSET(0x19C72D50)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_SESSION_INIT_OFFSET UNITYSDK_OFFSET(0x19C72D20)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_SET_SESSION_OFFSET UNITYSDK_OFFSET(0x19C73350)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_SHOW_ERROR_DIALOG_OFFSET UNITYSDK_OFFSET(0x19C721B0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_SHOW_MESSAGE_DIALOG_OFFSET UNITYSDK_OFFSET(0x19C72180)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_SHOW_PROFILE_CARD_OFFSET UNITYSDK_OFFSET(0x19C72150)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_SHOW_SESSION_INVITE_OFFSET UNITYSDK_OFFSET(0x19C721E0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_SWITCH_CONTROL_OFFSET UNITYSDK_OFFSET(0x19C746E0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_UPDATE_ACHIEVEMENT_OFFSET UNITYSDK_OFFSET(0x19C73960)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_UPDATE_MATCH_DETAIL_OFFSET UNITYSDK_OFFSET(0x19C74070)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_UPDATE_MATCH_STATUS_OFFSET UNITYSDK_OFFSET(0x19C74620)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_UPDATE_RECENT_PLAYERS_OFFSET UNITYSDK_OFFSET(0x19C73490)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_UPDATE_STATISTICS_OFFSET UNITYSDK_OFFSET(0x19C734F0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_GETINITSTATUS_OFFSET UNITYSDK_OFFSET(0x19C65840)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_GET_ACCOUNT_ID_BY_ONLINE_ID_OFFSET UNITYSDK_OFFSET(0x19C70600)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_GET_ONLINE_ID_LIST_BY_ACCOUNT_ID_LIST_OFFSET UNITYSDK_OFFSET(0x19C70630)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_GET_PS_ACCOUNT_COUNTRY_OFFSET UNITYSDK_OFFSET(0x19C6FE90)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_GET_PS_ACCOUNT_ID_OFFSET UNITYSDK_OFFSET(0x19C6FB80)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_GET_PS_BLOCK_LIST_OFFSET UNITYSDK_OFFSET(0x19C70B90)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_GET_PS_FRIEND_LIST_OFFSET UNITYSDK_OFFSET(0x19C70660)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_GET_PS_ONLINE_ID_OFFSET UNITYSDK_OFFSET(0x19C6FBC0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_GET_PS_USER_ID_OFFSET UNITYSDK_OFFSET(0x19C6FB40)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_HIDE_PS_STORE_ICON_OFFSET UNITYSDK_OFFSET(0x19C6FEF0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_INFO_GET_CHANNEL_ID_OFFSET UNITYSDK_OFFSET(0x19C6C0A0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_INFO_GET_CPS_OFFSET UNITYSDK_OFFSET(0x19C6F720)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_INFO_GET_DEVICE_ID_OFFSET UNITYSDK_OFFSET(0x19C6C020)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_INFO_GET_REGION_MULTIPLE_LANGUAGE_OFFSET UNITYSDK_OFFSET(0x19C6C130)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_INFO_GET_SUB_CHANNEL_ID_OFFSET UNITYSDK_OFFSET(0x19C6ECC0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_INFO_SET_GAME_PARAMETERS_OFFSET UNITYSDK_OFFSET(0x19C6ED60)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_INFO_SET_GAME_VERSION_OFFSET UNITYSDK_OFFSET(0x19C6F660)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_INIT_OFFSET UNITYSDK_OFFSET(0x19C6AF80)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_INIT_PS_TROPHY_OFFSET UNITYSDK_OFFSET(0x19C6FFF0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_INNER_SDK_INNER_GET_LANG_OFFSET UNITYSDK_OFFSET(0x19C75660)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_INNER_SDK_INNER_REPORT_EVENT_OFFSET UNITYSDK_OFFSET(0x19C750E0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LAUNCH_CLOSE_ALL_UI_OFFSET UNITYSDK_OFFSET(0x19C6FA10)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LAUNCH_ENABLE_AUTO_TEST_OFFSET UNITYSDK_OFFSET(0x19C6F760)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LAUNCH_OPEN_URL_OFFSET UNITYSDK_OFFSET(0x19C6C310)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_CREATE_ROLE_OFFSET UNITYSDK_OFFSET(0x19C6D9B0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_ENTER_GAME_OFFSET UNITYSDK_OFFSET(0x19C6D260)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_GET_ACCOUNT_NAME_OFFSET UNITYSDK_OFFSET(0x19C6BF20)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_GET_ASTERISK_NAME_OFFSET UNITYSDK_OFFSET(0x19C6BF60)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_GET_BIND_STATE_OFFSET UNITYSDK_OFFSET(0x19C6F510)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_GET_PRICE_TIER_OFFSET UNITYSDK_OFFSET(0x19C6D810)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_GET_PRODUCT_LIST_OFFSET UNITYSDK_OFFSET(0x19C6D850)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_HAS_CUSTOMER_SERVICE_OFFSET UNITYSDK_OFFSET(0x19C6DCF0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_HAS_FORUM_OFFSET UNITYSDK_OFFSET(0x19C6DC30)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_HAS_SCAN_FUNC_OFFSET UNITYSDK_OFFSET(0x19C6F2A0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_HAS_USER_CENTER_OFFSET UNITYSDK_OFFSET(0x19C6F170)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_IS_ACCOUNT_BIND_MOBILE_OFFSET UNITYSDK_OFFSET(0x19C6F300)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_IS_ACCOUNT_REAL_NAME_OFFSET UNITYSDK_OFFSET(0x19C6F400)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_LEVEL_UP_OFFSET UNITYSDK_OFFSET(0x19C6D9C0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_LIST_GOODS_OFFSET UNITYSDK_OFFSET(0x19C6D780)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_LOGIN_OFFSET UNITYSDK_OFFSET(0x19C6BAB0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_LOGOUT_OFFSET UNITYSDK_OFFSET(0x19C6BD70)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_LOGOUT_WITHOUT_CONFIRM_OFFSET UNITYSDK_OFFSET(0x19C6BDF0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_OPEN_FORUM_OFFSET UNITYSDK_OFFSET(0x19C6DC90)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_OPEN_PROTOCOL_WEBVIEW_OFFSET UNITYSDK_OFFSET(0x19C6C2E0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_OPEN_URL_WITH_LOGIN_STATUS_OFFSET UNITYSDK_OFFSET(0x19C6C440)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_OPEN_USER_CENTER_OFFSET UNITYSDK_OFFSET(0x19C6F270)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_PAY_OFFSET UNITYSDK_OFFSET(0x19C6EB70)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_SET_ACCOUNT_OFFSET UNITYSDK_OFFSET(0x19C6F5D0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_SET_SERVER_ID_OFFSET UNITYSDK_OFFSET(0x19C6CD00)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_SHOW_PRIVACY_PROTOCOL_OFFSET UNITYSDK_OFFSET(0x19C6C2B0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_SHOW_USER_AGREEMENT_OFFSET UNITYSDK_OFFSET(0x19C6C280)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_SWITCH_ROLE_OFFSET UNITYSDK_OFFSET(0x19C6BE80)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_WILL_ENTER_GAME_OFFSET UNITYSDK_OFFSET(0x19C6CF90)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_NOTICE_SET_NOTICE_URL_OFFSET UNITYSDK_OFFSET(0x19C6F0E0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_NOTICE_SHOW_NOTICE_OFFSET UNITYSDK_OFFSET(0x19C6CA60)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_NOTICE_SHOW_POP_IMAGE_OFFSET UNITYSDK_OFFSET(0x19C6EEA0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_NOTICE_SHOW_POP_NOTICE_OFFSET UNITYSDK_OFFSET(0x19C6CBF0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_ONNOTIFICATIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x19C6A660)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_ACTIVITY_CHANGE_AVAILABILITY_LIST_OFFSET UNITYSDK_OFFSET(0x19C70DF0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_ACTIVITY_CHANGE_AVAILABILITY_OFFSET UNITYSDK_OFFSET(0x19C70DB0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_ACTIVITY_END_OFFSET UNITYSDK_OFFSET(0x19C70D30)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_ACTIVITY_MANAGER_DESTORY_OFFSET UNITYSDK_OFFSET(0x19C70CC0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_ACTIVITY_MANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x19C70C80)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_ACTIVITY_RESUME_OFFSET UNITYSDK_OFFSET(0x19C70E30)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_ACTIVITY_START_OFFSET UNITYSDK_OFFSET(0x19C70CF0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_ACTIVITY_TERMINATE_OFFSET UNITYSDK_OFFSET(0x19C70D70)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_DIALOG_OPEN_PLAYGO_DIALOG_OFFSET UNITYSDK_OFFSET(0x19C71F90)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_DLC_PAY_OFFSET UNITYSDK_OFFSET(0x19C713C0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_GAMEINTENT_DESTORY_OFFSET UNITYSDK_OFFSET(0x19C70EB0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_GAMEINTENT_INIT_OFFSET UNITYSDK_OFFSET(0x19C70E70)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_GET_COMMUNICATION_RESTRICTION_STATUS_OFFSET UNITYSDK_OFFSET(0x19C717C0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_HAS_PREMIUM_OFFSET UNITYSDK_OFFSET(0x19C71240)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_NOTIFY_PREMIUM_FEATURE_OFFSET UNITYSDK_OFFSET(0x19C71450)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_PLAYGO_FINALIZE_OFFSET UNITYSDK_OFFSET(0x19C71890)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_PLAYGO_GET_CHUNK_INFO_OFFSET UNITYSDK_OFFSET(0x19C718D0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_PLAYGO_GET_CHUNK_LOCUS_OFFSET UNITYSDK_OFFSET(0x19C71940)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_PLAYGO_GET_CHUNK_PROGRESS_SIZE_OFFSET UNITYSDK_OFFSET(0x19C719F0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_PLAYGO_GET_CHUNK_TOTAL_SIZE_OFFSET UNITYSDK_OFFSET(0x19C71980)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_PLAYGO_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x19C71850)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_PLAYGO_SET_LANGUAGE_MASK_OFFSET UNITYSDK_OFFSET(0x19C71A60)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_PREMIUM_PAY_OFFSET UNITYSDK_OFFSET(0x19C712C0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_REGISTER_GAMEINTENT_GET_ACTIVITY_ID_OFFSET UNITYSDK_OFFSET(0x19C70EE0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_REGISTER_GAMEINTENT_GET_SESSION_ID_OFFSET UNITYSDK_OFFSET(0x19C70F10)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_REGISTER_NP_STATE_OFFSET UNITYSDK_OFFSET(0x19C717F0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_UNREGISTER_GAMEINTENT_GET_ACTIVITY_ID_OFFSET UNITYSDK_OFFSET(0x19C70F40)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_UNREGISTER_GAMEINTENT_GET_SESSION_ID_OFFSET UNITYSDK_OFFSET(0x19C71210)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_UNREGISTER_NP_STATE_OFFSET UNITYSDK_OFFSET(0x19C71820)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_REGISTER_CONSOLE_BLOCK_UPDATE_OFFSET UNITYSDK_OFFSET(0x19C720C0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_REGISTER_CONSOLE_FRIEND_UPDATE_OFFSET UNITYSDK_OFFSET(0x19C72090)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_REGISTER_PS_BLOCK_UPDATE_OFFSET UNITYSDK_OFFSET(0x19C70BF0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_REGISTER_PS_FRIEND_UPDATE_OFFSET UNITYSDK_OFFSET(0x19C70BC0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_REPORT_SET_INFO_OFFSET UNITYSDK_OFFSET(0x19C6EC00)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_SDKINVOKE_OFFSET UNITYSDK_OFFSET(0x19C6A6A0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_SET_PS_CLIENT_ID_OFFSET UNITYSDK_OFFSET(0x19C6FAE0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_SET_PS_TROPHY_OFFSET UNITYSDK_OFFSET(0x19C6FF20)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_SHOW_EMPTY_STORE_DIALOG_OFFSET UNITYSDK_OFFSET(0x19C700A0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_SHOW_PS_STORE_ICON_OFFSET UNITYSDK_OFFSET(0x19C6FEC0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_SHOW_SYSTEM_MESSAGE_DIALOG_OFFSET UNITYSDK_OFFSET(0x19C705D0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_UGC_SET_TOKEN_OFFSET UNITYSDK_OFFSET(0x19C6F8C0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_UGC_SHOW_BBS_AGREEMENT_OFFSET UNITYSDK_OFFSET(0x19C6F980)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_UNREGISTER_CONSOLE_BLOCK_UPDATE_OFFSET UNITYSDK_OFFSET(0x19C72120)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_UNREGISTER_CONSOLE_FRIEND_UPDATE_OFFSET UNITYSDK_OFFSET(0x19C720F0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_UNREGISTER_PS_BLOCK_UPDATE_OFFSET UNITYSDK_OFFSET(0x19C70C50)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_UNREGISTER_PS_FRIEND_UPDATE_OFFSET UNITYSDK_OFFSET(0x19C70C20)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_UPDATE_OFFSET UNITYSDK_OFFSET(0x19C6A5A0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_WATERMARK_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x19C6D920)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_WATERMARK_SET_ENABLE_OFFSET UNITYSDK_OFFSET(0x19C6D890)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL__CCTOR_OFFSET UNITYSDK_OFFSET(0x19C75780)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL__CTOR_OFFSET UNITYSDK_OFFSET(0x19C75730)

namespace MiHoYo::SDK::Console
{
	inline static constexpr unsigned int MiHoYoSDKDll_TypeDefinitionIndex = 19534;

	class MiHoYoSDKDll : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::Il2CppArray<::System::Object*>** StaticGet_parameters1()
		{
			return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0xA520);
		}
		static ::Il2CppArray<::System::Object*>** StaticGet_parameters0()
		{
			return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0xA528);
		}
		static ::Il2CppArray<::System::Object*>** StaticGet_parameters2()
		{
			return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0xA530);
		}
		static ::System::Type** StaticGet_miHoYoDll()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0xA538);
		}
		static ::MiHoYo::SDK::ChannelType* StaticGet_channel()
		{
			return (::MiHoYo::SDK::ChannelType*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x4560);
		}
		static ::System::Int32* StaticGet_trophyContext()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x4564);
		}
		static ::MiHoYo::SDK::SubChannelType* StaticGet_subChannel()
		{
			return (::MiHoYo::SDK::SubChannelType*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x4568);
		}
		static ::MiHoYo::SDK::PS_IssuerID* StaticGet_issuerId()
		{
			return (::MiHoYo::SDK::PS_IssuerID*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x456C);
		}
		static ::System::Boolean* StaticGet_isSetEnv()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x4570);
		}
		static ::System::Boolean* StaticGet_isInit()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x4571);
		}
		static ::System::Boolean* StaticGet_isBackground()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x4572);
		}
		static ::MiHoYo::SDK::ClientType* StaticGet_clientType()
		{
			return (::MiHoYo::SDK::ClientType*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x4574);
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

		::System::Void OnNotificationCallback(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_ONNOTIFICATIONCALLBACK_OFFSET))(this, message);
		}

		::System::Void AddInputField(::UnityEngine::UI::InputField* inputField)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::InputField*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_ADDINPUTFIELD_OFFSET))(this, inputField);
		}

		static ::System::String* SDKInvoke(::System::String* funcName, ::System::String* args, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_SDKINVOKE_OFFSET))(funcName, args, callback);
		}

		static ::System::Void Init(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_INIT_OFFSET))(callback);
		}

		static ::System::Boolean GetInitStatus()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_GETINITSTATUS_OFFSET))();
		}

		static ::System::String* all_set_env(::System::String* env)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_ALL_SET_ENV_OFFSET))(env);
		}

		static ::System::String* all_set_env_and_gamebiz(::System::String* dataString)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_ALL_SET_ENV_AND_GAMEBIZ_OFFSET))(dataString);
		}

		static ::System::String* login_login(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_LOGIN_OFFSET))(callback);
		}

		static ::System::String* login_logout(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_LOGOUT_OFFSET))(callback);
		}

		static ::System::String* login_logout_without_confirm(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_LOGOUT_WITHOUT_CONFIRM_OFFSET))(callback);
		}

		static ::System::String* login_switch_role(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_SWITCH_ROLE_OFFSET))(callback);
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

		static ::System::String* info_get_region_multiple_language(::System::String* code)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_INFO_GET_REGION_MULTIPLE_LANGUAGE_OFFSET))(code);
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

		static ::System::String* console_get_user_profile(::System::String* xuid, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_GET_USER_PROFILE_OFFSET))(xuid, callback);
		}

		static ::System::String* login_show_user_agreement()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_SHOW_USER_AGREEMENT_OFFSET))();
		}

		static ::System::String* login_show_privacy_protocol()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_SHOW_PRIVACY_PROTOCOL_OFFSET))();
		}

		static ::System::String* login_open_protocol_webview(::System::String* jsonString)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_OPEN_PROTOCOL_WEBVIEW_OFFSET))(jsonString);
		}

		static ::System::String* launch_open_url(::System::String* url)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LAUNCH_OPEN_URL_OFFSET))(url);
		}

		static ::System::String* login_open_url_with_login_status(::System::String* jsonString)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_OPEN_URL_WITH_LOGIN_STATUS_OFFSET))(jsonString);
		}

		static ::System::String* notice_show_notice(::System::String* jsonString)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_NOTICE_SHOW_NOTICE_OFFSET))(jsonString);
		}

		static ::System::String* notice_show_pop_notice()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_NOTICE_SHOW_POP_NOTICE_OFFSET))();
		}

		static ::System::String* login_set_server_id(::System::String* value)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_SET_SERVER_ID_OFFSET))(value);
		}

		static ::System::String* login_will_enter_game(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_WILL_ENTER_GAME_OFFSET))(jsonString, callback);
		}

		static ::System::String* login_enter_game(::System::String* jsonString)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_ENTER_GAME_OFFSET))(jsonString);
		}

		static ::System::String* login_list_goods(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_LIST_GOODS_OFFSET))(jsonString, callback);
		}

		static ::System::String* login_get_price_tier(::System::String* currency, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_GET_PRICE_TIER_OFFSET))(currency, callback);
		}

		static ::System::String* login_get_product_list(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_GET_PRODUCT_LIST_OFFSET))(jsonString, callback);
		}

		static ::System::String* watermark_set_enable(::System::String* args)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_WATERMARK_SET_ENABLE_OFFSET))(args);
		}

		static ::System::String* watermark_set_config(::System::String* jsonStrings)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_WATERMARK_SET_CONFIG_OFFSET))(jsonStrings);
		}

		static ::System::String* login_create_role(::System::String* jsonString)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_CREATE_ROLE_OFFSET))(jsonString);
		}

		static ::System::String* login_level_up(::System::String* jsonString)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_LEVEL_UP_OFFSET))(jsonString);
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

		static ::System::String* all_set_device_id(::System::String* value)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_ALL_SET_DEVICE_ID_OFFSET))(value);
		}

		static ::System::String* all_set_language(::System::String* value)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_ALL_SET_LANGUAGE_OFFSET))(value);
		}

		static ::System::String* login_pay(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_PAY_OFFSET))(jsonString, callback);
		}

		static ::System::String* report_set_info(::System::String* jsonString)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_REPORT_SET_INFO_OFFSET))(jsonString);
		}

		static ::System::String* info_get_sub_channel_id()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_INFO_GET_SUB_CHANNEL_ID_OFFSET))();
		}

		static ::System::String* info_set_game_parameters(::System::String* jsonString)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_INFO_SET_GAME_PARAMETERS_OFFSET))(jsonString);
		}

		static ::System::String* notice_show_pop_image(::System::String* animation)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_NOTICE_SHOW_POP_IMAGE_OFFSET))(animation);
		}

		static ::System::String* notice_set_notice_url(::System::String* url)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_NOTICE_SET_NOTICE_URL_OFFSET))(url);
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

		static ::System::String* login_set_account(::System::String* jsonString)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_SET_ACCOUNT_OFFSET))(jsonString);
		}

		static ::System::String* info_set_game_version(::System::String* version)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_INFO_SET_GAME_VERSION_OFFSET))(version);
		}

		static ::System::String* info_get_cps()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_INFO_GET_CPS_OFFSET))();
		}

		static ::System::String* launch_enable_auto_test(::System::String* enable)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LAUNCH_ENABLE_AUTO_TEST_OFFSET))(enable);
		}

		static ::System::String* camera_set_ui_camera(::System::String* jsonString)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CAMERA_SET_UI_CAMERA_OFFSET))(jsonString);
		}

		static ::System::String* ugc_set_token(::System::String* token)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_UGC_SET_TOKEN_OFFSET))(token);
		}

		static ::System::String* ugc_show_bbs_agreement(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_UGC_SHOW_BBS_AGREEMENT_OFFSET))(jsonString, callback);
		}

		static ::System::String* launch_close_all_ui()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LAUNCH_CLOSE_ALL_UI_OFFSET))();
		}

		static ::System::String* set_ps_client_id(::System::String* clientId)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_SET_PS_CLIENT_ID_OFFSET))(clientId);
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

		static ::System::String* show_ps_store_icon(::System::String* type)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_SHOW_PS_STORE_ICON_OFFSET))(type);
		}

		static ::System::String* hide_ps_store_icon()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_HIDE_PS_STORE_ICON_OFFSET))();
		}

		static ::System::String* set_ps_trophy(::System::String* value)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_SET_PS_TROPHY_OFFSET))(value);
		}

		static ::System::String* init_ps_trophy()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_INIT_PS_TROPHY_OFFSET))();
		}

		static ::System::String* show_empty_store_dialog(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_SHOW_EMPTY_STORE_DIALOG_OFFSET))(callback);
		}

		static ::System::String* show_system_message_dialog(::System::String* type, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_SHOW_SYSTEM_MESSAGE_DIALOG_OFFSET))(type, callback);
		}

		static ::System::String* get_account_id_by_online_id(::System::String* onlineId, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_GET_ACCOUNT_ID_BY_ONLINE_ID_OFFSET))(onlineId, callback);
		}

		static ::System::String* get_online_id_list_by_account_id_list(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_GET_ONLINE_ID_LIST_BY_ACCOUNT_ID_LIST_OFFSET))(jsonString, callback);
		}

		static ::System::String* get_ps_friend_list(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_GET_PS_FRIEND_LIST_OFFSET))(callback);
		}

		static ::System::String* get_ps_block_list(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_GET_PS_BLOCK_LIST_OFFSET))(callback);
		}

		static ::System::String* register_ps_friend_update(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_REGISTER_PS_FRIEND_UPDATE_OFFSET))(callback);
		}

		static ::System::String* register_ps_block_update(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_REGISTER_PS_BLOCK_UPDATE_OFFSET))(callback);
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

		static ::System::String* ps_activity_start(::System::String* activityId)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_ACTIVITY_START_OFFSET))(activityId);
		}

		static ::System::String* ps_activity_end(::System::String* jsonString)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_ACTIVITY_END_OFFSET))(jsonString);
		}

		static ::System::String* ps_activity_terminate()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_ACTIVITY_TERMINATE_OFFSET))();
		}

		static ::System::String* ps_activity_change_availability(::System::String* jsonString)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_ACTIVITY_CHANGE_AVAILABILITY_OFFSET))(jsonString);
		}

		static ::System::String* ps_activity_change_availability_list(::System::String* jsonString)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_ACTIVITY_CHANGE_AVAILABILITY_LIST_OFFSET))(jsonString);
		}

		static ::System::String* ps_activity_resume(::System::String* jsonString)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_ACTIVITY_RESUME_OFFSET))(jsonString);
		}

		static ::System::String* ps_gameintent_init()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_GAMEINTENT_INIT_OFFSET))();
		}

		static ::System::String* ps_gameintent_destory()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_GAMEINTENT_DESTORY_OFFSET))();
		}

		static ::System::String* ps_register_gameintent_get_activity_id(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_REGISTER_GAMEINTENT_GET_ACTIVITY_ID_OFFSET))(callback);
		}

		static ::System::String* ps_register_gameintent_get_session_id(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_REGISTER_GAMEINTENT_GET_SESSION_ID_OFFSET))(callback);
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

		static ::System::String* ps_premium_pay(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_PREMIUM_PAY_OFFSET))(callback);
		}

		static ::System::String* ps_dlc_pay(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_DLC_PAY_OFFSET))(jsonString, callback);
		}

		static ::System::String* ps_notify_premium_feature(::System::String* properties)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_NOTIFY_PREMIUM_FEATURE_OFFSET))(properties);
		}

		static ::System::String* ps_get_communication_restriction_status(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_GET_COMMUNICATION_RESTRICTION_STATUS_OFFSET))(callback);
		}

		static ::System::String* ps_register_np_state(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_REGISTER_NP_STATE_OFFSET))(callback);
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

		static ::System::String* ps_playgo_get_chunk_info(::System::String* chunkId)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_PLAYGO_GET_CHUNK_INFO_OFFSET))(chunkId);
		}

		static ::System::String* ps_playgo_get_chunk_locus(::System::String* chunkId)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_PLAYGO_GET_CHUNK_LOCUS_OFFSET))(chunkId);
		}

		static ::System::String* ps_playgo_get_chunk_total_size(::System::String* chunkId)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_PLAYGO_GET_CHUNK_TOTAL_SIZE_OFFSET))(chunkId);
		}

		static ::System::String* ps_playgo_get_chunk_progress_size(::System::String* chunkId)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_PLAYGO_GET_CHUNK_PROGRESS_SIZE_OFFSET))(chunkId);
		}

		static ::System::String* ps_playgo_set_language_mask(::System::String* jsonString)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_PLAYGO_SET_LANGUAGE_MASK_OFFSET))(jsonString);
		}

		static ::System::String* ps_dialog_open_playgo_dialog(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_DIALOG_OPEN_PLAYGO_DIALOG_OFFSET))(jsonString, callback);
		}

		static ::System::String* console_get_friend_list(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_GET_FRIEND_LIST_OFFSET))(callback);
		}

		static ::System::String* console_get_block_list(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_GET_BLOCK_LIST_OFFSET))(callback);
		}

		static ::System::String* register_console_friend_update(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_REGISTER_CONSOLE_FRIEND_UPDATE_OFFSET))(callback);
		}

		static ::System::String* register_console_block_update(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_REGISTER_CONSOLE_BLOCK_UPDATE_OFFSET))(callback);
		}

		static ::System::String* unregister_console_friend_update()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_UNREGISTER_CONSOLE_FRIEND_UPDATE_OFFSET))();
		}

		static ::System::String* unregister_console_block_update()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_UNREGISTER_CONSOLE_BLOCK_UPDATE_OFFSET))();
		}

		static ::System::String* console_show_profile_card(::System::String* xuid, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_SHOW_PROFILE_CARD_OFFSET))(xuid, callback);
		}

		static ::System::String* console_show_message_dialog(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_SHOW_MESSAGE_DIALOG_OFFSET))(jsonString, callback);
		}

		static ::System::String* console_show_error_dialog(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_SHOW_ERROR_DIALOG_OFFSET))(jsonString, callback);
		}

		static ::System::String* console_show_session_invite(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_SHOW_SESSION_INVITE_OFFSET))(callback);
		}

		static ::System::String* console_send_session_invite(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_SEND_SESSION_INVITE_OFFSET))(jsonString, callback);
		}

		static ::System::String* console_session_init()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_SESSION_INIT_OFFSET))();
		}

		static ::System::String* console_session_destory()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_SESSION_DESTORY_OFFSET))();
		}

		static ::System::String* console_create_session(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_CREATE_SESSION_OFFSET))(jsonString, callback);
		}

		static ::System::String* console_set_session(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_SET_SESSION_OFFSET))(jsonString, callback);
		}

		static ::System::String* console_join_session(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_JOIN_SESSION_OFFSET))(jsonString, callback);
		}

		static ::System::String* console_leave_session(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_LEAVE_SESSION_OFFSET))(callback);
		}

		static ::System::String* console_has_join_session()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_HAS_JOIN_SESSION_OFFSET))();
		}

		static ::System::String* console_get_activities(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_GET_ACTIVITIES_OFFSET))(jsonString, callback);
		}

		static ::System::String* console_update_recent_players(::System::String* jsonString)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_UPDATE_RECENT_PLAYERS_OFFSET))(jsonString);
		}

		static ::System::String* console_register_receive_invite(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_REGISTER_RECEIVE_INVITE_OFFSET))(callback);
		}

		static ::System::String* console_update_statistics(::System::String* jsonString)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_UPDATE_STATISTICS_OFFSET))(jsonString);
		}

		static ::System::String* console_get_statistics(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_GET_STATISTICS_OFFSET))(jsonString, callback);
		}

		static ::System::String* console_get_leaderboards(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_GET_LEADERBOARDS_OFFSET))(jsonString, callback);
		}

		static ::System::String* console_check_privilege(::System::String* strPrivilege)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_CHECK_PRIVILEGE_OFFSET))(strPrivilege);
		}

		static ::System::String* console_resolve_privilege(::System::String* strPrivilege, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_RESOLVE_PRIVILEGE_OFFSET))(strPrivilege, callback);
		}

		static ::System::String* console_check_permission(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_CHECK_PERMISSION_OFFSET))(jsonString, callback);
		}

		static ::System::String* console_achievement_init()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_ACHIEVEMENT_INIT_OFFSET))();
		}

		static ::System::String* console_achievement_destory()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_ACHIEVEMENT_DESTORY_OFFSET))();
		}

		static ::System::String* console_update_achievement(::System::String* jsonString)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_UPDATE_ACHIEVEMENT_OFFSET))(jsonString);
		}

		static ::System::String* console_get_achievements(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_GET_ACHIEVEMENTS_OFFSET))(callback);
		}

		static ::System::String* console_get_current_session_id()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_GET_CURRENT_SESSION_ID_OFFSET))();
		}

		static ::System::String* console_get_session_leader_account_id()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_GET_SESSION_LEADER_ACCOUNT_ID_OFFSET))();
		}

		static ::System::String* console_get_player_session_info(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_GET_PLAYER_SESSION_INFO_OFFSET))(jsonString, callback);
		}

		static ::System::String* console_create_match(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_CREATE_MATCH_OFFSET))(jsonString, callback);
		}

		static ::System::String* console_get_match_detail(::System::String* matchId, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_GET_MATCH_DETAIL_OFFSET))(matchId, callback);
		}

		static ::System::String* console_update_match_detail(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_UPDATE_MATCH_DETAIL_OFFSET))(jsonString, callback);
		}

		static ::System::String* console_update_match_status(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_UPDATE_MATCH_STATUS_OFFSET))(jsonString, callback);
		}

		static ::System::String* console_join_match(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_JOIN_MATCH_OFFSET))(jsonString, callback);
		}

		static ::System::String* console_leave_match(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_LEAVE_MATCH_OFFSET))(jsonString, callback);
		}

		static ::System::String* console_report_match_results(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_REPORT_MATCH_RESULTS_OFFSET))(jsonString, callback);
		}

		static ::System::Void console_switch_control(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_SWITCH_CONTROL_OFFSET))(jsonString, callback);
		}

		static ::System::Void inner_sdk_inner_report_event(::System::String* args)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_INNER_SDK_INNER_REPORT_EVENT_OFFSET))(args);
		}

		static ::System::String* inner_sdk_inner_get_lang(::System::String* args)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_INNER_SDK_INNER_GET_LANG_OFFSET))(args);
		}

		static ::System::Boolean CheckInit()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CHECKINIT_OFFSET))();
		}
	};
}
