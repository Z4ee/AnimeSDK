#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DigitalOpus/MB/Core/AtlasPadding.h"
#include "unitysdk/DigitalOpus/MB/Core/MB2_PackingAlgorithmEnum.h"
#include "unitysdk/DigitalOpus/MB/Core/MB_TextureTilingTreatment.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rect.h"

namespace DigitalOpus::MB::Core { class AtlasPackingResult; }
namespace DigitalOpus::MB::Core { class MB_TexSet; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERMESHBAKERHORIZONTALVERTICAL_VERTICALPIPELINE_GETEDGE2EDGETREATMENT_OFFSET UNITYSDK_OFFSET(0x1F728BF0)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERMESHBAKERHORIZONTALVERTICAL_VERTICALPIPELINE_GETEXTRAROOMFORREGULARATLAS_OFFSET UNITYSDK_OFFSET(0x1F728D90)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERMESHBAKERHORIZONTALVERTICAL_VERTICALPIPELINE_GETPACKINGALG_OFFSET UNITYSDK_OFFSET(0x1F728B20)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERMESHBAKERHORIZONTALVERTICAL_VERTICALPIPELINE_INITIALIZEATLASPADDING_OFFSET UNITYSDK_OFFSET(0x1F728C00)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERMESHBAKERHORIZONTALVERTICAL_VERTICALPIPELINE_MERGEATLASPACKINGRESULTSTACKBONAINTERNAL_OFFSET UNITYSDK_OFFSET(0x1F728C10)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERMESHBAKERHORIZONTALVERTICAL_VERTICALPIPELINE_SORTTEXSETINTOBINS_OFFSET UNITYSDK_OFFSET(0x1F728B30)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERMESHBAKERHORIZONTALVERTICAL_VERTICALPIPELINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F728DB0)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB3_TextureCombinerPackerMeshBakerHorizontalVertical_VerticalPipeline_TypeDefinitionIndex = 94666;

	class MB3_TextureCombinerPackerMeshBakerHorizontalVertical_VerticalPipeline : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERMESHBAKERHORIZONTALVERTICAL_VERTICALPIPELINE__CTOR_OFFSET))(this);
		}

		::DigitalOpus::MB::Core::MB2_PackingAlgorithmEnum GetPackingAlg()
		{
			return ((::DigitalOpus::MB::Core::MB2_PackingAlgorithmEnum(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERMESHBAKERHORIZONTALVERTICAL_VERTICALPIPELINE_GETPACKINGALG_OFFSET))(this);
		}

		::System::Void SortTexSetIntoBins(::DigitalOpus::MB::Core::MB_TexSet* texSet, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB_TexSet*>* horizontalVert, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB_TexSet*>* regular, ::System::Int32 maxAtlasWidth, ::System::Int32 maxAtlasHeight)
		{
			return ((::System::Void(*)(::PVOID, ::DigitalOpus::MB::Core::MB_TexSet*, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB_TexSet*>*, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB_TexSet*>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERMESHBAKERHORIZONTALVERTICAL_VERTICALPIPELINE_SORTTEXSETINTOBINS_OFFSET))(this, texSet, horizontalVert, regular, maxAtlasWidth, maxAtlasHeight);
		}

		::DigitalOpus::MB::Core::MB_TextureTilingTreatment GetEdge2EdgeTreatment()
		{
			return ((::DigitalOpus::MB::Core::MB_TextureTilingTreatment(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERMESHBAKERHORIZONTALVERTICAL_VERTICALPIPELINE_GETEDGE2EDGETREATMENT_OFFSET))(this);
		}

		::System::Void InitializeAtlasPadding(::DigitalOpus::MB::Core::AtlasPadding& padding, ::System::Int32 paddingValue)
		{
			return ((::System::Void(*)(::PVOID, ::DigitalOpus::MB::Core::AtlasPadding&, ::System::Int32))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERMESHBAKERHORIZONTALVERTICAL_VERTICALPIPELINE_INITIALIZEATLASPADDING_OFFSET))(this, padding, paddingValue);
		}

		::System::Void MergeAtlasPackingResultStackBonAInternal(::DigitalOpus::MB::Core::AtlasPackingResult* a, ::DigitalOpus::MB::Core::AtlasPackingResult* b, ::UnityEngine::Rect& AatlasToFinal, ::UnityEngine::Rect& BatlasToFinal, ::System::Boolean stretchBToAtlasWidth, ::System::Int32 maxWidthDim, ::System::Int32 maxHeightDim, ::System::Int32& atlasX, ::System::Int32& atlasY)
		{
			return ((::System::Void(*)(::PVOID, ::DigitalOpus::MB::Core::AtlasPackingResult*, ::DigitalOpus::MB::Core::AtlasPackingResult*, ::UnityEngine::Rect&, ::UnityEngine::Rect&, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERMESHBAKERHORIZONTALVERTICAL_VERTICALPIPELINE_MERGEATLASPACKINGRESULTSTACKBONAINTERNAL_OFFSET))(this, a, b, AatlasToFinal, BatlasToFinal, stretchBToAtlasWidth, maxWidthDim, maxHeightDim, atlasX, atlasY);
		}

		::System::Void GetExtraRoomForRegularAtlas(::System::Int32 usedHorizontalVertWidth, ::System::Int32 usedHorizontalVertHeight, ::System::Int32 maxAtlasWidth, ::System::Int32 maxAtlasHeight, ::System::Int32& atlasRegularMaxWidth, ::System::Int32& atlasRegularMaxHeight)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERMESHBAKERHORIZONTALVERTICAL_VERTICALPIPELINE_GETEXTRAROOMFORREGULARATLAS_OFFSET))(this, usedHorizontalVertWidth, usedHorizontalVertHeight, maxAtlasWidth, maxAtlasHeight, atlasRegularMaxWidth, atlasRegularMaxHeight);
		}
	};
}
