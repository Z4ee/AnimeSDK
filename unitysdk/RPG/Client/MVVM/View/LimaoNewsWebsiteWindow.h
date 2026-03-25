#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaWindow.h"

class Class_1_0BA5D98E0F73DDB8;
class Class_3_5B0237AEBE51CEDE;
class Class_3_D7D23702D98A30C5;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class MonoPrefabSwitcher; }
namespace RPG::Client { class UIMeta; }
namespace RPG::Client::MVVM::View { class LimaoNewsForumControl; }
namespace RPG::Client::MVVM::View { class LimaoNewsIssueControl; }
namespace RPG::Client::MVVM::View { class LimaoNewsSponsorControl; }
namespace RPG::UINavigation { class UINavigationZone; }
namespace System { class Object; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSWEBSITEWINDOW_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x9AAB5D0)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSWEBSITEWINDOW__CTOR_OFFSET UNITYSDK_OFFSET(0x9AA9170)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSWEBSITEWINDOW__EXITVIEW_OFFSET UNITYSDK_OFFSET(0x9AAB880)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSWEBSITEWINDOW__INITNAVIGATIONTARGET_OFFSET UNITYSDK_OFFSET(0x9AAB3F0)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSWEBSITEWINDOW__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x9AA9D50)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSWEBSITEWINDOW__ONENTRANCEANIMEND_OFFSET UNITYSDK_OFFSET(0x9AAB640)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSWEBSITEWINDOW__ONEXITFINALSTEP_OFFSET UNITYSDK_OFFSET(0x9AAB9C0)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSWEBSITEWINDOW__ONINCONTROLEXIT_OFFSET UNITYSDK_OFFSET(0x9AAB830)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSWEBSITEWINDOW__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x9AA9220)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSWEBSITEWINDOW__ONLIMAONEWSCLOSEWEBSITE_OFFSET UNITYSDK_OFFSET(0x9AAC4B0)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSWEBSITEWINDOW__ONLIMAONEWSFORUMOPERATION_OFFSET UNITYSDK_OFFSET(0x9AABCD0)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSWEBSITEWINDOW__ONLIMAONEWSREFRESHUPVOTE_OFFSET UNITYSDK_OFFSET(0x9AAC260)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSWEBSITEWINDOW__ONLIMAONEWSREPLAYPOST_OFFSET UNITYSDK_OFFSET(0x9AABC80)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSWEBSITEWINDOW__ONLIMAONEWSSUBMITISSUE_OFFSET UNITYSDK_OFFSET(0x9AABB10)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSWEBSITEWINDOW__ONLIMAONEWSSUBMITPOST_OFFSET UNITYSDK_OFFSET(0x9AABB80)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSWEBSITEWINDOW__ONREFRESHREDDOT_OFFSET UNITYSDK_OFFSET(0x9AABF80)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSWEBSITEWINDOW__REFRESHREDDOTNODE_OFFSET UNITYSDK_OFFSET(0x9AABFD0)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSWEBSITEWINDOW__REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x9AAABC0)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSWEBSITEWINDOW__SUBSCRIBEMESSAGE_OFFSET UNITYSDK_OFFSET(0x9AA9CA0)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSWEBSITEWINDOW___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x9AAC610)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSWEBSITEWINDOW___IFIXBASEPROXY__ONENTRANCEANIMEND_OFFSET UNITYSDK_OFFSET(0x9AAC670)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSWEBSITEWINDOW___IFIXBASEPROXY__ONEXITFINALSTEP_OFFSET UNITYSDK_OFFSET(0x9AAC700)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSWEBSITEWINDOW___IFIXBASEPROXY__ONINCONTROLEXIT_OFFSET UNITYSDK_OFFSET(0x9AAC6F0)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSWEBSITEWINDOW___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x9AAC5B0)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSWEBSITEWINDOW___SUBSCRIBEMESSAGE_B__8_0_OFFSET UNITYSDK_OFFSET(0x9AAC540)

namespace RPG::Client::MVVM::View
{
	inline static constexpr unsigned int LimaoNewsWebsiteWindow_TypeDefinitionIndex = 61021;

