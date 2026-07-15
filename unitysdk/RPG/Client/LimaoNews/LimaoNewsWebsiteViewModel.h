#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseViewModel.h"
#include "unitysdk/System/Guid.h"

class Class_1_5F4D64A4B97E38F9;
namespace RPG::Client::LimaoNews { class LimaoNewsForumViewModel; }
namespace RPG::Client::LimaoNews { class LimaoNewsIssueService; }
namespace RPG::Client::LimaoNews { class LimaoNewsIssueViewModel; }
namespace RPG::Client::LimaoNews { class LimaoNewsNetworkService; }
namespace RPG::Client::LimaoNews { class LimaoNewsPostService; }
namespace RPG::Client::LimaoNews { class LimaoNewsSponsorViewModel; }
namespace RPG::Client::LimaoNews { class LimaoNewsWebsiteViewModelParam; }
namespace RPG::Client::LimaoNews { class LimaoNewsWindowService; }
namespace Sofa::Core { class SimpleCommand; }
namespace System { class String; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEVIEWMODEL_GET_CANSHOWISSUETAB_OFFSET UNITYSDK_OFFSET(0x19B73BA0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEVIEWMODEL_GET_DEFAULTPARAM_OFFSET UNITYSDK_OFFSET(0x19B73CB0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEVIEWMODEL_GET_FORUMVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x19B73CF0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEVIEWMODEL_GET_GUID_OFFSET UNITYSDK_OFFSET(0x19B73E70)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEVIEWMODEL_GET_ISSUEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x19B73CD0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEVIEWMODEL_GET_ONBTNCLOSE_OFFSET UNITYSDK_OFFSET(0x19B73C50)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEVIEWMODEL_GET_ONBTNFORM_OFFSET UNITYSDK_OFFSET(0x19B73C90)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEVIEWMODEL_GET_ONBTNISSUE_OFFSET UNITYSDK_OFFSET(0x19B73C70)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEVIEWMODEL_GET_PREFABSTATE_OFFSET UNITYSDK_OFFSET(0x19B73C10)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEVIEWMODEL_GET_REPORTSTATE_OFFSET UNITYSDK_OFFSET(0x19B73D30)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEVIEWMODEL_GET_SPONSORVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x19B73D10)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEVIEWMODEL_SET_DEFAULTPARAM_OFFSET UNITYSDK_OFFSET(0x19B73CC0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEVIEWMODEL_SET_FORUMVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x19B73D00)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEVIEWMODEL_SET_GUID_OFFSET UNITYSDK_OFFSET(0x19B73E80)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEVIEWMODEL_SET_ISSUEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x19B73CE0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEVIEWMODEL_SET_ONBTNCLOSE_OFFSET UNITYSDK_OFFSET(0x19B73C60)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEVIEWMODEL_SET_ONBTNFORM_OFFSET UNITYSDK_OFFSET(0x19B73CA0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEVIEWMODEL_SET_ONBTNISSUE_OFFSET UNITYSDK_OFFSET(0x19B73C80)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEVIEWMODEL_SET_PREFABSTATE_OFFSET UNITYSDK_OFFSET(0x19B73B10)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEVIEWMODEL_SET_SPONSORVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x19B73D20)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x19B73650)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEVIEWMODEL___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0x19B73E90)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEVIEWMODEL___CTOR_B__0_1_OFFSET UNITYSDK_OFFSET(0x19B73FB0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEVIEWMODEL___CTOR_B__0_2_OFFSET UNITYSDK_OFFSET(0x19B740D0)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsWebsiteViewModel_TypeDefinitionIndex = 75541;

	class LimaoNewsWebsiteViewModel : public ::Sofa::BaseViewModel
	{
	public:
		// static const ::System::String* IssuePrefabState; // 0x0
		// static const ::System::String* ForumPrefabState; // 0x0
		::Sofa::Core::SimpleCommand* _OnBtnClose_k__BackingField; // 0x20
		::RPG::Client::LimaoNews::LimaoNewsSponsorViewModel* _SponsorViewModel_k__BackingField; // 0x28
		::Class_1_5F4D64A4B97E38F9* _Messenger; // 0x30
		::RPG::Client::LimaoNews::LimaoNewsWebsiteViewModelParam* _DefaultParam_k__BackingField; // 0x38
		::System::String* _CurrentPrefabState; // 0x40
		::RPG::Client::LimaoNews::LimaoNewsNetworkService* _NetworkService; // 0x48
		::RPG::Client::LimaoNews::LimaoNewsIssueViewModel* _IssueViewModel_k__BackingField; // 0x50
		::RPG::Client::LimaoNews::LimaoNewsForumViewModel* _ForumViewModel_k__BackingField; // 0x58
		::RPG::Client::LimaoNews::LimaoNewsWindowService* _WindowService; // 0x60
		::RPG::Client::LimaoNews::LimaoNewsPostService* _PostService; // 0x68
		::Sofa::Core::SimpleCommand* _OnBtnForm_k__BackingField; // 0x70
		::RPG::Client::LimaoNews::LimaoNewsIssueService* _IssueService; // 0x78
		::Sofa::Core::SimpleCommand* _OnBtnIssue_k__BackingField; // 0x80
		::System::Guid _Guid_k__BackingField; // 0x88

		::System::Void _ctor(::RPG::Client::LimaoNews::LimaoNewsNetworkService* a1, ::RPG::Client::LimaoNews::LimaoNewsIssueService* a2, ::RPG::Client::LimaoNews::LimaoNewsPostService* a3, ::RPG::Client::LimaoNews::LimaoNewsWindowService* a4, ::Class_1_5F4D64A4B97E38F9* a5, ::RPG::Client::LimaoNews::LimaoNewsWebsiteViewModelParam* a6)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsNetworkService*, ::RPG::Client::LimaoNews::LimaoNewsIssueService*, ::RPG::Client::LimaoNews::LimaoNewsPostService*, ::RPG::Client::LimaoNews::LimaoNewsWindowService*, ::Class_1_5F4D64A4B97E38F9*, ::RPG::Client::LimaoNews::LimaoNewsWebsiteViewModelParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEVIEWMODEL__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::String* get_PrefabState()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEVIEWMODEL_GET_PREFABSTATE_OFFSET))(this);
		}

		::System::Void set_PrefabState(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEVIEWMODEL_SET_PREFABSTATE_OFFSET))(this, a1);
		}

		::Sofa::Core::SimpleCommand* get_OnBtnClose()
		{
			return ((::Sofa::Core::SimpleCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEVIEWMODEL_GET_ONBTNCLOSE_OFFSET))(this);
		}

		::System::Void set_OnBtnClose(::Sofa::Core::SimpleCommand* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Sofa::Core::SimpleCommand*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEVIEWMODEL_SET_ONBTNCLOSE_OFFSET))(this, a1);
		}

		::Sofa::Core::SimpleCommand* get_OnBtnIssue()
		{
			return ((::Sofa::Core::SimpleCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEVIEWMODEL_GET_ONBTNISSUE_OFFSET))(this);
		}

		::System::Void set_OnBtnIssue(::Sofa::Core::SimpleCommand* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Sofa::Core::SimpleCommand*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEVIEWMODEL_SET_ONBTNISSUE_OFFSET))(this, a1);
		}

		::Sofa::Core::SimpleCommand* get_OnBtnForm()
		{
			return ((::Sofa::Core::SimpleCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEVIEWMODEL_GET_ONBTNFORM_OFFSET))(this);
		}

		::System::Void set_OnBtnForm(::Sofa::Core::SimpleCommand* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Sofa::Core::SimpleCommand*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEVIEWMODEL_SET_ONBTNFORM_OFFSET))(this, a1);
		}

		::RPG::Client::LimaoNews::LimaoNewsWebsiteViewModelParam* get_DefaultParam()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsWebsiteViewModelParam*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEVIEWMODEL_GET_DEFAULTPARAM_OFFSET))(this);
		}

		::System::Void set_DefaultParam(::RPG::Client::LimaoNews::LimaoNewsWebsiteViewModelParam* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsWebsiteViewModelParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEVIEWMODEL_SET_DEFAULTPARAM_OFFSET))(this, a1);
		}

		::RPG::Client::LimaoNews::LimaoNewsIssueViewModel* get_IssueViewModel()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsIssueViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEVIEWMODEL_GET_ISSUEVIEWMODEL_OFFSET))(this);
		}

		::System::Void set_IssueViewModel(::RPG::Client::LimaoNews::LimaoNewsIssueViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsIssueViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEVIEWMODEL_SET_ISSUEVIEWMODEL_OFFSET))(this, a1);
		}

		::RPG::Client::LimaoNews::LimaoNewsForumViewModel* get_ForumViewModel()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsForumViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEVIEWMODEL_GET_FORUMVIEWMODEL_OFFSET))(this);
		}

		::System::Void set_ForumViewModel(::RPG::Client::LimaoNews::LimaoNewsForumViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsForumViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEVIEWMODEL_SET_FORUMVIEWMODEL_OFFSET))(this, a1);
		}

		::RPG::Client::LimaoNews::LimaoNewsSponsorViewModel* get_SponsorViewModel()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsSponsorViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEVIEWMODEL_GET_SPONSORVIEWMODEL_OFFSET))(this);
		}

		::System::Void set_SponsorViewModel(::RPG::Client::LimaoNews::LimaoNewsSponsorViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsSponsorViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEVIEWMODEL_SET_SPONSORVIEWMODEL_OFFSET))(this, a1);
		}

		::System::Boolean get_CanShowIssueTab()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEVIEWMODEL_GET_CANSHOWISSUETAB_OFFSET))(this);
		}

		::System::String* get_ReportState()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEVIEWMODEL_GET_REPORTSTATE_OFFSET))(this);
		}

		::System::Guid get_Guid()
		{
			return ((::System::Guid(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEVIEWMODEL_GET_GUID_OFFSET))(this);
		}

		::System::Void set_Guid(::System::Guid a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Guid))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEVIEWMODEL_SET_GUID_OFFSET))(this, a1);
		}

		::System::Void __ctor_b__0_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEVIEWMODEL___CTOR_B__0_0_OFFSET))(this);
		}

		::System::Void __ctor_b__0_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEVIEWMODEL___CTOR_B__0_1_OFFSET))(this);
		}

		::System::Void __ctor_b__0_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEVIEWMODEL___CTOR_B__0_2_OFFSET))(this);
		}
	};
}
