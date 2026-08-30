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

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0xD480A60)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW__BINDBOTTOMVIEW_OFFSET UNITYSDK_OFFSET(0xD481AA0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW__BINDBTNSVIEW_OFFSET UNITYSDK_OFFSET(0xD481CB0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW__BINDPOSTBASICVIEW_OFFSET UNITYSDK_OFFSET(0xD480AE0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW__BINDRIGHTVIEW_OFFSET UNITYSDK_OFFSET(0xD481720)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW__CLEARREDDOT_OFFSET UNITYSDK_OFFSET(0xD482750)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW__CTOR_OFFSET UNITYSDK_OFFSET(0xD47F4E0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW__MOVETOCOMMENT_OFFSET UNITYSDK_OFFSET(0xD483480)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xD4807E0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW__ONEXITFINALSTEP_OFFSET UNITYSDK_OFFSET(0xD482800)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xD47F580)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW__ONLIMAONEWSCLOSEPOSTDETAIL_OFFSET UNITYSDK_OFFSET(0xD4836E0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW__ONLIMAONEWSPOSTDETAILOPERATION_OFFSET UNITYSDK_OFFSET(0xD483520)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW__ONLIMAONEWSPOSTMESSAGE_OFFSET UNITYSDK_OFFSET(0xD482A90)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW__ONLIMAONEWSREFRESHUPVOTE_OFFSET UNITYSDK_OFFSET(0xD4838D0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW__ONLIMAONEWSREPLAYPOST_OFFSET UNITYSDK_OFFSET(0xD483090)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW__ONLIMAONEWSSUBMITPOST_OFFSET UNITYSDK_OFFSET(0xD482B30)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW__ONNEWCOMMENTITEM_OFFSET UNITYSDK_OFFSET(0xD484480)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW__SUBSCRIBEMESSAGE_OFFSET UNITYSDK_OFFSET(0xD480740)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsPostDetailWindow_TypeDefinitionIndex = 79084;

	class LimaoNewsPostDetailWindow : public ::Sofa::BaseSofaWindow
	{
	public:
		::UnityEngine::Transform* _NodeBannedMask; // 0x48
		::UnityEngine::RectTransform* _NodeDescContent; // 0x50
		::RPG::Client::AnimatorButton* _BtnImage; // 0x58
		::RPG::Client::LimaoNews::LimaoNewsInteractionControl* _InteractionControl; // 0x60
		::RPG::Client::LimaoNews::LimaoNewsStateTagControl* _StateTagControl; // 0x68
		::UnityEngine::Transform* _NodeDivider; // 0x70
		::UnityEngine::Transform* _NodeComic; // 0x78
		::UnityEngine::UI::ScrollRect* _RightScrollRect; // 0x80
		::UnityEngine::Transform* _NodeImage; // 0x88
		::UnityEngine::Transform* _NodeVideoMask; // 0x90
		::UnityEngine::Transform* _UserOfficialTag; // 0x98
		::UnityEngine::UI::Text* _UserName; // 0xA0
		::RPG::Client::StaticListView* _CommentListView; // 0xA8
		::RPG::Client::AnimatorButton* _BtnEmptyClose; // 0xB0
		::UnityEngine::Transform* _NodeComicLoadRoot; // 0xB8
		::UnityEngine::UI::Text* _PostTitle; // 0xC0
		::UnityEngine::Transform* _NodeComicMask; // 0xC8
		::RPG::Client::LimaoNews::LimaoNewsLocationControl* _LocationControl; // 0xD0
		::RPG::Client::LimaoNews::LimaoNewsCommentListControl* _CommentListControl; // 0xD8
		::RPG::Client::AnimatorButton* _BtnClose; // 0xE0
		::UnityEngine::UI::Text* _BtnGoText; // 0xE8
		::RPG::Client::AnimatorButton* _BtnGo; // 0xF0
		::UnityEngine::Transform* _NodeBottom; // 0xF8
		::UnityEngine::UI::Text* _PostDesc; // 0x100
		::RPG::Client::LimaoNews::LimaoNewsOfficeSurveyTypeControl* _SurveyTypeControl; // 0x108
		::Class_1_5F4D64A4B97E38F9* _Messenger; // 0x110
		::UnityEngine::UI::Image* _PostImage; // 0x118
		::UnityEngine::UI::Image* _UserImage; // 0x120

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
	};
}
