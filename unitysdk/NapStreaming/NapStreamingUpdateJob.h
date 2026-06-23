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

#define NAPSTREAMING_NAPSTREAMINGUPDATEJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x5CCA50)
#define NAPSTREAMING_NAPSTREAMINGUPDATEJOB_INLOADING_OFFSET UNITYSDK_OFFSET(0x5CC9D0)
#define NAPSTREAMING_NAPSTREAMINGUPDATEJOB_ISUNLOAD_OFFSET UNITYSDK_OFFSET(0x5CC9C0)
#define NAPSTREAMING_NAPSTREAMINGUPDATEJOB_SWITCHTOHLOD_OFFSET UNITYSDK_OFFSET(0x5CCA00)
#define NAPSTREAMING_NAPSTREAMINGUPDATEJOB_SWITCHTOOBJECT_OFFSET UNITYSDK_OFFSET(0x5CCA10)
#define NAPSTREAMING_NAPSTREAMINGUPDATEJOB_SWITCHTOUNLOADBYVISIBLE_OFFSET UNITYSDK_OFFSET(0x5CC9E0)
#define NAPSTREAMING_NAPSTREAMINGUPDATEJOB_SWITCHTOUNLOAD_OFFSET UNITYSDK_OFFSET(0x5CC9F0)
#define NAPSTREAMING_NAPSTREAMINGUPDATEJOB_UPDATEPOI_OFFSET UNITYSDK_OFFSET(0x5CCA40)
#define NAPSTREAMING_NAPSTREAMINGUPDATEJOB_UPDATEPVS_OFFSET UNITYSDK_OFFSET(0x5CCA30)
#define NAPSTREAMING_NAPSTREAMINGUPDATEJOB_UPDATERELEASEFRAME_OFFSET UNITYSDK_OFFSET(0x5CCA20)

namespace NapStreaming
{
	inline static constexpr unsigned int NapStreamingUpdateJob_TypeDefinitionIndex = 60033;

	struct alignas(8) NapStreamingUpdateJob
	{
		// static const ::System::Int32 delayReleaseFrames = 0xA; // 0x0
		// static const ::System::Int32 pvsDelayFramesMin = 0x78; // 0x0
		// static const ::System::Int32 pvsDelayFramesMax = 0xF0; // 0x0
		::Unity::Collections::NativeArray_1<::NapStreaming::StreamingGridJobData> gridDatas; // 0x10
		::Unity::Collections::NativeList_1<::NapStreaming::StreamingCommand> gridCommands; // 0x20
		::Unity::Collections::NativeArray_1<::System::Boolean> pvsVisibleStates; // 0x30
		::Unity::Collections::NativeArray_1<::NapStreaming::StreamingLayerJobData> layerDatas; // 0x40
		::Unity::Collections::NativeArray_1<::NapStreaming::StreamingState> gridStates; // 0x50
		::Unity::Collections::NativeArray_1<::NapStreaming::AdditionLockLevel> additionLockStates; // 0x60
		::Unity::Collections::NativeArray_1<::System::Boolean> poiVisibleStates; // 0x70
		::System::Int32 pvsStart; // 0x80
		::System::Single coefficient; // 0x84
		::System::Boolean isViewPort; // 0x88
		::UnityEngine::Vector3 cameraPos; // 0x8C
		::System::Single preloadDistance; // 0x98
		::System::Int32 poiIndex; // 0x9C

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
