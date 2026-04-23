#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client { class StaticListView; }
namespace RPG::Client { class StaticListViewItem; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSCOMMENTLISTCONTROL_METHOD_6_8BA9E415415F5BBF_OFFSET UNITYSDK_OFFSET(0xA742B60)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSCOMMENTLISTCONTROL_MOVETOCOMMENT_OFFSET UNITYSDK_OFFSET(0xA742A20)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSCOMMENTLISTCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xA742E00)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSCOMMENTLISTCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xA7428D0)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSCOMMENTLISTCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xA742760)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSCOMMENTLISTCONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xA742E70)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSCOMMENTLISTCONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xA742E10)

namespace RPG::Client::MVVM::View
{
	inline static constexpr unsigned int LimaoNewsCommentListControl_TypeDefinitionIndex = 68425;

	class LimaoNewsCommentListControl : public ::Sofa::BaseSofaControl
	{
	public:
		::RPG::Client::StaticListView* Field_6_0; // 0x30
		::UnityEngine::Transform* Field_6_1; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSCOMMENTLISTCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSCOMMENTLISTCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSCOMMENTLISTCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::UnityEngine::RectTransform* MoveToComment(::System::UInt32 a1)
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSCOMMENTLISTCONTROL_MOVETOCOMMENT_OFFSET))(this, a1);
		}

		::RPG::Client::StaticListViewItem* Method_6_8BA9E415415F5BBF(::XLua::LuaTable* a1, ::RPG::Client::StaticListView* a2, ::System::Int32 a3)
		{
			return ((::RPG::Client::StaticListViewItem*(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::StaticListView*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSCOMMENTLISTCONTROL_METHOD_6_8BA9E415415F5BBF_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __iFixBaseProxy__OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSCOMMENTLISTCONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSCOMMENTLISTCONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET))(this);
		}
	};
}
