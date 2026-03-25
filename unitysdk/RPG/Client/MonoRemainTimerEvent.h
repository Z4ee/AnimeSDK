#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DateTimePro.h"
#include "unitysdk/System/TimeSpan.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { template <typename T> class Action_1; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_MONOREMAINTIMEREVENT_CLEAR_OFFSET UNITYSDK_OFFSET(0x9D2DE60)
#define RPG_CLIENT_MONOREMAINTIMEREVENT_FORCEUPDATETIME_OFFSET UNITYSDK_OFFSET(0x9D2DE10)
#define RPG_CLIENT_MONOREMAINTIMEREVENT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x9D2DC70)
#define RPG_CLIENT_MONOREMAINTIMEREVENT_SETTARGETTIMEBYTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x9D2DD30)
#define RPG_CLIENT_MONOREMAINTIMEREVENT_SETTARGETTIME_OFFSET UNITYSDK_OFFSET(0x9D2DCC0)
#define RPG_CLIENT_MONOREMAINTIMEREVENT_UPDATE_OFFSET UNITYSDK_OFFSET(0x9D2DA20)
#define RPG_CLIENT_MONOREMAINTIMEREVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x9D2DF40)
#define RPG_CLIENT_MONOREMAINTIMEREVENT__ONREMAINTIMEEXPIRED_OFFSET UNITYSDK_OFFSET(0x9D2DF00)
#define RPG_CLIENT_MONOREMAINTIMEREVENT__ONREMAINTIMEUPDATED_OFFSET UNITYSDK_OFFSET(0x9D2DEB0)
#define RPG_CLIENT_MONOREMAINTIMEREVENT__UPDATETIME_OFFSET UNITYSDK_OFFSET(0x9D2DA70)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoRemainTimerEvent_TypeDefinitionIndex = 59495;

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

		::System::Void SetTargetTime(::RPG::Client::DateTimePro targetTime, ::System::Action_1<::XLua::LuaTable*>* timeOutCallback, ::XLua::LuaTable* luaTable)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DateTimePro, ::System::Action_1<::XLua::LuaTable*>*, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOREMAINTIMEREVENT_SETTARGETTIME_OFFSET))(this, targetTime, timeOutCallback, luaTable);
		}

		::System::Void SetTargetTimeByTimeStamp(::System::UInt32 targetTimeStamp, ::System::Action_1<::XLua::LuaTable*>* timeOutCallback, ::XLua::LuaTable* luaTable)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Action_1<::XLua::LuaTable*>*, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOREMAINTIMEREVENT_SETTARGETTIMEBYTIMESTAMP_OFFSET))(this, targetTimeStamp, timeOutCallback, luaTable);
		}

		::System::Void ForceUpdateTime()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOREMAINTIMEREVENT_FORCEUPDATETIME_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOREMAINTIMEREVENT_CLEAR_OFFSET))(this);
		}

		::System::Void _OnRemainTimeUpdated(::System::TimeSpan remainTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOREMAINTIMEREVENT__ONREMAINTIMEUPDATED_OFFSET))(this, remainTime);
		}

		::System::Void _OnRemainTimeExpired()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOREMAINTIMEREVENT__ONREMAINTIMEEXPIRED_OFFSET))(this);
		}
	};
}
