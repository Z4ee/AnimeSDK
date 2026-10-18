#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C4E7E2BF73A43E03;
class Class_1_CC2A36004EB01F9E;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_AA3647312B318D6B_GET_ASYNCAVGLATENCYMS_OFFSET UNITYSDK_OFFSET(0x1582D1B0)
#define CLASS_1_AA3647312B318D6B_GET_ASYNCFAILUREREASONSTATS_OFFSET UNITYSDK_OFFSET(0x1582D270)
#define CLASS_1_AA3647312B318D6B_GET_ASYNCLATENCYSAMPLECOUNT_OFFSET UNITYSDK_OFFSET(0x1582D210)
#define CLASS_1_AA3647312B318D6B_GET_ASYNCMAXLATENCYMS_OFFSET UNITYSDK_OFFSET(0x1582D1F0)
#define CLASS_1_AA3647312B318D6B_GET_ASYNCP95LATENCYMS_OFFSET UNITYSDK_OFFSET(0x1582D1D0)
#define CLASS_1_AA3647312B318D6B_GET_CURRENTACTIVECOUNT_OFFSET UNITYSDK_OFFSET(0x1582D130)
#define CLASS_1_AA3647312B318D6B_GET_CURRENTFRAMEASYNCREQUESTS_OFFSET UNITYSDK_OFFSET(0x1582D090)
#define CLASS_1_AA3647312B318D6B_GET_CURRENTFRAMESYNCREQUESTS_OFFSET UNITYSDK_OFFSET(0x1582D070)
#define CLASS_1_AA3647312B318D6B_GET_CURRENTFRAMETOTALREQUESTS_OFFSET UNITYSDK_OFFSET(0x1582D050)
#define CLASS_1_AA3647312B318D6B_GET_CURRENTPOOLCACHEDCOUNT_OFFSET UNITYSDK_OFFSET(0x1582D190)
#define CLASS_1_AA3647312B318D6B_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x1582CF70)
#define CLASS_1_AA3647312B318D6B_GET_PEAKACTIVECOUNT_OFFSET UNITYSDK_OFFSET(0x1582D150)
#define CLASS_1_AA3647312B318D6B_GET_PEAKFRAMEASYNCREQUESTS_OFFSET UNITYSDK_OFFSET(0x1582D0F0)
#define CLASS_1_AA3647312B318D6B_GET_PEAKFRAMEINDEX_OFFSET UNITYSDK_OFFSET(0x1582D110)
#define CLASS_1_AA3647312B318D6B_GET_PEAKFRAMESYNCREQUESTS_OFFSET UNITYSDK_OFFSET(0x1582D0D0)
#define CLASS_1_AA3647312B318D6B_GET_PEAKFRAMETOTALREQUESTS_OFFSET UNITYSDK_OFFSET(0x1582D0B0)
#define CLASS_1_AA3647312B318D6B_GET_PENDINGASYNCCOUNT_OFFSET UNITYSDK_OFFSET(0x1582D170)
#define CLASS_1_AA3647312B318D6B_GET_REMOVEREASONSTATS_OFFSET UNITYSDK_OFFSET(0x1582D250)
#define CLASS_1_AA3647312B318D6B_GET_TOPPATHSTATS_OFFSET UNITYSDK_OFFSET(0x1582D230)
#define CLASS_1_AA3647312B318D6B_GET_TOTALASYNCREQUESTS_OFFSET UNITYSDK_OFFSET(0x1582CFB0)
#define CLASS_1_AA3647312B318D6B_GET_TOTALBLOCKEDBYMAXCOUNT_OFFSET UNITYSDK_OFFSET(0x1582D030)
#define CLASS_1_AA3647312B318D6B_GET_TOTALCREATES_OFFSET UNITYSDK_OFFSET(0x1582CFD0)
#define CLASS_1_AA3647312B318D6B_GET_TOTALREMOVED_OFFSET UNITYSDK_OFFSET(0x1582D010)
#define CLASS_1_AA3647312B318D6B_GET_TOTALREUSES_OFFSET UNITYSDK_OFFSET(0x1582CFF0)
#define CLASS_1_AA3647312B318D6B_GET_TOTALSYNCREQUESTS_OFFSET UNITYSDK_OFFSET(0x1582CF90)
#define CLASS_1_AA3647312B318D6B_SET_ASYNCAVGLATENCYMS_OFFSET UNITYSDK_OFFSET(0x1582D1C0)
#define CLASS_1_AA3647312B318D6B_SET_ASYNCFAILUREREASONSTATS_OFFSET UNITYSDK_OFFSET(0x1582D280)
#define CLASS_1_AA3647312B318D6B_SET_ASYNCLATENCYSAMPLECOUNT_OFFSET UNITYSDK_OFFSET(0x1582D220)
#define CLASS_1_AA3647312B318D6B_SET_ASYNCMAXLATENCYMS_OFFSET UNITYSDK_OFFSET(0x1582D200)
#define CLASS_1_AA3647312B318D6B_SET_ASYNCP95LATENCYMS_OFFSET UNITYSDK_OFFSET(0x1582D1E0)
#define CLASS_1_AA3647312B318D6B_SET_CURRENTACTIVECOUNT_OFFSET UNITYSDK_OFFSET(0x1582D140)
#define CLASS_1_AA3647312B318D6B_SET_CURRENTFRAMEASYNCREQUESTS_OFFSET UNITYSDK_OFFSET(0x1582D0A0)
#define CLASS_1_AA3647312B318D6B_SET_CURRENTFRAMESYNCREQUESTS_OFFSET UNITYSDK_OFFSET(0x1582D080)
#define CLASS_1_AA3647312B318D6B_SET_CURRENTFRAMETOTALREQUESTS_OFFSET UNITYSDK_OFFSET(0x1582D060)
#define CLASS_1_AA3647312B318D6B_SET_CURRENTPOOLCACHEDCOUNT_OFFSET UNITYSDK_OFFSET(0x1582D1A0)
#define CLASS_1_AA3647312B318D6B_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x1582CF80)
#define CLASS_1_AA3647312B318D6B_SET_PEAKACTIVECOUNT_OFFSET UNITYSDK_OFFSET(0x1582D160)
#define CLASS_1_AA3647312B318D6B_SET_PEAKFRAMEASYNCREQUESTS_OFFSET UNITYSDK_OFFSET(0x1582D100)
#define CLASS_1_AA3647312B318D6B_SET_PEAKFRAMEINDEX_OFFSET UNITYSDK_OFFSET(0x1582D120)
#define CLASS_1_AA3647312B318D6B_SET_PEAKFRAMESYNCREQUESTS_OFFSET UNITYSDK_OFFSET(0x1582D0E0)
#define CLASS_1_AA3647312B318D6B_SET_PEAKFRAMETOTALREQUESTS_OFFSET UNITYSDK_OFFSET(0x1582D0C0)
#define CLASS_1_AA3647312B318D6B_SET_PENDINGASYNCCOUNT_OFFSET UNITYSDK_OFFSET(0x1582D180)
#define CLASS_1_AA3647312B318D6B_SET_REMOVEREASONSTATS_OFFSET UNITYSDK_OFFSET(0x1582D260)
#define CLASS_1_AA3647312B318D6B_SET_TOPPATHSTATS_OFFSET UNITYSDK_OFFSET(0x1582D240)
#define CLASS_1_AA3647312B318D6B_SET_TOTALASYNCREQUESTS_OFFSET UNITYSDK_OFFSET(0x1582CFC0)
#define CLASS_1_AA3647312B318D6B_SET_TOTALBLOCKEDBYMAXCOUNT_OFFSET UNITYSDK_OFFSET(0x1582D040)
#define CLASS_1_AA3647312B318D6B_SET_TOTALCREATES_OFFSET UNITYSDK_OFFSET(0x1582CFE0)
#define CLASS_1_AA3647312B318D6B_SET_TOTALREMOVED_OFFSET UNITYSDK_OFFSET(0x1582D020)
#define CLASS_1_AA3647312B318D6B_SET_TOTALREUSES_OFFSET UNITYSDK_OFFSET(0x1582D000)
#define CLASS_1_AA3647312B318D6B_SET_TOTALSYNCREQUESTS_OFFSET UNITYSDK_OFFSET(0x1582CFA0)
#define CLASS_1_AA3647312B318D6B__CTOR_OFFSET UNITYSDK_OFFSET(0x1582D290)

