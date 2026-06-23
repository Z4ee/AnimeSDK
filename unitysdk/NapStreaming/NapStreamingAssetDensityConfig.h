#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NapStreaming/SceneDensityInfo.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedScriptableObject.h"

namespace NapStreaming { class SceneAssetDensityCell; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NAPSTREAMING_NAPSTREAMINGASSETDENSITYCONFIG_CHECKNEEDGENERATE_OFFSET UNITYSDK_OFFSET(0x10D97420)
#define NAPSTREAMING_NAPSTREAMINGASSETDENSITYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x10D974A0)

namespace NapStreaming
{
	inline static constexpr unsigned int NapStreamingAssetDensityConfig_TypeDefinitionIndex = 44774;

	class NapStreamingAssetDensityConfig : public ::Sirenix::OdinInspector::SerializedScriptableObject
	{
	public:
		::NapStreaming::SceneAssetDensityCell* avgCell; // 0x58
		::NapStreaming::SceneAssetDensityCell* maxCell; // 0x60
		::NapStreaming::SceneAssetDensityCell* farCell; // 0x68
		::System::Single percent; // 0x70
		::System::Int32 minCellCount; // 0x74
		::System::Int32 lightmapCount; // 0x78
		::System::Single kodamaDataSize; // 0x7C
		::System::Collections::Generic::Dictionary_2<::System::String*, ::NapStreaming::SceneDensityInfo>* allSceneInfos; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGASSETDENSITYCONFIG__CTOR_OFFSET))(this);
		}

		::System::Boolean CheckNeedGenerate(::System::String* scenePath, ::System::String*& md5)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*&))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGASSETDENSITYCONFIG_CHECKNEEDGENERATE_OFFSET))(this, scenePath, md5);
		}
	};
}
