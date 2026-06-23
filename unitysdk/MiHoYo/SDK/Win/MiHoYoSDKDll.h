#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/ChannelType.h"
#include "unitysdk/MiHoYo/SDK/ClientType.h"
#include "unitysdk/MiHoYo/SDK/SubChannelType.h"
#include "unitysdk/MiHoYo/SDK/Win/MiHoYoSDKDll___c__DisplayClass94_0.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::UI { class InputField; }

#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_ADDINPUTFIELD_OFFSET UNITYSDK_OFFSET(0x1B34A810)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_ALL_GET_LANGUAGE_OFFSET UNITYSDK_OFFSET(0x1B350420)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_ALL_SET_DEVICE_ID_OFFSET UNITYSDK_OFFSET(0x1B34FEE0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_ALL_SET_ENV_AND_GAMEBIZ_OFFSET UNITYSDK_OFFSET(0x1B34C2B0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_ALL_SET_ENV_OFFSET UNITYSDK_OFFSET(0x1B34C1B0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_ALL_SET_LANGUAGE_OFFSET UNITYSDK_OFFSET(0x1B350110)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_ALL_SET_VOLUME_OFFSET UNITYSDK_OFFSET(0x1B34C720)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_AWAKE_OFFSET UNITYSDK_OFFSET(0x1B3499C0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_CAMERA_SET_UI_CAMERA_OFFSET UNITYSDK_OFFSET(0x1B354070)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_CHECKBLACKINVOKELIST_OFFSET UNITYSDK_OFFSET(0x1B34A8F0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_CHECKINIT_OFFSET UNITYSDK_OFFSET(0x1B34CC70)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_CONSOLE_ACHIEVEMENT_DESTORY_OFFSET UNITYSDK_OFFSET(0x1B3567F0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_CONSOLE_ACHIEVEMENT_INIT_OFFSET UNITYSDK_OFFSET(0x1B3567E0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_CONSOLE_CHECK_PERMISSION_OFFSET UNITYSDK_OFFSET(0x1B356120)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_CONSOLE_CHECK_PRIVILEGE_OFFSET UNITYSDK_OFFSET(0x1B356050)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_CONSOLE_CREATE_SESSION_OFFSET UNITYSDK_OFFSET(0x1B356280)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_CONSOLE_GET_ACCOUNT_COUNTRY_OFFSET UNITYSDK_OFFSET(0x1B355A10)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_CONSOLE_GET_ACCOUNT_ID_OFFSET UNITYSDK_OFFSET(0x1B355910)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_CONSOLE_GET_ACHIEVEMENTS_OFFSET UNITYSDK_OFFSET(0x1B356860)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_CONSOLE_GET_ACTIVITIES_OFFSET UNITYSDK_OFFSET(0x1B356490)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_CONSOLE_GET_BLOCK_LIST_OFFSET UNITYSDK_OFFSET(0x1B355BE0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_CONSOLE_GET_FRIEND_LIST_OFFSET UNITYSDK_OFFSET(0x1B355B80)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_CONSOLE_GET_LEADERBOARDS_OFFSET UNITYSDK_OFFSET(0x1B356770)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_CONSOLE_GET_ONLINE_ID_OFFSET UNITYSDK_OFFSET(0x1B355990)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_CONSOLE_GET_SANDBOX_ID_OFFSET UNITYSDK_OFFSET(0x1B355A90)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_CONSOLE_GET_STATISTICS_OFFSET UNITYSDK_OFFSET(0x1B356700)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_CONSOLE_GET_USER_PROFILE_OFFSET UNITYSDK_OFFSET(0x1B355B10)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_CONSOLE_HAS_JOIN_SESSION_OFFSET UNITYSDK_OFFSET(0x1B356430)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_CONSOLE_JOIN_SESSION_OFFSET UNITYSDK_OFFSET(0x1B356360)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_CONSOLE_LEAVE_SESSION_OFFSET UNITYSDK_OFFSET(0x1B3563D0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_CONSOLE_REGISTER_RECEIVE_INVITE_OFFSET UNITYSDK_OFFSET(0x1B356560)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_CONSOLE_RESOLVE_PRIVILEGE_OFFSET UNITYSDK_OFFSET(0x1B3560B0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_CONSOLE_SEND_SESSION_INVITE_OFFSET UNITYSDK_OFFSET(0x1B3561F0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_CONSOLE_SESSION_DESTORY_OFFSET UNITYSDK_OFFSET(0x1B356270)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_CONSOLE_SESSION_INIT_OFFSET UNITYSDK_OFFSET(0x1B356260)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_CONSOLE_SET_SESSION_OFFSET UNITYSDK_OFFSET(0x1B3562F0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_CONSOLE_SHOW_ERROR_DIALOG_OFFSET UNITYSDK_OFFSET(0x1B355FE0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_CONSOLE_SHOW_MESSAGE_DIALOG_OFFSET UNITYSDK_OFFSET(0x1B355F70)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_CONSOLE_SHOW_PROFILE_CARD_OFFSET UNITYSDK_OFFSET(0x1B355F00)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_CONSOLE_SHOW_SESSION_INVITE_OFFSET UNITYSDK_OFFSET(0x1B356190)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_CONSOLE_UNREGISTER_RECEIVE_INVITE_OFFSET UNITYSDK_OFFSET(0x1B3565C0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_CONSOLE_UPDATE_ACHIEVEMENT_OFFSET UNITYSDK_OFFSET(0x1B356800)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_CONSOLE_UPDATE_RECENT_PLAYERS_OFFSET UNITYSDK_OFFSET(0x1B356500)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_CONSOLE_UPDATE_STATISTICS_OFFSET UNITYSDK_OFFSET(0x1B3566A0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_ENABLENATIVEDELEGATE_OFFSET UNITYSDK_OFFSET(0x1B3543D0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_GETDEFERREDDEEPLINK_OFFSET UNITYSDK_OFFSET(0x1B349B30)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_GET_DISK_TYPE_OFFSET UNITYSDK_OFFSET(0x1B353E80)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_GET_MEMORY_SIZE_OFFSET UNITYSDK_OFFSET(0x1B353B70)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_GET_THREAD_COUNT_OFFSET UNITYSDK_OFFSET(0x1B353A70)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_CLEAR_DEFERRED_DEEPLINK_OFFSET UNITYSDK_OFFSET(0x1B354210)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_GET_CHANNEL_ID_OFFSET UNITYSDK_OFFSET(0x1B3505C0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_GET_CLIENT_TYPE_OFFSET UNITYSDK_OFFSET(0x1B356CE0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_GET_CPS_OFFSET UNITYSDK_OFFSET(0x1B3534C0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_GET_DEFERRED_DEEPLINK_OFFSET UNITYSDK_OFFSET(0x1B3541B0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_GET_DEVICE_FINGERPRINT_OFFSET UNITYSDK_OFFSET(0x1B34FFF0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_GET_DEVICE_ID_OFFSET UNITYSDK_OFFSET(0x1B34FF70)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_GET_REGION_MULTIPLE_LANGUAGE_OFFSET UNITYSDK_OFFSET(0x1B350650)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_GET_SUB_CHANNEL_ID_OFFSET UNITYSDK_OFFSET(0x1B353050)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_GET_UAPC_OFFSET UNITYSDK_OFFSET(0x1B3535A0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_SET_CHANNEL_CONFIG_OFFSET UNITYSDK_OFFSET(0x1B34D980)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_SET_COMBO_CONFIG_OFFSET UNITYSDK_OFFSET(0x1B34D230)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_SET_DOMAIN_PREFIX_OFFSET UNITYSDK_OFFSET(0x1B353850)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_SET_GAME_PARAMETERS_OFFSET UNITYSDK_OFFSET(0x1B3518A0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_SET_GAME_VERSION_OFFSET UNITYSDK_OFFSET(0x1B352ED0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_SET_GAME_VOLUME_OFFSET UNITYSDK_OFFSET(0x1B34C770)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_SET_STEAM_ID_OFFSET UNITYSDK_OFFSET(0x1B34E280)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_WEB_VIEW_ANIMATION_ENABLE_OFFSET UNITYSDK_OFFSET(0x1B353EF0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_WEB_VIEW_JOYPAD_CLOSE_ENABLE_OFFSET UNITYSDK_OFFSET(0x1B353FB0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_INITAUTHPARAMETER_OFFSET UNITYSDK_OFFSET(0x1B349A70)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_INIT_OFFSET UNITYSDK_OFFSET(0x1B34B330)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_INNER_SDK_INNER_GET_ENV_OFFSET UNITYSDK_OFFSET(0x1B355850)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_INNER_SDK_INNER_GET_GAMEBIZ_OFFSET UNITYSDK_OFFSET(0x1B355610)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_INNER_SDK_INNER_GET_LANG_OFFSET UNITYSDK_OFFSET(0x1B3553F0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_INNER_SDK_INNER_GET_REGION_OFFSET UNITYSDK_OFFSET(0x1B355700)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_INNER_SDK_INNER_GET_USER_ID_OFFSET UNITYSDK_OFFSET(0x1B3554C0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_INNER_SDK_INNER_REPORT_EVENT_OFFSET UNITYSDK_OFFSET(0x1B354D60)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_ISXBOXHANDHELDFLOW_OFFSET UNITYSDK_OFFSET(0x1B349F10)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LAUNCH_CLOSE_ALL_UI_OFFSET UNITYSDK_OFFSET(0x1B354270)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LAUNCH_ENABLE_AUTO_TEST_OFFSET UNITYSDK_OFFSET(0x1B353860)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LAUNCH_ENABLE_UI_AUTO_TEST_OFFSET UNITYSDK_OFFSET(0x1B353920)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LAUNCH_GET_DISK_FREE_SPACE_OFFSET UNITYSDK_OFFSET(0x1B3531B0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LAUNCH_OPEN_URL_OFFSET UNITYSDK_OFFSET(0x1B352C00)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LAUNCH_SHOW_USER_AGREEMENT_OFFSET UNITYSDK_OFFSET(0x1B353680)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LAUNCH_SHOW_USER_AGREEMENT_WITH_PARAMETERS_COMPLIANCE_OFFSET UNITYSDK_OFFSET(0x1B3537C0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LAUNCH_SHOW_USER_AGREEMENT_WITH_PARAMETERS_OFFSET UNITYSDK_OFFSET(0x1B353710)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_BIND_EMAIL_OFFSET UNITYSDK_OFFSET(0x1B351E60)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_BIND_MOBILE_OFFSET UNITYSDK_OFFSET(0x1B351EE0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_BIND_OFFSET UNITYSDK_OFFSET(0x1B34E340)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_BIND_REAL_NAME_OFFSET UNITYSDK_OFFSET(0x1B351F60)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_CHECK_DEVICE_LIMIT_OFFSET UNITYSDK_OFFSET(0x1B3568C0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_CLOSE_OFFSET UNITYSDK_OFFSET(0x1B3520F0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_CLOSE_PAY_OFFSET UNITYSDK_OFFSET(0x1B350870)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_CLOSE_USER_CENTER_OFFSET UNITYSDK_OFFSET(0x1B34FBE0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_CREATE_ROLE_OFFSET UNITYSDK_OFFSET(0x1B34F560)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_ENTER_GAME_OFFSET UNITYSDK_OFFSET(0x1B34E3D0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_EXIT_OFFSET UNITYSDK_OFFSET(0x1B34D1A0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_GET_ACCOUNT_NAME_OFFSET UNITYSDK_OFFSET(0x1B3500D0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_GET_ASTERISK_NAME_OFFSET UNITYSDK_OFFSET(0x1B352200)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_GET_BIND_STATE_OFFSET UNITYSDK_OFFSET(0x1B351BF0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_GET_PRICE_TIER_OFFSET UNITYSDK_OFFSET(0x1B351130)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_GET_PRODUCT_LIST_OFFSET UNITYSDK_OFFSET(0x1B3511C0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_HAS_CUSTOMER_SERVICE_OFFSET UNITYSDK_OFFSET(0x1B34FE80)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_HAS_FORUM_OFFSET UNITYSDK_OFFSET(0x1B34F600)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_HAS_SCAN_FUNC_OFFSET UNITYSDK_OFFSET(0x1B350B80)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_HAS_USER_CENTER_OFFSET UNITYSDK_OFFSET(0x1B34F6C0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_IS_ACCOUNT_BIND_MOBILE_OFFSET UNITYSDK_OFFSET(0x1B3519E0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_IS_ACCOUNT_REAL_NAME_OFFSET UNITYSDK_OFFSET(0x1B351AE0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_LEVEL_UP_OFFSET UNITYSDK_OFFSET(0x1B34F570)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_LIST_GOODS_OFFSET UNITYSDK_OFFSET(0x1B351810)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_LOGIN_OFFSET UNITYSDK_OFFSET(0x1B34CA70)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_LOGOUT_OFFSET UNITYSDK_OFFSET(0x1B34CEB0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_LOGOUT_WITHOUT_CONFIRM_OFFSET UNITYSDK_OFFSET(0x1B34CFE0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_OPEN_FORUM_OFFSET UNITYSDK_OFFSET(0x1B34F660)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_OPEN_PROTOCOL_WEBVIEW_OFFSET UNITYSDK_OFFSET(0x1B352390)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_OPEN_URL_WITH_LOGIN_STATUS_OFFSET UNITYSDK_OFFSET(0x1B352460)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_OPEN_USER_CENTER_OFFSET UNITYSDK_OFFSET(0x1B34FA10)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_PAY_OFFSET UNITYSDK_OFFSET(0x1B3506D0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_SET_ACCOUNT_OFFSET UNITYSDK_OFFSET(0x1B352060)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_SET_AUTO_TEST_ACCOUNT_OFFSET UNITYSDK_OFFSET(0x1B352170)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_SET_GUEST_FUNC_OFFSET UNITYSDK_OFFSET(0x1B3504A0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_SET_SERVER_ID_OFFSET UNITYSDK_OFFSET(0x1B34DF70)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_SET_SHOW_CLOSE_BTN_OFFSET UNITYSDK_OFFSET(0x1B350530)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_SWITCH_ROLE_OFFSET UNITYSDK_OFFSET(0x1B34D110)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_VERIFY_EMAIL_OFFSET UNITYSDK_OFFSET(0x1B351FE0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_WILL_ENTER_GAME_OFFSET UNITYSDK_OFFSET(0x1B34EEC0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_NET_GET_HTTPDNS_CONFIG_OFFSET UNITYSDK_OFFSET(0x1B353DA0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_NOTICE_CHECK_CUSTOM_POP_NOTICE_AND_RED_POINT_OFFSET UNITYSDK_OFFSET(0x1B3510A0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_NOTICE_CLOSE_CUSTOM_NOTICE_OFFSET UNITYSDK_OFFSET(0x1B350ED0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_NOTICE_CLOSE_NOTICE_OFFSET UNITYSDK_OFFSET(0x1B350C70)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_NOTICE_SET_NOTICE_URL_OFFSET UNITYSDK_OFFSET(0x1B352E40)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_NOTICE_SHOW_CUSTOM_NOTICE_OFFSET UNITYSDK_OFFSET(0x1B350E40)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_NOTICE_SHOW_CUSTOM_POP_NOTICE_OFFSET UNITYSDK_OFFSET(0x1B350F50)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_NOTICE_SHOW_NOTICE_OFFSET UNITYSDK_OFFSET(0x1B350BE0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_NOTICE_SHOW_POP_IMAGE_OFFSET UNITYSDK_OFFSET(0x1B352D30)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_NOTICE_SHOW_POP_NOTICE_OFFSET UNITYSDK_OFFSET(0x1B350CF0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_ONAPPLICATIONFOCUS_OFFSET UNITYSDK_OFFSET(0x1B349FF0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_ONAPPLICATIONQUIT_OFFSET UNITYSDK_OFFSET(0x1B34A440)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1B34A750)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_ONDOWNLOADNOTIFICATION_OFFSET UNITYSDK_OFFSET(0x1B34A7F0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_ONNOTIFICATIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x1B34A7D0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_REGISTER_CONSOLE_BLOCK_UPDATE_OFFSET UNITYSDK_OFFSET(0x1B355CF0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_REGISTER_CONSOLE_FRIEND_UPDATE_OFFSET UNITYSDK_OFFSET(0x1B355C40)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_REPORT_SET_INFO_OFFSET UNITYSDK_OFFSET(0x1B352F90)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_SDKINVOKE_OFFSET UNITYSDK_OFFSET(0x1B34A9B0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_SETHTTPSERVERENABLE_OFFSET UNITYSDK_OFFSET(0x1B34A830)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_START_OFFSET UNITYSDK_OFFSET(0x1B34A6D0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_UGC_SET_TOKEN_OFFSET UNITYSDK_OFFSET(0x1B354310)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_UGC_SHOW_BBS_AGREEMENT_OFFSET UNITYSDK_OFFSET(0x1B354840)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_UGC_SHOW_UGC_PROTOCOL_OFFSET UNITYSDK_OFFSET(0x1B354AD0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_UI_PLUGIN_DO_ACTION_OFFSET UNITYSDK_OFFSET(0x1B34CD30)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_UI_PLUGIN_MANUALLY_SHOW_OFFSET UNITYSDK_OFFSET(0x1B34CE30)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_UI_PLUGIN_REGISTER_OFFSET UNITYSDK_OFFSET(0x1B34CDB0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_UNREGISTER_CONSOLE_BLOCK_UPDATE_OFFSET UNITYSDK_OFFSET(0x1B355E50)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_UNREGISTER_CONSOLE_FRIEND_UPDATE_OFFSET UNITYSDK_OFFSET(0x1B355DA0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_WATERMARK_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x1B353D10)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_WATERMARK_SET_ENABLE_OFFSET UNITYSDK_OFFSET(0x1B353C80)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_WEBVIEW_GET_APP_AVAILABLE_MEM_OFFSET UNITYSDK_OFFSET(0x1B354150)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_WEBVIEW_MEM_ALLOC_OFFSET UNITYSDK_OFFSET(0x1B354190)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_WEBVIEW_MEM_RELEASE_OFFSET UNITYSDK_OFFSET(0x1B3541A0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_WEB_GET_RUNTIME_MEM_OFFSET UNITYSDK_OFFSET(0x1B354110)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_WEB_LOAD_URL_OFFSET UNITYSDK_OFFSET(0x1B3530F0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_WEB_SET_JOYPAD_CLOSE_BUTTON_TYPE_OFFSET UNITYSDK_OFFSET(0x1B353430)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_WEB_SET_JOYPAD_ENABLE_OFFSET UNITYSDK_OFFSET(0x1B353230)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_WEB_SET_JOYPAD_EXCHANGE_OFFSET UNITYSDK_OFFSET(0x1B353390)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_WEB_SET_JOYPAD_TYPE_OFFSET UNITYSDK_OFFSET(0x1B3532F0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_WEB_SET_LINEAR_OFFSET UNITYSDK_OFFSET(0x1B3531E0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_WEB_SET_USERAGENT_OFFSET UNITYSDK_OFFSET(0x1B353180)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B356E10)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B356DC0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL__LOGIN_OPEN_URL_WITH_LOGIN_STATUS_G__OPENURLFALLBACK_94_0_OFFSET UNITYSDK_OFFSET(0x1B352A30)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int MiHoYoSDKDll_TypeDefinitionIndex = 21182;

	class MiHoYoSDKDll : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Type** StaticGet_miHoYoDll()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0xA270);
		}
		static ::System::String** StaticGet_deferredDeepLink()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0xA278);
		}
		static ::System::String** StaticGet_authTicket()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0xA280);
		}
		static ::Il2CppArray<::System::Object*>** StaticGet_parameters2()
		{
			return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0xA288);
		}
		static ::System::String** StaticGet_thirdpartyType()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0xA290);
		}
		static ::Il2CppArray<::System::Object*>** StaticGet_parameters1()
		{
			return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0xA298);
		}
		static ::System::String** StaticGet_traceId()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0xA2A0);
		}
		static ::Il2CppArray<::System::Object*>** StaticGet_parameters0()
		{
			return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0xA2A8);
		}
		static ::System::Boolean* StaticGet_couldLogin()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x45D0);
		}
		static ::System::Boolean* StaticGet_sm_bNeedSyncConfig()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x45D1);
		}
		static ::MiHoYo::SDK::ClientType* StaticGet_clientType()
		{
			return (::MiHoYo::SDK::ClientType*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x45D4);
		}
		static ::System::Boolean* StaticGet_isSetEnv()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x45D8);
		}
		static ::System::Boolean* StaticGet_isInit()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x45D9);
		}
		static ::System::Boolean* StaticGet_sm_bNeedUpdateNativeConfig()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x45DA);
		}
		static ::MiHoYo::SDK::ChannelType* StaticGet_channel()
		{
			return (::MiHoYo::SDK::ChannelType*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x45DC);
		}
		static ::MiHoYo::SDK::SubChannelType* StaticGet_subChannel()
		{
			return (::MiHoYo::SDK::SubChannelType*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x45E0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL__CCTOR_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_AWAKE_OFFSET))(this);
		}

		static ::System::Void InitAuthParameter()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_INITAUTHPARAMETER_OFFSET))();
		}

		static ::System::String* GetDeferredDeeplink()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_GETDEFERREDDEEPLINK_OFFSET))();
		}

		static ::System::Boolean IsXboxHandheldFlow()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_ISXBOXHANDHELDFLOW_OFFSET))();
		}

		::System::Void OnApplicationFocus(::System::Boolean focus)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_ONAPPLICATIONFOCUS_OFFSET))(this, focus);
		}

		::System::Void OnApplicationQuit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_ONAPPLICATIONQUIT_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_START_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnNotificationCallback(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_ONNOTIFICATIONCALLBACK_OFFSET))(this, message);
		}

		::System::Void OnDownloadNotification(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_ONDOWNLOADNOTIFICATION_OFFSET))(this, message);
		}

		::System::Void AddInputField(::UnityEngine::UI::InputField* inputField)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::InputField*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_ADDINPUTFIELD_OFFSET))(this, inputField);
		}

		static ::System::Void SetHttpServerEnable(::System::Boolean enable)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_SETHTTPSERVERENABLE_OFFSET))(enable);
		}

		static ::System::Boolean CheckBlackInvokeList(::System::String* funcName)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_CHECKBLACKINVOKELIST_OFFSET))(funcName);
		}

		static ::System::String* SDKInvoke(::System::String* funcName, ::System::String* args, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_SDKINVOKE_OFFSET))(funcName, args, callback);
		}

		static ::System::Void Init(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_INIT_OFFSET))(callback);
		}

		static ::System::String* all_set_env(::System::String* env)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_ALL_SET_ENV_OFFSET))(env);
		}

		static ::System::String* all_set_env_and_gamebiz(::System::String* dataString)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_ALL_SET_ENV_AND_GAMEBIZ_OFFSET))(dataString);
		}

		static ::System::String* all_set_volume(::System::String* volume)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_ALL_SET_VOLUME_OFFSET))(volume);
		}

		static ::System::String* info_set_game_volume(::System::String* volumeInfoStr)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_SET_GAME_VOLUME_OFFSET))(volumeInfoStr);
		}

		static ::System::String* login_login(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_LOGIN_OFFSET))(callback);
		}

		static ::System::Void ui_plugin_do_action(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_UI_PLUGIN_DO_ACTION_OFFSET))(strArgs, callback);
		}

		static ::System::Void ui_plugin_register(::System::String* strArgs)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_UI_PLUGIN_REGISTER_OFFSET))(strArgs);
		}

		static ::System::Void ui_plugin_manually_show(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_UI_PLUGIN_MANUALLY_SHOW_OFFSET))(strArgs, callback);
		}

		static ::System::String* login_logout(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_LOGOUT_OFFSET))(callback);
		}

		static ::System::String* login_logout_without_confirm(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_LOGOUT_WITHOUT_CONFIRM_OFFSET))(callback);
		}

		static ::System::String* login_switch_role(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_SWITCH_ROLE_OFFSET))(callback);
		}

		static ::System::String* login_exit(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_EXIT_OFFSET))(callback);
		}

		static ::System::String* info_set_combo_config(::System::String* jsonString)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_SET_COMBO_CONFIG_OFFSET))(jsonString);
		}

		static ::System::String* info_set_channel_config(::System::String* jsonString)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_SET_CHANNEL_CONFIG_OFFSET))(jsonString);
		}

		static ::System::String* login_set_server_id(::System::String* value)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_SET_SERVER_ID_OFFSET))(value);
		}

		static ::System::String* info_set_steam_id(::System::String* steamID)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_SET_STEAM_ID_OFFSET))(steamID);
		}

		static ::System::String* login_bind(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_BIND_OFFSET))(callback);
		}

		static ::System::String* login_enter_game(::System::String* jsonString)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_ENTER_GAME_OFFSET))(jsonString);
		}

		static ::System::String* login_will_enter_game(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_WILL_ENTER_GAME_OFFSET))(jsonString, callback);
		}

		static ::System::String* login_create_role(::System::String* jsonString)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_CREATE_ROLE_OFFSET))(jsonString);
		}

		static ::System::String* login_level_up(::System::String* jsonString)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_LEVEL_UP_OFFSET))(jsonString);
		}

		static ::System::String* login_has_forum()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_HAS_FORUM_OFFSET))();
		}

		static ::System::String* login_open_forum()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_OPEN_FORUM_OFFSET))();
		}

		static ::System::String* login_has_user_center()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_HAS_USER_CENTER_OFFSET))();
		}

		static ::System::String* login_open_user_center(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_OPEN_USER_CENTER_OFFSET))(callback);
		}

		static ::System::String* login_close_user_center()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_CLOSE_USER_CENTER_OFFSET))();
		}

		static ::System::String* login_has_customer_service()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_HAS_CUSTOMER_SERVICE_OFFSET))();
		}

		static ::System::String* all_set_device_id(::System::String* value)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_ALL_SET_DEVICE_ID_OFFSET))(value);
		}

		static ::System::String* info_get_device_id()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_GET_DEVICE_ID_OFFSET))();
		}

		static ::System::String* info_get_device_fingerprint()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_GET_DEVICE_FINGERPRINT_OFFSET))();
		}

		static ::System::String* login_get_account_name()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_GET_ACCOUNT_NAME_OFFSET))();
		}

		static ::System::String* all_set_language(::System::String* value)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_ALL_SET_LANGUAGE_OFFSET))(value);
		}

		static ::System::String* all_get_language()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_ALL_GET_LANGUAGE_OFFSET))();
		}

		static ::System::String* login_set_guest_func(::System::String* flag)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_SET_GUEST_FUNC_OFFSET))(flag);
		}

		static ::System::String* login_set_show_close_btn(::System::String* content)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_SET_SHOW_CLOSE_BTN_OFFSET))(content);
		}

		static ::System::String* info_get_channel_id()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_GET_CHANNEL_ID_OFFSET))();
		}

		static ::System::String* info_get_region_multiple_language(::System::String* code)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_GET_REGION_MULTIPLE_LANGUAGE_OFFSET))(code);
		}

		static ::System::String* login_pay(::System::String* jsonString, ::System::Action_1<::System::String*>* externalCallback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_PAY_OFFSET))(jsonString, externalCallback);
		}

		static ::System::String* login_close_pay()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_CLOSE_PAY_OFFSET))();
		}

		static ::System::String* login_has_scan_func()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_HAS_SCAN_FUNC_OFFSET))();
		}

		static ::System::String* notice_show_notice(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_NOTICE_SHOW_NOTICE_OFFSET))(jsonString, callback);
		}

		static ::System::String* notice_close_notice()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_NOTICE_CLOSE_NOTICE_OFFSET))();
		}

		static ::System::String* notice_show_pop_notice()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_NOTICE_SHOW_POP_NOTICE_OFFSET))();
		}

		static ::System::String* notice_show_custom_notice(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_NOTICE_SHOW_CUSTOM_NOTICE_OFFSET))(jsonString, callback);
		}

		static ::System::String* notice_close_custom_notice()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_NOTICE_CLOSE_CUSTOM_NOTICE_OFFSET))();
		}

		static ::System::String* notice_show_custom_pop_notice(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_NOTICE_SHOW_CUSTOM_POP_NOTICE_OFFSET))(jsonString, callback);
		}

		static ::System::String* notice_check_custom_pop_notice_and_red_point(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_NOTICE_CHECK_CUSTOM_POP_NOTICE_AND_RED_POINT_OFFSET))(jsonString, callback);
		}

		static ::System::String* login_get_price_tier(::System::String* currency, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_GET_PRICE_TIER_OFFSET))(currency, callback);
		}

		static ::System::String* login_get_product_list(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_GET_PRODUCT_LIST_OFFSET))(jsonString, callback);
		}

		static ::System::String* login_list_goods(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_LIST_GOODS_OFFSET))(jsonString, callback);
		}

		static ::System::String* info_set_game_parameters(::System::String* jsonString)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_SET_GAME_PARAMETERS_OFFSET))(jsonString);
		}

		static ::System::String* login_is_account_bind_mobile()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_IS_ACCOUNT_BIND_MOBILE_OFFSET))();
		}

		static ::System::String* login_is_account_real_name()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_IS_ACCOUNT_REAL_NAME_OFFSET))();
		}

		static ::System::String* login_get_bind_state()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_GET_BIND_STATE_OFFSET))();
		}

		static ::System::Void login_bind_email(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_BIND_EMAIL_OFFSET))(callback);
		}

		static ::System::Void login_bind_mobile(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_BIND_MOBILE_OFFSET))(callback);
		}

		static ::System::Void login_bind_real_name(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_BIND_REAL_NAME_OFFSET))(callback);
		}

		static ::System::Void login_verify_email(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_VERIFY_EMAIL_OFFSET))(callback);
		}

		static ::System::String* login_set_account(::System::String* jsonString)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_SET_ACCOUNT_OFFSET))(jsonString);
		}

		static ::System::String* login_close()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_CLOSE_OFFSET))();
		}

		static ::System::String* login_set_auto_test_account(::System::String* jsonString)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_SET_AUTO_TEST_ACCOUNT_OFFSET))(jsonString);
		}

		static ::System::String* login_get_asterisk_name()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_GET_ASTERISK_NAME_OFFSET))();
		}

		static ::System::String* login_open_protocol_webview(::System::String* jsonString)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_OPEN_PROTOCOL_WEBVIEW_OFFSET))(jsonString);
		}

		static ::System::String* login_open_url_with_login_status(::System::String* jsonString)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_OPEN_URL_WITH_LOGIN_STATUS_OFFSET))(jsonString);
		}

		static ::System::String* launch_open_url(::System::String* url)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LAUNCH_OPEN_URL_OFFSET))(url);
		}

		static ::System::String* notice_show_pop_image(::System::String* animation)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_NOTICE_SHOW_POP_IMAGE_OFFSET))(animation);
		}

		static ::System::String* notice_set_notice_url(::System::String* url)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_NOTICE_SET_NOTICE_URL_OFFSET))(url);
		}

		static ::System::String* info_set_game_version(::System::String* version)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_SET_GAME_VERSION_OFFSET))(version);
		}

		static ::System::String* report_set_info(::System::String* jsonString)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_REPORT_SET_INFO_OFFSET))(jsonString);
		}

		static ::System::String* info_get_sub_channel_id()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_GET_SUB_CHANNEL_ID_OFFSET))();
		}

		static ::System::String* web_load_url(::System::String* url)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_WEB_LOAD_URL_OFFSET))(url);
		}

		static ::System::String* web_set_useragent(::System::String* content)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_WEB_SET_USERAGENT_OFFSET))(content);
		}

		static ::System::String* launch_get_disk_free_space()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LAUNCH_GET_DISK_FREE_SPACE_OFFSET))();
		}

		static ::System::String* web_set_linear(::System::String* linear)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_WEB_SET_LINEAR_OFFSET))(linear);
		}

		static ::System::String* web_set_joypad_enable(::System::String* enable)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_WEB_SET_JOYPAD_ENABLE_OFFSET))(enable);
		}

		static ::System::String* web_set_joypad_type(::System::String* joyPadType)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_WEB_SET_JOYPAD_TYPE_OFFSET))(joyPadType);
		}

		static ::System::String* web_set_joypad_exchange(::System::String* joyPadExchange)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_WEB_SET_JOYPAD_EXCHANGE_OFFSET))(joyPadExchange);
		}

		static ::System::String* web_set_joypad_close_button_type(::System::String* closeButton)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_WEB_SET_JOYPAD_CLOSE_BUTTON_TYPE_OFFSET))(closeButton);
		}

		static ::System::String* info_get_cps()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_GET_CPS_OFFSET))();
		}

		static ::System::String* info_get_uapc()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_GET_UAPC_OFFSET))();
		}

		static ::System::String* launch_show_user_agreement(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LAUNCH_SHOW_USER_AGREEMENT_OFFSET))(callback);
		}

		static ::System::String* launch_show_user_agreement_with_parameters(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LAUNCH_SHOW_USER_AGREEMENT_WITH_PARAMETERS_OFFSET))(jsonString, callback);
		}

		static ::System::String* launch_show_user_agreement_with_parameters_compliance(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LAUNCH_SHOW_USER_AGREEMENT_WITH_PARAMETERS_COMPLIANCE_OFFSET))(jsonString, callback);
		}

		static ::System::String* info_set_domain_prefix(::System::String* domain_prefix)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_SET_DOMAIN_PREFIX_OFFSET))(domain_prefix);
		}

		static ::System::String* launch_enable_auto_test(::System::String* enable)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LAUNCH_ENABLE_AUTO_TEST_OFFSET))(enable);
		}

		static ::System::String* launch_enable_ui_auto_test(::System::String* enable)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LAUNCH_ENABLE_UI_AUTO_TEST_OFFSET))(enable);
		}

		static ::System::Boolean CheckInit()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_CHECKINIT_OFFSET))();
		}

		static ::System::String* get_thread_count(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_GET_THREAD_COUNT_OFFSET))(callback);
		}

		static ::System::String* get_memory_size(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_GET_MEMORY_SIZE_OFFSET))(callback);
		}

		static ::System::String* watermark_set_enable(::System::String* args)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_WATERMARK_SET_ENABLE_OFFSET))(args);
		}

		static ::System::String* watermark_set_config(::System::String* jsonStrings)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_WATERMARK_SET_CONFIG_OFFSET))(jsonStrings);
		}

		static ::System::String* net_get_httpdns_config(::System::String* args)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_NET_GET_HTTPDNS_CONFIG_OFFSET))(args);
		}

		static ::System::String* get_disk_type(::System::String* drive)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_GET_DISK_TYPE_OFFSET))(drive);
		}

		static ::System::Void info_web_view_animation_enable(::System::String* enable)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_WEB_VIEW_ANIMATION_ENABLE_OFFSET))(enable);
		}

		static ::System::Void info_web_view_joypad_close_enable(::System::String* enable)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_WEB_VIEW_JOYPAD_CLOSE_ENABLE_OFFSET))(enable);
		}

		static ::System::String* camera_set_ui_camera(::System::String* jsonString)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_CAMERA_SET_UI_CAMERA_OFFSET))(jsonString);
		}

		static ::System::String* web_get_runtime_mem(::System::String* jsonString)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_WEB_GET_RUNTIME_MEM_OFFSET))(jsonString);
		}

		static ::System::String* webview_get_app_available_mem(::System::String* jsonString)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_WEBVIEW_GET_APP_AVAILABLE_MEM_OFFSET))(jsonString);
		}

		static ::System::Void webview_mem_alloc(::System::String* jsonString)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_WEBVIEW_MEM_ALLOC_OFFSET))(jsonString);
		}

		static ::System::Void webview_mem_release(::System::String* jsonString)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_WEBVIEW_MEM_RELEASE_OFFSET))(jsonString);
		}

		static ::System::String* info_get_deferred_deeplink()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_GET_DEFERRED_DEEPLINK_OFFSET))();
		}

		static ::System::Void info_clear_deferred_deeplink()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_CLEAR_DEFERRED_DEEPLINK_OFFSET))();
		}

		static ::System::String* launch_close_all_ui(::System::String* args, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LAUNCH_CLOSE_ALL_UI_OFFSET))(args, callback);
		}

		static ::System::String* ugc_set_token(::System::String* args, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_UGC_SET_TOKEN_OFFSET))(args, callback);
		}

		static ::System::String* ugc_show_bbs_agreement(::System::String* args, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_UGC_SHOW_BBS_AGREEMENT_OFFSET))(args, callback);
		}

		static ::System::String* ugc_show_ugc_protocol(::System::String* args, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_UGC_SHOW_UGC_PROTOCOL_OFFSET))(args, callback);
		}

		static ::System::Void inner_sdk_inner_report_event(::System::String* args)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_INNER_SDK_INNER_REPORT_EVENT_OFFSET))(args);
		}

		static ::System::String* inner_sdk_inner_get_lang(::System::String* args)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_INNER_SDK_INNER_GET_LANG_OFFSET))(args);
		}

		static ::System::String* inner_sdk_inner_get_user_id(::System::String* args)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_INNER_SDK_INNER_GET_USER_ID_OFFSET))(args);
		}

		static ::System::String* inner_sdk_inner_get_gamebiz(::System::String* args)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_INNER_SDK_INNER_GET_GAMEBIZ_OFFSET))(args);
		}

		static ::System::String* inner_sdk_inner_get_region(::System::String* args)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_INNER_SDK_INNER_GET_REGION_OFFSET))(args);
		}

		static ::System::String* inner_sdk_inner_get_env(::System::String* args)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_INNER_SDK_INNER_GET_ENV_OFFSET))(args);
		}

		static ::System::String* console_get_account_id()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_CONSOLE_GET_ACCOUNT_ID_OFFSET))();
		}

		static ::System::String* console_get_online_id()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_CONSOLE_GET_ONLINE_ID_OFFSET))();
		}

		static ::System::String* console_get_account_country()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_CONSOLE_GET_ACCOUNT_COUNTRY_OFFSET))();
		}

		static ::System::String* console_get_sandbox_id()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_CONSOLE_GET_SANDBOX_ID_OFFSET))();
		}

		static ::System::String* console_get_user_profile(::System::String* xuid, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_CONSOLE_GET_USER_PROFILE_OFFSET))(xuid, callback);
		}

		static ::System::String* console_get_friend_list(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_CONSOLE_GET_FRIEND_LIST_OFFSET))(callback);
		}

		static ::System::String* console_get_block_list(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_CONSOLE_GET_BLOCK_LIST_OFFSET))(callback);
		}

		static ::System::String* register_console_friend_update(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_REGISTER_CONSOLE_FRIEND_UPDATE_OFFSET))(callback);
		}

		static ::System::String* register_console_block_update(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_REGISTER_CONSOLE_BLOCK_UPDATE_OFFSET))(callback);
		}

		static ::System::String* unregister_console_friend_update()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_UNREGISTER_CONSOLE_FRIEND_UPDATE_OFFSET))();
		}

		static ::System::String* unregister_console_block_update()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_UNREGISTER_CONSOLE_BLOCK_UPDATE_OFFSET))();
		}

		static ::System::String* console_show_profile_card(::System::String* xuid, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_CONSOLE_SHOW_PROFILE_CARD_OFFSET))(xuid, callback);
		}

		static ::System::String* console_show_message_dialog(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_CONSOLE_SHOW_MESSAGE_DIALOG_OFFSET))(jsonString, callback);
		}

		static ::System::String* console_show_error_dialog(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_CONSOLE_SHOW_ERROR_DIALOG_OFFSET))(jsonString, callback);
		}

		static ::System::String* console_check_privilege(::System::String* strPrivilege)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_CONSOLE_CHECK_PRIVILEGE_OFFSET))(strPrivilege);
		}

		static ::System::String* console_resolve_privilege(::System::String* strPrivilege, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_CONSOLE_RESOLVE_PRIVILEGE_OFFSET))(strPrivilege, callback);
		}

		static ::System::String* console_check_permission(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_CONSOLE_CHECK_PERMISSION_OFFSET))(jsonString, callback);
		}

		static ::System::String* console_show_session_invite(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_CONSOLE_SHOW_SESSION_INVITE_OFFSET))(callback);
		}

		static ::System::String* console_send_session_invite(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_CONSOLE_SEND_SESSION_INVITE_OFFSET))(jsonString, callback);
		}

		static ::System::String* console_session_init()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_CONSOLE_SESSION_INIT_OFFSET))();
		}

		static ::System::String* console_session_destory()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_CONSOLE_SESSION_DESTORY_OFFSET))();
		}

		static ::System::String* console_create_session(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_CONSOLE_CREATE_SESSION_OFFSET))(jsonString, callback);
		}

		static ::System::String* console_set_session(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_CONSOLE_SET_SESSION_OFFSET))(jsonString, callback);
		}

		static ::System::String* console_join_session(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_CONSOLE_JOIN_SESSION_OFFSET))(jsonString, callback);
		}

		static ::System::String* console_leave_session(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_CONSOLE_LEAVE_SESSION_OFFSET))(callback);
		}

		static ::System::String* console_has_join_session()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_CONSOLE_HAS_JOIN_SESSION_OFFSET))();
		}

		static ::System::String* console_get_activities(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_CONSOLE_GET_ACTIVITIES_OFFSET))(jsonString, callback);
		}

		static ::System::String* console_update_recent_players(::System::String* jsonString)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_CONSOLE_UPDATE_RECENT_PLAYERS_OFFSET))(jsonString);
		}

		static ::System::String* console_register_receive_invite(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_CONSOLE_REGISTER_RECEIVE_INVITE_OFFSET))(callback);
		}

		static ::System::String* console_unregister_receive_invite()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_CONSOLE_UNREGISTER_RECEIVE_INVITE_OFFSET))();
		}

		static ::System::String* console_update_statistics(::System::String* jsonString)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_CONSOLE_UPDATE_STATISTICS_OFFSET))(jsonString);
		}

		static ::System::String* console_get_statistics(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_CONSOLE_GET_STATISTICS_OFFSET))(jsonString, callback);
		}

		static ::System::String* console_get_leaderboards(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_CONSOLE_GET_LEADERBOARDS_OFFSET))(jsonString, callback);
		}

		static ::System::String* console_achievement_init()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_CONSOLE_ACHIEVEMENT_INIT_OFFSET))();
		}

		static ::System::String* console_achievement_destory()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_CONSOLE_ACHIEVEMENT_DESTORY_OFFSET))();
		}

		static ::System::String* console_update_achievement(::System::String* jsonString)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_CONSOLE_UPDATE_ACHIEVEMENT_OFFSET))(jsonString);
		}

		static ::System::String* console_get_achievements(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_CONSOLE_GET_ACHIEVEMENTS_OFFSET))(callback);
		}

		static ::System::String* login_check_device_limit(::System::String* args, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_CHECK_DEVICE_LIMIT_OFFSET))(args, callback);
		}

		static ::System::String* info_get_client_type()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_GET_CLIENT_TYPE_OFFSET))();
		}

		static ::System::Boolean EnableNativeDelegate(::System::Boolean bForceEnterGame)
		{
			return ((::System::Boolean(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_ENABLENATIVEDELEGATE_OFFSET))(bForceEnterGame);
		}

		static ::System::Void _login_open_url_with_login_status_g__OpenUrlFallback_94_0(::System::String* openUrl, ::MiHoYo::SDK::Win::MiHoYoSDKDll___c__DisplayClass94_0& a2)
		{
			return ((::System::Void(*)(::System::String*, ::MiHoYo::SDK::Win::MiHoYoSDKDll___c__DisplayClass94_0&))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL__LOGIN_OPEN_URL_WITH_LOGIN_STATUS_G__OPENURLFALLBACK_94_0_OFFSET))(openUrl, a2);
		}
	};
}
