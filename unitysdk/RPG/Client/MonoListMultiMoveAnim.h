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

#define RPG_CLIENT_MONOLISTMULTIMOVEANIM_AWAKE_OFFSET UNITYSDK_OFFSET(0x1ACEE4A0)
#define RPG_CLIENT_MONOLISTMULTIMOVEANIM_EXECUTEMOVE_OFFSET UNITYSDK_OFFSET(0x1ACEEF00)
#define RPG_CLIENT_MONOLISTMULTIMOVEANIM_INIT_OFFSET UNITYSDK_OFFSET(0x1ACEE770)
#define RPG_CLIENT_MONOLISTMULTIMOVEANIM_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1ACEE620)
#define RPG_CLIENT_MONOLISTMULTIMOVEANIM_STANDBY_OFFSET UNITYSDK_OFFSET(0x1ACEE7E0)
#define RPG_CLIENT_MONOLISTMULTIMOVEANIM__ADJUSTSCROLLRECTPOSITION_OFFSET UNITYSDK_OFFSET(0x1ACEEC90)
#define RPG_CLIENT_MONOLISTMULTIMOVEANIM__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACEF910)
#define RPG_CLIENT_MONOLISTMULTIMOVEANIM__GETSHOWINGINDEXBYTARGETINDEXFORFOCUS_OFFSET UNITYSDK_OFFSET(0x1ACEF310)
#define RPG_CLIENT_MONOLISTMULTIMOVEANIM__GETSHOWINGINDEXBYTARGETINDEX_OFFSET UNITYSDK_OFFSET(0x1ACEF700)
#define RPG_CLIENT_MONOLISTMULTIMOVEANIM__MOVEFOCUSITEM_OFFSET UNITYSDK_OFFSET(0x1ACEF380)
#define RPG_CLIENT_MONOLISTMULTIMOVEANIM__MOVEITEMIMMEDIATE_OFFSET UNITYSDK_OFFSET(0x1ACEEE10)
#define RPG_CLIENT_MONOLISTMULTIMOVEANIM__MOVEITEM_OFFSET UNITYSDK_OFFSET(0x1ACEF770)
#define RPG_CLIENT_MONOLISTMULTIMOVEANIM__RECORDPOSITIONS_OFFSET UNITYSDK_OFFSET(0x1ACEEA80)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoListMultiMoveAnim_TypeDefinitionIndex = 72507;

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

		::System::Void Init(::XLua::LuaTable* a1, ::System::Func_3<::XLua::LuaTable*, ::SuperScrollView::LoopListViewItem2*, ::System::Int32>* a2, ::System::Func_3<::XLua::LuaTable*, ::System::Int32, ::System::Boolean>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::System::Func_3<::XLua::LuaTable*, ::SuperScrollView::LoopListViewItem2*, ::System::Int32>*, ::System::Func_3<::XLua::LuaTable*, ::System::Int32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOLISTMULTIMOVEANIM_INIT_OFFSET))(this, a1, a2, a3);
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

		::System::Void _MoveItem(::System::Int32 a1, ::System::Int32 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOLISTMULTIMOVEANIM__MOVEITEM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _MoveItemImmediate(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOLISTMULTIMOVEANIM__MOVEITEMIMMEDIATE_OFFSET))(this, a1, a2);
		}

		::System::Void _MoveFocusItem(::System::Int32 a1, ::System::Int32 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOLISTMULTIMOVEANIM__MOVEFOCUSITEM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _AdjustScrollRectPosition(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOLISTMULTIMOVEANIM__ADJUSTSCROLLRECTPOSITION_OFFSET))(this, a1);
		}

		::System::Int32 _GetShowingIndexByTargetIndexForFocus(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOLISTMULTIMOVEANIM__GETSHOWINGINDEXBYTARGETINDEXFORFOCUS_OFFSET))(this, a1);
		}

		::System::Int32 _GetShowingIndexByTargetIndex(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOLISTMULTIMOVEANIM__GETSHOWINGINDEXBYTARGETINDEX_OFFSET))(this, a1);
		}
	};
}
