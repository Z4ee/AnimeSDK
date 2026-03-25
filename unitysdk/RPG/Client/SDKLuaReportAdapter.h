#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F80BFD5B986D5503_3.h"
#include "unitysdk/RPG/Client/LineupRecommendationReportActionType.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/ChallengeGroupType.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class IAvatarInfoProvider; }
namespace RPG::Client { class PlayingMusicItemsInfo; }
namespace RPG::Client { class TeamData; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitCalculationResultData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTACTIVITYCLOCKPARKBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0xA412460)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTACTIVITYCLOCKPARKTAKEPHOTO_OFFSET UNITYSDK_OFFSET(0xA412380)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTACTIVITYPANELPANELSWITCH_OFFSET UNITYSDK_OFFSET(0xA4122D0)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTANNIVERSARYCOLLECTIONBTNCLICK_OFFSET UNITYSDK_OFFSET(0xA413C10)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTANNIVERSARYCOLLECTIONPAGEOPEN_OFFSET UNITYSDK_OFFSET(0xA413B00)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTANNIVERSARYCOLLECTIONPANELOPEN_OFFSET UNITYSDK_OFFSET(0xA413B90)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTAVATARNORMALTRIALOPEN_OFFSET UNITYSDK_OFFSET(0xA412AF0)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTBATTLERESULTGOODRELICOPTIONS_OFFSET UNITYSDK_OFFSET(0xA4137C0)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTCHALLENGERECOMMENDTEAMAPPLY_OFFSET UNITYSDK_OFFSET(0xA412E30)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTCHALLENGERECOMMENDTEAMOPERATION_OFFSET UNITYSDK_OFFSET(0xA412D80)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTCHIMERAAPPLYPRESET_OFFSET UNITYSDK_OFFSET(0xA413330)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTCHIMERAEVALUATIONLIKE_OFFSET UNITYSDK_OFFSET(0xA413280)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTCHIMERALEAVETEAMEDIT_OFFSET UNITYSDK_OFFSET(0xA4133B0)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTCLICKENDMOSTCHRONICLEPATH_OFFSET UNITYSDK_OFFSET(0xA4126D0)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTCLICKMISSIONCHRONICLEPATH_OFFSET UNITYSDK_OFFSET(0xA412640)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTCLOSEDIFFICULTYADJUSTUI_OFFSET UNITYSDK_OFFSET(0xA413720)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTELFRESTAURANTSPEEDUP_OFFSET UNITYSDK_OFFSET(0xA413450)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTFASTGOTOEQUIPPINGAVATAR_OFFSET UNITYSDK_OFFSET(0xA413ED0)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTFASTGOTOSUITABLEAVATAR_OFFSET UNITYSDK_OFFSET(0xA413F80)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTGACHAAVATARTOASTDIALOGOPEN_OFFSET UNITYSDK_OFFSET(0xA413A00)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTGAMERANKPAGE_OFFSET UNITYSDK_OFFSET(0xA412F90)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTGRIDFIGHTGAMEREFFILTER_OFFSET UNITYSDK_OFFSET(0xA413DB0)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTGRIDFIGHTGAMEREFSORT_OFFSET UNITYSDK_OFFSET(0xA413E50)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTGRIDFIGHTUIBUTTON_OFFSET UNITYSDK_OFFSET(0xA413C90)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTHELIOBUSREADSNSPOST_OFFSET UNITYSDK_OFFSET(0xA411850)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTITEMDIALOGGOODRELIC_OFFSET UNITYSDK_OFFSET(0xA4138D0)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTJUKEBOXOPERATE_OFFSET UNITYSDK_OFFSET(0xA411500)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTJUKEBOXWHITENOISEOPERATE_OFFSET UNITYSDK_OFFSET(0xA411590)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTLEAVESWORDTRAINARRANGEMENTPAGE_OFFSET UNITYSDK_OFFSET(0xA4134F0)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTLEAVESWORDTRAINPERFORMANCEPAGE_OFFSET UNITYSDK_OFFSET(0xA4135B0)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTLIGHTCONEBATCHRANKCONFIRM_OFFSET UNITYSDK_OFFSET(0xA4131F0)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTLIGHTCONELOCKSETTING_OFFSET UNITYSDK_OFFSET(0xA412530)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTLIGHTCONESORT_OFFSET UNITYSDK_OFFSET(0xA411EE0)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTMISSIONCHRONICLEPATHGOTO_OFFSET UNITYSDK_OFFSET(0xA412760)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTMULTIPLAYERSHOWINVITEDIALOG_OFFSET UNITYSDK_OFFSET(0xA412EF0)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTOPENMISSIONCHRONICLE_OFFSET UNITYSDK_OFFSET(0xA4125B0)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTPLAYWITHPSNONLYSTATE_OFFSET UNITYSDK_OFFSET(0xA411620)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTQUICKCHOOSEITEMSTATUS_OFFSET UNITYSDK_OFFSET(0xA4117D0)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTQUICKUSEITEMSTATUS_OFFSET UNITYSDK_OFFSET(0xA411740)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTRECOMMENDTEAMMEMBEREDIT_OFFSET UNITYSDK_OFFSET(0xA414030)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTRECOMMENDTEAMSAVE_OFFSET UNITYSDK_OFFSET(0xA414120)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTRELICDIRECTEDSYNTHESISADDRECOMMENDAVATAR_OFFSET UNITYSDK_OFFSET(0xA413170)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTRELICFILTERDIALOGSELECTOPTIONS_OFFSET UNITYSDK_OFFSET(0xA411B90)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTRELICFILTERRECOMMENDUSE_OFFSET UNITYSDK_OFFSET(0xA411D90)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTRELICREPLACEBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0xA411470)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTRELICSELLQUICKSELECTOPTIONS_OFFSET UNITYSDK_OFFSET(0xA4119B0)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTRELICSMARTDISPOSALSELECTOPTIONS_OFFSET UNITYSDK_OFFSET(0xA411A30)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTRELICSMARTSUIAPPLY_OFFSET UNITYSDK_OFFSET(0xA4130D0)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTRELICSMARTSUITOPEN_OFFSET UNITYSDK_OFFSET(0xA413030)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTRELICSORT_OFFSET UNITYSDK_OFFSET(0xA411E50)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTRELICUPGRADEMATERIALFILTERSELECTOPTIONS_OFFSET UNITYSDK_OFFSET(0xA411AF0)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTSHOWDIFFICULTYADJUSTUI_OFFSET UNITYSDK_OFFSET(0xA413690)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTSOCIALSETTINGCHANGE_OFFSET UNITYSDK_OFFSET(0xA4116A0)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTSTORYREVIEWBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0xA412BF0)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTSTORYREVIEWDIALOGOPEN_OFFSET UNITYSDK_OFFSET(0xA412B70)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTSTORYREVIEWPERFORMANCEEND_OFFSET UNITYSDK_OFFSET(0xA412C80)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTSTORYREVIEWTRANSFERCLICK_OFFSET UNITYSDK_OFFSET(0xA412D00)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTTEAMASSOCIATIONSELECTION_OFFSET UNITYSDK_OFFSET(0xA413A80)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTTEAMEDITSELECTLINEUP_OFFSET UNITYSDK_OFFSET(0xA4129E0)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTTEAMEDITSWITCHLINEUP_OFFSET UNITYSDK_OFFSET(0xA412810)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTTRAVELBROCHUREPREVIEWPASTER_OFFSET UNITYSDK_OFFSET(0xA411900)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTUIBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0xA4112E0)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTUICLOSE_OFFSET UNITYSDK_OFFSET(0xA4110D0)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTUIOPEN_OFFSET UNITYSDK_OFFSET(0xA411010)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTUIPANELLEAVE_OFFSET UNITYSDK_OFFSET(0xA411220)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTUIPANELSWITCH_OFFSET UNITYSDK_OFFSET(0xA411180)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTUISORTBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0xA4113A0)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORT_RECOMMEND_HIGH_LIGHT_OFFSET UNITYSDK_OFFSET(0xA412050)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORT_SUIT_RECOMMEND_OFFSET UNITYSDK_OFFSET(0xA411F70)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORT_USE_RELIC_FILTER_PLAN_OFFSET UNITYSDK_OFFSET(0xA4120D0)
#define RPG_CLIENT_SDKLUAREPORTADAPTER__AVATARIDENUMERATORBYTEAMDATA_OFFSET UNITYSDK_OFFSET(0xA412960)
#define RPG_CLIENT_SDKLUAREPORTADAPTER__CTOR_OFFSET UNITYSDK_OFFSET(0xA414220)

