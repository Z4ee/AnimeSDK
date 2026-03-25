#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

class Class_3_D975C797957E43FF;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client::MVVM::View { class LimaoNewsPostInfoRowControl; }
namespace RPG::Client::MVVM::ViewModel { class LimaoNewsPostViewModel; }
namespace SuperScrollView { class LoopListView2; }
namespace SuperScrollView { class LoopListViewItem2; }
namespace UnityEngine { class Transform; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSFORUMCONTROL_METHOD_6_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0x9A951F0)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSFORUMCONTROL_METHOD_6_192D2D35A79523B5_OFFSET UNITYSDK_OFFSET(0x9A95960)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSFORUMCONTROL_METHOD_6_323F95926A2F616E_OFFSET UNITYSDK_OFFSET(0x9A95180)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSFORUMCONTROL_METHOD_6_3D4F127F6B974E0C_OFFSET UNITYSDK_OFFSET(0x9A95790)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSFORUMCONTROL_REFRESHREDDOTNODE_OFFSET UNITYSDK_OFFSET(0x9A95740)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSFORUMCONTROL_TRYMOVETONEWPOST_OFFSET UNITYSDK_OFFSET(0x9A95500)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSFORUMCONTROL_TRYMOVETO_OFFSET UNITYSDK_OFFSET(0x9A95340)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSFORUMCONTROL_UPDATE_OFFSET UNITYSDK_OFFSET(0x9A95E00)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSFORUMCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x9A95E60)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSFORUMCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x9A94F20)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSFORUMCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x9A94D00)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSFORUMCONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x9A95EF0)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSFORUMCONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x9A95E90)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSFORUMCONTROL___TRYPLAYPOSTROWANIMATION_B__7_0_OFFSET UNITYSDK_OFFSET(0x9A95E70)

namespace RPG::Client::MVVM::View
{
	inline static constexpr unsigned int LimaoNewsForumControl_TypeDefinitionIndex = 61000;

	class LimaoNewsForumControl : public ::Sofa::BaseSofaControl
	{
	public:
		::System::Int32 Field_6_0; // 0x30
		::UnityEngine::Transform* Field_6_1; // 0x38
		::SuperScrollView::LoopListView2* Field_6_2; // 0x40
		::RPG::Client::AnimatorButton* Field_6_3; // 0x48
		::UnityEngine::Transform* Field_6_4; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSFORUMCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSFORUMCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSFORUMCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void Method_6_06330CD58CB602B6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSFORUMCONTROL_METHOD_6_06330CD58CB602B6_OFFSET))(this);
		}

		::System::Void TryMoveTo(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSFORUMCONTROL_TRYMOVETO_OFFSET))(this, a1);
		}

		::System::Void TryMoveToNewPost()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSFORUMCONTROL_TRYMOVETONEWPOST_OFFSET))(this);
		}

		::System::Void RefreshRedDotNode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSFORUMCONTROL_REFRESHREDDOTNODE_OFFSET))(this);
		}

		::SuperScrollView::LoopListViewItem2* Method_6_3D4F127F6B974E0C(::XLua::LuaTable* a1, ::SuperScrollView::LoopListView2* a2, ::System::Int32 a3)
		{
			return ((::SuperScrollView::LoopListViewItem2*(*)(::PVOID, ::XLua::LuaTable*, ::SuperScrollView::LoopListView2*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSFORUMCONTROL_METHOD_6_3D4F127F6B974E0C_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_6_192D2D35A79523B5(::RPG::Client::MVVM::View::LimaoNewsPostInfoRowControl* a1, ::RPG::Client::MVVM::ViewModel::LimaoNewsPostViewModel* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MVVM::View::LimaoNewsPostInfoRowControl*, ::RPG::Client::MVVM::ViewModel::LimaoNewsPostViewModel*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSFORUMCONTROL_METHOD_6_192D2D35A79523B5_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSFORUMCONTROL_UPDATE_OFFSET))(this);
		}

		::Class_3_D975C797957E43FF* Method_6_323F95926A2F616E()
		{
			return ((::Class_3_D975C797957E43FF*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSFORUMCONTROL_METHOD_6_323F95926A2F616E_OFFSET))(this);
		}

		::System::Void __TryPlayPostRowAnimation_b__7_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSFORUMCONTROL___TRYPLAYPOSTROWANIMATION_B__7_0_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSFORUMCONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSFORUMCONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET))(this);
		}
	};
}
