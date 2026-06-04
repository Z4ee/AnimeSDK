#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaWindow.h"

class Class_1_5F4D64A4B97E38F9;
class Class_1_6639441D78E72F56;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class StaticListView; }
namespace RPG::Client { class StaticListViewItem; }
namespace RPG::Client::LimaoNews { class LimaoNewsCommentListControl; }
namespace RPG::Client::LimaoNews { class LimaoNewsInteractionControl; }
namespace RPG::Client::LimaoNews { class LimaoNewsLocationControl; }
namespace RPG::Client::LimaoNews { class LimaoNewsOfficeSurveyTypeControl; }
namespace RPG::Client::LimaoNews { class LimaoNewsPostDetailViewModel; }
namespace RPG::Client::LimaoNews { class LimaoNewsStateTagControl; }
namespace System { class Object; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class ScrollRect; }
namespace UnityEngine::UI { class Text; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0xBDA0890)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW__BINDBOTTOMVIEW_OFFSET UNITYSDK_OFFSET(0xBDA18F0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW__BINDBTNSVIEW_OFFSET UNITYSDK_OFFSET(0xBDA1B20)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW__BINDPOSTBASICVIEW_OFFSET UNITYSDK_OFFSET(0xBDA0900)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW__BINDRIGHTVIEW_OFFSET UNITYSDK_OFFSET(0xBDA1580)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW__CLEARREDDOT_OFFSET UNITYSDK_OFFSET(0xBDA25A0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW__CTOR_OFFSET UNITYSDK_OFFSET(0xBD9F320)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW__MOVETOCOMMENT_OFFSET UNITYSDK_OFFSET(0xBDA32D0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xBDA0640)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW__ONEXITFINALSTEP_OFFSET UNITYSDK_OFFSET(0xBDA2640)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xBD9F3D0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW__ONLIMAONEWSCLOSEPOSTDETAIL_OFFSET UNITYSDK_OFFSET(0xBDA3520)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW__ONLIMAONEWSPOSTDETAILOPERATION_OFFSET UNITYSDK_OFFSET(0xBDA3370)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW__ONLIMAONEWSPOSTMESSAGE_OFFSET UNITYSDK_OFFSET(0xBDA28C0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW__ONLIMAONEWSREFRESHUPVOTE_OFFSET UNITYSDK_OFFSET(0xBDA36D0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW__ONLIMAONEWSREPLAYPOST_OFFSET UNITYSDK_OFFSET(0xBDA2F60)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW__ONLIMAONEWSSUBMITPOST_OFFSET UNITYSDK_OFFSET(0xBDA2960)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW__ONNEWCOMMENTITEM_OFFSET UNITYSDK_OFFSET(0xBDA4130)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW__SUBSCRIBEMESSAGE_OFFSET UNITYSDK_OFFSET(0xBDA0580)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xBDA4360)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW___IFIXBASEPROXY__ONEXITFINALSTEP_OFFSET UNITYSDK_OFFSET(0xBDA43C0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xBDA4300)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsPostDetailWindow_TypeDefinitionIndex = 73851;

	class LimaoNewsPostDetailWindow : public ::Sofa::BaseSofaWindow
	{
	public:
		::RPG::Client::StaticListView* _CommentListView; // 0x40
		::UnityEngine::Transform* _NodeImage; // 0x48
		::RPG::Client::LimaoNews::LimaoNewsStateTagControl* _StateTagControl; // 0x50
		::RPG::Client::AnimatorButton* _BtnGo; // 0x58
		::UnityEngine::Transform* _NodeComicLoadRoot; // 0x60
		::Class_1_5F4D64A4B97E38F9* _Messenger; // 0x68
		::RPG::Client::AnimatorButton* _BtnEmptyClose; // 0x70
		::UnityEngine::UI::Image* _PostImage; // 0x78
		::UnityEngine::UI::ScrollRect* _RightScrollRect; // 0x80
		::RPG::Client::LimaoNews::LimaoNewsLocationControl* _LocationControl; // 0x88
		::UnityEngine::Transform* _NodeComic; // 0x90
		::UnityEngine::RectTransform* _NodeDescContent; // 0x98
		::UnityEngine::UI::Text* _UserName; // 0xA0
		::RPG::Client::AnimatorButton* _BtnImage; // 0xA8
		::UnityEngine::Transform* _NodeBannedMask; // 0xB0
		::UnityEngine::UI::Text* _PostTitle; // 0xB8
		::RPG::Client::AnimatorButton* _BtnClose; // 0xC0
		::RPG::Client::LimaoNews::LimaoNewsInteractionControl* _InteractionControl; // 0xC8
		::UnityEngine::UI::Image* _UserImage; // 0xD0
		::UnityEngine::UI::Text* _BtnGoText; // 0xD8
		::RPG::Client::LimaoNews::LimaoNewsCommentListControl* _CommentListControl; // 0xE0
		::UnityEngine::UI::Text* _PostDesc; // 0xE8
		::UnityEngine::Transform* _UserOfficialTag; // 0xF0
		::UnityEngine::Transform* _NodeDivider; // 0xF8
		::UnityEngine::Transform* _NodeBottom; // 0x100
		::UnityEngine::Transform* _NodeVideoMask; // 0x108
		::RPG::Client::LimaoNews::LimaoNewsOfficeSurveyTypeControl* _SurveyTypeControl; // 0x110
		::UnityEngine::Transform* _NodeComicMask; // 0x118

		::System::Void _ctor(::RPG::Client::LimaoNews::LimaoNewsPostDetailViewModel* a1, ::Class_1_5F4D64A4B97E38F9* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsPostDetailViewModel*, ::Class_1_5F4D64A4B97E38F9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void _OnExitFinalStep()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW__ONEXITFINALSTEP_OFFSET))(this);
		}

		::System::Void _SubscribeMessage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW__SUBSCRIBEMESSAGE_OFFSET))(this);
		}

		::System::Void _OnLimaoNewsPostMessage(::Class_1_6639441D78E72F56* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6639441D78E72F56*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW__ONLIMAONEWSPOSTMESSAGE_OFFSET))(this, a1);
		}

		::System::Void _OnLimaoNewsSubmitPost(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW__ONLIMAONEWSSUBMITPOST_OFFSET))(this, a1);
		}

		::System::Void _OnLimaoNewsReplayPost(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW__ONLIMAONEWSREPLAYPOST_OFFSET))(this, a1);
		}

		::System::Void _OnLimaoNewsPostDetailOperation(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW__ONLIMAONEWSPOSTDETAILOPERATION_OFFSET))(this, a1);
		}

		::System::Void _OnLimaoNewsClosePostDetail(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW__ONLIMAONEWSCLOSEPOSTDETAIL_OFFSET))(this, a1);
		}

		::System::Void _OnLimaoNewsRefreshUpvote(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW__ONLIMAONEWSREFRESHUPVOTE_OFFSET))(this, a1);
		}

		::System::Void _BindPostBasicView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW__BINDPOSTBASICVIEW_OFFSET))(this);
		}

		::System::Void _BindRightView(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW__BINDRIGHTVIEW_OFFSET))(this, a1);
		}

		::System::Void _BindBottomView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW__BINDBOTTOMVIEW_OFFSET))(this);
		}

		::System::Void _BindBtnsView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW__BINDBTNSVIEW_OFFSET))(this);
		}

		::System::Void _ClearRedDot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW__CLEARREDDOT_OFFSET))(this);
		}

		::RPG::Client::StaticListViewItem* _OnNewCommentItem(::XLua::LuaTable* a1, ::RPG::Client::StaticListView* a2, ::System::Int32 a3)
		{
			return ((::RPG::Client::StaticListViewItem*(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::StaticListView*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW__ONNEWCOMMENTITEM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _MoveToComment(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW__MOVETOCOMMENT_OFFSET))(this, a1);
		}

		::RPG::Client::LimaoNews::LimaoNewsPostDetailViewModel* get__ViewModel()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsPostDetailViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnExitFinalStep()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW___IFIXBASEPROXY__ONEXITFINALSTEP_OFFSET))(this);
		}
	};
}