	class LimaoNewsWebsiteWindow : public ::Sofa::BaseSofaWindow
	{
	public:
		::UnityEngine::Transform* _NodeBtnForumTag; // 0x40
		::RPG::Client::MonoPrefabSwitcher* _MonoPrefabSwitcher; // 0x48
		::UnityEngine::Transform* _NodeForumRedDotNew; // 0x50
		::UnityEngine::Transform* _NodeForumRedDotPoint; // 0x58
		::RPG::Client::MVVM::View::LimaoNewsForumControl* _ForumControl; // 0x60
		::RPG::UINavigation::UINavigationZone* _NavigationZone; // 0x68
		::RPG::Client::MVVM::View::LimaoNewsIssueControl* _IssueControl; // 0x70
		::Class_1_0BA5D98E0F73DDB8* _Messenger; // 0x78
		::RPG::Client::AnimatorButton* _BtnClose; // 0x80
		::RPG::Client::MVVM::View::LimaoNewsSponsorControl* _SponsorControl; // 0x88
		::RPG::Client::AnimatorButton* _BtnForum; // 0x90
		::UnityEngine::Transform* _NodeBtnIssueTag; // 0x98
		::UnityEngine::Transform* _NodeForumRedDot; // 0xA0
		::RPG::Client::AnimatorButton* _BtnIssue; // 0xA8
		::UnityEngine::Transform* _NodeIssueRedDot; // 0xB0
		::RPG::Client::UIMeta* _UIMeta; // 0xB8

		::System::Void _ctor(::Class_3_5B0237AEBE51CEDE* viewModel, ::Class_1_0BA5D98E0F73DDB8* messenger)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_5B0237AEBE51CEDE*, ::Class_1_0BA5D98E0F73DDB8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSWEBSITEWINDOW__CTOR_OFFSET))(this, viewModel, messenger);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSWEBSITEWINDOW__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSWEBSITEWINDOW__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void _OnEntranceAnimEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSWEBSITEWINDOW__ONENTRANCEANIMEND_OFFSET))(this);
		}

		::System::Void _OnInControlExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSWEBSITEWINDOW__ONINCONTROLEXIT_OFFSET))(this);
		}

		::System::Void _OnExitFinalStep()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSWEBSITEWINDOW__ONEXITFINALSTEP_OFFSET))(this);
		}

		::System::Void _ExitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSWEBSITEWINDOW__EXITVIEW_OFFSET))(this);
		}

		::System::Void _InitNavigationTarget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSWEBSITEWINDOW__INITNAVIGATIONTARGET_OFFSET))(this);
		}

		::System::Void _SubscribeMessage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSWEBSITEWINDOW__SUBSCRIBEMESSAGE_OFFSET))(this);
		}

		::System::Void _OnLimaoNewsSubmitIssue(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSWEBSITEWINDOW__ONLIMAONEWSSUBMITISSUE_OFFSET))(this, param);
		}

		::System::Void _OnLimaoNewsSubmitPost(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSWEBSITEWINDOW__ONLIMAONEWSSUBMITPOST_OFFSET))(this, param);
		}

		::System::Void _OnLimaoNewsReplayPost(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSWEBSITEWINDOW__ONLIMAONEWSREPLAYPOST_OFFSET))(this, param);
		}

		::System::Void _OnLimaoNewsForumOperation(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSWEBSITEWINDOW__ONLIMAONEWSFORUMOPERATION_OFFSET))(this, param);
		}

		::System::Void _OnRefreshRedDot(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSWEBSITEWINDOW__ONREFRESHREDDOT_OFFSET))(this, param);
		}

		::System::Void _OnLimaoNewsRefreshUpvote(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSWEBSITEWINDOW__ONLIMAONEWSREFRESHUPVOTE_OFFSET))(this, param);
		}

		::System::Void _OnLimaoNewsCloseWebsite(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSWEBSITEWINDOW__ONLIMAONEWSCLOSEWEBSITE_OFFSET))(this, param);
		}

		::System::Void _RefreshRedDotNode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSWEBSITEWINDOW__REFRESHREDDOTNODE_OFFSET))(this);
		}

		::System::Void _RefreshView(::System::Boolean needBindViewModel)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSWEBSITEWINDOW__REFRESHVIEW_OFFSET))(this, needBindViewModel);
		}

		::Class_3_5B0237AEBE51CEDE* get__ViewModel()
		{
			return ((::Class_3_5B0237AEBE51CEDE*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSWEBSITEWINDOW_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void __SubscribeMessage_b__8_0(::Class_3_D7D23702D98A30C5* e)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_D7D23702D98A30C5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSWEBSITEWINDOW___SUBSCRIBEMESSAGE_B__8_0_OFFSET))(this, e);
		}

		::System::Void __iFixBaseProxy__OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSWEBSITEWINDOW___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSWEBSITEWINDOW___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnEntranceAnimEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSWEBSITEWINDOW___IFIXBASEPROXY__ONENTRANCEANIMEND_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnInControlExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSWEBSITEWINDOW___IFIXBASEPROXY__ONINCONTROLEXIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnExitFinalStep()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSWEBSITEWINDOW___IFIXBASEPROXY__ONEXITFINALSTEP_OFFSET))(this);
		}
	};
}
