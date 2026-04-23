#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MVVM/ViewModel/LimaoNewsWebsiteViewTabEnum.h"
#include "unitysdk/System/Object.h"

class Class_3_6CDB80D69CE03A28;
namespace RPG::Client { class UIController; }
namespace RPG::Client::MVVM::Model { class LimaoNewsIssueData; }
namespace RPG::Client::MVVM::Model { class LimaoNewsPostData; }
namespace RPG::Client::MVVM::View { class LimaoNewsInterviewDetailWindow; }
namespace RPG::Client::MVVM::View { class LimaoNewsIssueSubmitWindow; }
namespace RPG::Client::MVVM::View { class LimaoNewsPostDetailWindow; }
namespace RPG::Client::MVVM::View { class LimaoNewsPostSubmitWindow; }
namespace RPG::Client::MVVM::View { class LimaoNewsWebsiteWindow; }
namespace RPG::Client::MVVM::ViewModel { class LimaoNewsPostViewModel; }
namespace RPG::Client::MVVM::ViewModel { class LimaoNewsWebsiteViewModelParam; }
namespace System { class String; }

#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSWINDOWSERVICE_CREATEINTERVIEWDETAILPAGE_1_OFFSET UNITYSDK_OFFSET(0xA73F5E0)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSWINDOWSERVICE_CREATEINTERVIEWDETAILPAGE_OFFSET UNITYSDK_OFFSET(0xA73F760)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSWINDOWSERVICE_CREATEPOSTDETAILWINDOW_OFFSET UNITYSDK_OFFSET(0xA73FA20)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSWINDOWSERVICE_CREATEWEBSITEPAGE_OFFSET UNITYSDK_OFFSET(0xA73F080)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSWINDOWSERVICE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA72EBD0)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSWINDOWSERVICE_ENTERMAINENTRANCEPAGE_OFFSET UNITYSDK_OFFSET(0xA73E7C0)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSWINDOWSERVICE_SHOWINTERVIEWDETAILPAGE_OFFSET UNITYSDK_OFFSET(0xA73F560)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSWINDOWSERVICE_SHOWISSUESUBMITWINDOW_OFFSET UNITYSDK_OFFSET(0xA740550)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSWINDOWSERVICE_SHOWLIMAONEWSISSUEHINTPOPUPMESSAGE_OFFSET UNITYSDK_OFFSET(0xA740930)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSWINDOWSERVICE_SHOWLIMAONEWSSPONSORINTRODUCTION_OFFSET UNITYSDK_OFFSET(0xA73F300)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSWINDOWSERVICE_SHOWMAINENTRANCEPAGE_OFFSET UNITYSDK_OFFSET(0xA73E900)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSWINDOWSERVICE_SHOWMAINENTRANCEWEBSITEPAGE_OFFSET UNITYSDK_OFFSET(0xA73EAC0)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSWINDOWSERVICE_SHOWPOSTDETAILWINDOWBYPOSTDATA_OFFSET UNITYSDK_OFFSET(0xA73F9B0)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSWINDOWSERVICE_SHOWPOSTDETAILWINDOW_OFFSET UNITYSDK_OFFSET(0xA73FD10)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSWINDOWSERVICE_SHOWPOSTFULLSCREENCOMIC_OFFSET UNITYSDK_OFFSET(0xA73FF80)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSWINDOWSERVICE_SHOWPOSTFULLSCREENVIDEO_OFFSET UNITYSDK_OFFSET(0xA7401F0)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSWINDOWSERVICE_SHOWPOSTSUBMITWINDOW_OFFSET UNITYSDK_OFFSET(0xA740740)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSWINDOWSERVICE_SHOWWEBSITEPAGE_1_OFFSET UNITYSDK_OFFSET(0xA73EEE0)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSWINDOWSERVICE_SHOWWEBSITEPAGE_OFFSET UNITYSDK_OFFSET(0xA73EF50)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSWINDOWSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0xA72E4C0)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSWINDOWSERVICE__ENTERMAINENTRANCEPAGE_B__1_0_OFFSET UNITYSDK_OFFSET(0xA740BA0)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSWINDOWSERVICE__ENTERMAINENTRANCEPAGE_B__1_1_OFFSET UNITYSDK_OFFSET(0xA740EF0)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSWINDOWSERVICE__ONTRIGGERENTRANCENEWGUIDE_OFFSET UNITYSDK_OFFSET(0xA740B20)

