#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MVVM/ViewModel/LimaoNewsWebsiteViewTabEnum.h"
#include "unitysdk/System/Object.h"

class Class_2_05F2F954B69848E1;
class Class_2_6303C6A71250B2C6;
class Class_2_CD5BE680213AC89D;
class Class_3_6CDB80D69CE03A28;
namespace RPG::Client { class UIController; }
namespace RPG::Client::MVVM::Model { class LimaoNewsIssueData; }
namespace RPG::Client::MVVM::Model { class LimaoNewsPostData; }
namespace RPG::Client::MVVM::View { class LimaoNewsPostSubmitWindow; }
namespace RPG::Client::MVVM::View { class LimaoNewsWebsiteWindow; }
namespace RPG::Client::MVVM::ViewModel { class LimaoNewsPostViewModel; }
namespace RPG::Client::MVVM::ViewModel { class LimaoNewsWebsiteViewModelParam; }
namespace System { class String; }

#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSWINDOWSERVICE_CREATEINTERVIEWDETAILPAGE_1_OFFSET UNITYSDK_OFFSET(0x9A91670)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSWINDOWSERVICE_CREATEINTERVIEWDETAILPAGE_OFFSET UNITYSDK_OFFSET(0x9A917F0)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSWINDOWSERVICE_CREATEPOSTDETAILWINDOW_OFFSET UNITYSDK_OFFSET(0x9A91AB0)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSWINDOWSERVICE_CREATEWEBSITEPAGE_OFFSET UNITYSDK_OFFSET(0x9A91120)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSWINDOWSERVICE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9A80ED0)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSWINDOWSERVICE_ENTERMAINENTRANCEPAGE_OFFSET UNITYSDK_OFFSET(0x9A90860)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSWINDOWSERVICE_SHOWINTERVIEWDETAILPAGE_OFFSET UNITYSDK_OFFSET(0x9A915F0)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSWINDOWSERVICE_SHOWISSUESUBMITWINDOW_OFFSET UNITYSDK_OFFSET(0x9A925E0)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSWINDOWSERVICE_SHOWLIMAONEWSISSUEHINTPOPUPMESSAGE_OFFSET UNITYSDK_OFFSET(0x9A929C0)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSWINDOWSERVICE_SHOWLIMAONEWSSPONSORINTRODUCTION_OFFSET UNITYSDK_OFFSET(0x9A913A0)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSWINDOWSERVICE_SHOWMAINENTRANCEPAGE_OFFSET UNITYSDK_OFFSET(0x9A909A0)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSWINDOWSERVICE_SHOWMAINENTRANCEWEBSITEPAGE_OFFSET UNITYSDK_OFFSET(0x9A90B60)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSWINDOWSERVICE_SHOWPOSTDETAILWINDOWBYPOSTDATA_OFFSET UNITYSDK_OFFSET(0x9A91A40)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSWINDOWSERVICE_SHOWPOSTDETAILWINDOW_OFFSET UNITYSDK_OFFSET(0x9A91DA0)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSWINDOWSERVICE_SHOWPOSTFULLSCREENCOMIC_OFFSET UNITYSDK_OFFSET(0x9A92010)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSWINDOWSERVICE_SHOWPOSTFULLSCREENVIDEO_OFFSET UNITYSDK_OFFSET(0x9A92280)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSWINDOWSERVICE_SHOWPOSTSUBMITWINDOW_OFFSET UNITYSDK_OFFSET(0x9A927D0)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSWINDOWSERVICE_SHOWWEBSITEPAGE_1_OFFSET UNITYSDK_OFFSET(0x9A90F80)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSWINDOWSERVICE_SHOWWEBSITEPAGE_OFFSET UNITYSDK_OFFSET(0x9A90FF0)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSWINDOWSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x9A807B0)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSWINDOWSERVICE__ENTERMAINENTRANCEPAGE_B__1_0_OFFSET UNITYSDK_OFFSET(0x9A92C30)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSWINDOWSERVICE__ENTERMAINENTRANCEPAGE_B__1_1_OFFSET UNITYSDK_OFFSET(0x9A92F70)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSWINDOWSERVICE__ONTRIGGERENTRANCENEWGUIDE_OFFSET UNITYSDK_OFFSET(0x9A92BB0)

namespace RPG::Client::MVVM::Service
{
	inline static constexpr unsigned int LimaoNewsWindowService_TypeDefinitionIndex = 61051;

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

		::Class_2_CD5BE680213AC89D* ShowInterviewDetailPage(::Class_3_6CDB80D69CE03A28* interviewViewModel, ::System::UInt32 defaultContentID)
		{
			return ((::Class_2_CD5BE680213AC89D*(*)(::PVOID, ::Class_3_6CDB80D69CE03A28*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSWINDOWSERVICE_SHOWINTERVIEWDETAILPAGE_OFFSET))(this, interviewViewModel, defaultContentID);
		}

		::Class_2_CD5BE680213AC89D* CreateInterviewDetailPage(::System::UInt32 issueID, ::System::UInt32 interviewID, ::System::UInt32 defaultContentID)
		{
			return ((::Class_2_CD5BE680213AC89D*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSWINDOWSERVICE_CREATEINTERVIEWDETAILPAGE_OFFSET))(this, issueID, interviewID, defaultContentID);
		}

		::Class_2_CD5BE680213AC89D* CreateInterviewDetailPage_1(::Class_3_6CDB80D69CE03A28* interviewViewModel, ::System::UInt32 defaultContentID)
		{
			return ((::Class_2_CD5BE680213AC89D*(*)(::PVOID, ::Class_3_6CDB80D69CE03A28*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSWINDOWSERVICE_CREATEINTERVIEWDETAILPAGE_1_OFFSET))(this, interviewViewModel, defaultContentID);
		}

		::System::Void ShowPostDetailWindowByPostData(::RPG::Client::MVVM::Model::LimaoNewsPostData* postData, ::System::UInt32 defaultCommentID)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MVVM::Model::LimaoNewsPostData*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSWINDOWSERVICE_SHOWPOSTDETAILWINDOWBYPOSTDATA_OFFSET))(this, postData, defaultCommentID);
		}

		::Class_2_05F2F954B69848E1* CreatePostDetailWindow(::RPG::Client::MVVM::Model::LimaoNewsPostData* postData, ::System::UInt32 defaultCommentID)
		{
			return ((::Class_2_05F2F954B69848E1*(*)(::PVOID, ::RPG::Client::MVVM::Model::LimaoNewsPostData*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSWINDOWSERVICE_CREATEPOSTDETAILWINDOW_OFFSET))(this, postData, defaultCommentID);
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

		::Class_2_6303C6A71250B2C6* ShowIssueSubmitWindow(::RPG::Client::MVVM::Model::LimaoNewsIssueData* issueData)
		{
			return ((::Class_2_6303C6A71250B2C6*(*)(::PVOID, ::RPG::Client::MVVM::Model::LimaoNewsIssueData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSWINDOWSERVICE_SHOWISSUESUBMITWINDOW_OFFSET))(this, issueData);
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
