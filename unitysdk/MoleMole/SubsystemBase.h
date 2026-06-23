#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B7E341C5F1A6F199;

#define MOLEMOLE_SUBSYSTEMBASE_AWAKE_OFFSET UNITYSDK_OFFSET(0x13F22E90)
#define MOLEMOLE_SUBSYSTEMBASE_DESTROY_OFFSET UNITYSDK_OFFSET(0x13F22F40)
#define MOLEMOLE_SUBSYSTEMBASE_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x13F231B0)
#define MOLEMOLE_SUBSYSTEMBASE_GET_ENABLEUPDATEWHENGAMEPAUSE_OFFSET UNITYSDK_OFFSET(0x13F22E80)
#define MOLEMOLE_SUBSYSTEMBASE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x13F233D0)
#define MOLEMOLE_SUBSYSTEMBASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x13EE59E0)
#define MOLEMOLE_SUBSYSTEMBASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x13EE4610)
#define MOLEMOLE_SUBSYSTEMBASE_ONEVENTFROMANYONE_OFFSET UNITYSDK_OFFSET(0x13EE5750)
#define MOLEMOLE_SUBSYSTEMBASE_ONFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x13F23870)
#define MOLEMOLE_SUBSYSTEMBASE_ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x13F238D0)
#define MOLEMOLE_SUBSYSTEMBASE_ONPOSTLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x13F23930)
#define MOLEMOLE_SUBSYSTEMBASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x13EE4AF0)
#define MOLEMOLE_SUBSYSTEMBASE_ONWILLDESTROY_OFFSET UNITYSDK_OFFSET(0x13F23830)
#define MOLEMOLE_SUBSYSTEMBASE_POSTLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x13F23600)
#define MOLEMOLE_SUBSYSTEMBASE_PREPARETODESTROY_OFFSET UNITYSDK_OFFSET(0x13F22EF0)
#define MOLEMOLE_SUBSYSTEMBASE_REGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x13EE3CA0)
#define MOLEMOLE_SUBSYSTEMBASE_UNREGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x13EE3EC0)
#define MOLEMOLE_SUBSYSTEMBASE_UPDATE_OFFSET UNITYSDK_OFFSET(0x13F22FA0)
#define MOLEMOLE_SUBSYSTEMBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x13F23990)

namespace MoleMole
{
	inline static constexpr unsigned int SubsystemBase_TypeDefinitionIndex = 47986;

	class SubsystemBase : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUBSYSTEMBASE__CTOR_OFFSET))(this);
		}

		::System::Boolean get_EnableUpdateWhenGamePause()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUBSYSTEMBASE_GET_ENABLEUPDATEWHENGAMEPAUSE_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUBSYSTEMBASE_AWAKE_OFFSET))(this);
		}

		::System::Void PrepareToDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUBSYSTEMBASE_PREPARETODESTROY_OFFSET))(this);
		}

		::System::Void Destroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUBSYSTEMBASE_DESTROY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUBSYSTEMBASE_UPDATE_OFFSET))(this);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUBSYSTEMBASE_FIXEDUPDATE_OFFSET))(this);
		}

		::System::Void LateUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SUBSYSTEMBASE_LATEUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void PostLateUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SUBSYSTEMBASE_POSTLATEUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUBSYSTEMBASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnWillDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUBSYSTEMBASE_ONWILLDESTROY_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUBSYSTEMBASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUBSYSTEMBASE_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnFixedUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SUBSYSTEMBASE_ONFIXEDUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void OnLateUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SUBSYSTEMBASE_ONLATEUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void OnPostLateUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SUBSYSTEMBASE_ONPOSTLATEUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void RegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUBSYSTEMBASE_REGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}

		::System::Void UnRegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUBSYSTEMBASE_UNREGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}

		::System::Void OnEventFromAnyone(::Class_1_B7E341C5F1A6F199* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUBSYSTEMBASE_ONEVENTFROMANYONE_OFFSET))(this, evt);
		}
	};
}