inline static constexpr unsigned int Class_1_AA3647312B318D6B_TypeDefinitionIndex = 77845;

class Class_1_AA3647312B318D6B : public ::System::Object
{
public:
	::System::Collections::Generic::IReadOnlyList_1<::Class_1_C4E7E2BF73A43E03*>* _AsyncFailureReasonStats_k__BackingField; // 0x10
	::System::Collections::Generic::IReadOnlyList_1<::Class_1_CC2A36004EB01F9E*>* _TopPathStats_k__BackingField; // 0x18
	::System::Collections::Generic::IReadOnlyList_1<::Class_1_C4E7E2BF73A43E03*>* _RemoveReasonStats_k__BackingField; // 0x20
	::System::Int32 _AsyncLatencySampleCount_k__BackingField; // 0x28
	::System::Int32 _PendingAsyncCount_k__BackingField; // 0x2C
	::System::Double _AsyncMaxLatencyMs_k__BackingField; // 0x30
	::System::Int32 _PeakFrameTotalRequests_k__BackingField; // 0x38
	::System::Int32 _CurrentPoolCachedCount_k__BackingField; // 0x3C
	::System::Int64 _TotalSyncRequests_k__BackingField; // 0x40
	::System::Double _AsyncP95LatencyMs_k__BackingField; // 0x48
	::System::Boolean _Enabled_k__BackingField; // 0x50
	::System::Int32 _CurrentActiveCount_k__BackingField; // 0x54
	::System::Int64 _TotalBlockedByMaxCount_k__BackingField; // 0x58
	::System::Int32 _PeakActiveCount_k__BackingField; // 0x60
	::System::Int32 _PeakFrameSyncRequests_k__BackingField; // 0x64
	::System::Int64 _TotalCreates_k__BackingField; // 0x68
	::System::Int64 _TotalRemoved_k__BackingField; // 0x70
	::System::Int64 _TotalReuses_k__BackingField; // 0x78
	::System::Int32 _CurrentFrameSyncRequests_k__BackingField; // 0x80
	::System::Int64 _TotalAsyncRequests_k__BackingField; // 0x88
	::System::Int32 _CurrentFrameAsyncRequests_k__BackingField; // 0x90
	::System::Int32 _PeakFrameAsyncRequests_k__BackingField; // 0x94
	::System::Int32 _CurrentFrameTotalRequests_k__BackingField; // 0x98
	::System::Int32 _PeakFrameIndex_k__BackingField; // 0x9C
	::System::Double _AsyncAvgLatencyMs_k__BackingField; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA3647312B318D6B__CTOR_OFFSET))(this);
	}

	::System::Boolean get_Enabled()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA3647312B318D6B_GET_ENABLED_OFFSET))(this);
	}

	::System::Void set_Enabled(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_AA3647312B318D6B_SET_ENABLED_OFFSET))(this, a1);
	}

	::System::Int64 get_TotalSyncRequests()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA3647312B318D6B_GET_TOTALSYNCREQUESTS_OFFSET))(this);
	}

	::System::Void set_TotalSyncRequests(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_AA3647312B318D6B_SET_TOTALSYNCREQUESTS_OFFSET))(this, a1);
	}

	::System::Int64 get_TotalAsyncRequests()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA3647312B318D6B_GET_TOTALASYNCREQUESTS_OFFSET))(this);
	}

	::System::Void set_TotalAsyncRequests(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_AA3647312B318D6B_SET_TOTALASYNCREQUESTS_OFFSET))(this, a1);
	}

	::System::Int64 get_TotalCreates()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA3647312B318D6B_GET_TOTALCREATES_OFFSET))(this);
	}

	::System::Void set_TotalCreates(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_AA3647312B318D6B_SET_TOTALCREATES_OFFSET))(this, a1);
	}

	::System::Int64 get_TotalReuses()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA3647312B318D6B_GET_TOTALREUSES_OFFSET))(this);
	}

	::System::Void set_TotalReuses(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_AA3647312B318D6B_SET_TOTALREUSES_OFFSET))(this, a1);
	}

	::System::Int64 get_TotalRemoved()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA3647312B318D6B_GET_TOTALREMOVED_OFFSET))(this);
	}

	::System::Void set_TotalRemoved(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_AA3647312B318D6B_SET_TOTALREMOVED_OFFSET))(this, a1);
	}

	::System::Int64 get_TotalBlockedByMaxCount()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA3647312B318D6B_GET_TOTALBLOCKEDBYMAXCOUNT_OFFSET))(this);
	}

	::System::Void set_TotalBlockedByMaxCount(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_AA3647312B318D6B_SET_TOTALBLOCKEDBYMAXCOUNT_OFFSET))(this, a1);
	}

	::System::Int32 get_CurrentFrameTotalRequests()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA3647312B318D6B_GET_CURRENTFRAMETOTALREQUESTS_OFFSET))(this);
	}

	::System::Void set_CurrentFrameTotalRequests(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AA3647312B318D6B_SET_CURRENTFRAMETOTALREQUESTS_OFFSET))(this, a1);
	}

	::System::Int32 get_CurrentFrameSyncRequests()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA3647312B318D6B_GET_CURRENTFRAMESYNCREQUESTS_OFFSET))(this);
	}

	::System::Void set_CurrentFrameSyncRequests(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AA3647312B318D6B_SET_CURRENTFRAMESYNCREQUESTS_OFFSET))(this, a1);
	}

	::System::Int32 get_CurrentFrameAsyncRequests()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA3647312B318D6B_GET_CURRENTFRAMEASYNCREQUESTS_OFFSET))(this);
	}

	::System::Void set_CurrentFrameAsyncRequests(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AA3647312B318D6B_SET_CURRENTFRAMEASYNCREQUESTS_OFFSET))(this, a1);
	}

	::System::Int32 get_PeakFrameTotalRequests()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA3647312B318D6B_GET_PEAKFRAMETOTALREQUESTS_OFFSET))(this);
	}

	::System::Void set_PeakFrameTotalRequests(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AA3647312B318D6B_SET_PEAKFRAMETOTALREQUESTS_OFFSET))(this, a1);
	}

	::System::Int32 get_PeakFrameSyncRequests()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA3647312B318D6B_GET_PEAKFRAMESYNCREQUESTS_OFFSET))(this);
	}

	::System::Void set_PeakFrameSyncRequests(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AA3647312B318D6B_SET_PEAKFRAMESYNCREQUESTS_OFFSET))(this, a1);
	}

	::System::Int32 get_PeakFrameAsyncRequests()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA3647312B318D6B_GET_PEAKFRAMEASYNCREQUESTS_OFFSET))(this);
	}

	::System::Void set_PeakFrameAsyncRequests(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AA3647312B318D6B_SET_PEAKFRAMEASYNCREQUESTS_OFFSET))(this, a1);
	}

	::System::Int32 get_PeakFrameIndex()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA3647312B318D6B_GET_PEAKFRAMEINDEX_OFFSET))(this);
	}

	::System::Void set_PeakFrameIndex(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AA3647312B318D6B_SET_PEAKFRAMEINDEX_OFFSET))(this, a1);
	}

	::System::Int32 get_CurrentActiveCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA3647312B318D6B_GET_CURRENTACTIVECOUNT_OFFSET))(this);
	}

	::System::Void set_CurrentActiveCount(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AA3647312B318D6B_SET_CURRENTACTIVECOUNT_OFFSET))(this, a1);
	}

	::System::Int32 get_PeakActiveCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA3647312B318D6B_GET_PEAKACTIVECOUNT_OFFSET))(this);
	}

	::System::Void set_PeakActiveCount(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AA3647312B318D6B_SET_PEAKACTIVECOUNT_OFFSET))(this, a1);
	}

	::System::Int32 get_PendingAsyncCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA3647312B318D6B_GET_PENDINGASYNCCOUNT_OFFSET))(this);
	}

	::System::Void set_PendingAsyncCount(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AA3647312B318D6B_SET_PENDINGASYNCCOUNT_OFFSET))(this, a1);
	}

	::System::Int32 get_CurrentPoolCachedCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA3647312B318D6B_GET_CURRENTPOOLCACHEDCOUNT_OFFSET))(this);
	}

	::System::Void set_CurrentPoolCachedCount(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AA3647312B318D6B_SET_CURRENTPOOLCACHEDCOUNT_OFFSET))(this, a1);
	}

	::System::Double get_AsyncAvgLatencyMs()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA3647312B318D6B_GET_ASYNCAVGLATENCYMS_OFFSET))(this);
	}

	::System::Void set_AsyncAvgLatencyMs(::System::Double a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_AA3647312B318D6B_SET_ASYNCAVGLATENCYMS_OFFSET))(this, a1);
	}

	::System::Double get_AsyncP95LatencyMs()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA3647312B318D6B_GET_ASYNCP95LATENCYMS_OFFSET))(this);
	}

	::System::Void set_AsyncP95LatencyMs(::System::Double a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_AA3647312B318D6B_SET_ASYNCP95LATENCYMS_OFFSET))(this, a1);
	}

	::System::Double get_AsyncMaxLatencyMs()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA3647312B318D6B_GET_ASYNCMAXLATENCYMS_OFFSET))(this);
	}

	::System::Void set_AsyncMaxLatencyMs(::System::Double a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_AA3647312B318D6B_SET_ASYNCMAXLATENCYMS_OFFSET))(this, a1);
	}

	::System::Int32 get_AsyncLatencySampleCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA3647312B318D6B_GET_ASYNCLATENCYSAMPLECOUNT_OFFSET))(this);
	}

	::System::Void set_AsyncLatencySampleCount(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AA3647312B318D6B_SET_ASYNCLATENCYSAMPLECOUNT_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_1_CC2A36004EB01F9E*>* get_TopPathStats()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_1_CC2A36004EB01F9E*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA3647312B318D6B_GET_TOPPATHSTATS_OFFSET))(this);
	}

	::System::Void set_TopPathStats(::System::Collections::Generic::IReadOnlyList_1<::Class_1_CC2A36004EB01F9E*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_CC2A36004EB01F9E*>*))((::PBYTE)hIl2Cpp + CLASS_1_AA3647312B318D6B_SET_TOPPATHSTATS_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_1_C4E7E2BF73A43E03*>* get_RemoveReasonStats()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_1_C4E7E2BF73A43E03*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA3647312B318D6B_GET_REMOVEREASONSTATS_OFFSET))(this);
	}

	::System::Void set_RemoveReasonStats(::System::Collections::Generic::IReadOnlyList_1<::Class_1_C4E7E2BF73A43E03*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_C4E7E2BF73A43E03*>*))((::PBYTE)hIl2Cpp + CLASS_1_AA3647312B318D6B_SET_REMOVEREASONSTATS_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_1_C4E7E2BF73A43E03*>* get_AsyncFailureReasonStats()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_1_C4E7E2BF73A43E03*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA3647312B318D6B_GET_ASYNCFAILUREREASONSTATS_OFFSET))(this);
	}

	::System::Void set_AsyncFailureReasonStats(::System::Collections::Generic::IReadOnlyList_1<::Class_1_C4E7E2BF73A43E03*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_C4E7E2BF73A43E03*>*))((::PBYTE)hIl2Cpp + CLASS_1_AA3647312B318D6B_SET_ASYNCFAILUREREASONSTATS_OFFSET))(this, a1);
	}
};