namespace RPG::Client
{
	inline static constexpr unsigned int SDKLuaReportAdapter_TypeDefinitionIndex = 48614;

	class SDKLuaReportAdapter : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_CachedUIFrom()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(SDKLuaReportAdapter_TypeDefinitionIndex)->GetStaticField(0x221D0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER__CTOR_OFFSET))(this);
		}

		static ::System::Void ReportUIOpen(::System::String* ui_path, ::System::String* ui_from, ::System::Guid guid)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Guid))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTUIOPEN_OFFSET))(ui_path, ui_from, guid);
		}

		static ::System::Void ReportUIClose(::System::String* ui_path, ::System::Single continueTime, ::System::Guid guid)
		{
			return ((::System::Void(*)(::System::String*, ::System::Single, ::System::Guid))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTUICLOSE_OFFSET))(ui_path, continueTime, guid);
		}

		static ::System::Void ReportUIPanelSwitch(::System::String* ui_path, ::System::String* ui_panel, ::System::Guid guid)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Guid))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTUIPANELSWITCH_OFFSET))(ui_path, ui_panel, guid);
		}

		static ::System::Void ReportUIPanelLeave(::System::String* ui_path, ::System::String* ui_panel, ::System::Int32 continue_time, ::System::Guid guid)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Int32, ::System::Guid))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTUIPANELLEAVE_OFFSET))(ui_path, ui_panel, continue_time, guid);
		}

		static ::System::Void ReportUIButtonClick(::System::String* ui_path, ::System::String* ui_panel, ::System::String* ui_button, ::System::Guid guid)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::Guid))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTUIBUTTONCLICK_OFFSET))(ui_path, ui_panel, ui_button, guid);
		}

		static ::System::Void ReportUISortButtonClick(::System::String* ui_path, ::System::String* ui_panel, ::System::String* ui_button, ::System::String* sort_info, ::System::Guid guid)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Guid))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTUISORTBUTTONCLICK_OFFSET))(ui_path, ui_panel, ui_button, sort_info, guid);
		}

		static ::System::Void ReportRelicReplaceButtonClick(::System::String* ui_path, ::System::String* ui_panel, ::System::String* btn_name)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTRELICREPLACEBUTTONCLICK_OFFSET))(ui_path, ui_panel, btn_name);
		}

		static ::System::Void ReportJukeboxOperate(::System::Int32 pre_record, ::System::Int32 aft_record, ::System::Int32 operate_type)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTJUKEBOXOPERATE_OFFSET))(pre_record, aft_record, operate_type);
		}

		static ::System::Void ReportJukeboxWhiteNoiseOperate(::System::Int32 musicAlbumItemID, ::System::Int32 operateType, ::RPG::Client::PlayingMusicItemsInfo* info)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::RPG::Client::PlayingMusicItemsInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTJUKEBOXWHITENOISEOPERATE_OFFSET))(musicAlbumItemID, operateType, info);
		}

		static ::System::Void ReportPlayWithPsnOnlyState(::System::Int32 state)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTPLAYWITHPSNONLYSTATE_OFFSET))(state);
		}

		static ::System::Void ReportSocialSettingChange(::System::Int32 id, ::System::String* name, ::System::Int32 before, ::System::Int32 after)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTSOCIALSETTINGCHANGE_OFFSET))(id, name, before, after);
		}

		static ::System::Void ReportQuickUseItemStatus(::System::UInt32 itemID, ::System::UInt32 itemType, ::System::UInt32 count)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTQUICKUSEITEMSTATUS_OFFSET))(itemID, itemType, count);
		}

		static ::System::Void ReportQuickChooseItemStatus(::System::Collections::Generic::List_1<::System::String*>* chooseTypes)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTQUICKCHOOSEITEMSTATUS_OFFSET))(chooseTypes);
		}

		static ::System::Void ReportHeliobusReadSNSPost(::System::UInt32 postId, ::System::UInt32 postType, ::System::UInt32 actionDay, ::System::UInt32 popPhaseLevel, ::System::UInt32 costTime)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTHELIOBUSREADSNSPOST_OFFSET))(postId, postType, actionDay, popPhaseLevel, costTime);
		}

		static ::System::Void ReportTravelBrochurePreviewPaster(::System::UInt32 pasterID, ::System::UInt32 pasterType, ::System::UInt32 diaryID, ::System::UInt32 diaryLockedCount, ::System::UInt32 totalLockedCount)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTTRAVELBROCHUREPREVIEWPASTER_OFFSET))(pasterID, pasterType, diaryID, diaryLockedCount, totalLockedCount);
		}

		static ::System::Void ReportRelicSellQuickSelectOptions(::System::Boolean isSelectDiscared, ::System::Int32 selectedRarity)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTRELICSELLQUICKSELECTOPTIONS_OFFSET))(isSelectDiscared, selectedRarity);
		}

		static ::System::Void ReportRelicSmartDisposalSelectOptions(::System::Boolean isSelectMainProperty, ::System::Int32 selectSubPropertyCount, ::System::Boolean isUseNormalFilter, ::System::Boolean isProtect, ::System::UInt32 totalCount, ::System::UInt32 selectCount)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTRELICSMARTDISPOSALSELECTOPTIONS_OFFSET))(isSelectMainProperty, selectSubPropertyCount, isUseNormalFilter, isProtect, totalCount, selectCount);
		}

		static ::System::Void ReportRelicUpgradeMaterialFilterSelectOptions(::System::UInt32 rarityBefore, ::System::UInt32 rarityAfter, ::System::Boolean enableLimitBefore, ::System::Boolean enableLimitAfter)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::UInt32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTRELICUPGRADEMATERIALFILTERSELECTOPTIONS_OFFSET))(rarityBefore, rarityAfter, enableLimitBefore, enableLimitAfter);
		}

		static ::System::Void ReportRelicFilterDialogSelectOptions(::RPG::GameCore::RelicType type, ::System::String* uiPath, ::System::Collections::Generic::List_1<::System::UInt32>* setIDs, ::System::Collections::Generic::List_1<::System::UInt32>* rarityList, ::System::Int32 subPropertyNum, ::System::Int32 subPropertyFilterType, ::System::Collections::Generic::List_1<::System::UInt32>* subPropertyList, ::System::Collections::Generic::List_1<::System::UInt32>* bodyMainPropertyList, ::System::Collections::Generic::List_1<::System::UInt32>* footMainPropertyList, ::System::Collections::Generic::List_1<::System::UInt32>* sphereMainPropertyList, ::System::Collections::Generic::List_1<::System::UInt32>* ropePropertyList, ::System::Collections::Generic::List_1<::System::UInt32>* headPropertyList, ::System::Collections::Generic::List_1<::System::UInt32>* handPropertyList, ::System::Int32 lockType, ::System::Int32 levelType, ::System::Int32 equipType, ::System::Int32 isRecommend)
		{
			return ((::System::Void(*)(::RPG::GameCore::RelicType, ::System::String*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Int32, ::System::Int32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTRELICFILTERDIALOGSELECTOPTIONS_OFFSET))(type, uiPath, setIDs, rarityList, subPropertyNum, subPropertyFilterType, subPropertyList, bodyMainPropertyList, footMainPropertyList, sphereMainPropertyList, ropePropertyList, headPropertyList, handPropertyList, lockType, levelType, equipType, isRecommend);
		}

		static ::System::Void ReportRelicFilterRecommendUse(::System::Int32 filterType, ::System::Collections::Generic::List_1<::System::UInt32>* setIDs, ::System::Int32 relicType, ::System::Int32 mainType, ::System::Int32 subType, ::System::Int32 rank)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTRELICFILTERRECOMMENDUSE_OFFSET))(filterType, setIDs, relicType, mainType, subType, rank);
		}

		static ::System::Void ReportRelicSort(::System::Int32 isRecommend, ::System::Int32 basicOrder, ::System::Collections::Generic::List_1<::System::UInt32>* propertyOrder)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTRELICSORT_OFFSET))(isRecommend, basicOrder, propertyOrder);
		}

		static ::System::Void ReportLightConeSort(::System::Int32 isRecommend, ::System::Int32 basicOrder, ::System::Collections::Generic::List_1<::System::UInt32>* propertyOrder)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTLIGHTCONESORT_OFFSET))(isRecommend, basicOrder, propertyOrder);
		}

		static ::System::Void Report_Suit_Recommend(::System::Collections::Generic::List_1<::System::UInt32>* set, ::System::Int32 cocoonId, ::System::Int32 cocoonDifficulty, ::System::String* uiPanel, ::System::Collections::Generic::List_1<::System::UInt32>* firstSetAvatarList, ::System::Int32 index, ::System::Int32 isFromClick)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Int32, ::System::Int32, ::System::String*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORT_SUIT_RECOMMEND_OFFSET))(set, cocoonId, cocoonDifficulty, uiPanel, firstSetAvatarList, index, isFromClick);
		}

		static ::System::Void Report_Recommend_High_Light(::System::Int32 status)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORT_RECOMMEND_HIGH_LIGHT_OFFSET))(status);
		}

		static ::System::Void Report_Use_Relic_Filter_Plan(::System::Int32 planID, ::System::String* planTitle, ::System::Int32 iconId, ::System::Int32 isAvatarIcon, ::System::Int32 markType, ::System::Collections::Generic::List_1<::System::UInt32>* set, ::System::Collections::Generic::List_1<::System::UInt32>* rarity, ::System::Collections::Generic::List_1<::System::UInt32>* bodyMainPropertyList, ::System::Collections::Generic::List_1<::System::UInt32>* footMainPropertyList, ::System::Collections::Generic::List_1<::System::UInt32>* sphereMainPropertyList, ::System::Collections::Generic::List_1<::System::UInt32>* ropeMainPropertyList, ::System::Collections::Generic::List_1<::System::UInt32>* headMainPropertyList, ::System::Collections::Generic::List_1<::System::UInt32>* handMainPropertyList, ::System::Int32 subPropertyType, ::System::Collections::Generic::List_1<::System::UInt32>* subPropertyList, ::System::Int32 subPropertyNum, ::System::Int32 nameID)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Int32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORT_USE_RELIC_FILTER_PLAN_OFFSET))(planID, planTitle, iconId, isAvatarIcon, markType, set, rarity, bodyMainPropertyList, footMainPropertyList, sphereMainPropertyList, ropeMainPropertyList, headMainPropertyList, handMainPropertyList, subPropertyType, subPropertyList, subPropertyNum, nameID);
		}

		static ::System::Void ReportActivityPanelPanelSwitch(::System::String* ui_path, ::System::String* ui_panel, ::System::Guid guid, ::System::UInt32 activityPanelID)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Guid, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTACTIVITYPANELPANELSWITCH_OFFSET))(ui_path, ui_panel, guid, activityPanelID);
		}

		static ::System::Void ReportActivityClockParkTakePhoto(::System::UInt32 planeID, ::System::UInt32 floorID, ::System::UInt32 groupID, ::UnityEngine::Vector3 playerPosition, ::System::UInt32 catchNum)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::UnityEngine::Vector3, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTACTIVITYCLOCKPARKTAKEPHOTO_OFFSET))(planeID, floorID, groupID, playerPosition, catchNum);
		}

		static ::System::Void ReportActivityClockParkButtonClick(::System::String* ui_path, ::System::String* ui_panel, ::System::String* ui_button, ::System::Guid guid, ::System::String* transNo)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::Guid, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTACTIVITYCLOCKPARKBUTTONCLICK_OFFSET))(ui_path, ui_panel, ui_button, guid, transNo);
		}

		static ::System::Void ReportLightConeLockSetting(::System::UInt32 actType, ::System::String* uiPage)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTLIGHTCONELOCKSETTING_OFFSET))(actType, uiPage);
		}

		static ::System::Void ReportOpenMissionChronicle(::System::String* uiPath, ::System::UInt32 reddotNum, ::System::UInt32 pageId)
		{
			return ((::System::Void(*)(::System::String*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTOPENMISSIONCHRONICLE_OFFSET))(uiPath, reddotNum, pageId);
		}

		static ::System::Void ReportClickMissionChroniclePath(::System::UInt32 chronicleId, ::System::UInt32 chronicleStatus, ::System::UInt32 chapterId)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTCLICKMISSIONCHRONICLEPATH_OFFSET))(chronicleId, chronicleStatus, chapterId);
		}

		static ::System::Void ReportClickEndmostChroniclePath(::System::UInt32 chronicleId, ::System::UInt32 chronicleStatus, ::System::UInt32 chapterId)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTCLICKENDMOSTCHRONICLEPATH_OFFSET))(chronicleId, chronicleStatus, chapterId);
		}

		static ::System::Void ReportMissionChroniclePathGoto(::System::UInt32 chronicleId, ::System::UInt32 chronicleStatus, ::System::UInt32 gotoType, ::System::UInt32 gotoId, ::System::UInt32 chapterId)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTMISSIONCHRONICLEPATHGOTO_OFFSET))(chronicleId, chronicleStatus, gotoType, gotoId, chapterId);
		}

		static ::System::Void ReportTeamEditSwitchLineup(::RPG::Client::TeamData* beforeTeamData, ::RPG::Client::TeamData* afterTeamData, ::System::UInt32 switchType)
		{
			return ((::System::Void(*)(::RPG::Client::TeamData*, ::RPG::Client::TeamData*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTTEAMEDITSWITCHLINEUP_OFFSET))(beforeTeamData, afterTeamData, switchType);
		}

		static ::System::Void ReportTeamEditSelectLineup(::System::String* uiPath, ::RPG::Client::TeamData* selectTeamData)
		{
			return ((::System::Void(*)(::System::String*, ::RPG::Client::TeamData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTTEAMEDITSELECTLINEUP_OFFSET))(uiPath, selectTeamData);
		}

		static ::System::Void ReportAvatarNormalTrialOpen(::System::String* uiPath, ::System::UInt32 avatarID)
		{
			return ((::System::Void(*)(::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTAVATARNORMALTRIALOPEN_OFFSET))(uiPath, avatarID);
		}

		static ::System::Void ReportStoryReviewDialogOpen(::System::UInt32 mainMissionID, ::System::Int32 pageFromType)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTSTORYREVIEWDIALOGOPEN_OFFSET))(mainMissionID, pageFromType);
		}

		static ::System::Void ReportStoryReviewButtonClick(::System::UInt32 mainMissionID, ::System::Int32 pageFromType, ::System::Int32 btnType)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTSTORYREVIEWBUTTONCLICK_OFFSET))(mainMissionID, pageFromType, btnType);
		}

		static ::System::Void ReportStoryReviewPerformanceEnd(::System::UInt32 mainMissionID, ::System::Int32 endType)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTSTORYREVIEWPERFORMANCEEND_OFFSET))(mainMissionID, endType);
		}

		static ::System::Void ReportStoryReviewTransferClick(::System::UInt32 mainMissionID, ::System::Int32 btnType)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTSTORYREVIEWTRANSFERCLICK_OFFSET))(mainMissionID, btnType);
		}

		static ::System::Void ReportChallengeRecommendTeamOperation(::RPG::GameCore::ChallengeGroupType challengeType, ::System::UInt32 challengeID, ::System::UInt32 recommendType, ::System::UInt32 showOwnership, ::RPG::Client::LineupRecommendationReportActionType actionType)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChallengeGroupType, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::RPG::Client::LineupRecommendationReportActionType))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTCHALLENGERECOMMENDTEAMOPERATION_OFFSET))(challengeType, challengeID, recommendType, showOwnership, actionType);
		}

		static ::System::Void ReportChallengeRecommendTeamApply(::RPG::GameCore::ChallengeGroupType challengeType, ::System::UInt32 challengeID, ::System::UInt32 recommendType, ::System::UInt32 teamIndex, ::System::Collections::Generic::List_1<::System::UInt32>* firstTeamAvatarIDs, ::System::Collections::Generic::List_1<::System::UInt32>* secondTeamAvatarIDs)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChallengeGroupType, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTCHALLENGERECOMMENDTEAMAPPLY_OFFSET))(challengeType, challengeID, recommendType, teamIndex, firstTeamAvatarIDs, secondTeamAvatarIDs);
		}

		static ::System::Void ReportMultiplayerShowInviteDialog(::System::Int32 invitingUID, ::Enum_3_F80BFD5B986D5503_3 acitivtyEnum, ::System::String* dialogName, ::System::String* uiFrom)
		{
			return ((::System::Void(*)(::System::Int32, ::Enum_3_F80BFD5B986D5503_3, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTMULTIPLAYERSHOWINVITEDIALOG_OFFSET))(invitingUID, acitivtyEnum, dialogName, uiFrom);
		}

		static ::System::Void ReportGameRankPage(::System::UInt32 gameType, ::System::UInt32 gameID, ::System::UInt32 rank, ::System::UInt32 score)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTGAMERANKPAGE_OFFSET))(gameType, gameID, rank, score);
		}

		static ::System::Void ReportRelicSmartSuitOpen(::System::UInt32 avatarID, ::System::Int32 actionType, ::System::Collections::Generic::List_1<::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*>* resultDatas, ::System::Boolean subAffixShow)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Int32, ::System::Collections::Generic::List_1<::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTRELICSMARTSUITOPEN_OFFSET))(avatarID, actionType, resultDatas, subAffixShow);
		}

		static ::System::Void ReportRelicSmartSuiApply(::System::UInt32 avatarID, ::System::Int32 planType, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* selfResultData, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* newResultData)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Int32, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTRELICSMARTSUIAPPLY_OFFSET))(avatarID, planType, selfResultData, newResultData);
		}

		static ::System::Void ReportRelicDirectedSynthesisAddRecommendAvatar(::System::UInt32 avatarID, ::System::UInt32 relicSetID)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTRELICDIRECTEDSYNTHESISADDRECOMMENDAVATAR_OFFSET))(avatarID, relicSetID);
		}

		static ::System::Void ReportLightConeBatchRankConfirm(::System::Int32 actionType, ::System::UInt32 lightConeCount, ::System::Boolean isSelectAll)
		{
			return ((::System::Void(*)(::System::Int32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTLIGHTCONEBATCHRANKCONFIRM_OFFSET))(actionType, lightConeCount, isSelectAll);
		}

		static ::System::Void ReportChimeraEvaluationLike(::System::UInt32 roundID, ::System::UInt32 chimeraID, ::System::UInt32 evaluationID, ::System::Collections::Generic::List_1<::System::UInt32>* evaluationIDList, ::System::Int32 status)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTCHIMERAEVALUATIONLIKE_OFFSET))(roundID, chimeraID, evaluationID, evaluationIDList, status);
		}

		static ::System::Void ReportChimeraApplyPreset(::System::UInt32 roundID, ::System::UInt32 presetID)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTCHIMERAAPPLYPRESET_OFFSET))(roundID, presetID);
		}

		static ::System::Void ReportChimeraLeaveTeamEdit(::System::UInt32 roundID, ::System::Single staySeconds, ::System::Boolean isProceed, ::System::Boolean isEndless)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTCHIMERALEAVETEAMEDIT_OFFSET))(roundID, staySeconds, isProceed, isEndless);
		}

		static ::System::Void ReportElfRestaurantSpeedUp(::System::UInt32 progressID, ::System::UInt32 dayID, ::System::UInt32 totalDay, ::System::Boolean isSpeedUp)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTELFRESTAURANTSPEEDUP_OFFSET))(progressID, dayID, totalDay, isSpeedUp);
		}

		static ::System::Void ReportLeaveSwordTrainArrangementPage(::System::UInt32 storyLineID, ::System::UInt32 turnID, ::System::Collections::Generic::List_1<::System::UInt32>* partnerAbilityIDs, ::System::Collections::Generic::List_1<::System::String*>* actionPlans, ::System::Int32 timeCost, ::System::Int32 exitType)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTLEAVESWORDTRAINARRANGEMENTPAGE_OFFSET))(storyLineID, turnID, partnerAbilityIDs, actionPlans, timeCost, exitType);
		}

		static ::System::Void ReportLeaveSwordTrainPerformancePage(::System::UInt32 storyLineID, ::System::UInt32 turnID, ::System::Collections::Generic::List_1<::System::UInt32>* partnerAbilityIDs, ::System::Collections::Generic::List_1<::System::String*>* actionPlans, ::System::Int32 timeCost, ::System::Int32 exitType, ::System::Boolean isSimplified)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTLEAVESWORDTRAINPERFORMANCEPAGE_OFFSET))(storyLineID, turnID, partnerAbilityIDs, actionPlans, timeCost, exitType, isSimplified);
		}

		static ::System::Void ReportShowDifficultyAdjustUI(::System::String* uiPath, ::System::Boolean isRaidStage, ::System::Int32 raidIDOrEventID)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTSHOWDIFFICULTYADJUSTUI_OFFSET))(uiPath, isRaidStage, raidIDOrEventID);
		}

		static ::System::Void ReportCloseDifficultyAdjustUI(::System::String* uiPath, ::System::Boolean isRaidStage, ::System::Int32 raidIDOrEventID, ::System::Int32 closeType)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTCLOSEDIFFICULTYADJUSTUI_OFFSET))(uiPath, isRaidStage, raidIDOrEventID, closeType);
		}

		static ::System::Void ReportBattleResultGoodRelicOptions(::System::UInt32 cocoonType, ::System::UInt32 cocoonID, ::System::Boolean isGoodRelicOn, ::System::Boolean isTargetGoodRelicOn, ::System::Int32 goodRelicCount, ::System::Int32 targetGoodRelicCount, ::System::Collections::Generic::List_1<::System::String*>* goodRelicList, ::System::Collections::Generic::List_1<::System::String*>* targetGoodRelicList, ::System::UInt32 targetAvatarID)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::UInt32, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTBATTLERESULTGOODRELICOPTIONS_OFFSET))(cocoonType, cocoonID, isGoodRelicOn, isTargetGoodRelicOn, goodRelicCount, targetGoodRelicCount, goodRelicList, targetGoodRelicList, targetAvatarID);
		}

		static ::System::Void ReportItemDialogGoodRelic(::System::Boolean isGoodRelicOn, ::System::Boolean isTargetGoodRelicOn, ::System::UInt32 goodRelicType, ::RPG::GameCore::RelicType relicType, ::System::UInt32 targetAvatarID, ::System::UInt32 relicID, ::System::UInt32 setID, ::System::UInt32 uid, ::RPG::GameCore::AvatarPropertyType mainType, ::System::Collections::Generic::List_1<::RPG::GameCore::AvatarPropertyType>* subtypeList)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Boolean, ::System::UInt32, ::RPG::GameCore::RelicType, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::AvatarPropertyType, ::System::Collections::Generic::List_1<::RPG::GameCore::AvatarPropertyType>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTITEMDIALOGGOODRELIC_OFFSET))(isGoodRelicOn, isTargetGoodRelicOn, goodRelicType, relicType, targetAvatarID, relicID, setID, uid, mainType, subtypeList);
		}

		static ::System::Void ReportGachaAvatarToastDialogOpen(::System::UInt32 gachaID)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTGACHAAVATARTOASTDIALOGOPEN_OFFSET))(gachaID);
		}

		static ::System::Void ReportTeamAssociationSelection(::System::Int32 playerChooseState, ::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* avatars)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTTEAMASSOCIATIONSELECTION_OFFSET))(playerChooseState, avatars);
		}

		static ::System::Void ReportAnniversaryCollectionPageOpen(::System::String* uiFrom, ::System::String* uiPath, ::System::UInt32 redDotCount)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTANNIVERSARYCOLLECTIONPAGEOPEN_OFFSET))(uiFrom, uiPath, redDotCount);
		}

		static ::System::Void ReportAnniversaryCollectionPanelOpen(::System::String* uiPanel, ::System::Boolean hasRedDot)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTANNIVERSARYCOLLECTIONPANELOPEN_OFFSET))(uiPanel, hasRedDot);
		}

		static ::System::Void ReportAnniversaryCollectionBtnClick(::System::String* uiPanel, ::System::String* uiButton)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTANNIVERSARYCOLLECTIONBTNCLICK_OFFSET))(uiPanel, uiButton);
		}

		static ::System::Void ReportGridFightUIButton(::System::String* ui_path, ::System::String* ui_panel, ::System::String* ui_button, ::System::Guid guid, ::System::String* trans_no, ::System::String* refID, ::System::String* from, ::System::String* row)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::Guid, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTGRIDFIGHTUIBUTTON_OFFSET))(ui_path, ui_panel, ui_button, guid, trans_no, refID, from, row);
		}

		static ::System::Void ReportGridFightGameRefFilter(::System::Int32 isFilter, ::System::Int32 roleNum, ::System::Int32 traitNum, ::System::Int32 refType)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTGRIDFIGHTGAMEREFFILTER_OFFSET))(isFilter, roleNum, traitNum, refType);
		}

		static ::System::Void ReportGridFightGameRefSort(::System::Int32 beforeOrder, ::System::Int32 afterOrder)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTGRIDFIGHTGAMEREFSORT_OFFSET))(beforeOrder, afterOrder);
		}

		static ::System::Void ReportFastGotoEquippingAvatar(::System::String* uiPath, ::System::String* uiPanel, ::System::Int32 avatarRealID, ::System::Int32 type, ::System::Int32 itemID)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTFASTGOTOEQUIPPINGAVATAR_OFFSET))(uiPath, uiPanel, avatarRealID, type, itemID);
		}

		static ::System::Void ReportFastGotoSuitableAvatar(::System::String* uiPath, ::System::String* uiPanel, ::System::Int32 avatarRealID, ::System::Int32 type, ::System::Int32 itemID)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTFASTGOTOSUITABLEAVATAR_OFFSET))(uiPath, uiPanel, avatarRealID, type, itemID);
		}

		static ::System::Void ReportRecommendTeamMemberEdit(::System::String* uiPanel, ::System::Collections::Generic::List_1<::System::UInt32>* currentAvatarIds, ::System::Collections::Generic::List_1<::System::UInt32>* currentRanks, ::System::Collections::Generic::List_1<::System::UInt32>* beforeAvatarIds, ::System::Collections::Generic::List_1<::System::UInt32>* beforeRanks, ::System::Guid guid)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Guid))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTRECOMMENDTEAMMEMBEREDIT_OFFSET))(uiPanel, currentAvatarIds, currentRanks, beforeAvatarIds, beforeRanks, guid);
		}

		static ::System::Void ReportRecommendTeamSave(::System::String* uiPanel, ::System::Collections::Generic::List_1<::System::UInt32>* recommendedAvatarIds, ::System::Collections::Generic::List_1<::System::UInt32>* recommendedIsOwns, ::System::Collections::Generic::List_1<::System::UInt32>* selectedAvatarIds, ::System::Collections::Generic::List_1<::System::UInt32>* selectedRanks, ::System::Guid guid)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Guid))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTRECOMMENDTEAMSAVE_OFFSET))(uiPanel, recommendedAvatarIds, recommendedIsOwns, selectedAvatarIds, selectedRanks, guid);
		}

		static ::System::Collections::Generic::IEnumerator_1<::System::UInt32>* _AvatarIDEnumeratorByTeamData(::RPG::Client::TeamData* teamData)
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::UInt32>*(*)(::RPG::Client::TeamData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER__AVATARIDENUMERATORBYTEAMDATA_OFFSET))(teamData);
		}
	};
}
