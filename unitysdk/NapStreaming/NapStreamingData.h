#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/NapStreaming/AdditionLockLevel.h"
#include "unitysdk/NapStreaming/StreamingCommand.h"
#include "unitysdk/NapStreaming/StreamingGridJobData.h"
#include "unitysdk/NapStreaming/StreamingLayer.h"
#include "unitysdk/NapStreaming/StreamingLayerJobData.h"
#include "unitysdk/NapStreaming/StreamingState.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/Unity/Collections/NativeList_1.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector3Int.h"

namespace NapStreaming { class NapStreamingData_StreamingGridData; }
namespace NapStreaming { class NapStreamingData_StreamingLayerData; }
namespace NapStreaming { class NapStreamingData_StreamingPOIData; }
namespace NapStreaming { class NapStreamingData_StreamingPVSData; }
namespace NapStreaming { class NapStreamingData_StreamingViewportData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NAPSTREAMING_NAPSTREAMINGDATA_ADDITIONALPOSUPDATE_OFFSET UNITYSDK_OFFSET(0x106800B0)
#define NAPSTREAMING_NAPSTREAMINGDATA_APPLYRESULT_OFFSET UNITYSDK_OFFSET(0x1067E660)
#define NAPSTREAMING_NAPSTREAMINGDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10681A80)
#define NAPSTREAMING_NAPSTREAMINGDATA_GETGRIDSTATEUNSAFE_OFFSET UNITYSDK_OFFSET(0x1067E080)
#define NAPSTREAMING_NAPSTREAMINGDATA_GETLOADDISTANCECOEFFICIENT_OFFSET UNITYSDK_OFFSET(0x1067DA20)
#define NAPSTREAMING_NAPSTREAMINGDATA_GETMOVEVELOCITY_OFFSET UNITYSDK_OFFSET(0x1067DC30)
#define NAPSTREAMING_NAPSTREAMINGDATA_GETPVSINDEX_OFFSET UNITYSDK_OFFSET(0x1067D760)
#define NAPSTREAMING_NAPSTREAMINGDATA_GETSTREAMINGASSETPATH_OFFSET UNITYSDK_OFFSET(0x1067D890)
#define NAPSTREAMING_NAPSTREAMINGDATA_GETSTREAMINGLAYERNEEDLOAD_OFFSET UNITYSDK_OFFSET(0x106814A0)
#define NAPSTREAMING_NAPSTREAMINGDATA_INIT_OFFSET UNITYSDK_OFFSET(0x106808B0)
#define NAPSTREAMING_NAPSTREAMINGDATA_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x10681A30)
#define NAPSTREAMING_NAPSTREAMINGDATA_POSUPDATE_OFFSET UNITYSDK_OFFSET(0x1067E0F0)
#define NAPSTREAMING_NAPSTREAMINGDATA_SETGRIDSTATETHREADSAFE_OFFSET UNITYSDK_OFFSET(0x1067DFE0)
#define NAPSTREAMING_NAPSTREAMINGDATA_SETSTREAMINGLAYERNEEDLOAD_OFFSET UNITYSDK_OFFSET(0x10681680)
#define NAPSTREAMING_NAPSTREAMINGDATA_SETSTREAMINGOBJECTSVISIBLE_OFFSET UNITYSDK_OFFSET(0x106816E0)
#define NAPSTREAMING_NAPSTREAMINGDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x10681F50)
#define NAPSTREAMING_NAPSTREAMINGDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x10681E20)

namespace NapStreaming
{
	inline static constexpr unsigned int NapStreamingData_TypeDefinitionIndex = 41792;

