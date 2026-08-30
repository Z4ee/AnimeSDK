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

#define RPG_CLIENT_RUNTIMETUTORIALNODE_BIND_OFFSET UNITYSDK_OFFSET(0x16A35950)
#define RPG_CLIENT_RUNTIMETUTORIALNODE_CANSHOW_OFFSET UNITYSDK_OFFSET(0x16A35ED0)
#define RPG_CLIENT_RUNTIMETUTORIALNODE_CREATEBYGUIDEUICONFIG_OFFSET UNITYSDK_OFFSET(0x16A35080)
#define RPG_CLIENT_RUNTIMETUTORIALNODE_CREATEBYNODEID_OFFSET UNITYSDK_OFFSET(0x16A35010)
#define RPG_CLIENT_RUNTIMETUTORIALNODE_GETGUIDEUICONFIG_OFFSET UNITYSDK_OFFSET(0x16A35910)
#define RPG_CLIENT_RUNTIMETUTORIALNODE_GETNODETRANSFORM_OFFSET UNITYSDK_OFFSET(0x16A35C20)
#define RPG_CLIENT_RUNTIMETUTORIALNODE_GETSCREENRECT_OFFSET UNITYSDK_OFFSET(0x16A35C70)
#define RPG_CLIENT_RUNTIMETUTORIALNODE_GET_NODEID_OFFSET UNITYSDK_OFFSET(0x16A361A0)
#define RPG_CLIENT_RUNTIMETUTORIALNODE_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x16A36160)
#define RPG_CLIENT_RUNTIMETUTORIALNODE_GET__BINDCOUNT_OFFSET UNITYSDK_OFFSET(0x16A361C0)
#define RPG_CLIENT_RUNTIMETUTORIALNODE_GET__MOVECHECKTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x16A360C0)
#define RPG_CLIENT_RUNTIMETUTORIALNODE_GET__NEEDTICK_OFFSET UNITYSDK_OFFSET(0x16A35B90)
#define RPG_CLIENT_RUNTIMETUTORIALNODE_ISFOCUSED_OFFSET UNITYSDK_OFFSET(0x16A35E70)
#define RPG_CLIENT_RUNTIMETUTORIALNODE_ISNODEINSCREEN_OFFSET UNITYSDK_OFFSET(0x16A35D00)
#define RPG_CLIENT_RUNTIMETUTORIALNODE_REFRESH_OFFSET UNITYSDK_OFFSET(0x16A35180)
#define RPG_CLIENT_RUNTIMETUTORIALNODE_SETGUIDEUICONFIG_OFFSET UNITYSDK_OFFSET(0x16A35130)
#define RPG_CLIENT_RUNTIMETUTORIALNODE_SET_NODEID_OFFSET UNITYSDK_OFFSET(0x16A361B0)
#define RPG_CLIENT_RUNTIMETUTORIALNODE_TICK_OFFSET UNITYSDK_OFFSET(0x16A35B20)
#define RPG_CLIENT_RUNTIMETUTORIALNODE_UNBIND_OFFSET UNITYSDK_OFFSET(0x16A35A90)
#define RPG_CLIENT_RUNTIMETUTORIALNODE__CHECKACTIVE_OFFSET UNITYSDK_OFFSET(0x16A35FA0)
#define RPG_CLIENT_RUNTIMETUTORIALNODE__CHECKNODETRANSFORM_OFFSET UNITYSDK_OFFSET(0x16A35740)
#define RPG_CLIENT_RUNTIMETUTORIALNODE__CHECKNODEVISIBILITY_OFFSET UNITYSDK_OFFSET(0x16A35690)
#define RPG_CLIENT_RUNTIMETUTORIALNODE__CHECKRECYCLE_OFFSET UNITYSDK_OFFSET(0x16A36040)
#define RPG_CLIENT_RUNTIMETUTORIALNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x16A35000)
#define RPG_CLIENT_RUNTIMETUTORIALNODE__INITBYNODE_OFFSET UNITYSDK_OFFSET(0x16A354C0)
#define RPG_CLIENT_RUNTIMETUTORIALNODE__ONNODECHANGED_OFFSET UNITYSDK_OFFSET(0x16A352F0)
#define RPG_CLIENT_RUNTIMETUTORIALNODE__SETNODEVISIBILITY_OFFSET UNITYSDK_OFFSET(0x16A358B0)

namespace RPG::Client
{
	inline static constexpr unsigned int RuntimeTutorialNode_TypeDefinitionIndex = 68195;

	class RuntimeTutorialNode : public ::System::Object
	{
	public:
		::UnityEngine::Transform* _TargetTransform; // 0x10
		::SuperScrollView::LoopListViewItem2* _CacheLoopListViewItem; // 0x18
		::RPG::GameCore::TutorialGuideUIContextConfig* _GuideUIConfig; // 0x20
		::System::Collections::Generic::List_1<::XLua::LuaTable*>* _EventListeners; // 0x28
		::System::String* _NodeID_k__BackingField; // 0x30
		::SuperScrollView::LoopGridViewItem* _CacheLoopGridViewItem; // 0x38
		::RPG::Client::TutorialNodeType _NodeType; // 0x40
		::System::Boolean _IsNodeShow; // 0x44
		::System::Nullable_1<::UnityEngine::Rect> _CurrentScreenRect; // 0x48
		::UnityEngine::Vector3 _CachePosition; // 0x5C

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
