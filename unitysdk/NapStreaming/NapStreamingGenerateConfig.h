#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NapStreaming/NonStreamingGenerateData.h"
#include "unitysdk/NapStreaming/SceneLayerToStreamingData.h"
#include "unitysdk/NapStreaming/StreamingLayer.h"
#include "unitysdk/NapStreaming/StreamingLayerGenerateData.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedScriptableObject.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NAPSTREAMING_NAPSTREAMINGGENERATECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x11950DA0)

namespace NapStreaming
{
	inline static constexpr unsigned int NapStreamingGenerateConfig_TypeDefinitionIndex = 72561;

	class NapStreamingGenerateConfig : public ::Sirenix::OdinInspector::SerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::NapStreaming::StreamingLayer, ::NapStreaming::StreamingLayerGenerateData>* genreteDatas; // 0x58
		::System::Collections::Generic::List_1<::NapStreaming::SceneLayerToStreamingData>* sceneLayerInfos; // 0x60
		::System::Collections::Generic::List_1<::NapStreaming::NonStreamingGenerateData>* nonStreamingNamePatterns; // 0x68
		::System::Boolean cookPvs; // 0x70
		::System::Boolean cookYGap; // 0x71
		::System::Single yGapDistance; // 0x74
		::System::Boolean mergeCollider; // 0x78
		::UnityEngine::Vector3 pvsCellSize; // 0x7C
		::UnityEngine::Vector3 pvsSampleGap; // 0x88
		::System::Int32 pvsSampleCount; // 0x94
		::System::Boolean combineShadowProxy; // 0x98
		::System::Boolean splitExtraHeight; // 0x99
		::System::Boolean splitLowMemory; // 0x9A
		::System::Boolean generateLowPrefab; // 0x9B
		::System::Boolean supportEffectLowPrefab; // 0x9C
		::System::Boolean forceUseLowPrefab; // 0x9D
		::System::Boolean convertLODGroupToLODMesh; // 0x9E
		::System::Boolean splitSmallShadowProxy; // 0x9F
		::System::Single smallShadowProxySize; // 0xA0
		::System::Boolean fixShadowOffOnMobileNotWorkForNoneProxyRenderer; // 0xA4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGGENERATECONFIG__CTOR_OFFSET))(this);
		}
	};
}
