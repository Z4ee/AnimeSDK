#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DateTimePro.h"
#include "unitysdk/RPG/Client/MonoRemainTimer_TimeMode.h"
#include "unitysdk/System/TimeSpan.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Transform; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_MONOREMAINTIMER_AWAKE_OFFSET UNITYSDK_OFFSET(0xC13DDD0)
#define RPG_CLIENT_MONOREMAINTIMER_CLEAR_OFFSET UNITYSDK_OFFSET(0xC13E8B0)
#define RPG_CLIENT_MONOREMAINTIMER_FORCEUPDATETIME_OFFSET UNITYSDK_OFFSET(0xC13DBB0)
#define RPG_CLIENT_MONOREMAINTIMER_INITTRANSFORM_OFFSET UNITYSDK_OFFSET(0xC13C6A0)
#define RPG_CLIENT_MONOREMAINTIMER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xC13E860)
#define RPG_CLIENT_MONOREMAINTIMER_SETREAMINTIMEWITHTIMEMODE_OFFSET UNITYSDK_OFFSET(0xC13CB50)
#define RPG_CLIENT_MONOREMAINTIMER_SETREMAINTIMEINSECONDSBYFORMAT_OFFSET UNITYSDK_OFFSET(0xC13CFF0)
#define RPG_CLIENT_MONOREMAINTIMER_SETREMAINTIMEINSECONDS_OFFSET UNITYSDK_OFFSET(0xC13C610)
#define RPG_CLIENT_MONOREMAINTIMER_SETREMAINTIME_OFFSET UNITYSDK_OFFSET(0xC13DE80)
#define RPG_CLIENT_MONOREMAINTIMER_SETTARGETTIMEBYTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xC13DAC0)
#define RPG_CLIENT_MONOREMAINTIMER_SETTARGETTIME_OFFSET UNITYSDK_OFFSET(0xC13DA20)
#define RPG_CLIENT_MONOREMAINTIMER_SETTRANSFORMACTIVEBYTIMEMODE_OFFSET UNITYSDK_OFFSET(0xC13D700)
#define RPG_CLIENT_MONOREMAINTIMER_UPDATE_OFFSET UNITYSDK_OFFSET(0xC13DE30)
#define RPG_CLIENT_MONOREMAINTIMER__CTOR_OFFSET UNITYSDK_OFFSET(0xC13E900)
#define RPG_CLIENT_MONOREMAINTIMER__UPDATETIME_OFFSET UNITYSDK_OFFSET(0xC13DC00)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoRemainTimer_TypeDefinitionIndex = 67828;

	class MonoRemainTimer : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::DateTimePro _targetTime; // 0x18
		::XLua::LuaTable* _luaTable; // 0x20
		::System::Action_1<::XLua::LuaTable*>* _timeOutCallBack; // 0x28
		::System::Boolean _isUpdating; // 0x30
		::System::Int32 _FormatNum; // 0x34
		::RPG::Client::MonoRemainTimer_TimeMode _TimeMode; // 0x38
		::System::Boolean _KeepFullDigits; // 0x3C
		::System::Boolean _IsTransformInited; // 0x3D
		::UnityEngine::Transform* _Day; // 0x40
		::UnityEngine::Transform* _Hour; // 0x48
		::UnityEngine::Transform* _Minute; // 0x50
		::UnityEngine::Transform* _Second; // 0x58
		::UnityEngine::Transform* _DayText; // 0x60
		::UnityEngine::Transform* _HourText; // 0x68
		::UnityEngine::Transform* _MinuteText; // 0x70
		::UnityEngine::Transform* _SecondText; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOREMAINTIMER__CTOR_OFFSET))(this);
		}

		::System::Void SetRemainTimeInSeconds(::System::Double a1, ::System::Int32 a2, ::RPG::Client::MonoRemainTimer_TimeMode a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double, ::System::Int32, ::RPG::Client::MonoRemainTimer_TimeMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOREMAINTIMER_SETREMAINTIMEINSECONDS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetRemainTimeInSecondsByFormat(::System::Double a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOREMAINTIMER_SETREMAINTIMEINSECONDSBYFORMAT_OFFSET))(this, a1, a2);
		}

		::System::Void SetTargetTime(::RPG::Client::DateTimePro a1, ::System::Action_1<::XLua::LuaTable*>* a2, ::XLua::LuaTable* a3, ::System::Int32 a4, ::RPG::Client::MonoRemainTimer_TimeMode a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DateTimePro, ::System::Action_1<::XLua::LuaTable*>*, ::XLua::LuaTable*, ::System::Int32, ::RPG::Client::MonoRemainTimer_TimeMode, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOREMAINTIMER_SETTARGETTIME_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void SetTargetTimeByTimeStamp(::System::UInt32 a1, ::System::Action_1<::XLua::LuaTable*>* a2, ::XLua::LuaTable* a3, ::System::Int32 a4, ::RPG::Client::MonoRemainTimer_TimeMode a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Action_1<::XLua::LuaTable*>*, ::XLua::LuaTable*, ::System::Int32, ::RPG::Client::MonoRemainTimer_TimeMode, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOREMAINTIMER_SETTARGETTIMEBYTIMESTAMP_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void ForceUpdateTime()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOREMAINTIMER_FORCEUPDATETIME_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOREMAINTIMER_AWAKE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOREMAINTIMER_UPDATE_OFFSET))(this);
		}

		::System::Void _UpdateTime()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOREMAINTIMER__UPDATETIME_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOREMAINTIMER_ONDESTROY_OFFSET))(this);
		}

		::System::Void InitTransform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOREMAINTIMER_INITTRANSFORM_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOREMAINTIMER_CLEAR_OFFSET))(this);
		}

		::System::Void SetReaminTimeWithTimeMode(::System::TimeSpan a1, ::RPG::Client::MonoRemainTimer_TimeMode a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::TimeSpan, ::RPG::Client::MonoRemainTimer_TimeMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOREMAINTIMER_SETREAMINTIMEWITHTIMEMODE_OFFSET))(this, a1, a2);
		}

		::System::Void SetRemainTime(::System::TimeSpan a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::TimeSpan, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOREMAINTIMER_SETREMAINTIME_OFFSET))(this, a1, a2);
		}

		::System::Void SetTransformActiveByTimeMode(::RPG::Client::MonoRemainTimer_TimeMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoRemainTimer_TimeMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOREMAINTIMER_SETTRANSFORMACTIVEBYTIMEMODE_OFFSET))(this, a1);
		}
	};
}
