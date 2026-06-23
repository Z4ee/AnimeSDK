#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DigitalOpus/MB/Core/AtlasPadding.h"
#include "unitysdk/DigitalOpus/MB/Core/MB2_TexturePacker.h"
#include "unitysdk/DigitalOpus/MB/Core/MB2_TexturePackerHorizontalVert_TexturePackingOrientation.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace DigitalOpus::MB::Core { class AtlasPackingResult; }
namespace DigitalOpus::MB::Core { class MB2_TexturePacker_Image; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DIGITALOPUS_MB_CORE_MB2_TEXTUREPACKERHORIZONTALVERT_GETRECTS_1_OFFSET UNITYSDK_OFFSET(0x1E2C9FC0)
#define DIGITALOPUS_MB_CORE_MB2_TEXTUREPACKERHORIZONTALVERT_GETRECTS_OFFSET UNITYSDK_OFFSET(0x1E2C9ED0)
#define DIGITALOPUS_MB_CORE_MB2_TEXTUREPACKERHORIZONTALVERT_POPLARGESTTHATFITS_OFFSET UNITYSDK_OFFSET(0x1E2CCD80)
#define DIGITALOPUS_MB_CORE_MB2_TEXTUREPACKERHORIZONTALVERT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E2CCE90)
#define DIGITALOPUS_MB_CORE_MB2_TEXTUREPACKERHORIZONTALVERT__GETRECTSMULTIATLASHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x1E2CAE50)
#define DIGITALOPUS_MB_CORE_MB2_TEXTUREPACKERHORIZONTALVERT__GETRECTSMULTIATLASVERTICAL_OFFSET UNITYSDK_OFFSET(0x1E2CA320)
#define DIGITALOPUS_MB_CORE_MB2_TEXTUREPACKERHORIZONTALVERT__GETRECTSSINGLEATLAS_OFFSET UNITYSDK_OFFSET(0x1E2CB9B0)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB2_TexturePackerHorizontalVert_TypeDefinitionIndex = 90686;

	class MB2_TexturePackerHorizontalVert : public ::DigitalOpus::MB::Core::MB2_TexturePacker
	{
	public:
		::DigitalOpus::MB::Core::MB2_TexturePackerHorizontalVert_TexturePackingOrientation packingOrientation; // 0x18
		::System::Boolean stretchImagesToEdges; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB2_TEXTUREPACKERHORIZONTALVERT__CTOR_OFFSET))(this);
		}

		::Il2CppArray<::DigitalOpus::MB::Core::AtlasPackingResult*>* GetRects(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* imgWidthHeights, ::System::Int32 maxDimensionX, ::System::Int32 maxDimensionY, ::System::Int32 padding)
		{
			return ((::Il2CppArray<::DigitalOpus::MB::Core::AtlasPackingResult*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB2_TEXTUREPACKERHORIZONTALVERT_GETRECTS_OFFSET))(this, imgWidthHeights, maxDimensionX, maxDimensionY, padding);
		}

		::Il2CppArray<::DigitalOpus::MB::Core::AtlasPackingResult*>* GetRects_1(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* imgWidthHeights, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPadding>* paddings, ::System::Int32 maxDimensionX, ::System::Int32 maxDimensionY, ::System::Boolean doMultiAtlas)
		{
			return ((::Il2CppArray<::DigitalOpus::MB::Core::AtlasPackingResult*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPadding>*, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB2_TEXTUREPACKERHORIZONTALVERT_GETRECTS_1_OFFSET))(this, imgWidthHeights, paddings, maxDimensionX, maxDimensionY, doMultiAtlas);
		}

		::DigitalOpus::MB::Core::AtlasPackingResult* _GetRectsSingleAtlas(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* imgWidthHeights, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPadding>* paddings, ::System::Int32 maxDimensionX, ::System::Int32 maxDimensionY, ::System::Int32 minImageSizeX, ::System::Int32 minImageSizeY, ::System::Int32 masterImageSizeX, ::System::Int32 masterImageSizeY, ::System::Int32 recursionDepth)
		{
			return ((::DigitalOpus::MB::Core::AtlasPackingResult*(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPadding>*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB2_TEXTUREPACKERHORIZONTALVERT__GETRECTSSINGLEATLAS_OFFSET))(this, imgWidthHeights, paddings, maxDimensionX, maxDimensionY, minImageSizeX, minImageSizeY, masterImageSizeX, masterImageSizeY, recursionDepth);
		}

		::Il2CppArray<::DigitalOpus::MB::Core::AtlasPackingResult*>* _GetRectsMultiAtlasVertical(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* imgWidthHeights, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPadding>* paddings, ::System::Int32 maxDimensionPassedX, ::System::Int32 maxDimensionPassedY, ::System::Int32 minImageSizeX, ::System::Int32 minImageSizeY, ::System::Int32 masterImageSizeX, ::System::Int32 masterImageSizeY)
		{
			return ((::Il2CppArray<::DigitalOpus::MB::Core::AtlasPackingResult*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPadding>*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB2_TEXTUREPACKERHORIZONTALVERT__GETRECTSMULTIATLASVERTICAL_OFFSET))(this, imgWidthHeights, paddings, maxDimensionPassedX, maxDimensionPassedY, minImageSizeX, minImageSizeY, masterImageSizeX, masterImageSizeY);
		}

		::Il2CppArray<::DigitalOpus::MB::Core::AtlasPackingResult*>* _GetRectsMultiAtlasHorizontal(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* imgWidthHeights, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPadding>* paddings, ::System::Int32 maxDimensionPassedX, ::System::Int32 maxDimensionPassedY, ::System::Int32 minImageSizeX, ::System::Int32 minImageSizeY, ::System::Int32 masterImageSizeX, ::System::Int32 masterImageSizeY)
		{
			return ((::Il2CppArray<::DigitalOpus::MB::Core::AtlasPackingResult*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPadding>*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB2_TEXTUREPACKERHORIZONTALVERT__GETRECTSMULTIATLASHORIZONTAL_OFFSET))(this, imgWidthHeights, paddings, maxDimensionPassedX, maxDimensionPassedY, minImageSizeX, minImageSizeY, masterImageSizeX, masterImageSizeY);
		}

		::DigitalOpus::MB::Core::MB2_TexturePacker_Image* PopLargestThatFits(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB2_TexturePacker_Image*>* images, ::System::Int32 spaceRemaining, ::System::Int32 maxDim, ::System::Boolean emptyAtlas)
		{
			return ((::DigitalOpus::MB::Core::MB2_TexturePacker_Image*(*)(::PVOID, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB2_TexturePacker_Image*>*, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB2_TEXTUREPACKERHORIZONTALVERT_POPLARGESTTHATFITS_OFFSET))(this, images, spaceRemaining, maxDim, emptyAtlas);
		}
	};
}
