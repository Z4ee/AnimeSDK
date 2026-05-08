#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_9.h"
#include "unitysdk/Enum_3_D5E55949F51D9DD0.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/MoleMole/UIFriendChatSpecialWidgetController_ForumPostDataResult.h"

class Class_0_16E4307DCC419505_4;
class Class_1_3DD5D40067CA7742;
class Class_1_9EDE5D0623B668B8;
class Class_1_B1CC8F53861C28C2;
class Class_2_2F3C7D4EFC74D485;
class Class_2_DF3786176D510571;
class Class_2_DF3786176D510571_Class_2_0876E59DDB7B6CE0;
class Class_2_DF3786176D510571_Class_2_0876E59DDB7B6CE0_1;
class Class_2_DF3786176D510571_Class_2_48B632E09D53EBC4;
class Class_2_DF3786176D510571_Class_2_48B632E09D53EBC4_1;
class Class_2_DF3786176D510571_Class_2_48B632E09D53EBC4_2;
class Class_2_DF3786176D510571_Class_2_6AA7D7277DABDC44;
class Class_3_920D00A4D2C57DD8_4;
class Class_3_9D37E1638DCEF44B_1;
class Class_3_9F2FCC0519F3E06F_10;
class Class_3_CE3642B3ECB61D27_42;
class Class_3_D9D04A98E641E52F;
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

#define MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER_CHECKOPENPOSTSTATE_OFFSET UNITYSDK_OFFSET(0x16CCCE60)
#define MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER_DEALJOINABLEREQUEST_OFFSET UNITYSDK_OFFSET(0x16CCA830)
#define MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER_INITINVITEUIVIEW_OFFSET UNITYSDK_OFFSET(0x16CC9450)
#define MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER_INITSELFINVITEUIVIEW_OFFSET UNITYSDK_OFFSET(0x16CC81E0)
#define MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER_INITSHAREPLAYERBOSSCHALLENGUIVIEW_OFFSET UNITYSDK_OFFSET(0x16CC9F00)
#define MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER_INITSHAREPLAYERFORUMPOSTUIVIEW_OFFSET UNITYSDK_OFFSET(0x16CCA6D0)
#define MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER_INITSHAREPLAYERGACHAUIVIEW_OFFSET UNITYSDK_OFFSET(0x16CC9C20)
#define MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER_INITSHARESELFBOSSCHALLENGUIVIEW_OFFSET UNITYSDK_OFFSET(0x16CC8BB0)
#define MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER_INITSHARESELFFORUMPOSTUIVIEW_OFFSET UNITYSDK_OFFSET(0x16CC9380)
#define MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER_INITSHARESELFGACHAUIVIEW_OFFSET UNITYSDK_OFFSET(0x16CC88D0)
#define MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x16CC7940)
#define MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16CC7730)
#define MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x16CC7840)
#define MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16CC77C0)
#define MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16CC72E0)
#define MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER_ONUPDATECHATMESSAGEROW_OFFSET UNITYSDK_OFFSET(0x16CCA7A0)
#define MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER_PROCESSFORUMPOSTDATA_OFFSET UNITYSDK_OFFSET(0x16CCCD10)
#define MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER_PROCESSGACHADATA_OFFSET UNITYSDK_OFFSET(0x16CCB770)
#define MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER_REFRESHPLAYERSPECIALCONTENTMSGVIEW_OFFSET UNITYSDK_OFFSET(0x16CCCB90)
#define MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER_REFRESHSELFSPECIALCONTENTMSGVIEW_OFFSET UNITYSDK_OFFSET(0x16CCCA10)
#define MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER_RESETSPECIALUI_OFFSET UNITYSDK_OFFSET(0x16CC7F90)
#define MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER_RESETUIVIEW_OFFSET UNITYSDK_OFFSET(0x16CC7ED0)
#define MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER_SETUPICONUI_OFFSET UNITYSDK_OFFSET(0x16CCC150)
#define MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER_SETUPRARITYUI_OFFSET UNITYSDK_OFFSET(0x16CCBF90)
#define MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER_SETUPSCOREUI_OFFSET UNITYSDK_OFFSET(0x16CCC7C0)
#define MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER_SETUPSTARUI_OFFSET UNITYSDK_OFFSET(0x16CCC6F0)
#define MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER_SWITCHINVITETOINVALIDSTATE_OFFSET UNITYSDK_OFFSET(0x16CCB440)
#define MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16CCCF90)
#define MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16CCCFD0)
#define MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x16CCD060)
#define MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16CCD100)
#define MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16CCD190)

