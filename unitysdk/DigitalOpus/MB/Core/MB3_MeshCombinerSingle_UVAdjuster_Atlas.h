#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DigitalOpus/MB/Core/MB2_LogLevel.h"
#include "unitysdk/DigitalOpus/MB/Core/MB_TextureTilingTreatment.h"
#include "unitysdk/DigitalOpus/MB/Core/MB_Utility_MeshAnalysisResult.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rect.h"

class MB2_TextureBakeResults;
class MB_MaterialAndUVRect;
namespace DigitalOpus::MB::Core { class MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface; }
namespace DigitalOpus::MB::Core { class MB3_MeshCombinerSingle_MB_DynamicGameObject; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Specialized { class OrderedDictionary; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }

#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_UVADJUSTER_ATLAS_ISSAMEMATERIALINTEXTUREBAKERESULT_OFFSET UNITYSDK_OFFSET(0x1BCFB6A0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_UVADJUSTER_ATLAS_MAPSHAREDMATERIALSTOATLASRECTS_OFFSET UNITYSDK_OFFSET(0x1BCFA880)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_UVADJUSTER_ATLAS_TRYMAPMATERIALTOUVRECT_OFFSET UNITYSDK_OFFSET(0x1BCFBA20)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_UVADJUSTER_ATLAS__CTOR_OFFSET UNITYSDK_OFFSET(0x1BCFA240)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB3_MeshCombinerSingle_UVAdjuster_Atlas_TypeDefinitionIndex = 85071;

	class MB3_MeshCombinerSingle_UVAdjuster_Atlas : public ::System::Object
	{
	public:
		::Il2CppArray<::MB_MaterialAndUVRect*>* matsAndSrcUVRect; // 0x10
		::Il2CppArray<::System::Int32>* numTimesMatAppearsInAtlas; // 0x18
		::MB2_TextureBakeResults* textureBakeResults; // 0x20
		::System::Boolean compareNamesWhenComparingMaterials; // 0x28
		::DigitalOpus::MB::Core::MB2_LogLevel LOG_LEVEL; // 0x2C

		::System::Void _ctor(::MB2_TextureBakeResults* tbr, ::DigitalOpus::MB::Core::MB2_LogLevel ll)
		{
			return ((::System::Void(*)(::PVOID, ::MB2_TextureBakeResults*, ::DigitalOpus::MB::Core::MB2_LogLevel))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_UVADJUSTER_ATLAS__CTOR_OFFSET))(this, tbr, ll);
		}

		::System::Boolean MapSharedMaterialsToAtlasRects(::Il2CppArray<::UnityEngine::Material*>* sharedMaterials, ::System::Boolean checkTargetSubmeshIdxsFromPreviousBake, ::UnityEngine::Mesh* m, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface* meshChannelsCache, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Il2CppArray<::DigitalOpus::MB::Core::MB_Utility_MeshAnalysisResult>*>* meshAnalysisResultsCache, ::System::Collections::Specialized::OrderedDictionary* sourceMats2submeshIdx_map, ::UnityEngine::GameObject* go, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject* dgoOut)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::UnityEngine::Material*>*, ::System::Boolean, ::UnityEngine::Mesh*, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Il2CppArray<::DigitalOpus::MB::Core::MB_Utility_MeshAnalysisResult>*>*, ::System::Collections::Specialized::OrderedDictionary*, ::UnityEngine::GameObject*, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_UVADJUSTER_ATLAS_MAPSHAREDMATERIALSTOATLASRECTS_OFFSET))(this, sharedMaterials, checkTargetSubmeshIdxsFromPreviousBake, m, meshChannelsCache, meshAnalysisResultsCache, sourceMats2submeshIdx_map, go, dgoOut);
		}

		::System::Boolean IsSameMaterialInTextureBakeResult(::UnityEngine::Material* a, ::UnityEngine::Material* b)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_UVADJUSTER_ATLAS_ISSAMEMATERIALINTEXTUREBAKERESULT_OFFSET))(this, a, b);
		}

		::System::Boolean TryMapMaterialToUVRect(::UnityEngine::Material* mat, ::UnityEngine::Mesh* m, ::System::Int32 submeshIdx, ::System::Int32 idxInResultMats, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface* meshChannelCache, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Il2CppArray<::DigitalOpus::MB::Core::MB_Utility_MeshAnalysisResult>*>* meshAnalysisCache, ::DigitalOpus::MB::Core::MB_TextureTilingTreatment& tilingTreatment, ::UnityEngine::Rect& rectInAtlas, ::UnityEngine::Rect& encapsulatingRectOut, ::UnityEngine::Rect& sourceMaterialTilingOut, ::System::Int32& sliceIdx, ::System::String*& errorMsg, ::DigitalOpus::MB::Core::MB2_LogLevel logLevel)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Mesh*, ::System::Int32, ::System::Int32, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Il2CppArray<::DigitalOpus::MB::Core::MB_Utility_MeshAnalysisResult>*>*, ::DigitalOpus::MB::Core::MB_TextureTilingTreatment&, ::UnityEngine::Rect&, ::UnityEngine::Rect&, ::UnityEngine::Rect&, ::System::Int32&, ::System::String*&, ::DigitalOpus::MB::Core::MB2_LogLevel))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_UVADJUSTER_ATLAS_TRYMAPMATERIALTOUVRECT_OFFSET))(this, mat, m, submeshIdx, idxInResultMats, meshChannelCache, meshAnalysisCache, tilingTreatment, rectInAtlas, encapsulatingRectOut, sourceMaterialTilingOut, sliceIdx, errorMsg, logLevel);
		}
	};
}
