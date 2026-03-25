#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client { class StaticListView; }
namespace RPG::Client { class StaticListViewItem; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSCOMMENTWITHREPLYCONTROL_METHOD_6_2CBA6A2346720E85_OFFSET UNITYSDK_OFFSET(0x9A947E0)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSCOMMENTWITHREPLYCONTROL_METHOD_6_A811E152B28B228D_OFFSET UNITYSDK_OFFSET(0x9A94970)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSCOMMENTWITHREPLYCONTROL_SETSHOWLINENODE_OFFSET UNITYSDK_OFFSET(0x9A93F80)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSCOMMENTWITHREPLYCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x9A94BA0)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSCOMMENTWITHREPLYCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x9A94470)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSCOMMENTWITHREPLYCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x9A940B0)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSCOMMENTWITHREPLYCONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x9A94C10)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSCOMMENTWITHREPLYCONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x9A94BB0)

namespace RPG::Client::MVVM::View
{
	inline static constexpr unsigned int LimaoNewsCommentWithReplyControl_TypeDefinitionIndex = 60973;

	class LimaoNewsCommentWithReplyControl : public ::Sofa::BaseSofaControl
	{
	public:
		::UnityEngine::Animation* Field_6_0; // 0x30
		::UnityEngine::UI::Image* Field_6_1; // 0x38
		::UnityEngine::UI::Text* Field_6_2; // 0x40
		::UnityEngine::UI::Text* Field_6_3; // 0x48
		::UnityEngine::Transform* Field_6_4; // 0x50
		::UnityEngine::Transform* Field_6_5; // 0x58
		::UnityEngine::Transform* Field_6_6; // 0x60
		::UnityEngine::Transform* Field_6_7; // 0x68
		::RPG::Client::StaticListView* Field_6_8; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSCOMMENTWITHREPLYCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSCOMMENTWITHREPLYCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSCOMMENTWITHREPLYCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void SetShowLineNode(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSCOMMENTWITHREPLYCONTROL_SETSHOWLINENODE_OFFSET))(this, a1);
		}

		::System::Void Method_6_2CBA6A2346720E85(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSCOMMENTWITHREPLYCONTROL_METHOD_6_2CBA6A2346720E85_OFFSET))(this, a1);
		}

		::RPG::Client::StaticListViewItem* Method_6_A811E152B28B228D(::XLua::LuaTable* a1, ::RPG::Client::StaticListView* a2, ::System::Int32 a3)
		{
			return ((::RPG::Client::StaticListViewItem*(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::StaticListView*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSCOMMENTWITHREPLYCONTROL_METHOD_6_A811E152B28B228D_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __iFixBaseProxy__OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSCOMMENTWITHREPLYCONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSCOMMENTWITHREPLYCONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET))(this);
		}
	};
}
