#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class TimerManager_Timer; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_1_64C1E63642C4A2DF;

#define RPG_CLIENT_TIMERMANAGER_ADDONCETIMERWITHFINISHMSTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xA5DDDE0)
#define RPG_CLIENT_TIMERMANAGER_ADDONCETIMER_OFFSET UNITYSDK_OFFSET(0xA5DDB30)
#define RPG_CLIENT_TIMERMANAGER_ADDREPEATTIMER_OFFSET UNITYSDK_OFFSET(0xA5DD7F0)
#define RPG_CLIENT_TIMERMANAGER_CANCEL_OFFSET UNITYSDK_OFFSET(0xA5DE4E0)
#define RPG_CLIENT_TIMERMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA5DE640)
#define RPG_CLIENT_TIMERMANAGER_GETTIMERID_OFFSET UNITYSDK_OFFSET(0xA5DDAE0)
#define RPG_CLIENT_TIMERMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0xA5DD7B0)
#define RPG_CLIENT_TIMERMANAGER_TICK_OFFSET UNITYSDK_OFFSET(0xA5DDFA0)
#define RPG_CLIENT_TIMERMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xA5DEA10)

namespace RPG::Client
{
	inline static constexpr unsigned int TimerManager_TypeDefinitionIndex = 55759;

	class TimerManager : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* pendingTimerID; // 0x10
		::System::Collections::Generic::HashSet_1<::System::Int32>* aliveTimerID; // 0x18
		::Class_1_64C1E63642C4A2DF<::RPG::Client::TimerManager_Timer*>* pool; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::TimerManager_Timer*>* TimerMap; // 0x28
		::System::Collections::Generic::List_1<::System::Int32>* deleteTimerID; // 0x30
		::System::Boolean InTimerTick; // 0x38
		::System::Int32 id; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMERMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMERMANAGER_INIT_OFFSET))(this);
		}

		::System::Int32 AddRepeatTimer(::System::Single seconds, ::System::Action* callback)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMERMANAGER_ADDREPEATTIMER_OFFSET))(this, seconds, callback);
		}

		::System::Int32 AddOnceTimer(::System::Single seconds, ::System::Action* callback)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMERMANAGER_ADDONCETIMER_OFFSET))(this, seconds, callback);
		}

		::System::Int32 AddOnceTimerWithFinishMsTimeStamp(::System::UInt64 finishMsTimeStamp, ::System::Action* callback)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt64, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMERMANAGER_ADDONCETIMERWITHFINISHMSTIMESTAMP_OFFSET))(this, finishMsTimeStamp, callback);
		}

		::System::Int32 GetTimerID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMERMANAGER_GETTIMERID_OFFSET))(this);
		}

		::System::Void Tick(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMERMANAGER_TICK_OFFSET))(this, value);
		}

		::System::Void Cancel(::System::Int32 timerID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMERMANAGER_CANCEL_OFFSET))(this, timerID);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMERMANAGER_DISPOSE_OFFSET))(this);
		}
	};
}