namespace MoleMole
{
	inline static constexpr unsigned int UIFriendChatSpecialWidgetController_TypeDefinitionIndex = 68392;

	class UIFriendChatSpecialWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_DF3786176D510571* _view; // 0x2E8
		::Class_2_DF3786176D510571_Class_2_0876E59DDB7B6CE0* _playerSpecialContentMsgView; // 0x2F0
		::Class_2_DF3786176D510571_Class_2_48B632E09D53EBC4* _playerScoreWidgetView; // 0x2F8
		::Class_2_DF3786176D510571_Class_2_48B632E09D53EBC4_1* _playerStarWidgetView; // 0x300
		::Class_2_DF3786176D510571_Class_2_6AA7D7277DABDC44* _playerIconWidgetView; // 0x308
		::Class_2_DF3786176D510571_Class_2_48B632E09D53EBC4_2* _playerRankWidgetView; // 0x310
		::Class_2_DF3786176D510571_Class_2_0876E59DDB7B6CE0_1* _selfSpecialContentMsgView; // 0x318
		::Class_2_DF3786176D510571_Class_2_48B632E09D53EBC4* _selfScoreWidgetView; // 0x320
		::Class_2_DF3786176D510571_Class_2_48B632E09D53EBC4_1* _selfStarWidgetView; // 0x328
		::Class_2_DF3786176D510571_Class_2_6AA7D7277DABDC44* _selfIconWidgetView; // 0x330
		::Class_2_DF3786176D510571_Class_2_48B632E09D53EBC4_2* _selfRankWidgetView; // 0x338
		::MoleMole::UIFriendChatCommonInfoUIWidgetController* _commonInfoWidget; // 0x340
		::MoleMole::UIFriendChatCommonTopUIWidgetController* _commonTopWidget; // 0x348
		::Class_2_2F3C7D4EFC74D485* _model; // 0x350
		::Class_1_9EDE5D0623B668B8* _item; // 0x358
		::Class_1_B1CC8F53861C28C2* _data; // 0x360
		::System::Boolean _isSenderUser; // 0x368
		::System::Boolean _isRequestingJoinGame; // 0x369
		::System::String* _DEFAULT_GACHA_BG_PATH; // 0x370

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

