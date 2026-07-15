#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace SuperScrollView { class LoopListView2; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::UI { class ScrollRect; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_MONOLOOPLISTVIEWMOVEHELPER_MOVEPANELTOITEMINDEX_OFFSET UNITYSDK_OFFSET(0x18C5AF50)
#define RPG_CLIENT_MONOLOOPLISTVIEWMOVEHELPER_MOVETOBOTTOM_OFFSET UNITYSDK_OFFSET(0x18C5B190)
#define RPG_CLIENT_MONOLOOPLISTVIEWMOVEHELPER_UPDATE_OFFSET UNITYSDK_OFFSET(0x18C5AD00)
#define RPG_CLIENT_MONOLOOPLISTVIEWMOVEHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0x18C5B260)
#define RPG_CLIENT_MONOLOOPLISTVIEWMOVEHELPER__ENDPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x18C5AEE0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoLoopListViewMoveHelper_TypeDefinitionIndex = 69301;

	class MonoLoopListViewMoveHelper : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Action_1<::XLua::LuaTable*>* _OnPerformFinished; // 0x18
		::XLua::LuaTable* _CallbackOwner; // 0x20
		::System::Single _CurTime; // 0x28
		::System::Boolean _PauseTick; // 0x2C
		::UnityEngine::Vector3 _StartPosition; // 0x30
		::UnityEngine::Vector3 _EndPosition; // 0x3C
		::SuperScrollView::LoopListView2* LLV2Ref; // 0x48
		::UnityEngine::UI::ScrollRect* ScrollRectRef; // 0x50
		::System::Single TotalTime; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOLOOPLISTVIEWMOVEHELPER__CTOR_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOLOOPLISTVIEWMOVEHELPER_UPDATE_OFFSET))(this);
		}

		::System::Void _EndPerformance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOLOOPLISTVIEWMOVEHELPER__ENDPERFORMANCE_OFFSET))(this);
		}

		::System::Void MovePanelToItemIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOLOOPLISTVIEWMOVEHELPER_MOVEPANELTOITEMINDEX_OFFSET))(this, a1);
		}

		::System::Void MoveToBottom(::System::Action_1<::XLua::LuaTable*>* a1, ::XLua::LuaTable* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::XLua::LuaTable*>*, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOLOOPLISTVIEWMOVEHELPER_MOVETOBOTTOM_OFFSET))(this, a1, a2);
		}
	};
}