	class NapStreamingData : public ::UnityEngine::ScriptableObject
	{
	public:
		static ::System::Boolean* StaticGet_isMobileShadowOff()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapStreamingData_TypeDefinitionIndex)->GetStaticField(0x10E50);
		}
		::System::Collections::Generic::List_1<::NapStreaming::NapStreamingData_StreamingLayerData*>* layers; // 0x18
		::System::Collections::Generic::List_1<::NapStreaming::NapStreamingData_StreamingGridData*>* grids; // 0x20
		::System::Collections::Generic::List_1<::NapStreaming::NapStreamingData_StreamingPVSData*>* pvs; // 0x28
		::System::Collections::Generic::List_1<::NapStreaming::NapStreamingData_StreamingViewportData*>* viewports; // 0x30
		::System::Collections::Generic::List_1<::System::Int32>* pvsIndexMap; // 0x38
		::System::Collections::Generic::List_1<::NapStreaming::NapStreamingData_StreamingPOIData*>* poiDatas; // 0x40
		::System::Int32 gridCount; // 0x48
		::UnityEngine::Vector3Int pvsCellCount; // 0x4C
		::UnityEngine::Vector3 minPos; // 0x58
		::UnityEngine::Vector3 pvsCellSize; // 0x64
		::System::Boolean cookedPVS; // 0x70
		::System::Boolean cookedPOI; // 0x71
		::System::Boolean cookedLowPrefab; // 0x72
		::System::Boolean cookedEffectLowPrefab; // 0x73
		::System::Boolean cookedYGap; // 0x74
		::System::Single yGapDistance; // 0x78
		::System::String* prefabPathPrefix; // 0x80
		::System::String* lowPrefabPathPrefix; // 0x88
		::System::String* hlodPathPrefix; // 0x90
		::Unity::Collections::NativeArray_1<::NapStreaming::StreamingGridJobData> gridDatas; // 0x98
		::Unity::Collections::NativeList_1<::NapStreaming::StreamingCommand> gridCommands; // 0xA8
		::Unity::Collections::NativeArray_1<::System::Boolean> pvsVisibleStates; // 0xB8
		::Unity::Collections::NativeArray_1<::NapStreaming::StreamingLayerJobData> layerDatas; // 0xC8
		::Unity::Collections::NativeArray_1<::NapStreaming::StreamingState> gridStates; // 0xD8
		::Unity::Collections::NativeArray_1<::System::Boolean> poiVisibleStates; // 0xE8
		::Unity::Collections::NativeArray_1<::NapStreaming::AdditionLockLevel> additionalLockStates; // 0xF8
		::Unity::Jobs::JobHandle updateHandle; // 0x108
		::System::Boolean dispatched; // 0x118
		::System::Int32 poiIndex; // 0x11C
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*>* additionalLoadChecks; // 0x120
		::System::Collections::Generic::List_1<::System::Int32>* loadDoneAdditionalIds; // 0x128

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGDATA__CCTOR_OFFSET))();
		}

		::System::Int32 GetPVSIndex(::UnityEngine::Vector3 cameraPos)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGDATA_GETPVSINDEX_OFFSET))(this, cameraPos);
		}

		::Foundation::AssetPath GetStreamingAssetPath(::System::String* path, ::NapStreaming::StreamingLayer layer, ::System::Boolean isHlod)
		{
			return ((::Foundation::AssetPath(*)(::PVOID, ::System::String*, ::NapStreaming::StreamingLayer, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGDATA_GETSTREAMINGASSETPATH_OFFSET))(this, path, layer, isHlod);
		}

		::System::Single GetLoadDistanceCoefficient(::UnityEngine::Vector3 cameraPos, ::System::Boolean& isViewPort)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean&))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGDATA_GETLOADDISTANCECOEFFICIENT_OFFSET))(this, cameraPos, isViewPort);
		}

		::UnityEngine::Vector3 GetMoveVelocity()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGDATA_GETMOVEVELOCITY_OFFSET))(this);
		}

		::System::Void SetGridStateThreadSafe(::System::Int32 gridIndex, ::NapStreaming::StreamingState state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::NapStreaming::StreamingState))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGDATA_SETGRIDSTATETHREADSAFE_OFFSET))(this, gridIndex, state);
		}

		::NapStreaming::StreamingState GetGridStateUnSafe(::System::Int32 gridIndex)
		{
			return ((::NapStreaming::StreamingState(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGDATA_GETGRIDSTATEUNSAFE_OFFSET))(this, gridIndex);
		}

		::System::Void PosUpdate(::UnityEngine::Vector3 cameraPos, ::System::Boolean checkVisible, ::System::Boolean checkPOI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGDATA_POSUPDATE_OFFSET))(this, cameraPos, checkVisible, checkPOI);
		}

		::System::Void ApplyResult()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGDATA_APPLYRESULT_OFFSET))(this);
		}

		::System::Void AdditionalPosUpdate(::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Vector3>*& additionPositions, ::System::Boolean checkVisible)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Vector3>*&, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGDATA_ADDITIONALPOSUPDATE_OFFSET))(this, additionPositions, checkVisible);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGDATA_INIT_OFFSET))(this);
		}

		::System::Boolean GetStreamingLayerNeedLoad(::NapStreaming::StreamingLayer layer)
		{
			return ((::System::Boolean(*)(::PVOID, ::NapStreaming::StreamingLayer))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGDATA_GETSTREAMINGLAYERNEEDLOAD_OFFSET))(this, layer);
		}

		::System::Void SetStreamingLayerNeedLoad(::NapStreaming::StreamingLayer layer, ::System::Boolean needLoad)
		{
			return ((::System::Void(*)(::PVOID, ::NapStreaming::StreamingLayer, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGDATA_SETSTREAMINGLAYERNEEDLOAD_OFFSET))(this, layer, needLoad);
		}

		::System::Void SetStreamingObjectsVisible(::System::Boolean visible)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGDATA_SETSTREAMINGOBJECTSVISIBLE_OFFSET))(this, visible);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGDATA_ONDESTROY_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGDATA_DISPOSE_OFFSET))(this);
		}
	};
}
