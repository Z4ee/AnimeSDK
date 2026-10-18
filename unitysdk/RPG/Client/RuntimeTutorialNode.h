#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TutorialNodeType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class TutorialGuideUIContextConfig; }
namespace SuperScrollView { class LoopGridViewItem; }
namespace SuperScrollView { class LoopListViewItem2; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_RUNTIMETUTORIALNODE_BIND_OFFSET UNITYSDK_OFFSET(0xE07BE50)
#define RPG_CLIENT_RUNTIMETUTORIALNODE_CANSHOW_OFFSET UNITYSDK_OFFSET(0xE07C340)
#define RPG_CLIENT_RUNTIMETUTORIALNODE_CREATEBYGUIDEUICONFIG_OFFSET UNITYSDK_OFFSET(0xE07B580)
#define RPG_CLIENT_RUNTIMETUTORIALNODE_CREATEBYNODEID_OFFSET UNITYSDK_OFFSET(0xE07B510)
#define RPG_CLIENT_RUNTIMETUTORIALNODE_GETGUIDEUICONFIG_OFFSET UNITYSDK_OFFSET(0xE07BE10)
#define RPG_CLIENT_RUNTIMETUTORIALNODE_GETNODETRANSFORM_OFFSET UNITYSDK_OFFSET(0xE07C090)
#define RPG_CLIENT_RUNTIMETUTORIALNODE_GETSCREENRECT_OFFSET UNITYSDK_OFFSET(0xE07C0E0)
#define RPG_CLIENT_RUNTIMETUTORIALNODE_GET_NODEID_OFFSET UNITYSDK_OFFSET(0xE07C570)
#define RPG_CLIENT_RUNTIMETUTORIALNODE_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0xE07C530)
#define RPG_CLIENT_RUNTIMETUTORIALNODE_GET__BINDCOUNT_OFFSET UNITYSDK_OFFSET(0xE07C590)
#define RPG_CLIENT_RUNTIMETUTORIALNODE_GET__MOVECHECKTHRESHOLD_OFFSET UNITYSDK_OFFSET(0xE07C670)
#define RPG_CLIENT_RUNTIMETUTORIALNODE_GET__NEEDTICK_OFFSET UNITYSDK_OFFSET(0xE07C5E0)
#define RPG_CLIENT_RUNTIMETUTORIALNODE_ISFOCUSED_OFFSET UNITYSDK_OFFSET(0xE07C2E0)
#define RPG_CLIENT_RUNTIMETUTORIALNODE_ISNODEINSCREEN_OFFSET UNITYSDK_OFFSET(0xE07C170)
#define RPG_CLIENT_RUNTIMETUTORIALNODE_REFRESH_OFFSET UNITYSDK_OFFSET(0xE07B680)
#define RPG_CLIENT_RUNTIMETUTORIALNODE_SETGUIDEUICONFIG_OFFSET UNITYSDK_OFFSET(0xE07B630)
#define RPG_CLIENT_RUNTIMETUTORIALNODE_SET_NODEID_OFFSET UNITYSDK_OFFSET(0xE07C580)
#define RPG_CLIENT_RUNTIMETUTORIALNODE_TICK_OFFSET UNITYSDK_OFFSET(0xE07C020)
#define RPG_CLIENT_RUNTIMETUTORIALNODE_UNBIND_OFFSET UNITYSDK_OFFSET(0xE07BF90)
#define RPG_CLIENT_RUNTIMETUTORIALNODE__CHECKACTIVE_OFFSET UNITYSDK_OFFSET(0xE07C410)
#define RPG_CLIENT_RUNTIMETUTORIALNODE__CHECKNODETRANSFORM_OFFSET UNITYSDK_OFFSET(0xE07BC40)
#define RPG_CLIENT_RUNTIMETUTORIALNODE__CHECKNODEVISIBILITY_OFFSET UNITYSDK_OFFSET(0xE07BB90)
#define RPG_CLIENT_RUNTIMETUTORIALNODE__CHECKRECYCLE_OFFSET UNITYSDK_OFFSET(0xE07C4B0)
#define RPG_CLIENT_RUNTIMETUTORIALNODE__CTOR_OFFSET UNITYSDK_OFFSET(0xE07B500)
#define RPG_CLIENT_RUNTIMETUTORIALNODE__INITBYNODE_OFFSET UNITYSDK_OFFSET(0xE07B9C0)
#define RPG_CLIENT_RUNTIMETUTORIALNODE__ONNODECHANGED_OFFSET UNITYSDK_OFFSET(0xE07B7F0)
#define RPG_CLIENT_RUNTIMETUTORIALNODE__SETNODEVISIBILITY_OFFSET UNITYSDK_OFFSET(0xE07BDB0)

namespace RPG::Client
{
	inline static constexpr unsigned int RuntimeTutorialNode_TypeDefinitionIndex = 68203;

