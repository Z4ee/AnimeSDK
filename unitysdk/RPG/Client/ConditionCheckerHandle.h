#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_493;
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_CONDITIONCHECKERHANDLE_CHECK_OFFSET UNITYSDK_OFFSET(0x941ACC0)
#define RPG_CLIENT_CONDITIONCHECKERHANDLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x941ADF0)
#define RPG_CLIENT_CONDITIONCHECKERHANDLE_GET_ISMUTE_OFFSET UNITYSDK_OFFSET(0x941A5B0)
#define RPG_CLIENT_CONDITIONCHECKERHANDLE_GET_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x941A590)
#define RPG_CLIENT_CONDITIONCHECKERHANDLE_GET_TICKINTERVALSECONDS_OFFSET UNITYSDK_OFFSET(0x941A570)
#define RPG_CLIENT_CONDITIONCHECKERHANDLE_INIT_OFFSET UNITYSDK_OFFSET(0x941A5E0)
#define RPG_CLIENT_CONDITIONCHECKERHANDLE_MANUALUPDATE_OFFSET UNITYSDK_OFFSET(0x941ADA0)
#define RPG_CLIENT_CONDITIONCHECKERHANDLE_SET_ISMUTE_OFFSET UNITYSDK_OFFSET(0x941A5C0)
#define RPG_CLIENT_CONDITIONCHECKERHANDLE_SET_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x941A5A0)
#define RPG_CLIENT_CONDITIONCHECKERHANDLE_SET_TICKINTERVALSECONDS_OFFSET UNITYSDK_OFFSET(0x941A580)
#define RPG_CLIENT_CONDITIONCHECKERHANDLE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x941A800)
#define RPG_CLIENT_CONDITIONCHECKERHANDLE__ADDRSPHANDLERS_OFFSET UNITYSDK_OFFSET(0x941AA00)
#define RPG_CLIENT_CONDITIONCHECKERHANDLE__ADDTICK_OFFSET UNITYSDK_OFFSET(0x941A710)
#define RPG_CLIENT_CONDITIONCHECKERHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x941A5D0)
#define RPG_CLIENT_CONDITIONCHECKERHANDLE__ONCMDRSP_OFFSET UNITYSDK_OFFSET(0x941B080)
#define RPG_CLIENT_CONDITIONCHECKERHANDLE__ONNOTIFY_OFFSET UNITYSDK_OFFSET(0x941B030)
#define RPG_CLIENT_CONDITIONCHECKERHANDLE__ONTICK_OFFSET UNITYSDK_OFFSET(0x941AFE0)
#define RPG_CLIENT_CONDITIONCHECKERHANDLE__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0x941A650)
#define RPG_CLIENT_CONDITIONCHECKERHANDLE__REMOVEHANDLERS_OFFSET UNITYSDK_OFFSET(0x941AF60)
#define RPG_CLIENT_CONDITIONCHECKERHANDLE__REMOVETICK_OFFSET UNITYSDK_OFFSET(0x941AEA0)
#define RPG_CLIENT_CONDITIONCHECKERHANDLE__UPDATE_OFFSET UNITYSDK_OFFSET(0x941ABB0)
#define RPG_CLIENT_CONDITIONCHECKERHANDLE___PREPAREDATA_B__22_0_OFFSET UNITYSDK_OFFSET(0x941B0E0)

namespace RPG::Client
{
	inline static constexpr unsigned int ConditionCheckerHandle_TypeDefinitionIndex = 48518;

	class ConditionCheckerHandle : public ::System::Object
	{
	public:
		::System::Action_1<::System::Boolean>* _OnUpdate_k__BackingField; // 0x10
		::Class_0_16E4307DCC419505_493* _Checker; // 0x18
		::System::Nullable_1<::System::Int32> _TimerID; // 0x20
		::System::Single _TickIntervalSeconds_k__BackingField; // 0x28
		::System::Boolean _IsDisposed; // 0x2C
		::System::Boolean _IsReady; // 0x2D
		::System::Boolean _IsMute_k__BackingField; // 0x2E

		::System::Void _ctor(::Class_0_16E4307DCC419505_493* checker)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_493*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKERHANDLE__CTOR_OFFSET))(this, checker);
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

		::System::Void __PrepareData_b__22_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKERHANDLE___PREPAREDATA_B__22_0_OFFSET))(this);
		}
	};
}
