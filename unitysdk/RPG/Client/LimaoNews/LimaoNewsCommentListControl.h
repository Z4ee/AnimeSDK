#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client { class StaticListView; }
namespace RPG::Client { class StaticListViewItem; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTLISTCONTROL_MOVETOCOMMENT_OFFSET UNITYSDK_OFFSET(0x1A763AB0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTLISTCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A764110)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTLISTCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1A7638D0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTLISTCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1A7637C0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTLISTCONTROL__ONNEWITEM_OFFSET UNITYSDK_OFFSET(0x1A763D60)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsCommentListControl_TypeDefinitionIndex = 75451;

	class LimaoNewsCommentListControl : public ::Sofa::BaseSofaControl
	{
	public:
		::RPG::Client::StaticListView* _ListView; // 0x38
		::UnityEngine::Transform* _NodeEmpty; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTLISTCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTLISTCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTLISTCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::UnityEngine::RectTransform* MoveToComment(::System::UInt32 a1)
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTLISTCONTROL_MOVETOCOMMENT_OFFSET))(this, a1);
		}

		::RPG::Client::StaticListViewItem* _OnNewItem(::XLua::LuaTable* a1, ::RPG::Client::StaticListView* a2, ::System::Int32 a3)
		{
			return ((::RPG::Client::StaticListViewItem*(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::StaticListView*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTLISTCONTROL__ONNEWITEM_OFFSET))(this, a1, a2, a3);
		}
	};
}