	class RuntimeTutorialNode : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::XLua::LuaTable*>* _EventListeners; // 0x10
		::UnityEngine::Transform* _TargetTransform; // 0x18
		::RPG::GameCore::TutorialGuideUIContextConfig* _GuideUIConfig; // 0x20
		::SuperScrollView::LoopListViewItem2* _CacheLoopListViewItem; // 0x28
		::System::String* _NodeID_k__BackingField; // 0x30
		::SuperScrollView::LoopGridViewItem* _CacheLoopGridViewItem; // 0x38
		::System::Nullable_1<::UnityEngine::Rect> _CurrentScreenRect; // 0x40
		::RPG::Client::TutorialNodeType _NodeType; // 0x54
		::UnityEngine::Vector3 _CachePosition; // 0x58
		::System::Boolean _IsNodeShow; // 0x64

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMETUTORIALNODE__CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::RuntimeTutorialNode* CreateByNodeID(::System::String* a1)
		{
			return ((::RPG::Client::RuntimeTutorialNode*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMETUTORIALNODE_CREATEBYNODEID_OFFSET))(a1);
		}

		static ::RPG::Client::RuntimeTutorialNode* CreateByGuideUIConfig(::RPG::GameCore::TutorialGuideUIContextConfig* a1)
		{
			return ((::RPG::Client::RuntimeTutorialNode*(*)(::RPG::GameCore::TutorialGuideUIContextConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMETUTORIALNODE_CREATEBYGUIDEUICONFIG_OFFSET))(a1);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMETUTORIALNODE_REFRESH_OFFSET))(this);
		}

		::System::Void SetGuideUIConfig(::RPG::GameCore::TutorialGuideUIContextConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TutorialGuideUIContextConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMETUTORIALNODE_SETGUIDEUICONFIG_OFFSET))(this, a1);
		}

		::RPG::GameCore::TutorialGuideUIContextConfig* GetGuideUIConfig()
		{
			return ((::RPG::GameCore::TutorialGuideUIContextConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMETUTORIALNODE_GETGUIDEUICONFIG_OFFSET))(this);
		}

		::System::Void Bind(::XLua::LuaTable* a1)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMETUTORIALNODE_BIND_OFFSET))(this, a1);
		}

		::System::Void Unbind(::XLua::LuaTable* a1)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMETUTORIALNODE_UNBIND_OFFSET))(this, a1);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMETUTORIALNODE_TICK_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* GetNodeTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMETUTORIALNODE_GETNODETRANSFORM_OFFSET))(this);
		}

		::UnityEngine::Rect GetScreenRect()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMETUTORIALNODE_GETSCREENRECT_OFFSET))(this);
		}

		::System::Boolean IsNodeInScreen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMETUTORIALNODE_ISNODEINSCREEN_OFFSET))(this);
		}

		::System::Boolean IsFocused()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMETUTORIALNODE_ISFOCUSED_OFFSET))(this);
		}

		::System::Boolean CanShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMETUTORIALNODE_CANSHOW_OFFSET))(this);
		}

		::System::Void _SetNodeVisibility(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMETUTORIALNODE__SETNODEVISIBILITY_OFFSET))(this, a1);
		}

		::System::Void _OnNodeChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMETUTORIALNODE__ONNODECHANGED_OFFSET))(this);
		}

		::System::Void _InitByNode(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMETUTORIALNODE__INITBYNODE_OFFSET))(this, a1);
		}

		::System::Boolean _CheckNodeVisibility()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMETUTORIALNODE__CHECKNODEVISIBILITY_OFFSET))(this);
		}

		::System::Boolean _CheckActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMETUTORIALNODE__CHECKACTIVE_OFFSET))(this);
		}

		::System::Boolean _CheckRecycle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMETUTORIALNODE__CHECKRECYCLE_OFFSET))(this);
		}

		::System::Boolean _CheckNodeTransform()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMETUTORIALNODE__CHECKNODETRANSFORM_OFFSET))(this);
		}

		::RPG::Client::TutorialNodeType get_NodeType()
		{
			return ((::RPG::Client::TutorialNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMETUTORIALNODE_GET_NODETYPE_OFFSET))(this);
		}

		::System::String* get_NodeID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMETUTORIALNODE_GET_NODEID_OFFSET))(this);
		}

		::System::Void set_NodeID(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMETUTORIALNODE_SET_NODEID_OFFSET))(this, a1);
		}

		::System::Int32 get__BindCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMETUTORIALNODE_GET__BINDCOUNT_OFFSET))(this);
		}

		::System::Boolean get__NeedTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMETUTORIALNODE_GET__NEEDTICK_OFFSET))(this);
		}

		::System::Single get__MoveCheckThreshold()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMETUTORIALNODE_GET__MOVECHECKTHRESHOLD_OFFSET))(this);
		}
	};
}
