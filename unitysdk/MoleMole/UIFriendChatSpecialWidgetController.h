#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_34.h"
#include "unitysdk/Enum_3_D5E55949F51D9DD0.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/MoleMole/UIFriendChatSpecialWidgetController_ForumPostDataResult.h"

class Class_0_16E4307DCC419505_34;
class Class_1_1F4DFD6C02320296;
class Class_1_9EDE5D0623B668B8;
class Class_1_B1CC8F53861C28C2;
class Class_2_2F3C7D4EFC74D485;
class Class_2_DF3786176D510571_1;
class Class_2_DF3786176D510571_1_Class_2_0876E59DDB7B6CE0_2;
class Class_2_DF3786176D510571_1_Class_2_0876E59DDB7B6CE0_3;
class Class_2_DF3786176D510571_1_Class_2_48B632E09D53EBC4_10;
class Class_2_DF3786176D510571_1_Class_2_48B632E09D53EBC4_11;
class Class_2_DF3786176D510571_1_Class_2_48B632E09D53EBC4_9;
class Class_2_DF3786176D510571_1_Class_2_840B46798E380C0F_2;
class Class_3_3CB7782166350F5B;
class Class_3_7881E33311C1DE63;
class Class_3_920D00A4D2C57DD8_7;
class Class_3_9D37E1638DCEF44B;
class Class_3_F402EAE70F3E0E28_17;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIFriendChatCommonInfoUIWidgetController; }
namespace MoleMole { class UIFriendChatCommonTopUIWidgetController; }
namespace MoleMole { class UIFriendChatSpecialWidgetController_ShareIconData; }
namespace System { class EventArgs; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER_CHECKOPENPOSTSTATE_OFFSET UNITYSDK_OFFSET(0x19FA6CC0)
#define MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER_DEALJOINABLEREQUEST_OFFSET UNITYSDK_OFFSET(0x19FA47D0)
#define MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER_INITINVITEUIVIEW_OFFSET UNITYSDK_OFFSET(0x19FA33C0)
#define MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER_INITSELFINVITEUIVIEW_OFFSET UNITYSDK_OFFSET(0x19FA20F0)
#define MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER_INITSHAREPLAYERBOSSCHALLENGUIVIEW_OFFSET UNITYSDK_OFFSET(0x19FA3E50)
#define MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER_INITSHAREPLAYERFORUMPOSTUIVIEW_OFFSET UNITYSDK_OFFSET(0x19FA4660)
#define MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER_INITSHAREPLAYERGACHAUIVIEW_OFFSET UNITYSDK_OFFSET(0x19FA3B70)
#define MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER_INITSHARESELFBOSSCHALLENGUIVIEW_OFFSET UNITYSDK_OFFSET(0x19FA2AB0)
#define MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER_INITSHARESELFFORUMPOSTUIVIEW_OFFSET UNITYSDK_OFFSET(0x19FA32E0)
#define MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER_INITSHARESELFGACHAUIVIEW_OFFSET UNITYSDK_OFFSET(0x19FA27D0)
#define MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x19FA1820)
#define MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19FA1610)
#define MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x19FA1720)
#define MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19FA16A0)
#define MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19FA11C0)
#define MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER_ONUPDATECHATMESSAGEROW_OFFSET UNITYSDK_OFFSET(0x19FA4740)
#define MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER_PROCESSFORUMPOSTDATA_OFFSET UNITYSDK_OFFSET(0x19FA6B70)
#define MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER_PROCESSGACHADATA_OFFSET UNITYSDK_OFFSET(0x19FA56C0)
#define MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER_REFRESHPLAYERSPECIALCONTENTMSGVIEW_OFFSET UNITYSDK_OFFSET(0x19FA69F0)
#define MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER_REFRESHSELFSPECIALCONTENTMSGVIEW_OFFSET UNITYSDK_OFFSET(0x19FA6870)
#define MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER_RESETSPECIALUI_OFFSET UNITYSDK_OFFSET(0x19FA1EA0)
#define MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER_RESETUIVIEW_OFFSET UNITYSDK_OFFSET(0x19FA1DE0)
#define MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER_SETUPICONUI_OFFSET UNITYSDK_OFFSET(0x19FA6090)
#define MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER_SETUPRARITYUI_OFFSET UNITYSDK_OFFSET(0x19FA5ED0)
#define MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER_SETUPSCOREUI_OFFSET UNITYSDK_OFFSET(0x19FA66C0)
#define MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER_SETUPSTARUI_OFFSET UNITYSDK_OFFSET(0x19FA6630)
#define MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER_SWITCHINVITETOINVALIDSTATE_OFFSET UNITYSDK_OFFSET(0x19FA5390)
#define MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19FA6DF0)
#define MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19FA6E30)
#define MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x19FA6EC0)
#define MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19FA6F60)
#define MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19FA6FF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIFriendChatSpecialWidgetController_TypeDefinitionIndex = 87525;

