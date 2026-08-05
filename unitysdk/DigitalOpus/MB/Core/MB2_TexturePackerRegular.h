#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DigitalOpus/MB/Core/AtlasPadding.h"
#include "unitysdk/DigitalOpus/MB/Core/MB2_TexturePacker.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace DigitalOpus::MB::Core { class AtlasPackingResult; }
namespace DigitalOpus::MB::Core { class MB2_TexturePackerRegular_Node; }
namespace DigitalOpus::MB::Core { class MB2_TexturePackerRegular_ProbeResult; }
namespace DigitalOpus::MB::Core { class MB2_TexturePacker_Image; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DIGITALOPUS_MB_CORE_MB2_TEXTUREPACKERREGULAR_DRAWGIZMOSNODE_OFFSET UNITYSDK_OFFSET(0x1EE2D4B0)
#define DIGITALOPUS_MB_CORE_MB2_TEXTUREPACKERREGULAR_DRAWGIZMOS_OFFSET UNITYSDK_OFFSET(0x1EE2D760)
#define DIGITALOPUS_MB_CORE_MB2_TEXTUREPACKERREGULAR_FLATTENTREE_OFFSET UNITYSDK_OFFSET(0x1EE2D2F0)
#define DIGITALOPUS_MB_CORE_MB2_TEXTUREPACKERREGULAR_GETEXTENT_OFFSET UNITYSDK_OFFSET(0x1EE2E080)
#define DIGITALOPUS_MB_CORE_MB2_TEXTUREPACKERREGULAR_GETRECTS_1_OFFSET UNITYSDK_OFFSET(0x1EE2E900)
#define DIGITALOPUS_MB_CORE_MB2_TEXTUREPACKERREGULAR_GETRECTS_OFFSET UNITYSDK_OFFSET(0x1EE2E810)
#define DIGITALOPUS_MB_CORE_MB2_TEXTUREPACKERREGULAR_PRINTTREE_OFFSET UNITYSDK_OFFSET(0x1EE2CEE0)
#define DIGITALOPUS_MB_CORE_MB2_TEXTUREPACKERREGULAR_PROBEMULTIATLAS_OFFSET UNITYSDK_OFFSET(0x1EE2E160)
#define DIGITALOPUS_MB_CORE_MB2_TEXTUREPACKERREGULAR_PROBESINGLEATLAS_OFFSET UNITYSDK_OFFSET(0x1EE2D800)
#define DIGITALOPUS_MB_CORE_MB2_TEXTUREPACKERREGULAR_STEPWIDTHHEIGHT_OFFSET UNITYSDK_OFFSET(0x1EE2E7E0)
#define DIGITALOPUS_MB_CORE_MB2_TEXTUREPACKERREGULAR__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE33340)
#define DIGITALOPUS_MB_CORE_MB2_TEXTUREPACKERREGULAR__GETRECTSMULTIATLAS_OFFSET UNITYSDK_OFFSET(0x1EE2EC40)
#define DIGITALOPUS_MB_CORE_MB2_TEXTUREPACKERREGULAR__GETRECTSSINGLEATLAS_OFFSET UNITYSDK_OFFSET(0x1EE307D0)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB2_TexturePackerRegular_TypeDefinitionIndex = 94616;

