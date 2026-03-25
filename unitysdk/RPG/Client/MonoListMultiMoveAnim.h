#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace SuperScrollView { class LoopListView2; }
namespace SuperScrollView { class LoopListViewItem2; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI { class ScrollRect; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_MONOLISTMULTIMOVEANIM_AWAKE_OFFSET UNITYSDK_OFFSET(0x9D154B0)
#define RPG_CLIENT_MONOLISTMULTIMOVEANIM_EXECUTEMOVE_OFFSET UNITYSDK_OFFSET(0x9D15F30)
#define RPG_CLIENT_MONOLISTMULTIMOVEANIM_INIT_OFFSET UNITYSDK_OFFSET(0x9D15790)
#define RPG_CLIENT_MONOLISTMULTIMOVEANIM_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x9D15630)
#define RPG_CLIENT_MONOLISTMULTIMOVEANIM_STANDBY_OFFSET UNITYSDK_OFFSET(0x9D15800)
#define RPG_CLIENT_MONOLISTMULTIMOVEANIM__ADJUSTSCROLLRECTPOSITION_OFFSET UNITYSDK_OFFSET(0x9D15C70)
#define RPG_CLIENT_MONOLISTMULTIMOVEANIM__CTOR_OFFSET UNITYSDK_OFFSET(0x9D16A60)
#define RPG_CLIENT_MONOLISTMULTIMOVEANIM__GETSHOWINGINDEXBYTARGETINDEXFORFOCUS_OFFSET UNITYSDK_OFFSET(0x9D16380)
#define RPG_CLIENT_MONOLISTMULTIMOVEANIM__GETSHOWINGINDEXBYTARGETINDEX_OFFSET UNITYSDK_OFFSET(0x9D16800)
#define RPG_CLIENT_MONOLISTMULTIMOVEANIM__MOVEFOCUSITEM_OFFSET UNITYSDK_OFFSET(0x9D163F0)
#define RPG_CLIENT_MONOLISTMULTIMOVEANIM__MOVEITEMIMMEDIATE_OFFSET UNITYSDK_OFFSET(0x9D15DE0)
#define RPG_CLIENT_MONOLISTMULTIMOVEANIM__MOVEITEM_OFFSET UNITYSDK_OFFSET(0x9D16870)
#define RPG_CLIENT_MONOLISTMULTIMOVEANIM__RECORDPOSITIONS_OFFSET UNITYSDK_OFFSET(0x9D15A90)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoListMultiMoveAnim_TypeDefinitionIndex = 59480;

	class MonoListMultiMoveAnim : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::Single _ZoomDuration; // 0x0
		// static const ::System::Single _ZoomScale; // 0x0
		::System::Single MoveDuration; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* _Positions; // 0x20
		::SuperScrollView::LoopListView2* _ListView; // 0x28
		::UnityEngine::UI::ScrollRect* _ScrollRect; // 0x30
		::XLua::LuaTable* _LuaTable; // 0x38
		::System::Func_3<::XLua::LuaTable*, ::SuperScrollView::LoopListViewItem2*, ::System::Int32>* _GetIndexByItem; // 0x40
		::System::Func_3<::XLua::LuaTable*, ::System::Int32, ::System::Boolean>* _IsFocusItem; // 0x48
		::System::Boolean _PosRecorded; // 0x50
		::System::Int32 _FocusItemTargetIndex; // 0x54
		::System::Int32 _FocusItemCurrentShowingIndex; // 0x58
		::System::Int32 _ShowableItemCount; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOLISTMULTIMOVEANIM__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOLISTMULTIMOVEANIM_AWAKE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOLISTMULTIMOVEANIM_ONDISABLE_OFFSET))(this);
		}

		::System::Void Init(::XLua::LuaTable* luaTable, ::System::Func_3<::XLua::LuaTable*, ::SuperScrollView::LoopListViewItem2*, ::System::Int32>* getIndexByItem, ::System::Func_3<::XLua::LuaTable*, ::System::Int32, ::System::Boolean>* isFocusItem)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::System::Func_3<::XLua::LuaTable*, ::SuperScrollView::LoopListViewItem2*, ::System::Int32>*, ::System::Func_3<::XLua::LuaTable*, ::System::Int32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOLISTMULTIMOVEANIM_INIT_OFFSET))(this, luaTable, getIndexByItem, isFocusItem);
		}

		::System::Void StandBy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOLISTMULTIMOVEANIM_STANDBY_OFFSET))(this);
		}

		::System::Void ExecuteMove()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOLISTMULTIMOVEANIM_EXECUTEMOVE_OFFSET))(this);
		}

		::System::Void _RecordPositions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOLISTMULTIMOVEANIM__RECORDPOSITIONS_OFFSET))(this);
		}

		::System::Void _MoveItem(::System::Int32 from, ::System::Int32 to, ::System::Single moveDuration)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOLISTMULTIMOVEANIM__MOVEITEM_OFFSET))(this, from, to, moveDuration);
		}

		::System::Void _MoveItemImmediate(::System::Int32 from, ::System::Int32 to)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOLISTMULTIMOVEANIM__MOVEITEMIMMEDIATE_OFFSET))(this, from, to);
		}

		::System::Void _MoveFocusItem(::System::Int32 from, ::System::Int32 to, ::System::Single moveDuration)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOLISTMULTIMOVEANIM__MOVEFOCUSITEM_OFFSET))(this, from, to, moveDuration);
		}

		::System::Void _AdjustScrollRectPosition(::System::Int32 targetIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOLISTMULTIMOVEANIM__ADJUSTSCROLLRECTPOSITION_OFFSET))(this, targetIndex);
		}

		::System::Int32 _GetShowingIndexByTargetIndexForFocus(::System::Int32 targetIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOLISTMULTIMOVEANIM__GETSHOWINGINDEXBYTARGETINDEXFORFOCUS_OFFSET))(this, targetIndex);
		}

		::System::Int32 _GetShowingIndexByTargetIndex(::System::Int32 targetIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOLISTMULTIMOVEANIM__GETSHOWINGINDEXBYTARGETINDEX_OFFSET))(this, targetIndex);
		}
	};
}
