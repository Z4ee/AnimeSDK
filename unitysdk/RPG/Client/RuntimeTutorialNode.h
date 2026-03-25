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

#define RPG_CLIENT_RUNTIMETUTORIALNODE_BIND_OFFSET UNITYSDK_OFFSET(0xA40E330)
#define RPG_CLIENT_RUNTIMETUTORIALNODE_CANSHOW_OFFSET UNITYSDK_OFFSET(0xA40E910)
#define RPG_CLIENT_RUNTIMETUTORIALNODE_CREATEBYGUIDEUICONFIG_OFFSET UNITYSDK_OFFSET(0xA40DA70)
#define RPG_CLIENT_RUNTIMETUTORIALNODE_CREATEBYNODEID_OFFSET UNITYSDK_OFFSET(0xA40DA00)
#define RPG_CLIENT_RUNTIMETUTORIALNODE_GETGUIDEUICONFIG_OFFSET UNITYSDK_OFFSET(0xA40E2F0)
#define RPG_CLIENT_RUNTIMETUTORIALNODE_GETNODETRANSFORM_OFFSET UNITYSDK_OFFSET(0xA40E5A0)
#define RPG_CLIENT_RUNTIMETUTORIALNODE_GETSCREENRECT_OFFSET UNITYSDK_OFFSET(0xA40E5F0)
#define RPG_CLIENT_RUNTIMETUTORIALNODE_GET_IS2D_OFFSET UNITYSDK_OFFSET(0xA40EBB0)
#define RPG_CLIENT_RUNTIMETUTORIALNODE_GET_IS3D_OFFSET UNITYSDK_OFFSET(0xA40EBA0)
#define RPG_CLIENT_RUNTIMETUTORIALNODE_GET_ISUI3D_OFFSET UNITYSDK_OFFSET(0xA40EBC0)
#define RPG_CLIENT_RUNTIMETUTORIALNODE_GET_NODEID_OFFSET UNITYSDK_OFFSET(0xA40EBD0)
#define RPG_CLIENT_RUNTIMETUTORIALNODE_GET__BINDCOUNT_OFFSET UNITYSDK_OFFSET(0xA40EBF0)
#define RPG_CLIENT_RUNTIMETUTORIALNODE_GET__MOVECHECKTHRESHOLD_OFFSET UNITYSDK_OFFSET(0xA40EB00)
#define RPG_CLIENT_RUNTIMETUTORIALNODE_GET__NEEDTICK_OFFSET UNITYSDK_OFFSET(0xA40E510)
#define RPG_CLIENT_RUNTIMETUTORIALNODE_ISFOCUSED_OFFSET UNITYSDK_OFFSET(0xA40E8B0)
#define RPG_CLIENT_RUNTIMETUTORIALNODE_ISNODEINSCREEN_OFFSET UNITYSDK_OFFSET(0xA40E680)
#define RPG_CLIENT_RUNTIMETUTORIALNODE_REFRESH_OFFSET UNITYSDK_OFFSET(0xA40DB70)
#define RPG_CLIENT_RUNTIMETUTORIALNODE_SETGUIDEUICONFIG_OFFSET UNITYSDK_OFFSET(0xA40DB20)
#define RPG_CLIENT_RUNTIMETUTORIALNODE_SET_NODEID_OFFSET UNITYSDK_OFFSET(0xA40EBE0)
#define RPG_CLIENT_RUNTIMETUTORIALNODE_TICK_OFFSET UNITYSDK_OFFSET(0xA40E4A0)
#define RPG_CLIENT_RUNTIMETUTORIALNODE_UNBIND_OFFSET UNITYSDK_OFFSET(0xA40E410)
#define RPG_CLIENT_RUNTIMETUTORIALNODE__CHECKACTIVE_OFFSET UNITYSDK_OFFSET(0xA40E9E0)
#define RPG_CLIENT_RUNTIMETUTORIALNODE__CHECKNODETRANSFORM_OFFSET UNITYSDK_OFFSET(0xA40E110)
#define RPG_CLIENT_RUNTIMETUTORIALNODE__CHECKNODEVISIBILITY_OFFSET UNITYSDK_OFFSET(0xA40E060)
#define RPG_CLIENT_RUNTIMETUTORIALNODE__CHECKRECYCLE_OFFSET UNITYSDK_OFFSET(0xA40EA80)
#define RPG_CLIENT_RUNTIMETUTORIALNODE__CTOR_OFFSET UNITYSDK_OFFSET(0xA40D9F0)
#define RPG_CLIENT_RUNTIMETUTORIALNODE__INITBYNODE_OFFSET UNITYSDK_OFFSET(0xA40DE90)
#define RPG_CLIENT_RUNTIMETUTORIALNODE__ONNODECHANGED_OFFSET UNITYSDK_OFFSET(0xA40DCF0)
#define RPG_CLIENT_RUNTIMETUTORIALNODE__SETNODEVISIBILITY_OFFSET UNITYSDK_OFFSET(0xA40E280)

namespace RPG::Client
{
	inline static constexpr unsigned int RuntimeTutorialNode_TypeDefinitionIndex = 55680;

	class RuntimeTutorialNode : public ::System::Object
	{
	public:
		::SuperScrollView::LoopListViewItem2* _CacheLoopListViewItem; // 0x10
		::RPG::GameCore::TutorialGuideUIContextConfig* _GuideUIConfig; // 0x18
		::SuperScrollView::LoopGridViewItem* _CacheLoopGridViewItem; // 0x20
		::System::String* _NodeID_k__BackingField; // 0x28
		::System::Collections::Generic::List_1<::XLua::LuaTable*>* _EventListeners; // 0x30
		::UnityEngine::Transform* _TargetTransform; // 0x38
		::UnityEngine::Vector3 _CachePosition; // 0x40
		::System::Boolean _IsNodeShow; // 0x4C
		::System::Nullable_1<::UnityEngine::Rect> _CurrentScreenRect; // 0x50
		::RPG::Client::TutorialNodeType _NodeType; // 0x64

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
