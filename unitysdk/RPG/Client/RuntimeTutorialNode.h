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

#define RPG_CLIENT_RUNTIMETUTORIALNODE_BIND_OFFSET UNITYSDK_OFFSET(0xB1463A0)
#define RPG_CLIENT_RUNTIMETUTORIALNODE_CANSHOW_OFFSET UNITYSDK_OFFSET(0xB146940)
#define RPG_CLIENT_RUNTIMETUTORIALNODE_CREATEBYGUIDEUICONFIG_OFFSET UNITYSDK_OFFSET(0xB145B50)
#define RPG_CLIENT_RUNTIMETUTORIALNODE_CREATEBYNODEID_OFFSET UNITYSDK_OFFSET(0xB145B00)
#define RPG_CLIENT_RUNTIMETUTORIALNODE_GETGUIDEUICONFIG_OFFSET UNITYSDK_OFFSET(0xB146360)
#define RPG_CLIENT_RUNTIMETUTORIALNODE_GETNODETRANSFORM_OFFSET UNITYSDK_OFFSET(0xB1465D0)
#define RPG_CLIENT_RUNTIMETUTORIALNODE_GETSCREENRECT_OFFSET UNITYSDK_OFFSET(0xB146620)
#define RPG_CLIENT_RUNTIMETUTORIALNODE_GET_IS2D_OFFSET UNITYSDK_OFFSET(0xB146BE0)
#define RPG_CLIENT_RUNTIMETUTORIALNODE_GET_IS3D_OFFSET UNITYSDK_OFFSET(0xB146BD0)
#define RPG_CLIENT_RUNTIMETUTORIALNODE_GET_ISUI3D_OFFSET UNITYSDK_OFFSET(0xB146BF0)
#define RPG_CLIENT_RUNTIMETUTORIALNODE_GET_NODEID_OFFSET UNITYSDK_OFFSET(0xB146C00)
#define RPG_CLIENT_RUNTIMETUTORIALNODE_GET__BINDCOUNT_OFFSET UNITYSDK_OFFSET(0xB146C20)
#define RPG_CLIENT_RUNTIMETUTORIALNODE_GET__MOVECHECKTHRESHOLD_OFFSET UNITYSDK_OFFSET(0xB146B30)
#define RPG_CLIENT_RUNTIMETUTORIALNODE_GET__NEEDTICK_OFFSET UNITYSDK_OFFSET(0xB146540)
#define RPG_CLIENT_RUNTIMETUTORIALNODE_ISFOCUSED_OFFSET UNITYSDK_OFFSET(0xB1468E0)
#define RPG_CLIENT_RUNTIMETUTORIALNODE_ISNODEINSCREEN_OFFSET UNITYSDK_OFFSET(0xB1466B0)
#define RPG_CLIENT_RUNTIMETUTORIALNODE_REFRESH_OFFSET UNITYSDK_OFFSET(0xB145C30)
#define RPG_CLIENT_RUNTIMETUTORIALNODE_SETGUIDEUICONFIG_OFFSET UNITYSDK_OFFSET(0xB145BE0)
#define RPG_CLIENT_RUNTIMETUTORIALNODE_SET_NODEID_OFFSET UNITYSDK_OFFSET(0xB146C10)
#define RPG_CLIENT_RUNTIMETUTORIALNODE_TICK_OFFSET UNITYSDK_OFFSET(0xB1464D0)
#define RPG_CLIENT_RUNTIMETUTORIALNODE_UNBIND_OFFSET UNITYSDK_OFFSET(0xB146460)
#define RPG_CLIENT_RUNTIMETUTORIALNODE__CHECKACTIVE_OFFSET UNITYSDK_OFFSET(0xB146A10)
#define RPG_CLIENT_RUNTIMETUTORIALNODE__CHECKNODETRANSFORM_OFFSET UNITYSDK_OFFSET(0xB146180)
#define RPG_CLIENT_RUNTIMETUTORIALNODE__CHECKNODEVISIBILITY_OFFSET UNITYSDK_OFFSET(0xB1460D0)
#define RPG_CLIENT_RUNTIMETUTORIALNODE__CHECKRECYCLE_OFFSET UNITYSDK_OFFSET(0xB146AB0)
#define RPG_CLIENT_RUNTIMETUTORIALNODE__CTOR_OFFSET UNITYSDK_OFFSET(0xB145AF0)
#define RPG_CLIENT_RUNTIMETUTORIALNODE__INITBYNODE_OFFSET UNITYSDK_OFFSET(0xB145F20)
#define RPG_CLIENT_RUNTIMETUTORIALNODE__ONNODECHANGED_OFFSET UNITYSDK_OFFSET(0xB145DB0)
#define RPG_CLIENT_RUNTIMETUTORIALNODE__SETNODEVISIBILITY_OFFSET UNITYSDK_OFFSET(0xB1462F0)

