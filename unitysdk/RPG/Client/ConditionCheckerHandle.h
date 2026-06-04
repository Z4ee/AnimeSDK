#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_594;
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_CONDITIONCHECKERHANDLE_CHECK_OFFSET UNITYSDK_OFFSET(0xB708080)
#define RPG_CLIENT_CONDITIONCHECKERHANDLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB7081B0)
#define RPG_CLIENT_CONDITIONCHECKERHANDLE_GET_ISMUTE_OFFSET UNITYSDK_OFFSET(0xB707900)
#define RPG_CLIENT_CONDITIONCHECKERHANDLE_GET_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xB7078E0)
#define RPG_CLIENT_CONDITIONCHECKERHANDLE_GET_TICKINTERVALSECONDS_OFFSET UNITYSDK_OFFSET(0xB7078C0)
#define RPG_CLIENT_CONDITIONCHECKERHANDLE_INIT_OFFSET UNITYSDK_OFFSET(0xB707930)
#define RPG_CLIENT_CONDITIONCHECKERHANDLE_MANUALUPDATE_OFFSET UNITYSDK_OFFSET(0xB708160)
#define RPG_CLIENT_CONDITIONCHECKERHANDLE_SET_ISMUTE_OFFSET UNITYSDK_OFFSET(0xB707910)
#define RPG_CLIENT_CONDITIONCHECKERHANDLE_SET_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xB7078F0)
#define RPG_CLIENT_CONDITIONCHECKERHANDLE_SET_TICKINTERVALSECONDS_OFFSET UNITYSDK_OFFSET(0xB7078D0)
#define RPG_CLIENT_CONDITIONCHECKERHANDLE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xB707B80)
#define RPG_CLIENT_CONDITIONCHECKERHANDLE__ADDRSPHANDLERS_OFFSET UNITYSDK_OFFSET(0xB707D60)
#define RPG_CLIENT_CONDITIONCHECKERHANDLE__ADDTICK_OFFSET UNITYSDK_OFFSET(0xB707A70)
#define RPG_CLIENT_CONDITIONCHECKERHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0xB707920)
#define RPG_CLIENT_CONDITIONCHECKERHANDLE__ONCMDRSP_OFFSET UNITYSDK_OFFSET(0xB708510)
#define RPG_CLIENT_CONDITIONCHECKERHANDLE__ONCUSTOMEVENT_OFFSET UNITYSDK_OFFSET(0xB708570)
#define RPG_CLIENT_CONDITIONCHECKERHANDLE__ONNOTIFY_OFFSET UNITYSDK_OFFSET(0xB7084C0)
#define RPG_CLIENT_CONDITIONCHECKERHANDLE__ONTICK_OFFSET UNITYSDK_OFFSET(0xB708470)
#define RPG_CLIENT_CONDITIONCHECKERHANDLE__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0xB7079A0)
#define RPG_CLIENT_CONDITIONCHECKERHANDLE__REMOVEHANDLERS_OFFSET UNITYSDK_OFFSET(0xB7083F0)
#define RPG_CLIENT_CONDITIONCHECKERHANDLE__REMOVETICK_OFFSET UNITYSDK_OFFSET(0xB708260)
#define RPG_CLIENT_CONDITIONCHECKERHANDLE__SUBSCRIBECUSTOMEVENT_OFFSET UNITYSDK_OFFSET(0xB707ED0)
#define RPG_CLIENT_CONDITIONCHECKERHANDLE__UNSUBSCRIBECUSTOMEVENT_OFFSET UNITYSDK_OFFSET(0xB708360)
#define RPG_CLIENT_CONDITIONCHECKERHANDLE__UPDATE_OFFSET UNITYSDK_OFFSET(0xB707F60)
#define RPG_CLIENT_CONDITIONCHECKERHANDLE___PREPAREDATA_B__22_0_OFFSET UNITYSDK_OFFSET(0xB7085C0)

namespace RPG::Client
{
	inline static constexpr unsigned int ConditionCheckerHandle_TypeDefinitionIndex = 56001;

	class ConditionCheckerHandle : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_594* _Checker; // 0x10
		::System::Action_1<::System::Boolean>* _OnUpdate_k__BackingField; // 0x18
		::System::Single _TickIntervalSeconds_k__BackingField; // 0x20
		::System::Boolean _IsReady; // 0x24
		::System::Boolean _IsDisposed; // 0x25
		::System::Boolean _IsMute_k__BackingField; // 0x26
		::System::Nullable_1<::System::Int32> _TimerID; // 0x28

		::System::Void _ctor(::Class_0_16E4307DCC419505_594* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_594*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKERHANDLE__CTOR_OFFSET))(this, a1);
		}

		::System::Single get_TickIntervalSeconds()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKERHANDLE_GET_TICKINTERVALSECONDS_OFFSET))(this);
		}

		::System::Void set_TickIntervalSeconds(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKERHANDLE_SET_TICKINTERVALSECONDS_OFFSET))(this, a1);
		}

		::System::Action_1<::System::Boolean>* get_OnUpdate()
		{
			return ((::System::Action_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKERHANDLE_GET_ONUPDATE_OFFSET))(this);
		}

		::System::Void set_OnUpdate(::System::Action_1<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKERHANDLE_SET_ONUPDATE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsMute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKERHANDLE_GET_ISMUTE_OFFSET))(this);
		}

		::System::Void set_IsMute(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKERHANDLE_SET_ISMUTE_OFFSET))(this, a1);
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

		::System::Void _OnNotify(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKERHANDLE__ONNOTIFY_OFFSET))(this, a1);
		}

		::System::Void _AddRspHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKERHANDLE__ADDRSPHANDLERS_OFFSET))(this);
		}

		::System::Void _OnCmdRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKERHANDLE__ONCMDRSP_OFFSET))(this, a1, a2);
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
