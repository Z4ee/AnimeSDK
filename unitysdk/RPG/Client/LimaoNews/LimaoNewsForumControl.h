#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client::LimaoNews { class LimaoNewsForumViewModel; }
namespace RPG::Client::LimaoNews { class LimaoNewsPostInfoRowControl; }
namespace RPG::Client::LimaoNews { class LimaoNewsPostViewModel; }
namespace SuperScrollView { class LoopListView2; }
namespace SuperScrollView { class LoopListViewItem2; }
namespace UnityEngine { class Transform; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSFORUMCONTROL_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0xD450E40)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSFORUMCONTROL_ONITEMCHANGE_OFFSET UNITYSDK_OFFSET(0xD451D40)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSFORUMCONTROL_REFRESHREDDOTNODE_OFFSET UNITYSDK_OFFSET(0xD451CF0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSFORUMCONTROL_TRYMOVETONEWPOST_OFFSET UNITYSDK_OFFSET(0xD451590)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSFORUMCONTROL_TRYMOVETO_OFFSET UNITYSDK_OFFSET(0xD451210)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSFORUMCONTROL_UPDATE_OFFSET UNITYSDK_OFFSET(0xD452300)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSFORUMCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xD452360)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSFORUMCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xD450BD0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSFORUMCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xD450AD0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSFORUMCONTROL__TRYMOVETOPOST_OFFSET UNITYSDK_OFFSET(0xD450EC0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSFORUMCONTROL__TRYOPENPOSTDETAIL_OFFSET UNITYSDK_OFFSET(0xD451910)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSFORUMCONTROL__TRYPLAYPOSTROWANIMATION_OFFSET UNITYSDK_OFFSET(0xD451F20)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSFORUMCONTROL___TRYPLAYPOSTROWANIMATION_B__8_0_OFFSET UNITYSDK_OFFSET(0xD4523A0)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsForumControl_TypeDefinitionIndex = 79061;

	class LimaoNewsForumControl : public ::Sofa::BaseSofaControl
	{
	public:
		::System::Int32 _NeedUpdateSizeItemIndex; // 0x38
		::SuperScrollView::LoopListView2* _LoopListView; // 0x40
		::RPG::Client::AnimatorButton* _BtnFilter; // 0x48
		::UnityEngine::Transform* _NodeFilterTip; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSFORUMCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSFORUMCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSFORUMCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void _TryMoveToPost()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSFORUMCONTROL__TRYMOVETOPOST_OFFSET))(this);
		}

		::System::Void _TryOpenPostDetail()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSFORUMCONTROL__TRYOPENPOSTDETAIL_OFFSET))(this);
		}

		::System::Void TryMoveTo(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSFORUMCONTROL_TRYMOVETO_OFFSET))(this, a1);
		}

		::System::Void TryMoveToNewPost()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSFORUMCONTROL_TRYMOVETONEWPOST_OFFSET))(this);
		}

		::System::Void RefreshRedDotNode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSFORUMCONTROL_REFRESHREDDOTNODE_OFFSET))(this);
		}

		::SuperScrollView::LoopListViewItem2* OnItemChange(::XLua::LuaTable* a1, ::SuperScrollView::LoopListView2* a2, ::System::Int32 a3)
		{
			return ((::SuperScrollView::LoopListViewItem2*(*)(::PVOID, ::XLua::LuaTable*, ::SuperScrollView::LoopListView2*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSFORUMCONTROL_ONITEMCHANGE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _TryPlayPostRowAnimation(::RPG::Client::LimaoNews::LimaoNewsPostInfoRowControl* a1, ::RPG::Client::LimaoNews::LimaoNewsPostViewModel* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsPostInfoRowControl*, ::RPG::Client::LimaoNews::LimaoNewsPostViewModel*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSFORUMCONTROL__TRYPLAYPOSTROWANIMATION_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSFORUMCONTROL_UPDATE_OFFSET))(this);
		}

		::RPG::Client::LimaoNews::LimaoNewsForumViewModel* get__ViewModel()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsForumViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSFORUMCONTROL_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void __TryPlayPostRowAnimation_b__8_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSFORUMCONTROL___TRYPLAYPOSTROWANIMATION_B__8_0_OFFSET))(this);
		}
	};
}
