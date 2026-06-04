#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace SuperScrollView { class LoopListView2; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::UI { class ScrollRect; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_ROGUELOOPLISTVIEWEXTRA_GET_ITEMSCALEDISTANCE_OFFSET UNITYSDK_OFFSET(0xC7987D0)
#define RPG_CLIENT_ROGUELOOPLISTVIEWEXTRA_GET_ITEMSNAPANIMATIONLAYER_OFFSET UNITYSDK_OFFSET(0xC798850)
#define RPG_CLIENT_ROGUELOOPLISTVIEWEXTRA_GET_ITEMSNAPANIMATIONNAME_OFFSET UNITYSDK_OFFSET(0xC798870)
#define RPG_CLIENT_ROGUELOOPLISTVIEWEXTRA_GET_SCROLLCONTENTANCHOREDPOS_OFFSET UNITYSDK_OFFSET(0xC798890)
#define RPG_CLIENT_ROGUELOOPLISTVIEWEXTRA_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0xC799270)
#define RPG_CLIENT_ROGUELOOPLISTVIEWEXTRA_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xC798990)
#define RPG_CLIENT_ROGUELOOPLISTVIEWEXTRA_REGISTERDRAGSTARTCALLBACK_OFFSET UNITYSDK_OFFSET(0xC799210)
#define RPG_CLIENT_ROGUELOOPLISTVIEWEXTRA_SET_ITEMSCALEDISTANCE_OFFSET UNITYSDK_OFFSET(0xC7987E0)
#define RPG_CLIENT_ROGUELOOPLISTVIEWEXTRA_SET_ITEMSNAPANIMATIONLAYER_OFFSET UNITYSDK_OFFSET(0xC798860)
#define RPG_CLIENT_ROGUELOOPLISTVIEWEXTRA_SET_ITEMSNAPANIMATIONNAME_OFFSET UNITYSDK_OFFSET(0xC798880)
#define RPG_CLIENT_ROGUELOOPLISTVIEWEXTRA_SET_SCROLLCONTENTANCHOREDPOS_OFFSET UNITYSDK_OFFSET(0xC798910)
#define RPG_CLIENT_ROGUELOOPLISTVIEWEXTRA_SHOWBORDERADJUST_OFFSET UNITYSDK_OFFSET(0xC799190)
#define RPG_CLIENT_ROGUELOOPLISTVIEWEXTRA_UPDATE_OFFSET UNITYSDK_OFFSET(0xC798A80)
#define RPG_CLIENT_ROGUELOOPLISTVIEWEXTRA__CTOR_OFFSET UNITYSDK_OFFSET(0xC799310)
#define RPG_CLIENT_ROGUELOOPLISTVIEWEXTRA__UPDATEBORDERADJUSTPROCESS_OFFSET UNITYSDK_OFFSET(0xC798B70)
#define RPG_CLIENT_ROGUELOOPLISTVIEWEXTRA__UPDATEITEMANIMSTATE_OFFSET UNITYSDK_OFFSET(0xC798DC0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueLoopListViewExtra_TypeDefinitionIndex = 68077;

	class RogueLoopListViewExtra : public ::UnityEngine::MonoBehaviour
	{
	public:
		::SuperScrollView::LoopListView2* mLoopListView; // 0x18
		::System::Single mItemDistance; // 0x20
		::System::Int32 mItemSnapAnimationLayer; // 0x24
		::System::String* mItemSnapAnimationName; // 0x28
		::UnityEngine::UI::ScrollRect* ScrollRectCmpt; // 0x30
		::System::Single BorderDefaultVelocity; // 0x38
		::System::Single BorderAdjustAcceleration; // 0x3C
		::System::Single BorderAdjustFinishThreshold; // 0x40
		::System::Single BorderRecoverVelocity; // 0x44
		::System::Int32 _BorderAdjustSnapTargetIndex; // 0x48
		::System::Boolean _IsInBorderAdjustProcess; // 0x4C
		::System::Boolean _IsBorderAdjustDirUp; // 0x4D
		::System::Single _CurBorderVelocity; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Animation*>* _CachedAnimation; // 0x58
		::System::Collections::Generic::HashSet_1<::System::Int32>* _EmptyItemIndexSet; // 0x60
		::XLua::LuaTable* _DragCallbackLuaTable; // 0x68
		::System::Action_2<::XLua::LuaTable*, ::System::Single>* _OnDragStartCallback; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUELOOPLISTVIEWEXTRA__CTOR_OFFSET))(this);
		}

		::System::Single get_ItemScaleDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUELOOPLISTVIEWEXTRA_GET_ITEMSCALEDISTANCE_OFFSET))(this);
		}

		::System::Void set_ItemScaleDistance(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUELOOPLISTVIEWEXTRA_SET_ITEMSCALEDISTANCE_OFFSET))(this, a1);
		}

		::System::Int32 get_ItemSnapAnimationLayer()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUELOOPLISTVIEWEXTRA_GET_ITEMSNAPANIMATIONLAYER_OFFSET))(this);
		}

		::System::Void set_ItemSnapAnimationLayer(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUELOOPLISTVIEWEXTRA_SET_ITEMSNAPANIMATIONLAYER_OFFSET))(this, a1);
		}

		::System::String* get_ItemSnapAnimationName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUELOOPLISTVIEWEXTRA_GET_ITEMSNAPANIMATIONNAME_OFFSET))(this);
		}

		::System::Void set_ItemSnapAnimationName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUELOOPLISTVIEWEXTRA_SET_ITEMSNAPANIMATIONNAME_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 get_ScrollContentAnchoredPos()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUELOOPLISTVIEWEXTRA_GET_SCROLLCONTENTANCHOREDPOS_OFFSET))(this);
		}

		::System::Void set_ScrollContentAnchoredPos(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUELOOPLISTVIEWEXTRA_SET_SCROLLCONTENTANCHOREDPOS_OFFSET))(this, a1);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUELOOPLISTVIEWEXTRA_ONDESTROY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUELOOPLISTVIEWEXTRA_UPDATE_OFFSET))(this);
		}

		::System::Void _UpdateBorderAdjustProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUELOOPLISTVIEWEXTRA__UPDATEBORDERADJUSTPROCESS_OFFSET))(this);
		}

		::System::Void _UpdateItemAnimState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUELOOPLISTVIEWEXTRA__UPDATEITEMANIMSTATE_OFFSET))(this);
		}

		::System::Void ShowBorderAdjust(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUELOOPLISTVIEWEXTRA_SHOWBORDERADJUST_OFFSET))(this, a1);
		}

		::System::Void RegisterDragStartCallback(::XLua::LuaTable* a1, ::System::Action_2<::XLua::LuaTable*, ::System::Single>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::System::Action_2<::XLua::LuaTable*, ::System::Single>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUELOOPLISTVIEWEXTRA_REGISTERDRAGSTARTCALLBACK_OFFSET))(this, a1, a2);
		}

		::System::Void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUELOOPLISTVIEWEXTRA_ONBEGINDRAG_OFFSET))(this, a1);
		}
	};
}