	class MB2_TexturePackerRegular : public ::DigitalOpus::MB::Core::MB2_TexturePacker
	{
	public:
		::DigitalOpus::MB::Core::MB2_TexturePackerRegular_ProbeResult* bestRoot; // 0x18
		::System::Int32 atlasY; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB2_TEXTUREPACKERREGULAR__CTOR_OFFSET))(this);
		}

		static ::System::Void printTree(::DigitalOpus::MB::Core::MB2_TexturePackerRegular_Node* r, ::System::String* spc)
		{
			return ((::System::Void(*)(::DigitalOpus::MB::Core::MB2_TexturePackerRegular_Node*, ::System::String*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB2_TEXTUREPACKERREGULAR_PRINTTREE_OFFSET))(r, spc);
		}

		static ::System::Void flattenTree(::DigitalOpus::MB::Core::MB2_TexturePackerRegular_Node* r, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB2_TexturePacker_Image*>* putHere)
		{
			return ((::System::Void(*)(::DigitalOpus::MB::Core::MB2_TexturePackerRegular_Node*, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB2_TexturePacker_Image*>*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB2_TEXTUREPACKERREGULAR_FLATTENTREE_OFFSET))(r, putHere);
		}

		static ::System::Void drawGizmosNode(::DigitalOpus::MB::Core::MB2_TexturePackerRegular_Node* r)
		{
			return ((::System::Void(*)(::DigitalOpus::MB::Core::MB2_TexturePackerRegular_Node*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB2_TEXTUREPACKERREGULAR_DRAWGIZMOSNODE_OFFSET))(r);
		}

		::System::Void DrawGizmos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB2_TEXTUREPACKERREGULAR_DRAWGIZMOS_OFFSET))(this);
		}

		::System::Boolean ProbeSingleAtlas(::Il2CppArray<::DigitalOpus::MB::Core::MB2_TexturePacker_Image*>* imgsToAdd, ::System::Int32 idealAtlasW, ::System::Int32 idealAtlasH, ::System::Single imgArea, ::System::Int32 maxAtlasDimX, ::System::Int32 maxAtlasDimY, ::DigitalOpus::MB::Core::MB2_TexturePackerRegular_ProbeResult* pr)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::DigitalOpus::MB::Core::MB2_TexturePacker_Image*>*, ::System::Int32, ::System::Int32, ::System::Single, ::System::Int32, ::System::Int32, ::DigitalOpus::MB::Core::MB2_TexturePackerRegular_ProbeResult*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB2_TEXTUREPACKERREGULAR_PROBESINGLEATLAS_OFFSET))(this, imgsToAdd, idealAtlasW, idealAtlasH, imgArea, maxAtlasDimX, maxAtlasDimY, pr);
		}

		::System::Boolean ProbeMultiAtlas(::Il2CppArray<::DigitalOpus::MB::Core::MB2_TexturePacker_Image*>* imgsToAdd, ::System::Int32 idealAtlasW, ::System::Int32 idealAtlasH, ::System::Single imgArea, ::System::Int32 maxAtlasDimX, ::System::Int32 maxAtlasDimY, ::DigitalOpus::MB::Core::MB2_TexturePackerRegular_ProbeResult* pr)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::DigitalOpus::MB::Core::MB2_TexturePacker_Image*>*, ::System::Int32, ::System::Int32, ::System::Single, ::System::Int32, ::System::Int32, ::DigitalOpus::MB::Core::MB2_TexturePackerRegular_ProbeResult*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB2_TEXTUREPACKERREGULAR_PROBEMULTIATLAS_OFFSET))(this, imgsToAdd, idealAtlasW, idealAtlasH, imgArea, maxAtlasDimX, maxAtlasDimY, pr);
		}

		::System::Void GetExtent(::DigitalOpus::MB::Core::MB2_TexturePackerRegular_Node* r, ::System::Int32& x, ::System::Int32& y)
		{
			return ((::System::Void(*)(::PVOID, ::DigitalOpus::MB::Core::MB2_TexturePackerRegular_Node*, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB2_TEXTUREPACKERREGULAR_GETEXTENT_OFFSET))(this, r, x, y);
		}

		::System::Int32 StepWidthHeight(::System::Int32 oldVal, ::System::Int32 step, ::System::Int32 maxDim)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB2_TEXTUREPACKERREGULAR_STEPWIDTHHEIGHT_OFFSET))(this, oldVal, step, maxDim);
		}

		::Il2CppArray<::DigitalOpus::MB::Core::AtlasPackingResult*>* GetRects(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* imgWidthHeights, ::System::Int32 maxDimensionX, ::System::Int32 maxDimensionY, ::System::Int32 atPadding)
		{
			return ((::Il2CppArray<::DigitalOpus::MB::Core::AtlasPackingResult*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB2_TEXTUREPACKERREGULAR_GETRECTS_OFFSET))(this, imgWidthHeights, maxDimensionX, maxDimensionY, atPadding);
		}

		::Il2CppArray<::DigitalOpus::MB::Core::AtlasPackingResult*>* GetRects_1(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* imgWidthHeights, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPadding>* paddings, ::System::Int32 maxDimensionX, ::System::Int32 maxDimensionY, ::System::Boolean doMultiAtlas)
		{
			return ((::Il2CppArray<::DigitalOpus::MB::Core::AtlasPackingResult*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPadding>*, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB2_TEXTUREPACKERREGULAR_GETRECTS_1_OFFSET))(this, imgWidthHeights, paddings, maxDimensionX, maxDimensionY, doMultiAtlas);
		}

		::DigitalOpus::MB::Core::AtlasPackingResult* _GetRectsSingleAtlas(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* imgWidthHeights, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPadding>* paddings, ::System::Int32 maxDimensionX, ::System::Int32 maxDimensionY, ::System::Int32 minImageSizeX, ::System::Int32 minImageSizeY, ::System::Int32 masterImageSizeX, ::System::Int32 masterImageSizeY, ::System::Int32 recursionDepth)
		{
			return ((::DigitalOpus::MB::Core::AtlasPackingResult*(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPadding>*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB2_TEXTUREPACKERREGULAR__GETRECTSSINGLEATLAS_OFFSET))(this, imgWidthHeights, paddings, maxDimensionX, maxDimensionY, minImageSizeX, minImageSizeY, masterImageSizeX, masterImageSizeY, recursionDepth);
		}

		::Il2CppArray<::DigitalOpus::MB::Core::AtlasPackingResult*>* _GetRectsMultiAtlas(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* imgWidthHeights, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPadding>* paddings, ::System::Int32 maxDimensionPassedX, ::System::Int32 maxDimensionPassedY, ::System::Int32 minImageSizeX, ::System::Int32 minImageSizeY, ::System::Int32 masterImageSizeX, ::System::Int32 masterImageSizeY)
		{
			return ((::Il2CppArray<::DigitalOpus::MB::Core::AtlasPackingResult*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPadding>*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB2_TEXTUREPACKERREGULAR__GETRECTSMULTIATLAS_OFFSET))(this, imgWidthHeights, paddings, maxDimensionPassedX, maxDimensionPassedY, minImageSizeX, minImageSizeY, masterImageSizeX, masterImageSizeY);
		}
	};
}
