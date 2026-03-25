#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DateTimePro.h"
#include "unitysdk/RPG/Client/MonoRemainTimer_TimeMode.h"
#include "unitysdk/System/TimeSpan.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Transform; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_MONOREMAINTIMER_AWAKE_OFFSET UNITYSDK_OFFSET(0x9D2CEC0)
#define RPG_CLIENT_MONOREMAINTIMER_CLEAR_OFFSET UNITYSDK_OFFSET(0x9D2D9C0)
#define RPG_CLIENT_MONOREMAINTIMER_FORCEUPDATETIME_OFFSET UNITYSDK_OFFSET(0x9D2CCA0)
#define RPG_CLIENT_MONOREMAINTIMER_INITTRANSFORM_OFFSET UNITYSDK_OFFSET(0x9D2B780)
#define RPG_CLIENT_MONOREMAINTIMER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x9D2D970)
#define RPG_CLIENT_MONOREMAINTIMER_SETREAMINTIMEWITHTIMEMODE_OFFSET UNITYSDK_OFFSET(0x9D2BC30)
#define RPG_CLIENT_MONOREMAINTIMER_SETREMAINTIMEINSECONDSBYFORMAT_OFFSET UNITYSDK_OFFSET(0x9D2C0E0)
#define RPG_CLIENT_MONOREMAINTIMER_SETREMAINTIMEINSECONDS_OFFSET UNITYSDK_OFFSET(0x9D2B6F0)
#define RPG_CLIENT_MONOREMAINTIMER_SETREMAINTIME_OFFSET UNITYSDK_OFFSET(0x9D2CF70)
#define RPG_CLIENT_MONOREMAINTIMER_SETTARGETTIMEBYTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x9D2CBB0)
#define RPG_CLIENT_MONOREMAINTIMER_SETTARGETTIME_OFFSET UNITYSDK_OFFSET(0x9D2CB10)
#define RPG_CLIENT_MONOREMAINTIMER_SETTRANSFORMACTIVEBYTIMEMODE_OFFSET UNITYSDK_OFFSET(0x9D2C7F0)
#define RPG_CLIENT_MONOREMAINTIMER_UPDATE_OFFSET UNITYSDK_OFFSET(0x9D2CF20)
#define RPG_CLIENT_MONOREMAINTIMER__CTOR_OFFSET UNITYSDK_OFFSET(0x9D2DA10)
#define RPG_CLIENT_MONOREMAINTIMER__UPDATETIME_OFFSET UNITYSDK_OFFSET(0x9D2CCF0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoRemainTimer_TypeDefinitionIndex = 59493;

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

		::System::Void SetRemainTimeInSeconds(::System::Double seconds, ::System::Int32 formatNum, ::RPG::Client::MonoRemainTimer_TimeMode timeMode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double, ::System::Int32, ::RPG::Client::MonoRemainTimer_TimeMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOREMAINTIMER_SETREMAINTIMEINSECONDS_OFFSET))(this, seconds, formatNum, timeMode);
		}

		::System::Void SetRemainTimeInSecondsByFormat(::System::Double seconds, ::System::Int32 formatNum)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOREMAINTIMER_SETREMAINTIMEINSECONDSBYFORMAT_OFFSET))(this, seconds, formatNum);
		}

		::System::Void SetTargetTime(::RPG::Client::DateTimePro targetTime, ::System::Action_1<::XLua::LuaTable*>* timeOutCallback, ::XLua::LuaTable* luaTable, ::System::Int32 formatNum, ::RPG::Client::MonoRemainTimer_TimeMode timeMode, ::System::Boolean keepFullDigits)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DateTimePro, ::System::Action_1<::XLua::LuaTable*>*, ::XLua::LuaTable*, ::System::Int32, ::RPG::Client::MonoRemainTimer_TimeMode, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOREMAINTIMER_SETTARGETTIME_OFFSET))(this, targetTime, timeOutCallback, luaTable, formatNum, timeMode, keepFullDigits);
		}

		::System::Void SetTargetTimeByTimeStamp(::System::UInt32 targetTimeStamp, ::System::Action_1<::XLua::LuaTable*>* timeOutCallback, ::XLua::LuaTable* luaTable, ::System::Int32 formatNum, ::RPG::Client::MonoRemainTimer_TimeMode timeMode, ::System::Boolean keepFullDigits)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Action_1<::XLua::LuaTable*>*, ::XLua::LuaTable*, ::System::Int32, ::RPG::Client::MonoRemainTimer_TimeMode, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOREMAINTIMER_SETTARGETTIMEBYTIMESTAMP_OFFSET))(this, targetTimeStamp, timeOutCallback, luaTable, formatNum, timeMode, keepFullDigits);
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

		::System::Void SetReaminTimeWithTimeMode(::System::TimeSpan remainTime, ::RPG::Client::MonoRemainTimer_TimeMode mode)
		{
			return ((::System::Void(*)(::PVOID, ::System::TimeSpan, ::RPG::Client::MonoRemainTimer_TimeMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOREMAINTIMER_SETREAMINTIMEWITHTIMEMODE_OFFSET))(this, remainTime, mode);
		}

		::System::Void SetRemainTime(::System::TimeSpan remainTime, ::System::Boolean keepFullDigits)
		{
			return ((::System::Void(*)(::PVOID, ::System::TimeSpan, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOREMAINTIMER_SETREMAINTIME_OFFSET))(this, remainTime, keepFullDigits);
		}

		::System::Void SetTransformActiveByTimeMode(::RPG::Client::MonoRemainTimer_TimeMode mode)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoRemainTimer_TimeMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOREMAINTIMER_SETTRANSFORMACTIVEBYTIMEMODE_OFFSET))(this, mode);
		}
	};
}
