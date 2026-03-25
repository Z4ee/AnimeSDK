#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/DrinkMakerQuantifyTagType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_99BD961747420BEB_14;
class Class_1_BE759EFF8D56E66F;
class Class_1_FA60E9866DBA97E8_10;
namespace RPG::Client { class DrinkMakerBarIngredient; }
namespace RPG::Client { class DrinkMakerBartendDrinkData; }
namespace RPG::Client { class DrinkMakerCheersAddMatChatData; }
namespace RPG::Client { class DrinkMakerCheersBartendDrinkDataExtend; }
namespace RPG::Client { class DrinkMakerCheersBartendRequestData; }
namespace RPG::Client { class DrinkMakerCheersDisplayData; }
namespace RPG::Client { class DrinkMakerCheersGroupData; }
namespace RPG::Client { class DrinkMakerCheersGroupState; }
namespace RPG::Client { class DrinkMakerCheersGuestCommentData; }
namespace RPG::Client { class DrinkMakerCheersGuestData; }
namespace RPG::Client { class DrinkMakerCheersGuestDrinkRecordData; }
namespace RPG::Client { class DrinkMakerCheersMadeDrinkData; }
namespace RPG::Client { class DrinkMakerCheersTagData; }
namespace RPG::Client { class ScheduleData; }
namespace RPG::GameCore { class DrinkMakerIngredientRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_CHEERSHASMADEANYDRINKINGROUP_OFFSET UNITYSDK_OFFSET(0x9507C40)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_CHEERSHASMADEDRINKFORGROUP_OFFSET UNITYSDK_OFFSET(0x950D250)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_CHEERSSUBMITDRINKTOGUEST_OFFSET UNITYSDK_OFFSET(0x95063D0)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_CLEARONCANCELMAKEDRINK_OFFSET UNITYSDK_OFFSET(0x950D3E0)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_DISPOSE_OFFSET UNITYSDK_OFFSET(0x950DDF0)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_ENTERCHEERSMAKEDRINKBYREQUEST_OFFSET UNITYSDK_OFFSET(0x9505C00)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_ENTERCHEERSMAKEDRINKSTORY_OFFSET UNITYSDK_OFFSET(0x9505AA0)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GETCHEERSACTIVITYTITLENAME_OFFSET UNITYSDK_OFFSET(0x95060A0)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GETCHEERSADDMATCHATDATA_OFFSET UNITYSDK_OFFSET(0x950D0C0)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GETCHEERSDATA_OFFSET UNITYSDK_OFFSET(0x9506130)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GETCHEERSDRINKAVAILABLEINGREDIENTROWDATA_OFFSET UNITYSDK_OFFSET(0x95001A0)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GETCHEERSDRINKAVAILABLEINGREDIENTS_OFFSET UNITYSDK_OFFSET(0x95066A0)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GETCHEERSDRINKDATA_OFFSET UNITYSDK_OFFSET(0x95059C0)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GETCHEERSDRINKGUESTCOMMENTDATA_OFFSET UNITYSDK_OFFSET(0x9506AF0)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GETCHEERSDRINKNAME_OFFSET UNITYSDK_OFFSET(0x9507970)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GETCHEERSGROUPDATASFORHANDBOOK_OFFSET UNITYSDK_OFFSET(0x9508120)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GETCHEERSGROUPDATA_OFFSET UNITYSDK_OFFSET(0x9507710)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GETCHEERSGUESTCOMMENTDATA_OFFSET UNITYSDK_OFFSET(0x9506A10)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GETCHEERSGUESTDATAS_OFFSET UNITYSDK_OFFSET(0x9505D80)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GETCHEERSGUESTDATA_OFFSET UNITYSDK_OFFSET(0x9507E40)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GETCHEERSGUESTDRINKRECORDDATA_OFFSET UNITYSDK_OFFSET(0x9507FB0)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GETCHEERSHANDBOOKMADEDRINKCOUNT_OFFSET UNITYSDK_OFFSET(0x9508660)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GETCHEERSHANDBOOKTOTALDRINKCOUNT_OFFSET UNITYSDK_OFFSET(0x9508400)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GETCHEERSINGREDIENTDATA_OFFSET UNITYSDK_OFFSET(0x95065C0)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GETCHEERSMADEDRINKDATA_OFFSET UNITYSDK_OFFSET(0x9507B60)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GETCHEERSMAINSTORYPERFORMANCEDATA_OFFSET UNITYSDK_OFFSET(0x950CF50)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GETCHEERSSCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0x9505F20)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GETCHEERSSUBMITDRINKLIST_OFFSET UNITYSDK_OFFSET(0x95056A0)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GETCOMMENTDATAONHANDBOOK_OFFSET UNITYSDK_OFFSET(0x9506F80)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GETCURRENTNEEDSHOWPERFORMANCEDATABEFOREMAKEDRINK_OFFSET UNITYSDK_OFFSET(0x950CDF0)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GETDISPLAYDATA_OFFSET UNITYSDK_OFFSET(0x9508320)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GETINVITEGUESTCOMMENTDATA_OFFSET UNITYSDK_OFFSET(0x9506C60)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GET_BARTENDDRINKDATA_OFFSET UNITYSDK_OFFSET(0x950DD60)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GET_CHEERSDRINKREQUESTDATA_OFFSET UNITYSDK_OFFSET(0x950DD40)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GET_CURRENTGROUPSTATE_OFFSET UNITYSDK_OFFSET(0x950DD80)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GET_DRINKMAKERCHEERSACTIVITYID_OFFSET UNITYSDK_OFFSET(0x9505FD0)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GET_DRINKMAKERCHEERSLASTMAKEDRINKID_OFFSET UNITYSDK_OFFSET(0x950DDE0)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GET_DRINKMAKERCHEERSLIMITEDREWARDID_OFFSET UNITYSDK_OFFSET(0x9503730)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GET_GROUPIDRETURNAFTERINVITE_OFFSET UNITYSDK_OFFSET(0x950DC40)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GET_HASRECEIVEDRINKDATA_OFFSET UNITYSDK_OFFSET(0x950DDA0)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GET_ISININVITEGUESTREQUEST_OFFSET UNITYSDK_OFFSET(0x9509970)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GET_ISSENDINGMAKEDRINKREQ_OFFSET UNITYSDK_OFFSET(0x950DDC0)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_HASMAKECHEERSDRINK_OFFSET UNITYSDK_OFFSET(0x9506510)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_HASMAKEDRINKEXCEPTGUEST_OFFSET UNITYSDK_OFFSET(0x9507A30)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_HASSEENINVITEGUESTFINISHDRINK_OFFSET UNITYSDK_OFFSET(0x9509160)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_ISCHEERSDRINKUNLOCKED_OFFSET UNITYSDK_OFFSET(0x9506440)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_ISSELFGROUPDRINK_OFFSET UNITYSDK_OFFSET(0x9506EB0)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_ONCHEERSADDMADEDRINK_OFFSET UNITYSDK_OFFSET(0x950C6D0)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_ONCHEERSREFRESHMADEDRINKDATA_OFFSET UNITYSDK_OFFSET(0x950BFF0)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_OPENINVITEGUESTPAGE_OFFSET UNITYSDK_OFFSET(0x9505C70)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_PLAYDRINKGIVENAMEPERFORMANCEAFTERINVITEGUESTGIVEDRINK_OFFSET UNITYSDK_OFFSET(0x950C950)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_PLAYPERFORMANCEAFTERINVITEGUESTGIVEDRINK_OFFSET UNITYSDK_OFFSET(0x950B020)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_REPORTDATAONENTERGAME_OFFSET UNITYSDK_OFFSET(0x95088B0)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_REPORTDATAONFINISHGAME_OFFSET UNITYSDK_OFFSET(0x9508AA0)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_RETURNTOINVITEGUESTPAGEONMAKEDRINKSUMMARY_OFFSET UNITYSDK_OFFSET(0x95094D0)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_RETURNTOMAINPAGEONMAKEDRINKSUMMARY_OFFSET UNITYSDK_OFFSET(0x9509560)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_SENDDRINKMAKEREQONENTERDRINKDISPLAY_OFFSET UNITYSDK_OFFSET(0x95096C0)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_SETSEENINVITEGUESTFINISHDRINK_OFFSET UNITYSDK_OFFSET(0x95092D0)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_SET_BARTENDDRINKDATA_OFFSET UNITYSDK_OFFSET(0x950DD70)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_SET_CHEERSDRINKREQUESTDATA_OFFSET UNITYSDK_OFFSET(0x950DD50)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_SET_CURRENTGROUPSTATE_OFFSET UNITYSDK_OFFSET(0x950DD90)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_SET_HASRECEIVEDRINKDATA_OFFSET UNITYSDK_OFFSET(0x950DDB0)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_SET_ISSENDINGMAKEDRINKREQ_OFFSET UNITYSDK_OFFSET(0x950DDD0)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_SHOWDRINKMAKERCHEERSSUMMARYAFTERINVITEGUEST_OFFSET UNITYSDK_OFFSET(0x950CB40)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_TRIGGERCUSTOMSTRING_OFFSET UNITYSDK_OFFSET(0x950AFB0)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__CANENTERINVITEGUESTMAKEDRINK_OFFSET UNITYSDK_OFFSET(0x950B620)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__CLEARREQUESTDATAAFTERFINISHMAKEDRINK_OFFSET UNITYSDK_OFFSET(0x950AA80)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__CTOR_OFFSET UNITYSDK_OFFSET(0x9503A90)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__HANDLEMAKENEXTDRINKINTERNAL_OFFSET UNITYSDK_OFFSET(0x950A040)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__INITCHEERSDRINKDATA_OFFSET UNITYSDK_OFFSET(0x9503EC0)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__INITCHEERSDRINKINGREDIENTDATA_OFFSET UNITYSDK_OFFSET(0x9504140)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__INITCHEERSGROUPDATA_OFFSET UNITYSDK_OFFSET(0x9504620)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__INITCHEERSGUESTCOMMENTDATA_OFFSET UNITYSDK_OFFSET(0x95043B0)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__INITCHEERSMAINSTORYPERFORMANCEDATA_OFFSET UNITYSDK_OFFSET(0x9504890)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__INITCHEERSTAGDATA_OFFSET UNITYSDK_OFFSET(0x9503B90)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__INITDRINKMAKERCHEERSADDMATCHATDATA_OFFSET UNITYSDK_OFFSET(0x9504A70)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__INITDRINKMAKERCHEERSDISPLAYDATAS_OFFSET UNITYSDK_OFFSET(0x9505050)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__INITDRINKMAKERCHEERSGUESTDATA_OFFSET UNITYSDK_OFFSET(0x9504CC0)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__ONBARTENDRESULTDIALOGCLOSE_OFFSET UNITYSDK_OFFSET(0x950A5F0)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__ONDRINKMAKECHEERSCANCELMAKEDRINK_OFFSET UNITYSDK_OFFSET(0x950BFA0)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__ONDRINKMAKERCHEERSINVITEGUESTAFTERGIVEDRINKPERFORMANCEPLAYEND_OFFSET UNITYSDK_OFFSET(0x950DBA0)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__ONDRINKMAKERCHEERSINVITEGUESTCONFIRM_OFFSET UNITYSDK_OFFSET(0x950B140)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__ONDRINKMAKERCHEERSINVITEGUESTGIVEDRINK_OFFSET UNITYSDK_OFFSET(0x950BCA0)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__ONDRINKMAKERCHEERSINVITEGUESTMAKEDRINKSTART_OFFSET UNITYSDK_OFFSET(0x950BA30)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__ONDRINKMAKERCHEERSMAINSTORYSTARTNEXTDRINKINENTRANCE_OFFSET UNITYSDK_OFFSET(0x950ACF0)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__ONDRINKMAKERCHEERSMAINSTORYSTARTNEXTDRINK_OFFSET UNITYSDK_OFFSET(0x950ACA0)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__ONDRINKMAKERCHEERSMAKEDRINKCONFIRM_OFFSET UNITYSDK_OFFSET(0x950ADF0)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__ONDRINKMAKERCHEERSONEMOREDRINKCONFIRM_OFFSET UNITYSDK_OFFSET(0x950B810)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__ONDRINKMAKERCHEERSPERFORMANCEBEFOREMAKEDRINKPLAYEND_OFFSET UNITYSDK_OFFSET(0x950DA00)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__ONDRINKMAKERCHEERSSHOWMAINPAGEEND_OFFSET UNITYSDK_OFFSET(0x950B670)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__ONDRINKMAKERCHEERSSTARTNEXTDAY_OFFSET UNITYSDK_OFFSET(0x950A3C0)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__ONDRINKMAKERCHEERSSTARTSERVEBTNCLICK_OFFSET UNITYSDK_OFFSET(0x95099D0)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__ONEXITCOMMENTPAGE_OFFSET UNITYSDK_OFFSET(0x950A870)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__ONFINISHMAKEDRINK_OFFSET UNITYSDK_OFFSET(0x950A7C0)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__ONINVITEGUESTPERFORMANCEEND_OFFSET UNITYSDK_OFFSET(0x950B420)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__ONPREBARTENDPERFORMANCEEND_OFFSET UNITYSDK_OFFSET(0x950A5A0)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__ONSUBMITDRINKFINISHED_OFFSET UNITYSDK_OFFSET(0x950A820)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__REGISTERHANDLERS_OFFSET UNITYSDK_OFFSET(0x9505300)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__SORTGUESTRECORDSDATA_OFFSET UNITYSDK_OFFSET(0x950D6C0)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND___ONDRINKMAKERCHEERSMAINSTORYSTARTNEXTDRINKINENTRANCE_B__48_0_OFFSET UNITYSDK_OFFSET(0x950DFE0)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND___ONDRINKMAKERCHEERSSTARTNEXTDAY_B__41_0_OFFSET UNITYSDK_OFFSET(0x950DE70)

