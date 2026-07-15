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

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1A78CFB0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW__BINDBOTTOMVIEW_OFFSET UNITYSDK_OFFSET(0x1A78DB00)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW__BINDBTNSVIEW_OFFSET UNITYSDK_OFFSET(0x1A78DCB0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW__BINDPOSTBASICVIEW_OFFSET UNITYSDK_OFFSET(0x1A78D090)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW__BINDRIGHTVIEW_OFFSET UNITYSDK_OFFSET(0x1A78D880)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW__CLEARREDDOT_OFFSET UNITYSDK_OFFSET(0x1A78E730)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW__CTOR_OFFSET UNITYSDK_OFFSET(0x1A78BA60)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW__MOVETOCOMMENT_OFFSET UNITYSDK_OFFSET(0x1A78EFF0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1A78CDB0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW__ONEXITFINALSTEP_OFFSET UNITYSDK_OFFSET(0x1A78E790)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1A78BB40)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW__ONLIMAONEWSCLOSEPOSTDETAIL_OFFSET UNITYSDK_OFFSET(0x1A78F1D0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW__ONLIMAONEWSPOSTDETAILOPERATION_OFFSET UNITYSDK_OFFSET(0x1A78F090)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW__ONLIMAONEWSPOSTMESSAGE_OFFSET UNITYSDK_OFFSET(0x1A78E980)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW__ONLIMAONEWSREFRESHUPVOTE_OFFSET UNITYSDK_OFFSET(0x1A78F350)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW__ONLIMAONEWSREPLAYPOST_OFFSET UNITYSDK_OFFSET(0x1A78EDA0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW__ONLIMAONEWSSUBMITPOST_OFFSET UNITYSDK_OFFSET(0x1A78EA20)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW__ONNEWCOMMENTITEM_OFFSET UNITYSDK_OFFSET(0x1A78FB60)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW__SUBSCRIBEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1A78CCF0)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsPostDetailWindow_TypeDefinitionIndex = 75502;

	class LimaoNewsPostDetailWindow : public ::Sofa::BaseSofaWindow
	{
	public:
		::UnityEngine::UI::Text* _PostDesc; // 0x40
		::RPG::Client::LimaoNews::LimaoNewsCommentListControl* _CommentListControl; // 0x48
		::UnityEngine::Transform* _UserOfficialTag; // 0x50
		::RPG::Client::LimaoNews::LimaoNewsLocationControl* _LocationControl; // 0x58
		::RPG::Client::AnimatorButton* _BtnClose; // 0x60
		::RPG::Client::LimaoNews::LimaoNewsStateTagControl* _StateTagControl; // 0x68
		::RPG::Client::AnimatorButton* _BtnEmptyClose; // 0x70
		::RPG::Client::LimaoNews::LimaoNewsInteractionControl* _InteractionControl; // 0x78
		::UnityEngine::UI::Image* _PostImage; // 0x80
		::RPG::Client::LimaoNews::LimaoNewsOfficeSurveyTypeControl* _SurveyTypeControl; // 0x88
		::UnityEngine::Transform* _NodeDivider; // 0x90
		::UnityEngine::Transform* _NodeVideoMask; // 0x98
		::RPG::Client::AnimatorButton* _BtnGo; // 0xA0
		::UnityEngine::Transform* _NodeComic; // 0xA8
		::UnityEngine::Transform* _NodeImage; // 0xB0
		::UnityEngine::UI::Text* _BtnGoText; // 0xB8
		::UnityEngine::UI::Text* _UserName; // 0xC0
		::RPG::Client::StaticListView* _CommentListView; // 0xC8
		::UnityEngine::UI::ScrollRect* _RightScrollRect; // 0xD0
		::UnityEngine::UI::Image* _UserImage; // 0xD8
		::UnityEngine::UI::Text* _PostTitle; // 0xE0
		::RPG::Client::AnimatorButton* _BtnImage; // 0xE8
		::UnityEngine::Transform* _NodeBottom; // 0xF0
		::Class_1_5F4D64A4B97E38F9* _Messenger; // 0xF8
		::UnityEngine::RectTransform* _NodeDescContent; // 0x100
		::UnityEngine::Transform* _NodeBannedMask; // 0x108
		::UnityEngine::Transform* _NodeComicLoadRoot; // 0x110
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
	};
}
