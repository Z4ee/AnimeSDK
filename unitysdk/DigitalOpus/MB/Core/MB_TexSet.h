#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DigitalOpus/MB/Core/DRect.h"
#include "unitysdk/DigitalOpus/MB/Core/MB_TextureTilingTreatment.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace DigitalOpus::MB::Core { class MB3_TextureCombiner; }
namespace DigitalOpus::MB::Core { class MB3_TextureCombinerNonTextureProperties; }
namespace DigitalOpus::MB::Core { class MB_TexSet_PipelineVariation; }
namespace DigitalOpus::MB::Core { class MatsAndGOs; }
namespace DigitalOpus::MB::Core { class MeshBakerMaterialTexture; }
namespace DigitalOpus::MB::Core { class ShaderTextureProperty; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }

#define DIGITALOPUS_MB_CORE_MB_TEXSET_ADJUSTRESULTMATERIALNONTEXTUREPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1D3B3180)
#define DIGITALOPUS_MB_CORE_MB_TEXSET_ALLTEXTURESARESAMEFORMERGE_OFFSET UNITYSDK_OFFSET(0x1D3B3830)
#define DIGITALOPUS_MB_CORE_MB_TEXSET_CALCINITIALFULLSAMPLINGRECTS_OFFSET UNITYSDK_OFFSET(0x1D3B3440)
#define DIGITALOPUS_MB_CORE_MB_TEXSET_CALCMATANDUVSAMPLINGRECTS_OFFSET UNITYSDK_OFFSET(0x1D3B3660)
#define DIGITALOPUS_MB_CORE_MB_TEXSET_CREATECOLOREDTEXTOREPLACENULL_OFFSET UNITYSDK_OFFSET(0x1D3B3080)
#define DIGITALOPUS_MB_CORE_MB_TEXSET_DRAWRECTSTOMERGEGIZMOS_OFFSET UNITYSDK_OFFSET(0x1D3B3D00)
#define DIGITALOPUS_MB_CORE_MB_TEXSET_GETDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1D3B3FF0)
#define DIGITALOPUS_MB_CORE_MB_TEXSET_GETENCAPSULATINGSAMPLINGRECTIFTILINGSAME_OFFSET UNITYSDK_OFFSET(0x1D3B2E40)
#define DIGITALOPUS_MB_CORE_MB_TEXSET_GETMATERIALTILINGRECTFORTEXTUREBAKERRESULTS_OFFSET UNITYSDK_OFFSET(0x1D3B3350)
#define DIGITALOPUS_MB_CORE_MB_TEXSET_GETMATSUBRECTDESCRIPTIONS_OFFSET UNITYSDK_OFFSET(0x1D3B42A0)
#define DIGITALOPUS_MB_CORE_MB_TEXSET_GETMAXRAWTEXTUREHEIGHTWIDTH_OFFSET UNITYSDK_OFFSET(0x1D3B2D70)
#define DIGITALOPUS_MB_CORE_MB_TEXSET_GETRECTSFORTEXTUREBAKERESULTS_OFFSET UNITYSDK_OFFSET(0x1D3B3270)
#define DIGITALOPUS_MB_CORE_MB_TEXSET_GET_ALLTEXTURESUSESAMEMATTILING_OFFSET UNITYSDK_OFFSET(0x1D3B2760)
#define DIGITALOPUS_MB_CORE_MB_TEXSET_GET_OBUVOFFSET_OFFSET UNITYSDK_OFFSET(0x1D3B27C0)
#define DIGITALOPUS_MB_CORE_MB_TEXSET_GET_OBUVRECT_OFFSET UNITYSDK_OFFSET(0x1D3B2800)
#define DIGITALOPUS_MB_CORE_MB_TEXSET_GET_OBUVSCALE_OFFSET UNITYSDK_OFFSET(0x1D3B27E0)
#define DIGITALOPUS_MB_CORE_MB_TEXSET_GET_THISISONLYTEXSETINATLAS_OFFSET UNITYSDK_OFFSET(0x1D3B2780)
#define DIGITALOPUS_MB_CORE_MB_TEXSET_GET_TILINGTREATMENT_OFFSET UNITYSDK_OFFSET(0x1D3B27A0)
#define DIGITALOPUS_MB_CORE_MB_TEXSET_ISEQUAL_OFFSET UNITYSDK_OFFSET(0x1D3B2860)
#define DIGITALOPUS_MB_CORE_MB_TEXSET_SETALLTEXTURESUSESAMEMATTILINGTRUE_OFFSET UNITYSDK_OFFSET(0x1D3B3130)
#define DIGITALOPUS_MB_CORE_MB_TEXSET_SETENCAPSULATINGRECT_OFFSET UNITYSDK_OFFSET(0x1D3B2FA0)
#define DIGITALOPUS_MB_CORE_MB_TEXSET_SETENCAPSULATINGSAMPLINGRECTFORTESTING_OFFSET UNITYSDK_OFFSET(0x1D3B2F50)
#define DIGITALOPUS_MB_CORE_MB_TEXSET_SETENCAPSULATINGSAMPLINGRECTWHENMERGINGTEXSETS_OFFSET UNITYSDK_OFFSET(0x1D3B2EE0)
#define DIGITALOPUS_MB_CORE_MB_TEXSET_SETTHISISONLYTEXSETINATLASTRUE_OFFSET UNITYSDK_OFFSET(0x1D3AF870)
#define DIGITALOPUS_MB_CORE_MB_TEXSET_SETTILINGTREATMENTANDADJUSTENCAPSULATINGSAMPLINGRECT_OFFSET UNITYSDK_OFFSET(0x1D3AF880)
#define DIGITALOPUS_MB_CORE_MB_TEXSET_SET_ALLTEXTURESUSESAMEMATTILING_OFFSET UNITYSDK_OFFSET(0x1D3B2770)
#define DIGITALOPUS_MB_CORE_MB_TEXSET_SET_OBUVOFFSET_OFFSET UNITYSDK_OFFSET(0x1D3B27D0)
#define DIGITALOPUS_MB_CORE_MB_TEXSET_SET_OBUVSCALE_OFFSET UNITYSDK_OFFSET(0x1D3B27F0)
#define DIGITALOPUS_MB_CORE_MB_TEXSET_SET_THISISONLYTEXSETINATLAS_OFFSET UNITYSDK_OFFSET(0x1D3B2790)
#define DIGITALOPUS_MB_CORE_MB_TEXSET_SET_TILINGTREATMENT_OFFSET UNITYSDK_OFFSET(0x1D3B27B0)
#define DIGITALOPUS_MB_CORE_MB_TEXSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3B2080)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB_TexSet_TypeDefinitionIndex = 90703;

	class MB_TexSet : public ::System::Object
	{
	public:
		::DigitalOpus::MB::Core::MB_TexSet_PipelineVariation* pipelineVariation; // 0x10
		::Il2CppArray<::DigitalOpus::MB::Core::MeshBakerMaterialTexture*>* ts; // 0x18
		::DigitalOpus::MB::Core::MatsAndGOs* matsAndGOs; // 0x20
		::DigitalOpus::MB::Core::MB_TextureTilingTreatment _tilingTreatment_k__BackingField; // 0x28
		::System::Int32 idealHeight_pix; // 0x2C
		::UnityEngine::Vector2 _obUVoffset_k__BackingField; // 0x30
		::UnityEngine::Vector2 _obUVscale_k__BackingField; // 0x38
		::System::Boolean _allTexturesUseSameMatTiling_k__BackingField; // 0x40
		::System::Boolean _thisIsOnlyTexSetInAtlas_k__BackingField; // 0x41
		::System::Int32 idealWidth_pix; // 0x44

		::System::Void _ctor(::Il2CppArray<::DigitalOpus::MB::Core::MeshBakerMaterialTexture*>* tss, ::UnityEngine::Vector2 uvOffset, ::UnityEngine::Vector2 uvScale, ::DigitalOpus::MB::Core::MB_TextureTilingTreatment treatment)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::DigitalOpus::MB::Core::MeshBakerMaterialTexture*>*, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::DigitalOpus::MB::Core::MB_TextureTilingTreatment))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB_TEXSET__CTOR_OFFSET))(this, tss, uvOffset, uvScale, treatment);
		}

		::System::Boolean get_allTexturesUseSameMatTiling()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB_TEXSET_GET_ALLTEXTURESUSESAMEMATTILING_OFFSET))(this);
		}

		::System::Void set_allTexturesUseSameMatTiling(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB_TEXSET_SET_ALLTEXTURESUSESAMEMATTILING_OFFSET))(this, value);
		}

		::System::Boolean get_thisIsOnlyTexSetInAtlas()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB_TEXSET_GET_THISISONLYTEXSETINATLAS_OFFSET))(this);
		}

		::System::Void set_thisIsOnlyTexSetInAtlas(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB_TEXSET_SET_THISISONLYTEXSETINATLAS_OFFSET))(this, value);
		}

		::DigitalOpus::MB::Core::MB_TextureTilingTreatment get_tilingTreatment()
		{
			return ((::DigitalOpus::MB::Core::MB_TextureTilingTreatment(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB_TEXSET_GET_TILINGTREATMENT_OFFSET))(this);
		}

		::System::Void set_tilingTreatment(::DigitalOpus::MB::Core::MB_TextureTilingTreatment value)
		{
			return ((::System::Void(*)(::PVOID, ::DigitalOpus::MB::Core::MB_TextureTilingTreatment))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB_TEXSET_SET_TILINGTREATMENT_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_obUVoffset()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB_TEXSET_GET_OBUVOFFSET_OFFSET))(this);
		}

		::System::Void set_obUVoffset(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB_TEXSET_SET_OBUVOFFSET_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_obUVscale()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB_TEXSET_GET_OBUVSCALE_OFFSET))(this);
		}

		::System::Void set_obUVscale(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB_TEXSET_SET_OBUVSCALE_OFFSET))(this, value);
		}

		::DigitalOpus::MB::Core::DRect get_obUVrect()
		{
			return ((::DigitalOpus::MB::Core::DRect(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB_TEXSET_GET_OBUVRECT_OFFSET))(this);
		}

		::System::Boolean IsEqual(::System::Object* obj, ::System::Boolean fixOutOfBoundsUVs, ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties* resultMaterialTextureBlender)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Boolean, ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB_TEXSET_ISEQUAL_OFFSET))(this, obj, fixOutOfBoundsUVs, resultMaterialTextureBlender);
		}

		::UnityEngine::Vector2 GetMaxRawTextureHeightWidth()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB_TEXSET_GETMAXRAWTEXTUREHEIGHTWIDTH_OFFSET))(this);
		}

		::UnityEngine::Rect GetEncapsulatingSamplingRectIfTilingSame()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB_TEXSET_GETENCAPSULATINGSAMPLINGRECTIFTILINGSAME_OFFSET))(this);
		}

		::System::Void SetEncapsulatingSamplingRectWhenMergingTexSets(::DigitalOpus::MB::Core::DRect newEncapsulatingSamplingRect)
		{
			return ((::System::Void(*)(::PVOID, ::DigitalOpus::MB::Core::DRect))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB_TEXSET_SETENCAPSULATINGSAMPLINGRECTWHENMERGINGTEXSETS_OFFSET))(this, newEncapsulatingSamplingRect);
		}

		::System::Void SetEncapsulatingSamplingRectForTesting(::System::Int32 propIdx, ::DigitalOpus::MB::Core::DRect newEncapsulatingSamplingRect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::DigitalOpus::MB::Core::DRect))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB_TEXSET_SETENCAPSULATINGSAMPLINGRECTFORTESTING_OFFSET))(this, propIdx, newEncapsulatingSamplingRect);
		}

		::System::Void SetEncapsulatingRect(::System::Int32 propIdx, ::System::Boolean considerMeshUVs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB_TEXSET_SETENCAPSULATINGRECT_OFFSET))(this, propIdx, considerMeshUVs);
		}

		::System::Void CreateColoredTexToReplaceNull(::System::String* propName, ::System::Int32 propIdx, ::System::Boolean considerMeshUVs, ::DigitalOpus::MB::Core::MB3_TextureCombiner* combiner, ::UnityEngine::Color col, ::System::Boolean isLinear)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Boolean, ::DigitalOpus::MB::Core::MB3_TextureCombiner*, ::UnityEngine::Color, ::System::Boolean))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB_TEXSET_CREATECOLOREDTEXTOREPLACENULL_OFFSET))(this, propName, propIdx, considerMeshUVs, combiner, col, isLinear);
		}

		::System::Void SetThisIsOnlyTexSetInAtlasTrue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB_TEXSET_SETTHISISONLYTEXSETINATLASTRUE_OFFSET))(this);
		}

		::System::Void SetAllTexturesUseSameMatTilingTrue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB_TEXSET_SETALLTEXTURESUSESAMEMATTILINGTRUE_OFFSET))(this);
		}

		::System::Void AdjustResultMaterialNonTextureProperties(::UnityEngine::Material* resultMaterial, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>* props)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB_TEXSET_ADJUSTRESULTMATERIALNONTEXTUREPROPERTIES_OFFSET))(this, resultMaterial, props);
		}

		::System::Void SetTilingTreatmentAndAdjustEncapsulatingSamplingRect(::DigitalOpus::MB::Core::MB_TextureTilingTreatment newTilingTreatment)
		{
			return ((::System::Void(*)(::PVOID, ::DigitalOpus::MB::Core::MB_TextureTilingTreatment))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB_TEXSET_SETTILINGTREATMENTANDADJUSTENCAPSULATINGSAMPLINGRECT_OFFSET))(this, newTilingTreatment);
		}

		::System::Void GetRectsForTextureBakeResults(::UnityEngine::Rect& allPropsUseSameTiling_encapsulatingSamplingRect, ::UnityEngine::Rect& propsUseDifferntTiling_obUVRect)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect&, ::UnityEngine::Rect&))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB_TEXSET_GETRECTSFORTEXTUREBAKERESULTS_OFFSET))(this, allPropsUseSameTiling_encapsulatingSamplingRect, propsUseDifferntTiling_obUVRect);
		}

		::UnityEngine::Rect GetMaterialTilingRectForTextureBakerResults(::System::Int32 materialIndex)
		{
			return ((::UnityEngine::Rect(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB_TEXSET_GETMATERIALTILINGRECTFORTEXTUREBAKERRESULTS_OFFSET))(this, materialIndex);
		}

		::System::Void CalcInitialFullSamplingRects(::System::Boolean fixOutOfBoundsUVs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB_TEXSET_CALCINITIALFULLSAMPLINGRECTS_OFFSET))(this, fixOutOfBoundsUVs);
		}

		::System::Void CalcMatAndUVSamplingRects()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB_TEXSET_CALCMATANDUVSAMPLINGRECTS_OFFSET))(this);
		}

		::System::Boolean AllTexturesAreSameForMerge(::DigitalOpus::MB::Core::MB_TexSet* other, ::System::Boolean considerNonTextureProperties, ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties* resultMaterialTextureBlender)
		{
			return ((::System::Boolean(*)(::PVOID, ::DigitalOpus::MB::Core::MB_TexSet*, ::System::Boolean, ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB_TEXSET_ALLTEXTURESARESAMEFORMERGE_OFFSET))(this, other, considerNonTextureProperties, resultMaterialTextureBlender);
		}

		::System::Void DrawRectsToMergeGizmos(::UnityEngine::Color encC, ::UnityEngine::Color innerC)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB_TEXSET_DRAWRECTSTOMERGEGIZMOS_OFFSET))(this, encC, innerC);
		}

		::System::String* GetDescription()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB_TEXSET_GETDESCRIPTION_OFFSET))(this);
		}

		::System::String* GetMatSubrectDescriptions()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB_TEXSET_GETMATSUBRECTDESCRIPTIONS_OFFSET))(this);
		}
	};
}
