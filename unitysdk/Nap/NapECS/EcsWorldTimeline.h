#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Nap::NapECS { class EcsWorldTimeline_SyncEvent; }

#define NAP_NAPECS_ECSWORLDTIMELINE_GET_DELTATIME_OFFSET UNITYSDK_OFFSET(0x192EC730)
#define NAP_NAPECS_ECSWORLDTIMELINE_GET_ISINITIALIZED_OFFSET UNITYSDK_OFFSET(0x192EC6B0)
#define NAP_NAPECS_ECSWORLDTIMELINE_GET_LASTTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x192EC710)
#define NAP_NAPECS_ECSWORLDTIMELINE_GET_STARTTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x192EC6D0)
#define NAP_NAPECS_ECSWORLDTIMELINE_GET_TIMESTAMP_OFFSET UNITYSDK_OFFSET(0x192EC6F0)
#define NAP_NAPECS_ECSWORLDTIMELINE_HALT_OFFSET UNITYSDK_OFFSET(0x192EC300)
#define NAP_NAPECS_ECSWORLDTIMELINE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x192EC180)
#define NAP_NAPECS_ECSWORLDTIMELINE_INNERRESETEVENT_OFFSET UNITYSDK_OFFSET(0x192ECC60)
#define NAP_NAPECS_ECSWORLDTIMELINE_ONHALT_OFFSET UNITYSDK_OFFSET(0x192ECCB0)
#define NAP_NAPECS_ECSWORLDTIMELINE_ONINITIALIZE_OFFSET UNITYSDK_OFFSET(0x192EC750)
#define NAP_NAPECS_ECSWORLDTIMELINE_RESET_OFFSET UNITYSDK_OFFSET(0x192EC7F0)
#define NAP_NAPECS_ECSWORLDTIMELINE_SEEK_OFFSET UNITYSDK_OFFSET(0x192EC3F0)
#define NAP_NAPECS_ECSWORLDTIMELINE_SET_DELTATIME_OFFSET UNITYSDK_OFFSET(0x192EC740)
#define NAP_NAPECS_ECSWORLDTIMELINE_SET_ISINITIALIZED_OFFSET UNITYSDK_OFFSET(0x192EC6C0)
#define NAP_NAPECS_ECSWORLDTIMELINE_SET_LASTTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x192EC720)
#define NAP_NAPECS_ECSWORLDTIMELINE_SET_STARTTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x192EC6E0)
#define NAP_NAPECS_ECSWORLDTIMELINE_SET_TIMESTAMP_OFFSET UNITYSDK_OFFSET(0x192EC700)
#define NAP_NAPECS_ECSWORLDTIMELINE_VALIDATEDELTATIME_OFFSET UNITYSDK_OFFSET(0x192ECBF0)
#define NAP_NAPECS_ECSWORLDTIMELINE_VALIDATETIMESTAMP_OFFSET UNITYSDK_OFFSET(0x192EC790)
#define NAP_NAPECS_ECSWORLDTIMELINE__CTOR_OFFSET UNITYSDK_OFFSET(0x192ECCF0)

namespace Nap::NapECS
{
	inline static constexpr unsigned int EcsWorldTimeline_TypeDefinitionIndex = 35723;

	class EcsWorldTimeline : public ::System::Object
	{
	public:
		::Nap::NapECS::EcsWorldTimeline_SyncEvent* OnHaltTime; // 0x10
		::Nap::NapECS::EcsWorldTimeline_SyncEvent* OnInit; // 0x18
		::Nap::NapECS::EcsWorldTimeline_SyncEvent* OnSyncTime; // 0x20
		::System::Double _LastTimeStamp_k__BackingField; // 0x28
		::System::Double _Timestamp_k__BackingField; // 0x30
		::System::Single _DeltaTime_k__BackingField; // 0x38
		::System::Boolean _IsInitialized_k__BackingField; // 0x3C
		::System::Double _StartTimestamp_k__BackingField; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLDTIMELINE__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsInitialized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLDTIMELINE_GET_ISINITIALIZED_OFFSET))(this);
		}

		::System::Void set_IsInitialized(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLDTIMELINE_SET_ISINITIALIZED_OFFSET))(this, value);
		}

		::System::Double get_StartTimestamp()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLDTIMELINE_GET_STARTTIMESTAMP_OFFSET))(this);
		}

		::System::Void set_StartTimestamp(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLDTIMELINE_SET_STARTTIMESTAMP_OFFSET))(this, value);
		}

		::System::Double get_Timestamp()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLDTIMELINE_GET_TIMESTAMP_OFFSET))(this);
		}

		::System::Void set_Timestamp(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLDTIMELINE_SET_TIMESTAMP_OFFSET))(this, value);
		}

		::System::Double get_LastTimeStamp()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLDTIMELINE_GET_LASTTIMESTAMP_OFFSET))(this);
		}

		::System::Void set_LastTimeStamp(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLDTIMELINE_SET_LASTTIMESTAMP_OFFSET))(this, value);
		}

		::System::Single get_DeltaTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLDTIMELINE_GET_DELTATIME_OFFSET))(this);
		}

		::System::Void set_DeltaTime(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLDTIMELINE_SET_DELTATIME_OFFSET))(this, value);
		}

		::System::Void OnInitialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLDTIMELINE_ONINITIALIZE_OFFSET))(this);
		}

		::System::Boolean Initialize(::System::Double& startTimestamp)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Double&))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLDTIMELINE_INITIALIZE_OFFSET))(this, startTimestamp);
		}

		::System::Boolean Seek(::System::Double& timeStamp, ::System::Single& deltaTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Double&, ::System::Single&))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLDTIMELINE_SEEK_OFFSET))(this, timeStamp, deltaTime);
		}

		::System::Boolean ValidateTimestamp(::System::Double& timeStamp)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Double&))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLDTIMELINE_VALIDATETIMESTAMP_OFFSET))(this, timeStamp);
		}

		::System::Boolean ValidateDeltaTime(::System::Single& deltaTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLDTIMELINE_VALIDATEDELTATIME_OFFSET))(this, deltaTime);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLDTIMELINE_RESET_OFFSET))(this);
		}

		::System::Void OnHalt()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLDTIMELINE_ONHALT_OFFSET))(this);
		}

		::System::Void Halt()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLDTIMELINE_HALT_OFFSET))(this);
		}

		::System::Void InnerResetEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLDTIMELINE_INNERRESETEVENT_OFFSET))(this);
		}
	};
}
