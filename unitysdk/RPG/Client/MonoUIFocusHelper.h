#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class ScrollRect; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_MONOUIFOCUSHELPER_MOVE_OFFSET UNITYSDK_OFFSET(0x1A363630)
#define RPG_CLIENT_MONOUIFOCUSHELPER_REGISTERFINISHCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A363AA0)
#define RPG_CLIENT_MONOUIFOCUSHELPER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1A363400)
#define RPG_CLIENT_MONOUIFOCUSHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A363B00)
#define RPG_CLIENT_MONOUIFOCUSHELPER__DOMOVE_OFFSET UNITYSDK_OFFSET(0x1A3634C0)
#define RPG_CLIENT_MONOUIFOCUSHELPER__DOONFINISH_OFFSET UNITYSDK_OFFSET(0x1A3635B0)
#define RPG_CLIENT_MONOUIFOCUSHELPER__DOONSTART_OFFSET UNITYSDK_OFFSET(0x1A363A40)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoUIFocusHelper_TypeDefinitionIndex = 69330;

	class MonoUIFocusHelper : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::UI::ScrollRect* ScrollRectRef; // 0x18
		::System::Single FocusInterval; // 0x20
		::UnityEngine::RectTransform* _TargetRectTransform; // 0x28
		::System::Boolean _CanMove; // 0x30
		::UnityEngine::Vector3 _StartContentLocalPosition; // 0x34
		::UnityEngine::Vector3 _EndContentLocalPosition; // 0x40
		::System::Single _CurTime; // 0x4C
		::System::Single _TotalTime; // 0x50
		::System::Action_1<::XLua::LuaTable*>* _OnPerformFinished; // 0x58
		::XLua::LuaTable* _Table; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUIFOCUSHELPER__CTOR_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUIFOCUSHELPER_UPDATE_OFFSET))(this);
		}

		::System::Void Move(::UnityEngine::RectTransform* a1, ::UnityEngine::RectTransform* a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUIFOCUSHELPER_MOVE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RegisterFinishCallback(::System::Action_1<::XLua::LuaTable*>* a1, ::XLua::LuaTable* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::XLua::LuaTable*>*, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUIFOCUSHELPER_REGISTERFINISHCALLBACK_OFFSET))(this, a1, a2);
		}

		::System::Void _DoMove()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUIFOCUSHELPER__DOMOVE_OFFSET))(this);
		}

		::System::Void _DoOnFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUIFOCUSHELPER__DOONFINISH_OFFSET))(this);
		}

		::System::Void _DoOnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUIFOCUSHELPER__DOONSTART_OFFSET))(this);
		}
	};
}
