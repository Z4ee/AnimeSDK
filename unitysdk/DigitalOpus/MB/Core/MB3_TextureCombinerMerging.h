#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DigitalOpus/MB/Core/MB2_LogLevel.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rect.h"

namespace DigitalOpus::MB::Core { class MB3_TextureCombinerNonTextureProperties; }
namespace DigitalOpus::MB::Core { class MB_TexSet; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERMERGING_BUILDTRANSFORMMESHUV2ATLASRECT_OFFSET UNITYSDK_OFFSET(0x1F633E90)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERMERGING_DOINTEGRITYCHECKMERGEDENCAPSULATINGSAMPLINGRECTS_OFFSET UNITYSDK_OFFSET(0x1F635C00)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERMERGING_MERGEDISTINCTMATERIALTEXTURESTHATWOULDEXCEEDMAXATLASSIZEANDCALCMATERIALSUBRECTS_OFFSET UNITYSDK_OFFSET(0x1F636680)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERMERGING_MERGEOVERLAPPINGDISTINCTMATERIALTEXTURESANDCALCMATERIALSUBRECTS_OFFSET UNITYSDK_OFFSET(0x1F634100)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERMERGING__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F637D20)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERMERGING__CTOR_OFFSET UNITYSDK_OFFSET(0x1F6340E0)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB3_TextureCombinerMerging_TypeDefinitionIndex = 94640;

	class MB3_TextureCombinerMerging : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_DO_INTEGRITY_CHECKS()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MB3_TextureCombinerMerging_TypeDefinitionIndex)->GetStaticField(0x132D0);
		}
		static ::System::Boolean* StaticGet_LOG_LEVEL_TRACE_MERGE_MAT_SUBRECTS()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MB3_TextureCombinerMerging_TypeDefinitionIndex)->GetStaticField(0x132D1);
		}
		::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties* resultMaterialTextureBlender; // 0x10
		::System::Boolean fixOutOfBoundsUVs; // 0x18
		::System::Boolean _considerNonTextureProperties; // 0x19
		::System::Boolean _HasBeenInitialized; // 0x1A
		::DigitalOpus::MB::Core::MB2_LogLevel LOG_LEVEL; // 0x1C

		::System::Void _ctor(::System::Boolean considerNonTextureProps, ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties* resultMaterialTexBlender, ::System::Boolean fixObUVs, ::DigitalOpus::MB::Core::MB2_LogLevel logLevel)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*, ::System::Boolean, ::DigitalOpus::MB::Core::MB2_LogLevel))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERMERGING__CTOR_OFFSET))(this, considerNonTextureProps, resultMaterialTexBlender, fixObUVs, logLevel);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERMERGING__CCTOR_OFFSET))();
		}

		static ::UnityEngine::Rect BuildTransformMeshUV2AtlasRect(::System::Boolean considerMeshUVs, ::UnityEngine::Rect _atlasRect, ::UnityEngine::Rect _obUVRect, ::UnityEngine::Rect _sourceMaterialTiling, ::UnityEngine::Rect _encapsulatingRect)
		{
			return ((::UnityEngine::Rect(*)(::System::Boolean, ::UnityEngine::Rect, ::UnityEngine::Rect, ::UnityEngine::Rect, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERMERGING_BUILDTRANSFORMMESHUV2ATLASRECT_OFFSET))(considerMeshUVs, _atlasRect, _obUVRect, _sourceMaterialTiling, _encapsulatingRect);
		}

		::System::Void MergeOverlappingDistinctMaterialTexturesAndCalcMaterialSubrects(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB_TexSet*>* distinctMaterialTextures)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB_TexSet*>*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERMERGING_MERGEOVERLAPPINGDISTINCTMATERIALTEXTURESANDCALCMATERIALSUBRECTS_OFFSET))(this, distinctMaterialTextures);
		}

		::System::Void MergeDistinctMaterialTexturesThatWouldExceedMaxAtlasSizeAndCalcMaterialSubrects(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB_TexSet*>* distinctMaterialTextures, ::System::Int32 maxAtlasSize)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB_TexSet*>*, ::System::Int32))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERMERGING_MERGEDISTINCTMATERIALTEXTURESTHATWOULDEXCEEDMAXATLASSIZEANDCALCMATERIALSUBRECTS_OFFSET))(this, distinctMaterialTextures, maxAtlasSize);
		}

		::System::Void DoIntegrityCheckMergedEncapsulatingSamplingRects(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB_TexSet*>* distinctMaterialTextures)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB_TexSet*>*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERMERGING_DOINTEGRITYCHECKMERGEDENCAPSULATINGSAMPLINGRECTS_OFFSET))(this, distinctMaterialTextures);
		}
	};
}