		::System::Void InitInviteUIView(::Class_3_CE3642B3ECB61D27_42* joinGameContent)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_CE3642B3ECB61D27_42*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER_INITINVITEUIVIEW_OFFSET))(this, joinGameContent);
		}

		::System::Void DealJoinableRequest(::Enum_3_0A3761FE34514D6C_9 currState, ::Class_3_D9D04A98E641E52F* inviteRequst)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_9, ::Class_3_D9D04A98E641E52F*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER_DEALJOINABLEREQUEST_OFFSET))(this, currState, inviteRequst);
		}

		::System::Void SwitchInviteToInvalidState(::Class_1_B1CC8F53861C28C2* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B1CC8F53861C28C2*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER_SWITCHINVITETOINVALIDSTATE_OFFSET))(this, data);
		}

		::System::Void InitSelfInviteUIView(::Class_3_CE3642B3ECB61D27_42* joinGameContent)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_CE3642B3ECB61D27_42*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER_INITSELFINVITEUIVIEW_OFFSET))(this, joinGameContent);
		}

		::System::Void InitShareSelfGachaUIView(::Class_3_9F2FCC0519F3E06F_10* gachaData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_9F2FCC0519F3E06F_10*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER_INITSHARESELFGACHAUIVIEW_OFFSET))(this, gachaData);
		}

		::System::Void InitSharePlayerGachaUIView(::Class_3_9F2FCC0519F3E06F_10* gachaData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_9F2FCC0519F3E06F_10*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER_INITSHAREPLAYERGACHAUIVIEW_OFFSET))(this, gachaData);
		}

		::System::Void ProcessGachaData(::Class_3_9F2FCC0519F3E06F_10* gachaData, ::System::Collections::Generic::Dictionary_2<::Enum_3_D5E55949F51D9DD0, ::System::Int32>*& itemRarityDic, ::System::Collections::Generic::List_1<::MoleMole::UIFriendChatSpecialWidgetController_ShareIconData*>*& sItemList)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_9F2FCC0519F3E06F_10*, ::System::Collections::Generic::Dictionary_2<::Enum_3_D5E55949F51D9DD0, ::System::Int32>*&, ::System::Collections::Generic::List_1<::MoleMole::UIFriendChatSpecialWidgetController_ShareIconData*>*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER_PROCESSGACHADATA_OFFSET))(this, gachaData, itemRarityDic, sItemList);
		}

		::System::Void SetupRarityUI(::Class_2_DF3786176D510571_Class_2_48B632E09D53EBC4_2* rankWidgetView, ::System::Collections::Generic::Dictionary_2<::Enum_3_D5E55949F51D9DD0, ::System::Int32>* rarityDic)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_DF3786176D510571_Class_2_48B632E09D53EBC4_2*, ::System::Collections::Generic::Dictionary_2<::Enum_3_D5E55949F51D9DD0, ::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER_SETUPRARITYUI_OFFSET))(this, rankWidgetView, rarityDic);
		}

		::System::Void SetupIconUI(::Class_2_DF3786176D510571_Class_2_6AA7D7277DABDC44* iconWidgetView, ::System::Collections::Generic::List_1<::MoleMole::UIFriendChatSpecialWidgetController_ShareIconData*>* sItemList)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_DF3786176D510571_Class_2_6AA7D7277DABDC44*, ::System::Collections::Generic::List_1<::MoleMole::UIFriendChatSpecialWidgetController_ShareIconData*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER_SETUPICONUI_OFFSET))(this, iconWidgetView, sItemList);
		}

		::System::Void InitShareSelfBossChallengUIView(::Class_3_9D37E1638DCEF44B_1* challengeResult)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_9D37E1638DCEF44B_1*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER_INITSHARESELFBOSSCHALLENGUIVIEW_OFFSET))(this, challengeResult);
		}

		::System::Void SetupStarUI(::Class_2_DF3786176D510571_Class_2_48B632E09D53EBC4_1* starWidgetView, ::System::UInt32 starNum)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_DF3786176D510571_Class_2_48B632E09D53EBC4_1*, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER_SETUPSTARUI_OFFSET))(this, starWidgetView, starNum);
		}

		::System::Void SetupScoreUI(::Class_2_DF3786176D510571_Class_2_48B632E09D53EBC4* scoreWidgetView, ::System::UInt32 bestScore, ::System::UInt32 rankPercent)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_DF3786176D510571_Class_2_48B632E09D53EBC4*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER_SETUPSCOREUI_OFFSET))(this, scoreWidgetView, bestScore, rankPercent);
		}

		::System::Void InitSharePlayerBossChallengUIView(::Class_3_9D37E1638DCEF44B_1* challengeResult)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_9D37E1638DCEF44B_1*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER_INITSHAREPLAYERBOSSCHALLENGUIVIEW_OFFSET))(this, challengeResult);
		}

		::System::Void RefreshSelfSpecialContentMsgView(::MoleMole::UIFriendChatSpecialWidgetController_ForumPostDataResult result)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIFriendChatSpecialWidgetController_ForumPostDataResult))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER_REFRESHSELFSPECIALCONTENTMSGVIEW_OFFSET))(this, result);
		}

		::System::Void RefreshPlayerSpecialContentMsgView(::MoleMole::UIFriendChatSpecialWidgetController_ForumPostDataResult result)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIFriendChatSpecialWidgetController_ForumPostDataResult))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER_REFRESHPLAYERSPECIALCONTENTMSGVIEW_OFFSET))(this, result);
		}

		::System::Void InitShareSelfForumPostUIView(::Class_3_920D00A4D2C57DD8_4* forumPost)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_920D00A4D2C57DD8_4*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER_INITSHARESELFFORUMPOSTUIVIEW_OFFSET))(this, forumPost);
		}

		::System::Void InitSharePlayerForumPostUIView(::Class_3_920D00A4D2C57DD8_4* forumPost)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_920D00A4D2C57DD8_4*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER_INITSHAREPLAYERFORUMPOSTUIVIEW_OFFSET))(this, forumPost);
		}

		::System::Boolean CheckOpenPostState(::Class_1_3DD5D40067CA7742* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_3DD5D40067CA7742*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER_CHECKOPENPOSTSTATE_OFFSET))(this, data);
		}

		::System::Void ProcessForumPostData(::Class_3_920D00A4D2C57DD8_4* forumPost, ::System::Boolean isForceTrigger, ::System::Action_1<::MoleMole::UIFriendChatSpecialWidgetController_ForumPostDataResult>* onSuccess, ::System::Action_1<::Class_0_16E4307DCC419505_4*>* onFail)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_920D00A4D2C57DD8_4*, ::System::Boolean, ::System::Action_1<::MoleMole::UIFriendChatSpecialWidgetController_ForumPostDataResult>*, ::System::Action_1<::Class_0_16E4307DCC419505_4*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER_PROCESSFORUMPOSTDATA_OFFSET))(this, forumPost, isForceTrigger, onSuccess, onFail);
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
