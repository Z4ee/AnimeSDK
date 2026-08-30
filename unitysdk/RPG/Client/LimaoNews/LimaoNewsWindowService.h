#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LimaoNews/LimaoNewsWebsiteViewTabEnum.h"
#include "unitysdk/RPG/GameCore/LimaoNewsCityType.h"
#include "unitysdk/System/Object.h"

class Class_1_5F4D64A4B97E38F9;
namespace RPG::Client { class UIController; }
namespace RPG::Client::LimaoNews { class LimaoNewsInterviewDetailWindow; }
namespace RPG::Client::LimaoNews { class LimaoNewsInterviewViewModel; }
namespace RPG::Client::LimaoNews { class LimaoNewsIssueData; }
namespace RPG::Client::LimaoNews { class LimaoNewsIssueSubmitWindow; }
namespace RPG::Client::LimaoNews { class LimaoNewsPlanData; }
namespace RPG::Client::LimaoNews { class LimaoNewsPlanPhaseData; }
namespace RPG::Client::LimaoNews { class LimaoNewsPostData; }
namespace RPG::Client::LimaoNews { class LimaoNewsPostDetailWindow; }
namespace RPG::Client::LimaoNews { class LimaoNewsPostSubmitViewModel; }
namespace RPG::Client::LimaoNews { class LimaoNewsPostSubmitWindow; }
namespace RPG::Client::LimaoNews { class LimaoNewsPostViewModel; }
namespace RPG::Client::LimaoNews { class LimaoNewsWebsiteViewModelParam; }
namespace RPG::Client::LimaoNews { class LimaoNewsWebsiteWindow; }
namespace RPG::Client::LimaoNews { class LimaoNewsWorkProgressBaseViewModel; }
namespace RPG::Client::LimaoNews { class LimaoNewsWorkProgressResultViewModel; }
namespace Sofa { class BaseSofaWindow; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWINDOWSERVICE_CREATEINTERVIEWDETAILPAGE_1_OFFSET UNITYSDK_OFFSET(0xD49A130)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWINDOWSERVICE_CREATEINTERVIEWDETAILPAGE_OFFSET UNITYSDK_OFFSET(0xD49A290)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWINDOWSERVICE_CREATEPOSTDETAILWINDOW_OFFSET UNITYSDK_OFFSET(0xD48EEA0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWINDOWSERVICE_CREATEPOSTSUBMITWINDOW_OFFSET UNITYSDK_OFFSET(0xD49A700)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWINDOWSERVICE_CREATEWEBSITEPAGE_OFFSET UNITYSDK_OFFSET(0xD499D90)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWINDOWSERVICE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD499240)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWINDOWSERVICE_ENTERMAINENTRANCEPAGE_1_OFFSET UNITYSDK_OFFSET(0xD4994A0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWINDOWSERVICE_ENTERMAINENTRANCEPAGE_OFFSET UNITYSDK_OFFSET(0xD499450)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWINDOWSERVICE_GETCURRENTCITYTYPE_OFFSET UNITYSDK_OFFSET(0xD499280)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWINDOWSERVICE_SHOWINTERVIEWDETAILPAGE_OFFSET UNITYSDK_OFFSET(0xD49A0B0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWINDOWSERVICE_SHOWISSUESUBMITWINDOW_OFFSET UNITYSDK_OFFSET(0xD49A530)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWINDOWSERVICE_SHOWLIMAONEWSISSUEHINTPOPUPMESSAGE_OFFSET UNITYSDK_OFFSET(0xD49ABB0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWINDOWSERVICE_SHOWLIMAONEWSMANAGEMENTPAGE_OFFSET UNITYSDK_OFFSET(0xD49AD80)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWINDOWSERVICE_SHOWLIMAONEWSSPONSORINTRODUCTION_OFFSET UNITYSDK_OFFSET(0xD48F2E0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWINDOWSERVICE_SHOWMAINENTRANCEPAGE_OFFSET UNITYSDK_OFFSET(0xD499660)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWINDOWSERVICE_SHOWMAINENTRANCEWEBSITEPAGE_OFFSET UNITYSDK_OFFSET(0xD4998F0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWINDOWSERVICE_SHOWPLANPHASESUBMITWINDOW_OFFSET UNITYSDK_OFFSET(0xD49A950)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWINDOWSERVICE_SHOWPLANREVIEWDIALOG_OFFSET UNITYSDK_OFFSET(0xD49B600)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWINDOWSERVICE_SHOWPLANSUBMITWINDOW_OFFSET UNITYSDK_OFFSET(0xD49AA80)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWINDOWSERVICE_SHOWPOSTDETAILWINDOWBYPOSTDATA_OFFSET UNITYSDK_OFFSET(0xD49A4C0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWINDOWSERVICE_SHOWPOSTDETAILWINDOW_OFFSET UNITYSDK_OFFSET(0xD48A3E0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWINDOWSERVICE_SHOWPOSTFULLSCREENCOMIC_OFFSET UNITYSDK_OFFSET(0xD489E60)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWINDOWSERVICE_SHOWPOSTFULLSCREENVIDEO_OFFSET UNITYSDK_OFFSET(0xD48A0C0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWINDOWSERVICE_SHOWPOSTSUBMITWINDOW_OFFSET UNITYSDK_OFFSET(0xD489D40)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWINDOWSERVICE_SHOWWEBSITEPAGEANDOPENPOSTDETAIL_OFFSET UNITYSDK_OFFSET(0xD499FB0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWINDOWSERVICE_SHOWWEBSITEPAGE_1_OFFSET UNITYSDK_OFFSET(0xD499C30)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWINDOWSERVICE_SHOWWEBSITEPAGE_OFFSET UNITYSDK_OFFSET(0xD499CA0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWINDOWSERVICE_SHOWWORKPROGRESSONGOINGPAGE_OFFSET UNITYSDK_OFFSET(0xD49B170)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWINDOWSERVICE_SHOWWORKPROGRESSRESULTDIALOG_OFFSET UNITYSDK_OFFSET(0xD49B770)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWINDOWSERVICE_SHOWWORKPROGRESSRESULTPAGEBYVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xD47CBD0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWINDOWSERVICE_SHOWWORKPROGRESSSTARTPAGE_OFFSET UNITYSDK_OFFSET(0xD49AFC0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWINDOWSERVICE_SWITCHCITY_OFFSET UNITYSDK_OFFSET(0xD499330)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWINDOWSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0xD49B840)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWINDOWSERVICE__ENTERMAINENTRANCEPAGE_B__5_0_OFFSET UNITYSDK_OFFSET(0xD49B850)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWINDOWSERVICE__ENTERMAINENTRANCEPAGE_B__5_1_OFFSET UNITYSDK_OFFSET(0xD49BBA0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWINDOWSERVICE__ONTRIGGERENTRANCENEWGUIDE_OFFSET UNITYSDK_OFFSET(0xD49B7C0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWINDOWSERVICE__SHOWPOSTSUBMITWINDOW_OFFSET UNITYSDK_OFFSET(0xD49A8E0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWINDOWSERVICE__SHOWWORKPROGRESSPAGE_OFFSET UNITYSDK_OFFSET(0xD49B070)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsWindowService_TypeDefinitionIndex = 79023;

	class LimaoNewsWindowService : public ::System::Object
	{
	public:
		// static const ::System::String* LimaoNewsPlanProgressPagePath; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWINDOWSERVICE__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWINDOWSERVICE_DISPOSE_OFFSET))(this);
		}

		::RPG::GameCore::LimaoNewsCityType GetCurrentCityType()
		{
			return ((::RPG::GameCore::LimaoNewsCityType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWINDOWSERVICE_GETCURRENTCITYTYPE_OFFSET))(this);
		}

		::System::Void SwitchCity(::RPG::GameCore::LimaoNewsCityType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LimaoNewsCityType))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWINDOWSERVICE_SWITCHCITY_OFFSET))(this, a1);
		}

		::RPG::Client::UIController* EnterMainEntrancePage(::System::Int32 a1)
		{
			return ((::RPG::Client::UIController*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWINDOWSERVICE_ENTERMAINENTRANCEPAGE_OFFSET))(this, a1);
		}

		::RPG::Client::UIController* EnterMainEntrancePage_1(::RPG::GameCore::LimaoNewsCityType a1)
		{
			return ((::RPG::Client::UIController*(*)(::PVOID, ::RPG::GameCore::LimaoNewsCityType))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWINDOWSERVICE_ENTERMAINENTRANCEPAGE_1_OFFSET))(this, a1);
		}

		::RPG::Client::UIController* ShowMainEntrancePage(::System::Boolean a1, ::System::Boolean a2, ::RPG::GameCore::LimaoNewsCityType a3, ::System::Boolean a4)
		{
			return ((::RPG::Client::UIController*(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::RPG::GameCore::LimaoNewsCityType, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWINDOWSERVICE_SHOWMAINENTRANCEPAGE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void ShowMainEntranceWebsitePage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWINDOWSERVICE_SHOWMAINENTRANCEWEBSITEPAGE_OFFSET))(this);
		}

		::System::Void ShowWebsitePage(::RPG::Client::LimaoNews::LimaoNewsWebsiteViewTabEnum a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsWebsiteViewTabEnum))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWINDOWSERVICE_SHOWWEBSITEPAGE_OFFSET))(this, a1);
		}

		::System::Void ShowWebsitePage_1(::RPG::Client::LimaoNews::LimaoNewsWebsiteViewModelParam* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsWebsiteViewModelParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWINDOWSERVICE_SHOWWEBSITEPAGE_1_OFFSET))(this, a1);
		}

		::System::Void ShowWebsitePageAndOpenPostDetail(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWINDOWSERVICE_SHOWWEBSITEPAGEANDOPENPOSTDETAIL_OFFSET))(this, a1);
		}

		::RPG::Client::LimaoNews::LimaoNewsWebsiteWindow* CreateWebsitePage(::RPG::Client::LimaoNews::LimaoNewsWebsiteViewModelParam* a1)
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsWebsiteWindow*(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsWebsiteViewModelParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWINDOWSERVICE_CREATEWEBSITEPAGE_OFFSET))(this, a1);
		}

		::System::Void ShowLimaoNewsSponsorIntroduction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWINDOWSERVICE_SHOWLIMAONEWSSPONSORINTRODUCTION_OFFSET))(this);
		}

		::RPG::Client::LimaoNews::LimaoNewsInterviewDetailWindow* ShowInterviewDetailPage(::RPG::Client::LimaoNews::LimaoNewsInterviewViewModel* a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsInterviewDetailWindow*(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsInterviewViewModel*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWINDOWSERVICE_SHOWINTERVIEWDETAILPAGE_OFFSET))(this, a1, a2);
		}

		::RPG::Client::LimaoNews::LimaoNewsInterviewDetailWindow* CreateInterviewDetailPage(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsInterviewDetailWindow*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWINDOWSERVICE_CREATEINTERVIEWDETAILPAGE_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::LimaoNews::LimaoNewsInterviewDetailWindow* CreateInterviewDetailPage_1(::RPG::Client::LimaoNews::LimaoNewsInterviewViewModel* a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsInterviewDetailWindow*(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsInterviewViewModel*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWINDOWSERVICE_CREATEINTERVIEWDETAILPAGE_1_OFFSET))(this, a1, a2);
		}

		::System::Void ShowPostDetailWindowByPostData(::RPG::Client::LimaoNews::LimaoNewsPostData* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsPostData*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWINDOWSERVICE_SHOWPOSTDETAILWINDOWBYPOSTDATA_OFFSET))(this, a1, a2);
		}

		::RPG::Client::LimaoNews::LimaoNewsPostDetailWindow* CreatePostDetailWindow(::RPG::Client::LimaoNews::LimaoNewsPostData* a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsPostDetailWindow*(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsPostData*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWINDOWSERVICE_CREATEPOSTDETAILWINDOW_OFFSET))(this, a1, a2);
		}

		::System::Void ShowPostDetailWindow(::RPG::Client::LimaoNews::LimaoNewsPostViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsPostViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWINDOWSERVICE_SHOWPOSTDETAILWINDOW_OFFSET))(this, a1);
		}

		::System::Void ShowPostFullScreenComic(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWINDOWSERVICE_SHOWPOSTFULLSCREENCOMIC_OFFSET))(this, a1);
		}

		::System::Void ShowPostFullScreenVideo(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWINDOWSERVICE_SHOWPOSTFULLSCREENVIDEO_OFFSET))(this, a1);
		}

		::RPG::Client::LimaoNews::LimaoNewsIssueSubmitWindow* ShowIssueSubmitWindow(::RPG::Client::LimaoNews::LimaoNewsIssueData* a1)
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsIssueSubmitWindow*(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsIssueData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWINDOWSERVICE_SHOWISSUESUBMITWINDOW_OFFSET))(this, a1);
		}

		::RPG::Client::LimaoNews::LimaoNewsPostSubmitWindow* CreatePostSubmitWindow(::System::Func_2<::Class_1_5F4D64A4B97E38F9*, ::RPG::Client::LimaoNews::LimaoNewsPostSubmitViewModel*>* a1)
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsPostSubmitWindow*(*)(::PVOID, ::System::Func_2<::Class_1_5F4D64A4B97E38F9*, ::RPG::Client::LimaoNews::LimaoNewsPostSubmitViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWINDOWSERVICE_CREATEPOSTSUBMITWINDOW_OFFSET))(this, a1);
		}

		::RPG::Client::LimaoNews::LimaoNewsPostSubmitWindow* ShowPostSubmitWindow(::RPG::Client::LimaoNews::LimaoNewsPostData* a1)
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsPostSubmitWindow*(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsPostData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWINDOWSERVICE_SHOWPOSTSUBMITWINDOW_OFFSET))(this, a1);
		}

		::RPG::Client::LimaoNews::LimaoNewsPostSubmitWindow* ShowPlanPhaseSubmitWindow(::RPG::Client::LimaoNews::LimaoNewsPlanPhaseData* a1)
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsPostSubmitWindow*(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsPlanPhaseData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWINDOWSERVICE_SHOWPLANPHASESUBMITWINDOW_OFFSET))(this, a1);
		}

		::RPG::Client::LimaoNews::LimaoNewsPostSubmitWindow* ShowPlanSubmitWindow(::RPG::Client::LimaoNews::LimaoNewsPlanData* a1)
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsPostSubmitWindow*(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsPlanData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWINDOWSERVICE_SHOWPLANSUBMITWINDOW_OFFSET))(this, a1);
		}

		::RPG::Client::LimaoNews::LimaoNewsPostSubmitWindow* _ShowPostSubmitWindow(::System::Func_2<::Class_1_5F4D64A4B97E38F9*, ::RPG::Client::LimaoNews::LimaoNewsPostSubmitViewModel*>* a1)
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsPostSubmitWindow*(*)(::PVOID, ::System::Func_2<::Class_1_5F4D64A4B97E38F9*, ::RPG::Client::LimaoNews::LimaoNewsPostSubmitViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWINDOWSERVICE__SHOWPOSTSUBMITWINDOW_OFFSET))(this, a1);
		}

		::System::Void ShowLimaoNewsIssueHintPopupMessage(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWINDOWSERVICE_SHOWLIMAONEWSISSUEHINTPOPUPMESSAGE_OFFSET))(this, a1);
		}

		::System::Void ShowLimaoNewsManagementPage(::System::Boolean a1, ::System::Collections::Generic::List_1<::Sofa::BaseSofaWindow*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Collections::Generic::List_1<::Sofa::BaseSofaWindow*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWINDOWSERVICE_SHOWLIMAONEWSMANAGEMENTPAGE_OFFSET))(this, a1, a2);
		}

		::System::Void ShowWorkProgressStartPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWINDOWSERVICE_SHOWWORKPROGRESSSTARTPAGE_OFFSET))(this);
		}

		::System::Void ShowWorkProgressOngoingPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWINDOWSERVICE_SHOWWORKPROGRESSONGOINGPAGE_OFFSET))(this);
		}

		::System::Void ShowWorkProgressResultPageByViewModel(::RPG::Client::LimaoNews::LimaoNewsWorkProgressResultViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsWorkProgressResultViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWINDOWSERVICE_SHOWWORKPROGRESSRESULTPAGEBYVIEWMODEL_OFFSET))(this, a1);
		}

		::System::Void _ShowWorkProgressPage(::RPG::Client::LimaoNews::LimaoNewsWorkProgressBaseViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsWorkProgressBaseViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWINDOWSERVICE__SHOWWORKPROGRESSPAGE_OFFSET))(this, a1);
		}

		::System::Void ShowPlanReviewDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWINDOWSERVICE_SHOWPLANREVIEWDIALOG_OFFSET))(this);
		}

		::System::Void ShowWorkProgressResultDialog(::RPG::Client::LimaoNews::LimaoNewsWorkProgressResultViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsWorkProgressResultViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWINDOWSERVICE_SHOWWORKPROGRESSRESULTDIALOG_OFFSET))(this, a1);
		}

		::System::Void _OnTriggerEntranceNewGuide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWINDOWSERVICE__ONTRIGGERENTRANCENEWGUIDE_OFFSET))(this);
		}

		::System::Void _EnterMainEntrancePage_b__5_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWINDOWSERVICE__ENTERMAINENTRANCEPAGE_B__5_0_OFFSET))(this);
		}

		::System::Void _EnterMainEntrancePage_b__5_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWINDOWSERVICE__ENTERMAINENTRANCEPAGE_B__5_1_OFFSET))(this);
		}
	};
}
