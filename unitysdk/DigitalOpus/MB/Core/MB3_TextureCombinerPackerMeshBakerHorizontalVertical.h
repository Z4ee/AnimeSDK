#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DigitalOpus/MB/Core/MB2_LogLevel.h"
#include "unitysdk/DigitalOpus/MB/Core/MB3_TextureCombinerPackerMeshBaker.h"
#include "unitysdk/DigitalOpus/MB/Core/MB3_TextureCombinerPackerMeshBakerHorizontalVertical_AtlasDirection.h"

namespace DigitalOpus::MB::Core { class AtlasPackingResult; }
namespace DigitalOpus::MB::Core { class MB3_TextureCombinerPackerMeshBakerHorizontalVertical_IPipeline; }
namespace DigitalOpus::MB::Core { class MB3_TextureCombinerPipeline_TexturePipelineData; }

#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERMESHBAKERHORIZONTALVERTICAL_CALCULATEATLASRECTANGLES_OFFSET UNITYSDK_OFFSET(0x1E13E760)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERMESHBAKERHORIZONTALVERTICAL_MERGEATLASPACKINGRESULTSTACKBONA_OFFSET UNITYSDK_OFFSET(0x1E1400F0)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERMESHBAKERHORIZONTALVERTICAL_TESTSTACKRECTANGLESHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x1E1406F0)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERMESHBAKERHORIZONTALVERTICAL_TESTSTACKRECTANGLESVERTICAL_OFFSET UNITYSDK_OFFSET(0x1E140760)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERMESHBAKERHORIZONTALVERTICAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1E13E750)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB3_TextureCombinerPackerMeshBakerHorizontalVertical_TypeDefinitionIndex = 90731;

	class MB3_TextureCombinerPackerMeshBakerHorizontalVertical : public ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker
	{
	public:
		::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_AtlasDirection _atlasDirection; // 0x10

		::System::Void _ctor(::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_AtlasDirection ad)
		{
			return ((::System::Void(*)(::PVOID, ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_AtlasDirection))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERMESHBAKERHORIZONTALVERTICAL__CTOR_OFFSET))(this, ad);
		}

		::Il2CppArray<::DigitalOpus::MB::Core::AtlasPackingResult*>* CalculateAtlasRectangles(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData* data, ::System::Boolean doMultiAtlas, ::DigitalOpus::MB::Core::MB2_LogLevel LOG_LEVEL)
		{
			return ((::Il2CppArray<::DigitalOpus::MB::Core::AtlasPackingResult*>*(*)(::PVOID, ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*, ::System::Boolean, ::DigitalOpus::MB::Core::MB2_LogLevel))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERMESHBAKERHORIZONTALVERTICAL_CALCULATEATLASRECTANGLES_OFFSET))(this, data, doMultiAtlas, LOG_LEVEL);
		}

		static ::DigitalOpus::MB::Core::AtlasPackingResult* TestStackRectanglesHorizontal(::DigitalOpus::MB::Core::AtlasPackingResult* a, ::DigitalOpus::MB::Core::AtlasPackingResult* b, ::System::Int32 maxHeightDim, ::System::Int32 maxWidthDim, ::System::Boolean stretchBToAtlasWidth)
		{
			return ((::DigitalOpus::MB::Core::AtlasPackingResult*(*)(::DigitalOpus::MB::Core::AtlasPackingResult*, ::DigitalOpus::MB::Core::AtlasPackingResult*, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERMESHBAKERHORIZONTALVERTICAL_TESTSTACKRECTANGLESHORIZONTAL_OFFSET))(a, b, maxHeightDim, maxWidthDim, stretchBToAtlasWidth);
		}

		static ::DigitalOpus::MB::Core::AtlasPackingResult* TestStackRectanglesVertical(::DigitalOpus::MB::Core::AtlasPackingResult* a, ::DigitalOpus::MB::Core::AtlasPackingResult* b, ::System::Int32 maxHeightDim, ::System::Int32 maxWidthDim, ::System::Boolean stretchBToAtlasWidth)
		{
			return ((::DigitalOpus::MB::Core::AtlasPackingResult*(*)(::DigitalOpus::MB::Core::AtlasPackingResult*, ::DigitalOpus::MB::Core::AtlasPackingResult*, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERMESHBAKERHORIZONTALVERTICAL_TESTSTACKRECTANGLESVERTICAL_OFFSET))(a, b, maxHeightDim, maxWidthDim, stretchBToAtlasWidth);
		}

		static ::DigitalOpus::MB::Core::AtlasPackingResult* MergeAtlasPackingResultStackBonA(::DigitalOpus::MB::Core::AtlasPackingResult* a, ::DigitalOpus::MB::Core::AtlasPackingResult* b, ::System::Int32 maxWidthDim, ::System::Int32 maxHeightDim, ::System::Boolean stretchBToAtlasWidth, ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_IPipeline* pipeline)
		{
			return ((::DigitalOpus::MB::Core::AtlasPackingResult*(*)(::DigitalOpus::MB::Core::AtlasPackingResult*, ::DigitalOpus::MB::Core::AtlasPackingResult*, ::System::Int32, ::System::Int32, ::System::Boolean, ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_IPipeline*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERMESHBAKERHORIZONTALVERTICAL_MERGEATLASPACKINGRESULTSTACKBONA_OFFSET))(a, b, maxWidthDim, maxHeightDim, stretchBToAtlasWidth, pipeline);
		}
	};
}
