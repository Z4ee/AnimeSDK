#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DateTimePro.h"
#include "unitysdk/System/TimeSpan.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { template <typename T> class Action_1; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_MONOREMAINTIMEREVENT_CLEAR_OFFSET UNITYSDK_OFFSET(0xD85C7E0)
#define RPG_CLIENT_MONOREMAINTIMEREVENT_FORCEUPDATETIME_OFFSET UNITYSDK_OFFSET(0xD85C790)
#define RPG_CLIENT_MONOREMAINTIMEREVENT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD85C5F0)
#define RPG_CLIENT_MONOREMAINTIMEREVENT_SETTARGETTIMEBYTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xD85C6B0)
#define RPG_CLIENT_MONOREMAINTIMEREVENT_SETTARGETTIME_OFFSET UNITYSDK_OFFSET(0xD85C640)
#define RPG_CLIENT_MONOREMAINTIMEREVENT_UPDATE_OFFSET UNITYSDK_OFFSET(0xD85C260)
#define RPG_CLIENT_MONOREMAINTIMEREVENT__CTOR_OFFSET UNITYSDK_OFFSET(0xD85C8C0)
#define RPG_CLIENT_MONOREMAINTIMEREVENT__ONREMAINTIMEEXPIRED_OFFSET UNITYSDK_OFFSET(0xD85C880)
#define RPG_CLIENT_MONOREMAINTIMEREVENT__ONREMAINTIMEUPDATED_OFFSET UNITYSDK_OFFSET(0xD85C830)
#define RPG_CLIENT_MONOREMAINTIMEREVENT__UPDATETIME_OFFSET UNITYSDK_OFFSET(0xD85C2B0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoRemainTimerEvent_TypeDefinitionIndex = 72523;

	class MonoRemainTimerEvent : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::DateTimePro _TargetTime; // 0x18
		::XLua::LuaTable* _LuaTable; // 0x20
		::System::Action_1<::XLua::LuaTable*>* _TimeOutCallBack; // 0x28
		::System::Boolean _IsUpdating; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOREMAINTIMEREVENT__CTOR_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOREMAINTIMEREVENT_UPDATE_OFFSET))(this);
		}

		::System::Void _UpdateTime()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOREMAINTIMEREVENT__UPDATETIME_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOREMAINTIMEREVENT_ONDESTROY_OFFSET))(this);
		}

		::System::Void SetTargetTime(::RPG::Client::DateTimePro a1, ::System::Action_1<::XLua::LuaTable*>* a2, ::XLua::LuaTable* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DateTimePro, ::System::Action_1<::XLua::LuaTable*>*, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOREMAINTIMEREVENT_SETTARGETTIME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetTargetTimeByTimeStamp(::System::UInt32 a1, ::System::Action_1<::XLua::LuaTable*>* a2, ::XLua::LuaTable* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Action_1<::XLua::LuaTable*>*, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOREMAINTIMEREVENT_SETTARGETTIMEBYTIMESTAMP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ForceUpdateTime()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOREMAINTIMEREVENT_FORCEUPDATETIME_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOREMAINTIMEREVENT_CLEAR_OFFSET))(this);
		}

		::System::Void _OnRemainTimeUpdated(::System::TimeSpan a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOREMAINTIMEREVENT__ONREMAINTIMEUPDATED_OFFSET))(this, a1);
		}

		::System::Void _OnRemainTimeExpired()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOREMAINTIMEREVENT__ONREMAINTIMEEXPIRED_OFFSET))(this);
		}
	};
}
