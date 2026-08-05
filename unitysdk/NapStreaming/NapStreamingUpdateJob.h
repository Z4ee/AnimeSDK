#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NapStreaming/AdditionLockLevel.h"
#include "unitysdk/NapStreaming/StreamingCommand.h"
#include "unitysdk/NapStreaming/StreamingGridJobData.h"
#include "unitysdk/NapStreaming/StreamingLayerJobData.h"
#include "unitysdk/NapStreaming/StreamingState.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/Unity/Collections/NativeList_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define NAPSTREAMING_NAPSTREAMINGUPDATEJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x875280)
#define NAPSTREAMING_NAPSTREAMINGUPDATEJOB_INLOADING_OFFSET UNITYSDK_OFFSET(0x875200)
#define NAPSTREAMING_NAPSTREAMINGUPDATEJOB_ISUNLOAD_OFFSET UNITYSDK_OFFSET(0x8751F0)
#define NAPSTREAMING_NAPSTREAMINGUPDATEJOB_SWITCHTOHLOD_OFFSET UNITYSDK_OFFSET(0x875230)
#define NAPSTREAMING_NAPSTREAMINGUPDATEJOB_SWITCHTOOBJECT_OFFSET UNITYSDK_OFFSET(0x875240)
#define NAPSTREAMING_NAPSTREAMINGUPDATEJOB_SWITCHTOUNLOADBYVISIBLE_OFFSET UNITYSDK_OFFSET(0x875210)
#define NAPSTREAMING_NAPSTREAMINGUPDATEJOB_SWITCHTOUNLOAD_OFFSET UNITYSDK_OFFSET(0x875220)
#define NAPSTREAMING_NAPSTREAMINGUPDATEJOB_UPDATEPOI_OFFSET UNITYSDK_OFFSET(0x875270)
#define NAPSTREAMING_NAPSTREAMINGUPDATEJOB_UPDATEPVS_OFFSET UNITYSDK_OFFSET(0x875260)
#define NAPSTREAMING_NAPSTREAMINGUPDATEJOB_UPDATERELEASEFRAME_OFFSET UNITYSDK_OFFSET(0x875250)

namespace NapStreaming
{
	inline static constexpr unsigned int NapStreamingUpdateJob_TypeDefinitionIndex = 69771;

	struct alignas(8) NapStreamingUpdateJob
	{
		// static const ::System::Int32 delayReleaseFrames = 0xA; // 0x0
		// static const ::System::Int32 pvsDelayFramesMin = 0x78; // 0x0
		// static const ::System::Int32 pvsDelayFramesMax = 0xF0; // 0x0
		::System::Boolean cookedYGap; // 0x10
		::System::Single yGapDistance; // 0x14
		::Unity::Collections::NativeArray_1<::NapStreaming::StreamingGridJobData> gridDatas; // 0x18
		::Unity::Collections::NativeList_1<::NapStreaming::StreamingCommand> gridCommands; // 0x28
		::Unity::Collections::NativeArray_1<::System::Boolean> pvsVisibleStates; // 0x38
		::Unity::Collections::NativeArray_1<::NapStreaming::StreamingLayerJobData> layerDatas; // 0x48
		::Unity::Collections::NativeArray_1<::NapStreaming::StreamingState> gridStates; // 0x58
		::Unity::Collections::NativeArray_1<::NapStreaming::AdditionLockLevel> additionLockStates; // 0x68
		::Unity::Collections::NativeArray_1<::System::Boolean> poiVisibleStates; // 0x78
		::System::Int32 pvsStart; // 0x88
		::System::Single coefficient; // 0x8C
		::System::Boolean isViewPort; // 0x90
		::UnityEngine::Vector3 cameraPos; // 0x94
		::System::Single preloadDistance; // 0xA0
		::System::Int32 poiIndex; // 0xA4

		::System::Boolean IsUnload(::NapStreaming::StreamingState state)
		{
			return ((::System::Boolean(*)(::PVOID, ::NapStreaming::StreamingState))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGUPDATEJOB_ISUNLOAD_OFFSET))(this, state);
		}

		::System::Boolean InLoading(::NapStreaming::StreamingState state)
		{
			return ((::System::Boolean(*)(::PVOID, ::NapStreaming::StreamingState))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGUPDATEJOB_INLOADING_OFFSET))(this, state);
		}

		::System::Void SwitchToUnloadByVisible(::System::Int32 i, ::System::Boolean isUnload)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGUPDATEJOB_SWITCHTOUNLOADBYVISIBLE_OFFSET))(this, i, isUnload);
		}

		::System::Void SwitchToUnload(::System::Int32 i, ::System::Boolean isUnload, ::System::Boolean byLayer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGUPDATEJOB_SWITCHTOUNLOAD_OFFSET))(this, i, isUnload, byLayer);
		}

		::System::Void SwitchToHLOD(::System::Int32 i)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGUPDATEJOB_SWITCHTOHLOD_OFFSET))(this, i);
		}

		::System::Void SwitchToObject(::System::Int32 i)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGUPDATEJOB_SWITCHTOOBJECT_OFFSET))(this, i);
		}

		::System::Void UpdateReleaseFrame(::System::Int32 i)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGUPDATEJOB_UPDATERELEASEFRAME_OFFSET))(this, i);
		}

		::System::Boolean UpdatePVS(::System::Int32 i, ::System::Boolean isUnload)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGUPDATEJOB_UPDATEPVS_OFFSET))(this, i, isUnload);
		}

		::System::Boolean UpdatePOI(::System::Int32 i, ::System::Boolean isUnload)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGUPDATEJOB_UPDATEPOI_OFFSET))(this, i, isUnload);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGUPDATEJOB_EXECUTE_OFFSET))(this);
		}
	};
}
