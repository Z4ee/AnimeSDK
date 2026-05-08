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

#define NAPSTREAMING_NAPSTREAMINGGENERATECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1150E320)

namespace NapStreaming
{
	inline static constexpr unsigned int NapStreamingGenerateConfig_TypeDefinitionIndex = 77276;

	class NapStreamingGenerateConfig : public ::Sirenix::OdinInspector::SerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::NapStreaming::StreamingLayer, ::NapStreaming::StreamingLayerGenerateData>* genreteDatas; // 0x58
		::System::Collections::Generic::List_1<::NapStreaming::SceneLayerToStreamingData>* sceneLayerInfos; // 0x60
		::System::Collections::Generic::List_1<::NapStreaming::NonStreamingGenerateData>* nonStreamingNamePatterns; // 0x68
		::System::Boolean cookPvs; // 0x70
		::UnityEngine::Vector3 pvsCellSize; // 0x74
		::UnityEngine::Vector3 pvsSampleGap; // 0x80
		::System::Int32 pvsSampleCount; // 0x8C
		::System::Boolean combineShadowProxy; // 0x90
		::System::Boolean splitExtraHeight; // 0x91
		::System::Boolean splitLowMemory; // 0x92
		::System::Boolean generateLowPrefab; // 0x93
		::System::Boolean convertLODGroupToLODMesh; // 0x94
		::System::Boolean splitSmallShadowProxy; // 0x95
		::System::Single smallShadowProxySize; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGGENERATECONFIG__CTOR_OFFSET))(this);
		}
	};
}