namespace RPG::Client
{
	inline static constexpr unsigned int DrinkMakerCheersBarExtend_TypeDefinitionIndex = 51659;

	class DrinkMakerCheersBarExtend : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::DrinkMakerCheersGroupData*>* _DrinkMakerCheersGroupDatas; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::DrinkMakerCheersGuestCommentData*>* _DrinkMakerCheersGuestCommentDatas; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::DrinkMakerCheersBartendDrinkDataExtend*>* _DrinkMakerCheersDrinkDatas; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::DrinkMakerCheersMadeDrinkData*>* _DrinkMakerCheersMadeDrinkDatas; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::RPG::Client::DrinkMakerCheersAddMatChatData*>* _DrinkMakerCheersAddMatChatDatas; // 0x30
		::RPG::Client::DrinkMakerCheersGroupState* _CurrentGroupState_k__BackingField; // 0x38
		::RPG::Client::DrinkMakerCheersBartendRequestData* _CheersDrinkRequestData_k__BackingField; // 0x40
		::RPG::Client::DrinkMakerBartendDrinkData* _BartendDrinkData_k__BackingField; // 0x48
		::System::Collections::Generic::List_1<::Class_1_BE759EFF8D56E66F*>* _DrinkMakerCheersMainStoryPerformaceDatas; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::DrinkMakerCheersGuestData*>* _DrinkMakerCheersGuestDatas; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::DrinkMakerBarIngredient*>* _DrinkMakerCheersIngredientDatas; // 0x60
		::RPG::Client::DrinkMakerCheersGuestData* _NeedReturnInviteGuestData; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::DrinkMakerCheersDisplayData*>* _DrinkMakerCheersDisplayDatas; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerCheersTagData*>*>* _DrinkMakerCheersTagDatas; // 0x78
		::System::UInt32 _DrinkMakerCheersLastMakeDrinkID; // 0x80
		::System::UInt32 _InViteGuestDirectCommitDrinkGroupID; // 0x84
		::System::Boolean _IsNeedCancelMakeDrink; // 0x88
		::System::Boolean _HasReceiveDrinkData_k__BackingField; // 0x89
		::System::Boolean _IsSendingMakeDrinkReq_k__BackingField; // 0x8A

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerCheersBartendDrinkDataExtend*>* GetCheersSubmitDrinkList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerCheersBartendDrinkDataExtend*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GETCHEERSSUBMITDRINKLIST_OFFSET))(this);
		}

		::System::Void EnterCheersMakeDrinkStory()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_ENTERCHEERSMAKEDRINKSTORY_OFFSET))(this);
		}

		::System::Void EnterCheersMakeDrinkByRequest(::RPG::Client::DrinkMakerCheersBartendRequestData* requestData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DrinkMakerCheersBartendRequestData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_ENTERCHEERSMAKEDRINKBYREQUEST_OFFSET))(this, requestData);
		}

		::System::Void OpenInviteGuestPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_OPENINVITEGUESTPAGE_OFFSET))(this);
		}

		::RPG::Client::ScheduleData* GetCheersScheduleData()
		{
			return ((::RPG::Client::ScheduleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GETCHEERSSCHEDULEDATA_OFFSET))(this);
		}

		::RPG::Client::TextID GetCheersActivityTitleName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GETCHEERSACTIVITYTITLENAME_OFFSET))(this);
		}

		::RPG::Client::DrinkMakerCheersBartendDrinkDataExtend* GetCheersDrinkData(::System::UInt32 drinkId)
		{
			return ((::RPG::Client::DrinkMakerCheersBartendDrinkDataExtend*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GETCHEERSDRINKDATA_OFFSET))(this, drinkId);
		}

		::RPG::Client::DrinkMakerCheersTagData* GetCheersData(::System::UInt32 drinkId, ::RPG::GameCore::DrinkMakerQuantifyTagType quantifyTagType)
		{
			return ((::RPG::Client::DrinkMakerCheersTagData*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::DrinkMakerQuantifyTagType))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GETCHEERSDATA_OFFSET))(this, drinkId, quantifyTagType);
		}

		::System::Void CheersSubmitDrinkToGuest(::System::UInt32 drinkId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_CHEERSSUBMITDRINKTOGUEST_OFFSET))(this, drinkId);
		}

		::System::Boolean IsCheersDrinkUnlocked(::System::UInt32 drinkId)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_ISCHEERSDRINKUNLOCKED_OFFSET))(this, drinkId);
		}

		::RPG::Client::DrinkMakerBarIngredient* GetCheersIngredientData(::System::UInt32 ingredientId)
		{
			return ((::RPG::Client::DrinkMakerBarIngredient*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GETCHEERSINGREDIENTDATA_OFFSET))(this, ingredientId);
		}

		::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerBarIngredient*>* GetCheersDrinkAvailableIngredients(::System::UInt32 drinkId)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerBarIngredient*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GETCHEERSDRINKAVAILABLEINGREDIENTS_OFFSET))(this, drinkId);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::DrinkMakerIngredientRow*>* GetCheersDrinkAvailableIngredientRowData(::System::UInt32 drinkId)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::DrinkMakerIngredientRow*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GETCHEERSDRINKAVAILABLEINGREDIENTROWDATA_OFFSET))(this, drinkId);
		}

		::RPG::Client::DrinkMakerCheersGuestCommentData* GetCheersGuestCommentData(::System::UInt32 cheersCommentConfigId)
		{
			return ((::RPG::Client::DrinkMakerCheersGuestCommentData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GETCHEERSGUESTCOMMENTDATA_OFFSET))(this, cheersCommentConfigId);
		}

		::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerCheersGuestCommentData*>* GetCheersDrinkGuestCommentData(::System::UInt32 drinkId)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerCheersGuestCommentData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GETCHEERSDRINKGUESTCOMMENTDATA_OFFSET))(this, drinkId);
		}

		::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerCheersGuestCommentData*>* GetInviteGuestCommentData(::System::UInt32 groupId, ::System::UInt32 drinkId)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerCheersGuestCommentData*>*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GETINVITEGUESTCOMMENTDATA_OFFSET))(this, groupId, drinkId);
		}

		::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerCheersGuestCommentData*>* GetCommentDataOnHandBook(::System::UInt32 drinkId)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerCheersGuestCommentData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GETCOMMENTDATAONHANDBOOK_OFFSET))(this, drinkId);
		}

		::System::Boolean IsSelfGroupDrink(::System::UInt32 groupId, ::System::UInt32 drinkId)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_ISSELFGROUPDRINK_OFFSET))(this, groupId, drinkId);
		}

		::System::String* GetCheersDrinkName(::System::UInt32 drinkId)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GETCHEERSDRINKNAME_OFFSET))(this, drinkId);
		}

		::RPG::Client::DrinkMakerCheersGroupData* GetCheersGroupData(::System::UInt32 groupId)
		{
			return ((::RPG::Client::DrinkMakerCheersGroupData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GETCHEERSGROUPDATA_OFFSET))(this, groupId);
		}

		::System::Boolean HasMakeCheersDrink(::System::UInt32 drinkId)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_HASMAKECHEERSDRINK_OFFSET))(this, drinkId);
		}

		::System::Boolean HasMakeDrinkExceptGuest(::System::UInt32 drinkId, ::System::UInt32 exceptGroupId)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_HASMAKEDRINKEXCEPTGUEST_OFFSET))(this, drinkId, exceptGroupId);
		}

		::RPG::Client::DrinkMakerCheersMadeDrinkData* GetCheersMadeDrinkData(::System::UInt32 drinkId)
		{
			return ((::RPG::Client::DrinkMakerCheersMadeDrinkData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GETCHEERSMADEDRINKDATA_OFFSET))(this, drinkId);
		}

		::System::Boolean CheersHasMadeAnyDrinkInGroup(::System::UInt32 groupId)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_CHEERSHASMADEANYDRINKINGROUP_OFFSET))(this, groupId);
		}

		::RPG::Client::DrinkMakerCheersGuestData* GetCheersGuestData(::System::UInt32 groupId)
		{
			return ((::RPG::Client::DrinkMakerCheersGuestData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GETCHEERSGUESTDATA_OFFSET))(this, groupId);
		}

		::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerCheersGuestData*>* GetCheersGuestDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerCheersGuestData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GETCHEERSGUESTDATAS_OFFSET))(this);
		}

		::RPG::Client::DrinkMakerCheersGuestDrinkRecordData* GetCheersGuestDrinkRecordData(::System::UInt32 groupId, ::System::UInt32 drinkId)
		{
			return ((::RPG::Client::DrinkMakerCheersGuestDrinkRecordData*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GETCHEERSGUESTDRINKRECORDDATA_OFFSET))(this, groupId, drinkId);
		}

		::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerCheersGroupData*>* GetCheersGroupDatasForHandBook()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerCheersGroupData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GETCHEERSGROUPDATASFORHANDBOOK_OFFSET))(this);
		}

		::RPG::Client::DrinkMakerCheersDisplayData* GetDisplayData(::System::UInt32 displayId)
		{
			return ((::RPG::Client::DrinkMakerCheersDisplayData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GETDISPLAYDATA_OFFSET))(this, displayId);
		}

		::System::UInt32 GetCheersHandBookTotalDrinkCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GETCHEERSHANDBOOKTOTALDRINKCOUNT_OFFSET))(this);
		}

		::System::UInt32 GetCheersHandBookMadeDrinkCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GETCHEERSHANDBOOKMADEDRINKCOUNT_OFFSET))(this);
		}

		::System::Void ReportDataOnEnterGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_REPORTDATAONENTERGAME_OFFSET))(this);
		}

		::System::Void ReportDataOnFinishGame(::System::Boolean isAbortGame, ::System::Boolean canMakeDrink, ::System::Single timeUse, ::System::UInt32 resetCount, ::System::UInt32 ingredientResetCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Single, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_REPORTDATAONFINISHGAME_OFFSET))(this, isAbortGame, canMakeDrink, timeUse, resetCount, ingredientResetCount);
		}

		::System::Boolean HasSeenInviteGuestFinishDrink(::System::UInt32 groupId, ::System::UInt32 drinkId)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_HASSEENINVITEGUESTFINISHDRINK_OFFSET))(this, groupId, drinkId);
		}

		::System::Void SetSeenInviteGuestFinishDrink(::System::UInt32 groupId, ::System::UInt32 drinkId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_SETSEENINVITEGUESTFINISHDRINK_OFFSET))(this, groupId, drinkId);
		}

		::System::Void ReturnToInviteGuestPageOnMakeDrinkSummary()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_RETURNTOINVITEGUESTPAGEONMAKEDRINKSUMMARY_OFFSET))(this);
		}

		::System::Void ReturnToMainPageOnMakeDrinkSummary()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_RETURNTOMAINPAGEONMAKEDRINKSUMMARY_OFFSET))(this);
		}

		::System::Void SendDrinkMakeReqOnEnterDrinkDisplay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_SENDDRINKMAKEREQONENTERDRINKDISPLAY_OFFSET))(this);
		}

		::System::Void _RegisterHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__REGISTERHANDLERS_OFFSET))(this);
		}

		::System::Void _OnDrinkMakerCheersStartServeBtnClick(::System::Object* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__ONDRINKMAKERCHEERSSTARTSERVEBTNCLICK_OFFSET))(this, args);
		}

		::System::Void _OnDrinkMakerCheersStartNextDay(::System::Object* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__ONDRINKMAKERCHEERSSTARTNEXTDAY_OFFSET))(this, args);
		}

		::System::Void _OnPreBartendPerformanceEnd(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__ONPREBARTENDPERFORMANCEEND_OFFSET))(this, arg);
		}

		::System::Void _OnBartendResultDialogClose(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__ONBARTENDRESULTDIALOGCLOSE_OFFSET))(this, arg);
		}

		::System::Void _OnFinishMakeDrink(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__ONFINISHMAKEDRINK_OFFSET))(this, arg);
		}

		::System::Void _OnSubmitDrinkFinished(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__ONSUBMITDRINKFINISHED_OFFSET))(this, arg);
		}

		::System::Void _OnExitCommentPage(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__ONEXITCOMMENTPAGE_OFFSET))(this, arg);
		}

		::System::Void _OnDrinkMakerCheersMainStoryStartNextDrink(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__ONDRINKMAKERCHEERSMAINSTORYSTARTNEXTDRINK_OFFSET))(this, arg);
		}

		::System::Void _OnDrinkMakerCheersMainStoryStartNextDrinkInEntrance(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__ONDRINKMAKERCHEERSMAINSTORYSTARTNEXTDRINKINENTRANCE_OFFSET))(this, arg);
		}

		::System::Void _OnDrinkMakerCheersMakeDrinkConfirm(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__ONDRINKMAKERCHEERSMAKEDRINKCONFIRM_OFFSET))(this, arg);
		}

		::System::Void _OnDrinkMakerCheersInviteGuestConfirm(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__ONDRINKMAKERCHEERSINVITEGUESTCONFIRM_OFFSET))(this, arg);
		}

		::System::Void _OnInviteGuestPerformanceEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__ONINVITEGUESTPERFORMANCEEND_OFFSET))(this);
		}

		::System::Void _OnDrinkMakerCheersShowMainPageEnd(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__ONDRINKMAKERCHEERSSHOWMAINPAGEEND_OFFSET))(this, arg);
		}

		::System::Void _OnDrinkMakerCheersOneMoreDrinkConfirm(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__ONDRINKMAKERCHEERSONEMOREDRINKCONFIRM_OFFSET))(this, arg);
		}

		::System::Void _OnDrinkMakerCheersInviteGuestMakeDrinkStart(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__ONDRINKMAKERCHEERSINVITEGUESTMAKEDRINKSTART_OFFSET))(this, arg);
		}

		::System::Void _OnDrinkMakerCheersInviteGuestGiveDrink(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__ONDRINKMAKERCHEERSINVITEGUESTGIVEDRINK_OFFSET))(this, arg);
		}

		::System::Void _OnDrinkMakeCheersCancelMakeDrink(::System::Object* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__ONDRINKMAKECHEERSCANCELMAKEDRINK_OFFSET))(this, args);
		}

		::System::Void OnCheersRefreshMadeDrinkData(::Class_1_99BD961747420BEB_14* getDataScRsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_99BD961747420BEB_14*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_ONCHEERSREFRESHMADEDRINKDATA_OFFSET))(this, getDataScRsp);
		}

		::System::Void OnCheersAddMadeDrink(::Class_1_FA60E9866DBA97E8_10* makeDrinkScRsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FA60E9866DBA97E8_10*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_ONCHEERSADDMADEDRINK_OFFSET))(this, makeDrinkScRsp);
		}

		::System::Void PlayPerformanceAfterInviteGuestGiveDrink(::RPG::Client::DrinkMakerCheersGuestDrinkRecordData* drinkRecordData, ::System::UInt32 needPlayPerformanceIndex)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DrinkMakerCheersGuestDrinkRecordData*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_PLAYPERFORMANCEAFTERINVITEGUESTGIVEDRINK_OFFSET))(this, drinkRecordData, needPlayPerformanceIndex);
		}

		::System::Void PlayDrinkGiveNamePerformanceAfterInviteGuestGiveDrink(::RPG::Client::DrinkMakerCheersGuestDrinkRecordData* drinkRecordData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DrinkMakerCheersGuestDrinkRecordData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_PLAYDRINKGIVENAMEPERFORMANCEAFTERINVITEGUESTGIVEDRINK_OFFSET))(this, drinkRecordData);
		}

		::System::Void ShowDrinkMakerCheersSummaryAfterInviteGuest(::RPG::Client::DrinkMakerCheersGuestDrinkRecordData* drinkRecordData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DrinkMakerCheersGuestDrinkRecordData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_SHOWDRINKMAKERCHEERSSUMMARYAFTERINVITEGUEST_OFFSET))(this, drinkRecordData);
		}

		::System::Void TriggerCustomString(::System::String* customString)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_TRIGGERCUSTOMSTRING_OFFSET))(this, customString);
		}

		::Class_1_BE759EFF8D56E66F* GetCurrentNeedShowPerformanceDataBeforeMakeDrink()
		{
			return ((::Class_1_BE759EFF8D56E66F*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GETCURRENTNEEDSHOWPERFORMANCEDATABEFOREMAKEDRINK_OFFSET))(this);
		}

		::Class_1_BE759EFF8D56E66F* GetCheersMainStoryPerformanceData(::System::UInt32 groupId, ::System::Boolean isFirstDrinkOfDay)
		{
			return ((::Class_1_BE759EFF8D56E66F*(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GETCHEERSMAINSTORYPERFORMANCEDATA_OFFSET))(this, groupId, isFirstDrinkOfDay);
		}

		::RPG::Client::DrinkMakerCheersAddMatChatData* GetCheersAddMatChatData(::System::UInt32 ingredientId, ::System::UInt32 groupId)
		{
			return ((::RPG::Client::DrinkMakerCheersAddMatChatData*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GETCHEERSADDMATCHATDATA_OFFSET))(this, ingredientId, groupId);
		}

		::System::Boolean CheersHasMadeDrinkForGroup(::System::UInt32 drinkId, ::System::UInt32 groupId)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_CHEERSHASMADEDRINKFORGROUP_OFFSET))(this, drinkId, groupId);
		}

		::System::Void ClearOnCancelMakeDrink()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_CLEARONCANCELMAKEDRINK_OFFSET))(this);
		}

		::System::Void _InitCheersTagData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__INITCHEERSTAGDATA_OFFSET))(this);
		}

		::System::Void _InitCheersDrinkData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__INITCHEERSDRINKDATA_OFFSET))(this);
		}

		::System::Void _InitCheersDrinkIngredientData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__INITCHEERSDRINKINGREDIENTDATA_OFFSET))(this);
		}

		::System::Void _InitCheersGuestCommentData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__INITCHEERSGUESTCOMMENTDATA_OFFSET))(this);
		}

		::System::Void _InitCheersGroupData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__INITCHEERSGROUPDATA_OFFSET))(this);
		}

		::System::Void _InitCheersMainStoryPerformanceData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__INITCHEERSMAINSTORYPERFORMANCEDATA_OFFSET))(this);
		}

		::System::Void _InitDrinkMakerCheersAddMatChatData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__INITDRINKMAKERCHEERSADDMATCHATDATA_OFFSET))(this);
		}

		::System::Void _InitDrinkMakerCheersGuestData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__INITDRINKMAKERCHEERSGUESTDATA_OFFSET))(this);
		}

		::System::Void _SortGuestRecordsData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__SORTGUESTRECORDSDATA_OFFSET))(this);
		}

		::System::Void _InitDrinkMakerCheersDisplayDatas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__INITDRINKMAKERCHEERSDISPLAYDATAS_OFFSET))(this);
		}

		::System::Void _OnDrinkMakerCheersPerformanceBeforeMakeDrinkPlayEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__ONDRINKMAKERCHEERSPERFORMANCEBEFOREMAKEDRINKPLAYEND_OFFSET))(this);
		}

		::System::Void _OnDrinkMakerCheersInviteGuestAfterGiveDrinkPerformancePlayEnd(::RPG::Client::DrinkMakerCheersGuestDrinkRecordData* drinkRecordData, ::System::UInt32 playedPerformanceIDIndex)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DrinkMakerCheersGuestDrinkRecordData*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__ONDRINKMAKERCHEERSINVITEGUESTAFTERGIVEDRINKPERFORMANCEPLAYEND_OFFSET))(this, drinkRecordData, playedPerformanceIDIndex);
		}

		::System::Void _HandleMakeNextDrinkInternal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__HANDLEMAKENEXTDRINKINTERNAL_OFFSET))(this);
		}

		::System::Void _ClearRequestDataAfterFinishMakeDrink()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__CLEARREQUESTDATAAFTERFINISHMAKEDRINK_OFFSET))(this);
		}

		::System::Boolean _CanEnterInviteGuestMakeDrink(::System::UInt32 guestGroupId)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND__CANENTERINVITEGUESTMAKEDRINK_OFFSET))(this, guestGroupId);
		}

		::RPG::Client::DrinkMakerCheersBartendRequestData* get_CheersDrinkRequestData()
		{
			return ((::RPG::Client::DrinkMakerCheersBartendRequestData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GET_CHEERSDRINKREQUESTDATA_OFFSET))(this);
		}

		::System::Void set_CheersDrinkRequestData(::RPG::Client::DrinkMakerCheersBartendRequestData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DrinkMakerCheersBartendRequestData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_SET_CHEERSDRINKREQUESTDATA_OFFSET))(this, value);
		}

		::RPG::Client::DrinkMakerBartendDrinkData* get_BartendDrinkData()
		{
			return ((::RPG::Client::DrinkMakerBartendDrinkData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GET_BARTENDDRINKDATA_OFFSET))(this);
		}

		::System::Void set_BartendDrinkData(::RPG::Client::DrinkMakerBartendDrinkData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DrinkMakerBartendDrinkData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_SET_BARTENDDRINKDATA_OFFSET))(this, value);
		}

		::RPG::Client::DrinkMakerCheersGroupState* get_CurrentGroupState()
		{
			return ((::RPG::Client::DrinkMakerCheersGroupState*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GET_CURRENTGROUPSTATE_OFFSET))(this);
		}

		::System::Void set_CurrentGroupState(::RPG::Client::DrinkMakerCheersGroupState* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DrinkMakerCheersGroupState*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_SET_CURRENTGROUPSTATE_OFFSET))(this, value);
		}

		::System::Boolean get_IsInInviteGuestRequest()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GET_ISININVITEGUESTREQUEST_OFFSET))(this);
		}

		::System::Boolean get_HasReceiveDrinkData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GET_HASRECEIVEDRINKDATA_OFFSET))(this);
		}

		::System::Void set_HasReceiveDrinkData(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_SET_HASRECEIVEDRINKDATA_OFFSET))(this, value);
		}

		::System::Boolean get_IsSendingMakeDrinkReq()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GET_ISSENDINGMAKEDRINKREQ_OFFSET))(this);
		}

		::System::Void set_IsSendingMakeDrinkReq(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_SET_ISSENDINGMAKEDRINKREQ_OFFSET))(this, value);
		}

		::System::UInt32 get_DrinkMakerCheersLastMakeDrinkID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GET_DRINKMAKERCHEERSLASTMAKEDRINKID_OFFSET))(this);
		}

		static ::System::UInt32 get_DrinkMakerCheersLimitedRewardID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GET_DRINKMAKERCHEERSLIMITEDREWARDID_OFFSET))();
		}

		static ::System::UInt32 get_DrinkMakerCheersActivityID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GET_DRINKMAKERCHEERSACTIVITYID_OFFSET))();
		}

		static ::System::UInt32 get_GroupIDReturnAfterInvite()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_GET_GROUPIDRETURNAFTERINVITE_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND_DISPOSE_OFFSET))(this);
		}

		::System::Void __OnDrinkMakerCheersStartNextDay_b__41_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND___ONDRINKMAKERCHEERSSTARTNEXTDAY_B__41_0_OFFSET))(this);
		}

		::System::Void __OnDrinkMakerCheersMainStoryStartNextDrinkInEntrance_b__48_0(::System::Boolean isOk)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND___ONDRINKMAKERCHEERSMAINSTORYSTARTNEXTDRINKINENTRANCE_B__48_0_OFFSET))(this, isOk);
		}
	};
}
