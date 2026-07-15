#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_AA3647312B318D6B;
class Class_1_BE27584A7A63E572;
namespace RPG::Client::LittleGame::ChenLing { class ChenLingEffectProfilerDebugView_EffectPathRow; }
namespace RPG::Client::LittleGame::ChenLing { class ChenLingEffectProfilerDebugView_ReasonRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGEFFECTPROFILERDEBUGVIEW_METHOD_5_39D78A8EB32A5315_OFFSET UNITYSDK_OFFSET(0x19B86770)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGEFFECTPROFILERDEBUGVIEW_METHOD_5_D771BE8AB5C2CE52_OFFSET UNITYSDK_OFFSET(0x19B86BE0)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGEFFECTPROFILERDEBUGVIEW_ONENABLE_OFFSET UNITYSDK_OFFSET(0x19B86720)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGEFFECTPROFILERDEBUGVIEW_REFRESHNOW_OFFSET UNITYSDK_OFFSET(0x19B86900)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGEFFECTPROFILERDEBUGVIEW_RESETPROFILERSESSION_OFFSET UNITYSDK_OFFSET(0x19B87EC0)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGEFFECTPROFILERDEBUGVIEW_UPDATE_OFFSET UNITYSDK_OFFSET(0x19B86B40)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGEFFECTPROFILERDEBUGVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x19B87FE0)

namespace RPG::Client::LittleGame::ChenLing
{
	inline static constexpr unsigned int ChenLingEffectProfilerDebugView_TypeDefinitionIndex = 73886;

	class ChenLingEffectProfilerDebugView : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean _AutoRefresh; // 0x18
		::System::Single _RefreshIntervalSec; // 0x1C
		::System::Int32 _TopN; // 0x20
		::System::Boolean _ProfilerEnabled; // 0x24
		::System::String* _Status; // 0x28
		::System::Int64 _TotalSyncRequests; // 0x30
		::System::Int64 _TotalAsyncRequests; // 0x38
		::System::Int64 _TotalCreates; // 0x40
		::System::Int64 _TotalReuses; // 0x48
		::System::Int64 _TotalRemoved; // 0x50
		::System::Int64 _TotalBlockedByMaxCount; // 0x58
		::System::Int32 _CurrentFrameTotalRequests; // 0x60
		::System::Int32 _CurrentFrameSyncRequests; // 0x64
		::System::Int32 _CurrentFrameAsyncRequests; // 0x68
		::System::Int32 _PeakFrameTotalRequests; // 0x6C
		::System::Int32 _PeakFrameSyncRequests; // 0x70
		::System::Int32 _PeakFrameAsyncRequests; // 0x74
		::System::Int32 _PeakFrameIndex; // 0x78
		::System::Int32 _CurrentActiveCount; // 0x7C
		::System::Int32 _PeakActiveCount; // 0x80
		::System::Int32 _PendingAsyncCount; // 0x84
		::System::Int32 _CurrentPoolCachedCount; // 0x88
		::System::Single _ReuseRate; // 0x8C
		::System::Int32 _AsyncLatencySampleCount; // 0x90
		::System::Single _AsyncAvgLatencyMs; // 0x94
		::System::Single _AsyncP95LatencyMs; // 0x98
		::System::Single _AsyncMaxLatencyMs; // 0x9C
		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChenLing::ChenLingEffectProfilerDebugView_EffectPathRow*>* _TopPathRows; // 0xA0
		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChenLing::ChenLingEffectProfilerDebugView_ReasonRow*>* _RemoveReasonRows; // 0xA8
		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChenLing::ChenLingEffectProfilerDebugView_ReasonRow*>* _AsyncFailureReasonRows; // 0xB0
		::System::Single Field_5_30; // 0xB8
		::Class_1_BE27584A7A63E572* Field_5_31; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGEFFECTPROFILERDEBUGVIEW__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGEFFECTPROFILERDEBUGVIEW_ONENABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGEFFECTPROFILERDEBUGVIEW_UPDATE_OFFSET))(this);
		}

		::System::Void RefreshNow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGEFFECTPROFILERDEBUGVIEW_REFRESHNOW_OFFSET))(this);
		}

		::System::Void ResetProfilerSession()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGEFFECTPROFILERDEBUGVIEW_RESETPROFILERSESSION_OFFSET))(this);
		}

		::System::Boolean Method_5_39D78A8EB32A5315()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGEFFECTPROFILERDEBUGVIEW_METHOD_5_39D78A8EB32A5315_OFFSET))(this);
		}

		::System::Void Method_5_D771BE8AB5C2CE52(::Class_1_AA3647312B318D6B* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_AA3647312B318D6B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGEFFECTPROFILERDEBUGVIEW_METHOD_5_D771BE8AB5C2CE52_OFFSET))(this, a1);
		}
	};
}