	class UIFriendChatSpecialWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_DF3786176D510571_1* _view; // 0x2F0
		::Class_2_DF3786176D510571_1_Class_2_0876E59DDB7B6CE0_2* _playerSpecialContentMsgView; // 0x2F8
		::Class_2_DF3786176D510571_1_Class_2_48B632E09D53EBC4_11* _playerScoreWidgetView; // 0x300
		::Class_2_DF3786176D510571_1_Class_2_48B632E09D53EBC4_10* _playerStarWidgetView; // 0x308
		::Class_2_DF3786176D510571_1_Class_2_840B46798E380C0F_2* _playerIconWidgetView; // 0x310
		::Class_2_DF3786176D510571_1_Class_2_48B632E09D53EBC4_9* _playerRankWidgetView; // 0x318
		::Class_2_DF3786176D510571_1_Class_2_0876E59DDB7B6CE0_3* _selfSpecialContentMsgView; // 0x320
		::Class_2_DF3786176D510571_1_Class_2_48B632E09D53EBC4_11* _selfScoreWidgetView; // 0x328
		::Class_2_DF3786176D510571_1_Class_2_48B632E09D53EBC4_10* _selfStarWidgetView; // 0x330
		::Class_2_DF3786176D510571_1_Class_2_840B46798E380C0F_2* _selfIconWidgetView; // 0x338
		::Class_2_DF3786176D510571_1_Class_2_48B632E09D53EBC4_9* _selfRankWidgetView; // 0x340
		::MoleMole::UIFriendChatCommonInfoUIWidgetController* _commonInfoWidget; // 0x348
		::MoleMole::UIFriendChatCommonTopUIWidgetController* _commonTopWidget; // 0x350
		::Class_2_2F3C7D4EFC74D485* _model; // 0x358
		::Class_1_9EDE5D0623B668B8* _item; // 0x360
		::Class_1_B1CC8F53861C28C2* _data; // 0x368
		::System::Boolean _isSenderUser; // 0x370
		::System::Boolean _isRequestingJoinGame; // 0x371
		::System::String* _DEFAULT_GACHA_BG_PATH; // 0x378

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER_INITVIEW_OFFSET))(this);
		}

		::System::Void ResetUIView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER_RESETUIVIEW_OFFSET))(this);
		}

		::System::Void ResetSpecialUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER_RESETSPECIALUI_OFFSET))(this);
		}

		::System::Void OnUpdateChatMessageRow(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER_ONUPDATECHATMESSAGEROW_OFFSET))(this, args);
		}

		::System::Void InitInviteUIView(::Class_3_7881E33311C1DE63* joinGameContent)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_7881E33311C1DE63*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER_INITINVITEUIVIEW_OFFSET))(this, joinGameContent);
		}

		::System::Void DealJoinableRequest(::Enum_3_0A3761FE34514D6C_34 currState, ::Class_3_3CB7782166350F5B* inviteRequst)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_34, ::Class_3_3CB7782166350F5B*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER_DEALJOINABLEREQUEST_OFFSET))(this, currState, inviteRequst);
		}

		::System::Void SwitchInviteToInvalidState(::Class_1_B1CC8F53861C28C2* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B1CC8F53861C28C2*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER_SWITCHINVITETOINVALIDSTATE_OFFSET))(this, data);
		}

		::System::Void InitSelfInviteUIView(::Class_3_7881E33311C1DE63* joinGameContent)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_7881E33311C1DE63*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER_INITSELFINVITEUIVIEW_OFFSET))(this, joinGameContent);
		}

		::System::Void InitShareSelfGachaUIView(::Class_3_F402EAE70F3E0E28_17* gachaData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_F402EAE70F3E0E28_17*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER_INITSHARESELFGACHAUIVIEW_OFFSET))(this, gachaData);
		}

		::System::Void InitSharePlayerGachaUIView(::Class_3_F402EAE70F3E0E28_17* gachaData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_F402EAE70F3E0E28_17*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER_INITSHAREPLAYERGACHAUIVIEW_OFFSET))(this, gachaData);
		}

		::System::Void ProcessGachaData(::Class_3_F402EAE70F3E0E28_17* gachaData, ::System::Collections::Generic::Dictionary_2<::Enum_3_D5E55949F51D9DD0, ::System::Int32>*& itemRarityDic, ::System::Collections::Generic::List_1<::MoleMole::UIFriendChatSpecialWidgetController_ShareIconData*>*& sItemList)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_F402EAE70F3E0E28_17*, ::System::Collections::Generic::Dictionary_2<::Enum_3_D5E55949F51D9DD0, ::System::Int32>*&, ::System::Collections::Generic::List_1<::MoleMole::UIFriendChatSpecialWidgetController_ShareIconData*>*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER_PROCESSGACHADATA_OFFSET))(this, gachaData, itemRarityDic, sItemList);
		}

		::System::Void SetupRarityUI(::Class_2_DF3786176D510571_1_Class_2_48B632E09D53EBC4_9* rankWidgetView, ::System::Collections::Generic::Dictionary_2<::Enum_3_D5E55949F51D9DD0, ::System::Int32>* rarityDic)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_DF3786176D510571_1_Class_2_48B632E09D53EBC4_9*, ::System::Collections::Generic::Dictionary_2<::Enum_3_D5E55949F51D9DD0, ::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER_SETUPRARITYUI_OFFSET))(this, rankWidgetView, rarityDic);
		}

		::System::Void SetupIconUI(::Class_2_DF3786176D510571_1_Class_2_840B46798E380C0F_2* iconWidgetView, ::System::Collections::Generic::List_1<::MoleMole::UIFriendChatSpecialWidgetController_ShareIconData*>* sItemList)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_DF3786176D510571_1_Class_2_840B46798E380C0F_2*, ::System::Collections::Generic::List_1<::MoleMole::UIFriendChatSpecialWidgetController_ShareIconData*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER_SETUPICONUI_OFFSET))(this, iconWidgetView, sItemList);
		}

		::System::Void InitShareSelfBossChallengUIView(::Class_3_9D37E1638DCEF44B* challengeResult)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_9D37E1638DCEF44B*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER_INITSHARESELFBOSSCHALLENGUIVIEW_OFFSET))(this, challengeResult);
		}

		::System::Void SetupStarUI(::Class_2_DF3786176D510571_1_Class_2_48B632E09D53EBC4_10* starWidgetView, ::System::UInt32 starNum)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_DF3786176D510571_1_Class_2_48B632E09D53EBC4_10*, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER_SETUPSTARUI_OFFSET))(this, starWidgetView, starNum);
		}

		::System::Void SetupScoreUI(::Class_2_DF3786176D510571_1_Class_2_48B632E09D53EBC4_11* scoreWidgetView, ::System::UInt32 bestScore, ::System::UInt32 rankPercent)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_DF3786176D510571_1_Class_2_48B632E09D53EBC4_11*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER_SETUPSCOREUI_OFFSET))(this, scoreWidgetView, bestScore, rankPercent);
		}

		::System::Void InitSharePlayerBossChallengUIView(::Class_3_9D37E1638DCEF44B* challengeResult)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_9D37E1638DCEF44B*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER_INITSHAREPLAYERBOSSCHALLENGUIVIEW_OFFSET))(this, challengeResult);
		}

		::System::Void RefreshSelfSpecialContentMsgView(::MoleMole::UIFriendChatSpecialWidgetController_ForumPostDataResult result)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIFriendChatSpecialWidgetController_ForumPostDataResult))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER_REFRESHSELFSPECIALCONTENTMSGVIEW_OFFSET))(this, result);
		}

		::System::Void RefreshPlayerSpecialContentMsgView(::MoleMole::UIFriendChatSpecialWidgetController_ForumPostDataResult result)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIFriendChatSpecialWidgetController_ForumPostDataResult))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER_REFRESHPLAYERSPECIALCONTENTMSGVIEW_OFFSET))(this, result);
		}

		::System::Void InitShareSelfForumPostUIView(::Class_3_920D00A4D2C57DD8_7* forumPost)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_920D00A4D2C57DD8_7*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER_INITSHARESELFFORUMPOSTUIVIEW_OFFSET))(this, forumPost);
		}

		::System::Void InitSharePlayerForumPostUIView(::Class_3_920D00A4D2C57DD8_7* forumPost)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_920D00A4D2C57DD8_7*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER_INITSHAREPLAYERFORUMPOSTUIVIEW_OFFSET))(this, forumPost);
		}

		::System::Boolean CheckOpenPostState(::Class_1_1F4DFD6C02320296* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_1F4DFD6C02320296*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER_CHECKOPENPOSTSTATE_OFFSET))(this, data);
		}

		::System::Void ProcessForumPostData(::Class_3_920D00A4D2C57DD8_7* forumPost, ::System::Boolean isForceTrigger, ::System::Action_1<::MoleMole::UIFriendChatSpecialWidgetController_ForumPostDataResult>* onSuccess, ::System::Action_1<::Class_0_16E4307DCC419505_34*>* onFail)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_920D00A4D2C57DD8_7*, ::System::Boolean, ::System::Action_1<::MoleMole::UIFriendChatSpecialWidgetController_ForumPostDataResult>*, ::System::Action_1<::Class_0_16E4307DCC419505_34*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER_PROCESSFORUMPOSTDATA_OFFSET))(this, forumPost, isForceTrigger, onSuccess, onFail);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