namespace RPG::Client::MVVM::Service
{
	inline static constexpr unsigned int LimaoNewsWindowService_TypeDefinitionIndex = 68509;

	class LimaoNewsWindowService : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSWINDOWSERVICE__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSWINDOWSERVICE_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::UIController* EnterMainEntrancePage()
		{
			return ((::RPG::Client::UIController*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSWINDOWSERVICE_ENTERMAINENTRANCEPAGE_OFFSET))(this);
		}

		::RPG::Client::UIController* ShowMainEntrancePage(::System::Boolean isFirstIn)
		{
			return ((::RPG::Client::UIController*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSWINDOWSERVICE_SHOWMAINENTRANCEPAGE_OFFSET))(this, isFirstIn);
		}

		::System::Void ShowMainEntranceWebsitePage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSWINDOWSERVICE_SHOWMAINENTRANCEWEBSITEPAGE_OFFSET))(this);
		}

		::System::Void ShowWebsitePage(::RPG::Client::MVVM::ViewModel::LimaoNewsWebsiteViewTabEnum defaultTabType)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MVVM::ViewModel::LimaoNewsWebsiteViewTabEnum))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSWINDOWSERVICE_SHOWWEBSITEPAGE_OFFSET))(this, defaultTabType);
		}

		::System::Void ShowWebsitePage_1(::RPG::Client::MVVM::ViewModel::LimaoNewsWebsiteViewModelParam* param)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MVVM::ViewModel::LimaoNewsWebsiteViewModelParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSWINDOWSERVICE_SHOWWEBSITEPAGE_1_OFFSET))(this, param);
		}

		::RPG::Client::MVVM::View::LimaoNewsWebsiteWindow* CreateWebsitePage(::RPG::Client::MVVM::ViewModel::LimaoNewsWebsiteViewModelParam* param)
		{
			return ((::RPG::Client::MVVM::View::LimaoNewsWebsiteWindow*(*)(::PVOID, ::RPG::Client::MVVM::ViewModel::LimaoNewsWebsiteViewModelParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSWINDOWSERVICE_CREATEWEBSITEPAGE_OFFSET))(this, param);
		}

		::System::Void ShowLimaoNewsSponsorIntroduction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSWINDOWSERVICE_SHOWLIMAONEWSSPONSORINTRODUCTION_OFFSET))(this);
		}

		::RPG::Client::MVVM::View::LimaoNewsInterviewDetailWindow* ShowInterviewDetailPage(::Class_3_6CDB80D69CE03A28* interviewViewModel, ::System::UInt32 defaultContentID)
		{
			return ((::RPG::Client::MVVM::View::LimaoNewsInterviewDetailWindow*(*)(::PVOID, ::Class_3_6CDB80D69CE03A28*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSWINDOWSERVICE_SHOWINTERVIEWDETAILPAGE_OFFSET))(this, interviewViewModel, defaultContentID);
		}

		::RPG::Client::MVVM::View::LimaoNewsInterviewDetailWindow* CreateInterviewDetailPage(::System::UInt32 issueID, ::System::UInt32 interviewID, ::System::UInt32 defaultContentID)
		{
			return ((::RPG::Client::MVVM::View::LimaoNewsInterviewDetailWindow*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSWINDOWSERVICE_CREATEINTERVIEWDETAILPAGE_OFFSET))(this, issueID, interviewID, defaultContentID);
		}

		::RPG::Client::MVVM::View::LimaoNewsInterviewDetailWindow* CreateInterviewDetailPage_1(::Class_3_6CDB80D69CE03A28* interviewViewModel, ::System::UInt32 defaultContentID)
		{
			return ((::RPG::Client::MVVM::View::LimaoNewsInterviewDetailWindow*(*)(::PVOID, ::Class_3_6CDB80D69CE03A28*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSWINDOWSERVICE_CREATEINTERVIEWDETAILPAGE_1_OFFSET))(this, interviewViewModel, defaultContentID);
		}

		::System::Void ShowPostDetailWindowByPostData(::RPG::Client::MVVM::Model::LimaoNewsPostData* postData, ::System::UInt32 defaultCommentID)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MVVM::Model::LimaoNewsPostData*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSWINDOWSERVICE_SHOWPOSTDETAILWINDOWBYPOSTDATA_OFFSET))(this, postData, defaultCommentID);
		}

		::RPG::Client::MVVM::View::LimaoNewsPostDetailWindow* CreatePostDetailWindow(::RPG::Client::MVVM::Model::LimaoNewsPostData* postData, ::System::UInt32 defaultCommentID)
		{
			return ((::RPG::Client::MVVM::View::LimaoNewsPostDetailWindow*(*)(::PVOID, ::RPG::Client::MVVM::Model::LimaoNewsPostData*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSWINDOWSERVICE_CREATEPOSTDETAILWINDOW_OFFSET))(this, postData, defaultCommentID);
		}

		::System::Void ShowPostDetailWindow(::RPG::Client::MVVM::ViewModel::LimaoNewsPostViewModel* postViewModel)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MVVM::ViewModel::LimaoNewsPostViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSWINDOWSERVICE_SHOWPOSTDETAILWINDOW_OFFSET))(this, postViewModel);
		}

		::System::Void ShowPostFullScreenComic(::System::String* comicPrefabPath)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSWINDOWSERVICE_SHOWPOSTFULLSCREENCOMIC_OFFSET))(this, comicPrefabPath);
		}

		::System::Void ShowPostFullScreenVideo(::System::UInt32 videoID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSWINDOWSERVICE_SHOWPOSTFULLSCREENVIDEO_OFFSET))(this, videoID);
		}

		::RPG::Client::MVVM::View::LimaoNewsIssueSubmitWindow* ShowIssueSubmitWindow(::RPG::Client::MVVM::Model::LimaoNewsIssueData* issueData)
		{
			return ((::RPG::Client::MVVM::View::LimaoNewsIssueSubmitWindow*(*)(::PVOID, ::RPG::Client::MVVM::Model::LimaoNewsIssueData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSWINDOWSERVICE_SHOWISSUESUBMITWINDOW_OFFSET))(this, issueData);
		}

		::RPG::Client::MVVM::View::LimaoNewsPostSubmitWindow* ShowPostSubmitWindow(::RPG::Client::MVVM::Model::LimaoNewsPostData* postData)
		{
			return ((::RPG::Client::MVVM::View::LimaoNewsPostSubmitWindow*(*)(::PVOID, ::RPG::Client::MVVM::Model::LimaoNewsPostData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSWINDOWSERVICE_SHOWPOSTSUBMITWINDOW_OFFSET))(this, postData);
		}

		::System::Void ShowLimaoNewsIssueHintPopupMessage(::System::UInt32 issueId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSWINDOWSERVICE_SHOWLIMAONEWSISSUEHINTPOPUPMESSAGE_OFFSET))(this, issueId);
		}

		::System::Void _OnTriggerEntranceNewGuide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSWINDOWSERVICE__ONTRIGGERENTRANCENEWGUIDE_OFFSET))(this);
		}

		::System::Void _EnterMainEntrancePage_b__1_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSWINDOWSERVICE__ENTERMAINENTRANCEPAGE_B__1_0_OFFSET))(this);
		}

		::System::Void _EnterMainEntrancePage_b__1_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSWINDOWSERVICE__ENTERMAINENTRANCEPAGE_B__1_1_OFFSET))(this);
		}
	};
}
