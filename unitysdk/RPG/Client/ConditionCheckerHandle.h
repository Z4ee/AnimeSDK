#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_572;
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_CONDITIONCHECKERHANDLE_CHECK_OFFSET UNITYSDK_OFFSET(0xA0C8D80)
#define RPG_CLIENT_CONDITIONCHECKERHANDLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA0C8EB0)
#define RPG_CLIENT_CONDITIONCHECKERHANDLE_GET_ISMUTE_OFFSET UNITYSDK_OFFSET(0xA0C8590)
#define RPG_CLIENT_CONDITIONCHECKERHANDLE_GET_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xA0C8570)
#define RPG_CLIENT_CONDITIONCHECKERHANDLE_GET_TICKINTERVALSECONDS_OFFSET UNITYSDK_OFFSET(0xA0C8550)
#define RPG_CLIENT_CONDITIONCHECKERHANDLE_INIT_OFFSET UNITYSDK_OFFSET(0xA0C85C0)
#define RPG_CLIENT_CONDITIONCHECKERHANDLE_MANUALUPDATE_OFFSET UNITYSDK_OFFSET(0xA0C8E60)
#define RPG_CLIENT_CONDITIONCHECKERHANDLE_SET_ISMUTE_OFFSET UNITYSDK_OFFSET(0xA0C85A0)
#define RPG_CLIENT_CONDITIONCHECKERHANDLE_SET_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xA0C8580)
#define RPG_CLIENT_CONDITIONCHECKERHANDLE_SET_TICKINTERVALSECONDS_OFFSET UNITYSDK_OFFSET(0xA0C8560)
#define RPG_CLIENT_CONDITIONCHECKERHANDLE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xA0C8840)
#define RPG_CLIENT_CONDITIONCHECKERHANDLE__ADDRSPHANDLERS_OFFSET UNITYSDK_OFFSET(0xA0C8A40)
#define RPG_CLIENT_CONDITIONCHECKERHANDLE__ADDTICK_OFFSET UNITYSDK_OFFSET(0xA0C8750)
#define RPG_CLIENT_CONDITIONCHECKERHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0xA0C85B0)
#define RPG_CLIENT_CONDITIONCHECKERHANDLE__ONCMDRSP_OFFSET UNITYSDK_OFFSET(0xA0C9240)
#define RPG_CLIENT_CONDITIONCHECKERHANDLE__ONCUSTOMEVENT_OFFSET UNITYSDK_OFFSET(0xA0C92A0)
#define RPG_CLIENT_CONDITIONCHECKERHANDLE__ONNOTIFY_OFFSET UNITYSDK_OFFSET(0xA0C91F0)
#define RPG_CLIENT_CONDITIONCHECKERHANDLE__ONTICK_OFFSET UNITYSDK_OFFSET(0xA0C91A0)
#define RPG_CLIENT_CONDITIONCHECKERHANDLE__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0xA0C8690)
#define RPG_CLIENT_CONDITIONCHECKERHANDLE__REMOVEHANDLERS_OFFSET UNITYSDK_OFFSET(0xA0C9120)
#define RPG_CLIENT_CONDITIONCHECKERHANDLE__REMOVETICK_OFFSET UNITYSDK_OFFSET(0xA0C8FE0)
#define RPG_CLIENT_CONDITIONCHECKERHANDLE__SUBSCRIBECUSTOMEVENT_OFFSET UNITYSDK_OFFSET(0xA0C8BF0)
#define RPG_CLIENT_CONDITIONCHECKERHANDLE__UNSUBSCRIBECUSTOMEVENT_OFFSET UNITYSDK_OFFSET(0xA0C90A0)
#define RPG_CLIENT_CONDITIONCHECKERHANDLE__UPDATE_OFFSET UNITYSDK_OFFSET(0xA0C8C70)
#define RPG_CLIENT_CONDITIONCHECKERHANDLE___PREPAREDATA_B__22_0_OFFSET UNITYSDK_OFFSET(0xA0C92F0)

namespace RPG::Client
{
	inline static constexpr unsigned int ConditionCheckerHandle_TypeDefinitionIndex = 55267;

	class ConditionCheckerHandle : public ::System::Object
	{
	public:
		::System::Action_1<::System::Boolean>* _OnUpdate_k__BackingField; // 0x10
		::Class_0_16E4307DCC419505_572* _Checker; // 0x18
		::System::Nullable_1<::System::Int32> _TimerID; // 0x20
		::System::Boolean _IsMute_k__BackingField; // 0x28
		::System::Boolean _IsReady; // 0x29
		::System::Boolean _IsDisposed; // 0x2A
		::System::Single _TickIntervalSeconds_k__BackingField; // 0x2C

		::System::Void _ctor(::Class_0_16E4307DCC419505_572* checker)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_572*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKERHANDLE__CTOR_OFFSET))(this, checker);
		}

		::System::Single get_TickIntervalSeconds()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKERHANDLE_GET_TICKINTERVALSECONDS_OFFSET))(this);
		}

		::System::Void set_TickIntervalSeconds(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKERHANDLE_SET_TICKINTERVALSECONDS_OFFSET))(this, value);
		}

		::System::Action_1<::System::Boolean>* get_OnUpdate()
		{
			return ((::System::Action_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKERHANDLE_GET_ONUPDATE_OFFSET))(this);
		}

		::System::Void set_OnUpdate(::System::Action_1<::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKERHANDLE_SET_ONUPDATE_OFFSET))(this, value);
		}

		::System::Boolean get_IsMute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKERHANDLE_GET_ISMUTE_OFFSET))(this);
		}

		::System::Void set_IsMute(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKERHANDLE_SET_ISMUTE_OFFSET))(this, value);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKERHANDLE_INIT_OFFSET))(this);
		}

		::System::Boolean Check()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKERHANDLE_CHECK_OFFSET))(this);
		}

		::System::Void ManualUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKERHANDLE_MANUALUPDATE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKERHANDLE_DISPOSE_OFFSET))(this);
		}

		::System::Void _Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKERHANDLE__UPDATE_OFFSET))(this);
		}

		::System::Void _PrepareData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKERHANDLE__PREPAREDATA_OFFSET))(this);
		}

		::System::Void _AddTick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKERHANDLE__ADDTICK_OFFSET))(this);
		}

		::System::Void _OnTick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKERHANDLE__ONTICK_OFFSET))(this);
		}

		::System::Void _RemoveTick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKERHANDLE__REMOVETICK_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKERHANDLE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _OnNotify(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKERHANDLE__ONNOTIFY_OFFSET))(this, arg);
		}

		::System::Void _AddRspHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKERHANDLE__ADDRSPHANDLERS_OFFSET))(this);
		}

		::System::Void _OnCmdRsp(::System::UInt16 cmd, ::System::Object* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKERHANDLE__ONCMDRSP_OFFSET))(this, cmd, rsp);
		}

		::System::Void _RemoveHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKERHANDLE__REMOVEHANDLERS_OFFSET))(this);
		}

		::System::Void _SubscribeCustomEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKERHANDLE__SUBSCRIBECUSTOMEVENT_OFFSET))(this);
		}

		::System::Void _OnCustomEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKERHANDLE__ONCUSTOMEVENT_OFFSET))(this);
		}

		::System::Void _UnsubscribeCustomEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKERHANDLE__UNSUBSCRIBECUSTOMEVENT_OFFSET))(this);
		}

		::System::Void __PrepareData_b__22_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKERHANDLE___PREPAREDATA_B__22_0_OFFSET))(this);
		}
	};
}
