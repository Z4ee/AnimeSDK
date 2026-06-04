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

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTWITHREPLYCONTROL_SETSHOWLINENODE_OFFSET UNITYSDK_OFFSET(0xBD77D60)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTWITHREPLYCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xBD7A460)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTWITHREPLYCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xBD79DF0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTWITHREPLYCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xBD79A20)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTWITHREPLYCONTROL__ONNEWSUBCOMMENT_OFFSET UNITYSDK_OFFSET(0xBD7A200)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTWITHREPLYCONTROL__PLAYFADEINANIMATION_OFFSET UNITYSDK_OFFSET(0xBD7A050)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTWITHREPLYCONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xBD7A4F0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTWITHREPLYCONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xBD7A490)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsCommentWithReplyControl_TypeDefinitionIndex = 73801;

	class LimaoNewsCommentWithReplyControl : public ::Sofa::BaseSofaControl
	{
	public:
		::UnityEngine::Animation* _Animation; // 0x38
		::UnityEngine::UI::Image* _ImageUser; // 0x40
		::UnityEngine::UI::Text* _TextUserName; // 0x48
		::UnityEngine::UI::Text* _TextDesc; // 0x50
		::UnityEngine::Transform* _NodeTagBanned; // 0x58
		::UnityEngine::Transform* _NodeTagOfficial; // 0x60
		::UnityEngine::Transform* _NodeLine; // 0x68
		::UnityEngine::Transform* _NodeSubComment; // 0x70
		::RPG::Client::StaticListView* _ListSubComments; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTWITHREPLYCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTWITHREPLYCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTWITHREPLYCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void SetShowLineNode(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTWITHREPLYCONTROL_SETSHOWLINENODE_OFFSET))(this, a1);
		}

		::System::Void _PlayFadeInAnimation(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTWITHREPLYCONTROL__PLAYFADEINANIMATION_OFFSET))(this, a1);
		}

		::RPG::Client::StaticListViewItem* _OnNewSubComment(::XLua::LuaTable* a1, ::RPG::Client::StaticListView* a2, ::System::Int32 a3)
		{
			return ((::RPG::Client::StaticListViewItem*(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::StaticListView*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTWITHREPLYCONTROL__ONNEWSUBCOMMENT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __iFixBaseProxy__OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTWITHREPLYCONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSCOMMENTWITHREPLYCONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET))(this);
		}
	};
}
