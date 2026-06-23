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

#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_ADDINPUTFIELD_OFFSET UNITYSDK_OFFSET(0x1BBA74D0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_ALL_SET_DEVICE_ID_OFFSET UNITYSDK_OFFSET(0x1BBAABA0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_ALL_SET_ENV_AND_GAMEBIZ_OFFSET UNITYSDK_OFFSET(0x1BBA8490)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_ALL_SET_ENV_OFFSET UNITYSDK_OFFSET(0x1BBA8390)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_ALL_SET_LANGUAGE_OFFSET UNITYSDK_OFFSET(0x1BBAAC30)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_AWAKE_OFFSET UNITYSDK_OFFSET(0x1BBA7340)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CAMERA_SET_UI_CAMERA_OFFSET UNITYSDK_OFFSET(0x1BBAC670)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CHECKINIT_OFFSET UNITYSDK_OFFSET(0x1BBA8B00)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_ACHIEVEMENT_DESTORY_OFFSET UNITYSDK_OFFSET(0x1BBB0A20)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_ACHIEVEMENT_INIT_OFFSET UNITYSDK_OFFSET(0x1BBB0750)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_CHECK_PERMISSION_OFFSET UNITYSDK_OFFSET(0x1BBB0720)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_CHECK_PRIVILEGE_OFFSET UNITYSDK_OFFSET(0x1BBB0670)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_CREATE_MATCH_OFFSET UNITYSDK_OFFSET(0x1BBB1100)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_CREATE_SESSION_OFFSET UNITYSDK_OFFSET(0x1BBAFBB0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_GET_ACCOUNT_COUNTRY_OFFSET UNITYSDK_OFFSET(0x1BBA9060)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_GET_ACCOUNT_ID_OFFSET UNITYSDK_OFFSET(0x1BBA9000)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_GET_ACHIEVEMENTS_OFFSET UNITYSDK_OFFSET(0x1BBB0A80)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_GET_ACTIVITIES_OFFSET UNITYSDK_OFFSET(0x1BBB0280)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_GET_BLOCK_LIST_OFFSET UNITYSDK_OFFSET(0x1BBAEEA0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_GET_CURRENT_SESSION_ID_OFFSET UNITYSDK_OFFSET(0x1BBB0AB0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_GET_FRIEND_LIST_OFFSET UNITYSDK_OFFSET(0x1BBAEE00)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_GET_LEADERBOARDS_OFFSET UNITYSDK_OFFSET(0x1BBB0640)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_GET_MATCH_DETAIL_OFFSET UNITYSDK_OFFSET(0x1BBB1130)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_GET_ONLINE_ID_OFFSET UNITYSDK_OFFSET(0x1BBA9040)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_GET_PLAYER_SESSION_INFO_OFFSET UNITYSDK_OFFSET(0x1BBB0B50)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_GET_SANDBOX_ID_OFFSET UNITYSDK_OFFSET(0x1BBA9080)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_GET_SESSION_LEADER_ACCOUNT_ID_OFFSET UNITYSDK_OFFSET(0x1BBB0AD0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_GET_STATISTICS_OFFSET UNITYSDK_OFFSET(0x1BBB0610)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_GET_USER_PROFILE_OFFSET UNITYSDK_OFFSET(0x1BBA90A0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_HAS_JOIN_SESSION_OFFSET UNITYSDK_OFFSET(0x1BBB0200)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_JOIN_MATCH_OFFSET UNITYSDK_OFFSET(0x1BBB1740)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_JOIN_SESSION_OFFSET UNITYSDK_OFFSET(0x1BBB01A0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_LEAVE_MATCH_OFFSET UNITYSDK_OFFSET(0x1BBB1770)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_LEAVE_SESSION_OFFSET UNITYSDK_OFFSET(0x1BBB01D0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_REGISTER_RECEIVE_INVITE_OFFSET UNITYSDK_OFFSET(0x1BBB02E0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_REPORT_MATCH_RESULTS_OFFSET UNITYSDK_OFFSET(0x1BBB17A0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_RESOLVE_PRIVILEGE_OFFSET UNITYSDK_OFFSET(0x1BBB06F0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_SEND_SESSION_INVITE_OFFSET UNITYSDK_OFFSET(0x1BBAF590)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_SESSION_DESTORY_OFFSET UNITYSDK_OFFSET(0x1BBAFB80)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_SESSION_INIT_OFFSET UNITYSDK_OFFSET(0x1BBAFB50)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_SET_SESSION_OFFSET UNITYSDK_OFFSET(0x1BBB0170)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_SHOW_ERROR_DIALOG_OFFSET UNITYSDK_OFFSET(0x1BBAEFF0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_SHOW_MESSAGE_DIALOG_OFFSET UNITYSDK_OFFSET(0x1BBAEFC0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_SHOW_PROFILE_CARD_OFFSET UNITYSDK_OFFSET(0x1BBAEF90)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_SHOW_SESSION_INVITE_OFFSET UNITYSDK_OFFSET(0x1BBAF020)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_SWITCH_CONTROL_OFFSET UNITYSDK_OFFSET(0x1BBB17D0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_UNREGISTER_RECEIVE_INVITE_OFFSET UNITYSDK_OFFSET(0x1BBB0310)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_UPDATE_ACHIEVEMENT_OFFSET UNITYSDK_OFFSET(0x1BBB0A50)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_UPDATE_MATCH_DETAIL_OFFSET UNITYSDK_OFFSET(0x1BBB1160)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_UPDATE_MATCH_STATUS_OFFSET UNITYSDK_OFFSET(0x1BBB1710)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_UPDATE_RECENT_PLAYERS_OFFSET UNITYSDK_OFFSET(0x1BBB02B0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_UPDATE_STATISTICS_OFFSET UNITYSDK_OFFSET(0x1BBB05E0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_GETINITSTATUS_OFFSET UNITYSDK_OFFSET(0x1BBA2670)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_GET_ACCOUNT_ID_BY_ONLINE_ID_OFFSET UNITYSDK_OFFSET(0x1BBAD450)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_GET_ONLINE_ID_LIST_BY_ACCOUNT_ID_LIST_OFFSET UNITYSDK_OFFSET(0x1BBAD480)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_GET_PS_ACCOUNT_COUNTRY_OFFSET UNITYSDK_OFFSET(0x1BBACCE0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_GET_PS_ACCOUNT_ID_OFFSET UNITYSDK_OFFSET(0x1BBAC9D0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_GET_PS_BLOCK_LIST_OFFSET UNITYSDK_OFFSET(0x1BBAD9E0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_GET_PS_FRIEND_LIST_OFFSET UNITYSDK_OFFSET(0x1BBAD4B0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_GET_PS_ONLINE_ID_OFFSET UNITYSDK_OFFSET(0x1BBACA10)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_GET_PS_USER_ID_OFFSET UNITYSDK_OFFSET(0x1BBAC990)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_HIDE_PS_STORE_ICON_OFFSET UNITYSDK_OFFSET(0x1BBACD40)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_INFO_GET_CHANNEL_ID_OFFSET UNITYSDK_OFFSET(0x1BBA8EF0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_INFO_GET_CPS_OFFSET UNITYSDK_OFFSET(0x1BBAC570)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_INFO_GET_DEVICE_ID_OFFSET UNITYSDK_OFFSET(0x1BBA8E70)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_INFO_GET_REGION_MULTIPLE_LANGUAGE_OFFSET UNITYSDK_OFFSET(0x1BBA8F80)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_INFO_GET_SUB_CHANNEL_ID_OFFSET UNITYSDK_OFFSET(0x1BBABB10)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_INFO_SET_GAME_PARAMETERS_OFFSET UNITYSDK_OFFSET(0x1BBABBB0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_INFO_SET_GAME_VERSION_OFFSET UNITYSDK_OFFSET(0x1BBAC4B0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_INIT_OFFSET UNITYSDK_OFFSET(0x1BBA7DD0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_INIT_PS_TROPHY_OFFSET UNITYSDK_OFFSET(0x1BBACE40)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_INNER_SDK_INNER_GET_ENV_OFFSET UNITYSDK_OFFSET(0x1BBB2BB0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_INNER_SDK_INNER_GET_GAMEBIZ_OFFSET UNITYSDK_OFFSET(0x1BBB2970)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_INNER_SDK_INNER_GET_LANG_OFFSET UNITYSDK_OFFSET(0x1BBB2750)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_INNER_SDK_INNER_GET_REGION_OFFSET UNITYSDK_OFFSET(0x1BBB2A60)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_INNER_SDK_INNER_GET_USER_ID_OFFSET UNITYSDK_OFFSET(0x1BBB2820)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_INNER_SDK_INNER_REPORT_EVENT_OFFSET UNITYSDK_OFFSET(0x1BBB21D0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LAUNCH_CLOSE_ALL_UI_OFFSET UNITYSDK_OFFSET(0x1BBAC860)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LAUNCH_ENABLE_AUTO_TEST_OFFSET UNITYSDK_OFFSET(0x1BBAC5B0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LAUNCH_OPEN_URL_OFFSET UNITYSDK_OFFSET(0x1BBA9160)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_CREATE_ROLE_OFFSET UNITYSDK_OFFSET(0x1BBAA800)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_ENTER_GAME_OFFSET UNITYSDK_OFFSET(0x1BBAA0B0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_GET_ACCOUNT_NAME_OFFSET UNITYSDK_OFFSET(0x1BBA8D70)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_GET_ASTERISK_NAME_OFFSET UNITYSDK_OFFSET(0x1BBA8DB0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_GET_BIND_STATE_OFFSET UNITYSDK_OFFSET(0x1BBAC360)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_GET_PRICE_TIER_OFFSET UNITYSDK_OFFSET(0x1BBAA660)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_GET_PRODUCT_LIST_OFFSET UNITYSDK_OFFSET(0x1BBAA6A0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_HAS_CUSTOMER_SERVICE_OFFSET UNITYSDK_OFFSET(0x1BBAAB40)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_HAS_FORUM_OFFSET UNITYSDK_OFFSET(0x1BBAAA80)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_HAS_SCAN_FUNC_OFFSET UNITYSDK_OFFSET(0x1BBAC0F0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_HAS_USER_CENTER_OFFSET UNITYSDK_OFFSET(0x1BBABFC0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_IS_ACCOUNT_BIND_MOBILE_OFFSET UNITYSDK_OFFSET(0x1BBAC150)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_IS_ACCOUNT_REAL_NAME_OFFSET UNITYSDK_OFFSET(0x1BBAC250)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_LEVEL_UP_OFFSET UNITYSDK_OFFSET(0x1BBAA810)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_LIST_GOODS_OFFSET UNITYSDK_OFFSET(0x1BBAA5D0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_LOGIN_OFFSET UNITYSDK_OFFSET(0x1BBA8900)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_LOGOUT_OFFSET UNITYSDK_OFFSET(0x1BBA8BC0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_LOGOUT_WITHOUT_CONFIRM_OFFSET UNITYSDK_OFFSET(0x1BBA8C40)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_OPEN_FORUM_OFFSET UNITYSDK_OFFSET(0x1BBAAAE0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_OPEN_PROTOCOL_WEBVIEW_OFFSET UNITYSDK_OFFSET(0x1BBA9130)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_OPEN_URL_WITH_LOGIN_STATUS_OFFSET UNITYSDK_OFFSET(0x1BBA9290)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_OPEN_USER_CENTER_OFFSET UNITYSDK_OFFSET(0x1BBAC0C0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_PAY_OFFSET UNITYSDK_OFFSET(0x1BBAB9C0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_SET_ACCOUNT_OFFSET UNITYSDK_OFFSET(0x1BBAC420)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_SET_SERVER_ID_OFFSET UNITYSDK_OFFSET(0x1BBA9B50)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_SHOW_PRIVACY_PROTOCOL_OFFSET UNITYSDK_OFFSET(0x1BBA9100)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_SHOW_USER_AGREEMENT_OFFSET UNITYSDK_OFFSET(0x1BBA90D0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_SWITCH_ROLE_OFFSET UNITYSDK_OFFSET(0x1BBA8CD0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_WILL_ENTER_GAME_OFFSET UNITYSDK_OFFSET(0x1BBA9DE0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_NOTICE_SET_NOTICE_URL_OFFSET UNITYSDK_OFFSET(0x1BBABF30)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_NOTICE_SHOW_NOTICE_OFFSET UNITYSDK_OFFSET(0x1BBA98B0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_NOTICE_SHOW_POP_IMAGE_OFFSET UNITYSDK_OFFSET(0x1BBABCF0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_NOTICE_SHOW_POP_NOTICE_OFFSET UNITYSDK_OFFSET(0x1BBA9A40)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_ONNOTIFICATIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x1BBA74B0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_ACTIVITY_CHANGE_AVAILABILITY_LIST_OFFSET UNITYSDK_OFFSET(0x1BBADC40)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_ACTIVITY_CHANGE_AVAILABILITY_OFFSET UNITYSDK_OFFSET(0x1BBADC00)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_ACTIVITY_END_OFFSET UNITYSDK_OFFSET(0x1BBADB80)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_ACTIVITY_MANAGER_DESTORY_OFFSET UNITYSDK_OFFSET(0x1BBADB10)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_ACTIVITY_MANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x1BBADAD0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_ACTIVITY_RESUME_OFFSET UNITYSDK_OFFSET(0x1BBADC80)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_ACTIVITY_START_OFFSET UNITYSDK_OFFSET(0x1BBADB40)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_ACTIVITY_TERMINATE_OFFSET UNITYSDK_OFFSET(0x1BBADBC0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_DIALOG_OPEN_PLAYGO_DIALOG_OFFSET UNITYSDK_OFFSET(0x1BBAEDD0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_DLC_PAY_OFFSET UNITYSDK_OFFSET(0x1BBAE210)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_GAMEINTENT_DESTORY_OFFSET UNITYSDK_OFFSET(0x1BBADD00)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_GAMEINTENT_INIT_OFFSET UNITYSDK_OFFSET(0x1BBADCC0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_GET_COMMUNICATION_RESTRICTION_STATUS_OFFSET UNITYSDK_OFFSET(0x1BBAE600)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_HAS_PREMIUM_OFFSET UNITYSDK_OFFSET(0x1BBAE090)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_NOTIFY_PREMIUM_FEATURE_OFFSET UNITYSDK_OFFSET(0x1BBAE2A0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_PLAYGO_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1BBAE6D0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_PLAYGO_GET_CHUNK_INFO_OFFSET UNITYSDK_OFFSET(0x1BBAE710)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_PLAYGO_GET_CHUNK_LOCUS_OFFSET UNITYSDK_OFFSET(0x1BBAE780)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_PLAYGO_GET_CHUNK_PROGRESS_SIZE_OFFSET UNITYSDK_OFFSET(0x1BBAE830)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_PLAYGO_GET_CHUNK_TOTAL_SIZE_OFFSET UNITYSDK_OFFSET(0x1BBAE7C0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_PLAYGO_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1BBAE690)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_PLAYGO_SET_LANGUAGE_MASK_OFFSET UNITYSDK_OFFSET(0x1BBAE8A0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_PREMIUM_PAY_OFFSET UNITYSDK_OFFSET(0x1BBAE110)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_REGISTER_GAMEINTENT_GET_ACTIVITY_ID_OFFSET UNITYSDK_OFFSET(0x1BBADD30)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_REGISTER_GAMEINTENT_GET_SESSION_ID_OFFSET UNITYSDK_OFFSET(0x1BBADD60)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_REGISTER_NP_STATE_OFFSET UNITYSDK_OFFSET(0x1BBAE630)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_UNREGISTER_GAMEINTENT_GET_ACTIVITY_ID_OFFSET UNITYSDK_OFFSET(0x1BBADD90)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_UNREGISTER_GAMEINTENT_GET_SESSION_ID_OFFSET UNITYSDK_OFFSET(0x1BBAE060)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_UNREGISTER_NP_STATE_OFFSET UNITYSDK_OFFSET(0x1BBAE660)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_REGISTER_CONSOLE_BLOCK_UPDATE_OFFSET UNITYSDK_OFFSET(0x1BBAEF00)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_REGISTER_CONSOLE_FRIEND_UPDATE_OFFSET UNITYSDK_OFFSET(0x1BBAEED0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_REGISTER_PS_BLOCK_UPDATE_OFFSET UNITYSDK_OFFSET(0x1BBADA40)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_REGISTER_PS_FRIEND_UPDATE_OFFSET UNITYSDK_OFFSET(0x1BBADA10)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_REPORT_SET_INFO_OFFSET UNITYSDK_OFFSET(0x1BBABA50)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_SDKINVOKE_OFFSET UNITYSDK_OFFSET(0x1BBA74F0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_SET_PS_CLIENT_ID_OFFSET UNITYSDK_OFFSET(0x1BBAC930)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_SET_PS_TROPHY_OFFSET UNITYSDK_OFFSET(0x1BBACD70)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_SHOW_EMPTY_STORE_DIALOG_OFFSET UNITYSDK_OFFSET(0x1BBACEF0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_SHOW_PS_STORE_ICON_OFFSET UNITYSDK_OFFSET(0x1BBACD10)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_SHOW_SYSTEM_MESSAGE_DIALOG_OFFSET UNITYSDK_OFFSET(0x1BBAD420)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_UGC_SET_TOKEN_OFFSET UNITYSDK_OFFSET(0x1BBAC710)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_UGC_SHOW_BBS_AGREEMENT_OFFSET UNITYSDK_OFFSET(0x1BBAC7D0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_UNREGISTER_CONSOLE_BLOCK_UPDATE_OFFSET UNITYSDK_OFFSET(0x1BBAEF60)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_UNREGISTER_CONSOLE_FRIEND_UPDATE_OFFSET UNITYSDK_OFFSET(0x1BBAEF30)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_UNREGISTER_PS_BLOCK_UPDATE_OFFSET UNITYSDK_OFFSET(0x1BBADAA0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_UNREGISTER_PS_FRIEND_UPDATE_OFFSET UNITYSDK_OFFSET(0x1BBADA70)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_UPDATE_OFFSET UNITYSDK_OFFSET(0x1BBA73F0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_WATERMARK_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x1BBAA770)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_WATERMARK_SET_ENABLE_OFFSET UNITYSDK_OFFSET(0x1BBAA6E0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BBB2CC0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBB2C70)

