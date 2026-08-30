#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { template <typename T1, typename T2> class Action_2; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_MONOTIMER_CLEANTIMER_OFFSET UNITYSDK_OFFSET(0x1C288560)
#define RPG_CLIENT_MONOTIMER_GET_INTERVAL_OFFSET UNITYSDK_OFFSET(0x1C2887C0)
#define RPG_CLIENT_MONOTIMER_GET_ISPAUSE_OFFSET UNITYSDK_OFFSET(0x1C288810)
#define RPG_CLIENT_MONOTIMER_RESET_OFFSET UNITYSDK_OFFSET(0x1C288510)
#define RPG_CLIENT_MONOTIMER_SETTIMER_OFFSET UNITYSDK_OFFSET(0x1C2883C0)
#define RPG_CLIENT_MONOTIMER_SET_INTERVAL_OFFSET UNITYSDK_OFFSET(0x1C2884B0)
#define RPG_CLIENT_MONOTIMER_SET_ISPAUSE_OFFSET UNITYSDK_OFFSET(0x1C288820)
#define RPG_CLIENT_MONOTIMER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1C2885D0)
#define RPG_CLIENT_MONOTIMER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C288830)
#define RPG_CLIENT_MONOTIMER__SHOULDTICK_OFFSET UNITYSDK_OFFSET(0x1C288760)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoTimer_TypeDefinitionIndex = 72535;

	class MonoTimer : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean _IsPause_k__BackingField; // 0x18
		::System::Action_2<::XLua::LuaTable*, ::System::Int32>* _TimerCallback; // 0x20
		::XLua::LuaTable* _LuaSelf; // 0x28
		::System::Single _Interval; // 0x30
		::System::Single _CurrentTime; // 0x34
		::System::Int32 _Count; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTIMER__CTOR_OFFSET))(this);
		}

		::System::Void SetTimer(::System::Action_2<::XLua::LuaTable*, ::System::Int32>* a1, ::XLua::LuaTable* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::XLua::LuaTable*, ::System::Int32>*, ::XLua::LuaTable*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTIMER_SETTIMER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CleanTimer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTIMER_CLEANTIMER_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTIMER_RESET_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTIMER_UPDATE_OFFSET))(this);
		}

		::System::Boolean _ShouldTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTIMER__SHOULDTICK_OFFSET))(this);
		}

		::System::Single get_Interval()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTIMER_GET_INTERVAL_OFFSET))(this);
		}

		::System::Void set_Interval(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTIMER_SET_INTERVAL_OFFSET))(this, a1);
		}

		::System::Boolean get_IsPause()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTIMER_GET_ISPAUSE_OFFSET))(this);
		}

		::System::Void set_IsPause(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTIMER_SET_ISPAUSE_OFFSET))(this, a1);
		}
	};
}
