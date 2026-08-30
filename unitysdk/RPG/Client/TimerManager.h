#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class TimerManager_Timer; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_1_64C1E63642C4A2DF;

#define RPG_CLIENT_TIMERMANAGER_ADDONCETIMERWITHFINISHMSTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x197B5F90)
#define RPG_CLIENT_TIMERMANAGER_ADDONCETIMER_OFFSET UNITYSDK_OFFSET(0x197B5CE0)
#define RPG_CLIENT_TIMERMANAGER_ADDREPEATTIMER_OFFSET UNITYSDK_OFFSET(0x197B5990)
#define RPG_CLIENT_TIMERMANAGER_CANCEL_OFFSET UNITYSDK_OFFSET(0x197B66C0)
#define RPG_CLIENT_TIMERMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x197B6870)
#define RPG_CLIENT_TIMERMANAGER_GETTIMERID_OFFSET UNITYSDK_OFFSET(0x197B5C90)
#define RPG_CLIENT_TIMERMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x197B5950)
#define RPG_CLIENT_TIMERMANAGER_TICK_OFFSET UNITYSDK_OFFSET(0x197B6170)
#define RPG_CLIENT_TIMERMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x197B6B50)

namespace RPG::Client
{
	inline static constexpr unsigned int TimerManager_TypeDefinitionIndex = 68280;

	class TimerManager : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::Int32>* aliveTimerID; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::TimerManager_Timer*>* TimerMap; // 0x18
		::Class_1_64C1E63642C4A2DF<::RPG::Client::TimerManager_Timer*>* pool; // 0x20
		::System::Collections::Generic::List_1<::System::Int32>* deleteTimerID; // 0x28
		::System::Collections::Generic::List_1<::System::Int32>* pendingTimerID; // 0x30
		::System::Int32 id; // 0x38
		::System::Boolean InTimerTick; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMERMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMERMANAGER_INIT_OFFSET))(this);
		}

		::System::Int32 AddRepeatTimer(::System::Single a1, ::System::Action* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMERMANAGER_ADDREPEATTIMER_OFFSET))(this, a1, a2);
		}

		::System::Int32 AddOnceTimer(::System::Single a1, ::System::Action* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMERMANAGER_ADDONCETIMER_OFFSET))(this, a1, a2);
		}

		::System::Int32 AddOnceTimerWithFinishMsTimeStamp(::System::UInt64 a1, ::System::Action* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt64, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMERMANAGER_ADDONCETIMERWITHFINISHMSTIMESTAMP_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetTimerID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMERMANAGER_GETTIMERID_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMERMANAGER_TICK_OFFSET))(this, a1);
		}

		::System::Void Cancel(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMERMANAGER_CANCEL_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMERMANAGER_DISPOSE_OFFSET))(this);
		}
	};
}