namespace RPG::Client
{
	inline static constexpr unsigned int RuntimeTutorialNode_TypeDefinitionIndex = 62883;

	class RuntimeTutorialNode : public ::System::Object
	{
	public:
		::System::String* _NodeID_k__BackingField; // 0x10
		::UnityEngine::Transform* _TargetTransform; // 0x18
		::System::Collections::Generic::List_1<::XLua::LuaTable*>* _EventListeners; // 0x20
		::SuperScrollView::LoopGridViewItem* _CacheLoopGridViewItem; // 0x28
		::SuperScrollView::LoopListViewItem2* _CacheLoopListViewItem; // 0x30
		::RPG::GameCore::TutorialGuideUIContextConfig* _GuideUIConfig; // 0x38
		::System::Boolean _IsNodeShow; // 0x40
		::System::Nullable_1<::UnityEngine::Rect> _CurrentScreenRect; // 0x44
		::RPG::Client::TutorialNodeType _NodeType; // 0x58
		::UnityEngine::Vector3 _CachePosition; // 0x5C

		::System::Void _ctor(::System::String* nodeID)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMETUTORIALNODE__CTOR_OFFSET))(this, nodeID);
		}

		static ::RPG::Client::RuntimeTutorialNode* CreateByNodeID(::System::String* nodeID)
		{
			return ((::RPG::Client::RuntimeTutorialNode*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMETUTORIALNODE_CREATEBYNODEID_OFFSET))(nodeID);
		}

		static ::RPG::Client::RuntimeTutorialNode* CreateByGuideUIConfig(::RPG::GameCore::TutorialGuideUIContextConfig* config)
		{
			return ((::RPG::Client::RuntimeTutorialNode*(*)(::RPG::GameCore::TutorialGuideUIContextConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMETUTORIALNODE_CREATEBYGUIDEUICONFIG_OFFSET))(config);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMETUTORIALNODE_REFRESH_OFFSET))(this);
		}

		::System::Void SetGuideUIConfig(::RPG::GameCore::TutorialGuideUIContextConfig* config)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TutorialGuideUIContextConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMETUTORIALNODE_SETGUIDEUICONFIG_OFFSET))(this, config);
		}

		::RPG::GameCore::TutorialGuideUIContextConfig* GetGuideUIConfig()
		{
			return ((::RPG::GameCore::TutorialGuideUIContextConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMETUTORIALNODE_GETGUIDEUICONFIG_OFFSET))(this);
		}

		::System::Void Bind(::XLua::LuaTable* luaTable)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMETUTORIALNODE_BIND_OFFSET))(this, luaTable);
		}

		::System::Void Unbind(::XLua::LuaTable* luaTable)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMETUTORIALNODE_UNBIND_OFFSET))(this, luaTable);
		}

		::System::Void Tick(::System::Single deltaSeconds)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMETUTORIALNODE_TICK_OFFSET))(this, deltaSeconds);
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

		::System::Void _SetNodeVisibility(::System::Boolean isVisible)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMETUTORIALNODE__SETNODEVISIBILITY_OFFSET))(this, isVisible);
		}

		::System::Void _OnNodeChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMETUTORIALNODE__ONNODECHANGED_OFFSET))(this);
		}

		::System::Void _InitByNode(::UnityEngine::Transform* node)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMETUTORIALNODE__INITBYNODE_OFFSET))(this, node);
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

		::System::Boolean get_Is3D()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMETUTORIALNODE_GET_IS3D_OFFSET))(this);
		}

		::System::Boolean get_Is2D()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMETUTORIALNODE_GET_IS2D_OFFSET))(this);
		}

		::System::Boolean get_IsUI3D()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMETUTORIALNODE_GET_ISUI3D_OFFSET))(this);
		}

		::System::String* get_NodeID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMETUTORIALNODE_GET_NODEID_OFFSET))(this);
		}

		::System::Void set_NodeID(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMETUTORIALNODE_SET_NODEID_OFFSET))(this, value);
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