namespace MiHoYo::SDK::Console
{
	inline static constexpr unsigned int MiHoYoSDKDll_TypeDefinitionIndex = 20695;

	class MiHoYoSDKDll : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::Il2CppArray<::System::Object*>** StaticGet_parameters1()
		{
			return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0xA840);
		}
		static ::Il2CppArray<::System::Object*>** StaticGet_parameters0()
		{
			return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0xA848);
		}
		static ::System::Type** StaticGet_miHoYoDll()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0xA850);
		}
		static ::Il2CppArray<::System::Object*>** StaticGet_parameters2()
		{
			return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0xA858);
		}
		static ::MiHoYo::SDK::ClientType* StaticGet_clientType()
		{
			return (::MiHoYo::SDK::ClientType*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x4680);
		}
		static ::MiHoYo::SDK::ChannelType* StaticGet_channel()
		{
			return (::MiHoYo::SDK::ChannelType*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x4684);
		}
		static ::MiHoYo::SDK::PS_IssuerID* StaticGet_issuerId()
		{
			return (::MiHoYo::SDK::PS_IssuerID*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x4688);
		}
		static ::System::Int32* StaticGet_trophyContext()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x468C);
		}
		static ::MiHoYo::SDK::SubChannelType* StaticGet_subChannel()
		{
			return (::MiHoYo::SDK::SubChannelType*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x4690);
		}
		static ::System::Boolean* StaticGet_isInit()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x4694);
		}
		static ::System::Boolean* StaticGet_isBackground()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x4695);
		}
		static ::System::Boolean* StaticGet_isSetEnv()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x4696);
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

		static ::System::String* console_unregister_receive_invite()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_UNREGISTER_RECEIVE_INVITE_OFFSET))();
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

		static ::System::String* inner_sdk_inner_get_user_id(::System::String* args)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_INNER_SDK_INNER_GET_USER_ID_OFFSET))(args);
		}

		static ::System::String* inner_sdk_inner_get_gamebiz(::System::String* args)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_INNER_SDK_INNER_GET_GAMEBIZ_OFFSET))(args);
		}

		static ::System::String* inner_sdk_inner_get_region(::System::String* args)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_INNER_SDK_INNER_GET_REGION_OFFSET))(args);
		}

		static ::System::String* inner_sdk_inner_get_env(::System::String* args)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_INNER_SDK_INNER_GET_ENV_OFFSET))(args);
		}

		static ::System::Boolean CheckInit()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CHECKINIT_OFFSET))();
		}
	};
}
