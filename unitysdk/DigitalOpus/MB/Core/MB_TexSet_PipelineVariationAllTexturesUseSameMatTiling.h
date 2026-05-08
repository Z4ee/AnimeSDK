#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DigitalOpus/MB/Core/MB_TextureTilingTreatment.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rect.h"

namespace DigitalOpus::MB::Core { class MB_TexSet; }
namespace DigitalOpus::MB::Core { class ShaderTextureProperty; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }

#define DIGITALOPUS_MB_CORE_MB_TEXSET_PIPELINEVARIATIONALLTEXTURESUSESAMEMATTILING_ADJUSTRESULTMATERIALNONTEXTUREPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1BEC88D0)
#define DIGITALOPUS_MB_CORE_MB_TEXSET_PIPELINEVARIATIONALLTEXTURESUSESAMEMATTILING_GETMATERIALTILINGRECTFORTEXTUREBAKERRESULTS_OFFSET UNITYSDK_OFFSET(0x1BEC8820)
#define DIGITALOPUS_MB_CORE_MB_TEXSET_PIPELINEVARIATIONALLTEXTURESUSESAMEMATTILING_GETRECTSFORTEXTUREBAKERESULTS_OFFSET UNITYSDK_OFFSET(0x1BEC8570)
#define DIGITALOPUS_MB_CORE_MB_TEXSET_PIPELINEVARIATIONALLTEXTURESUSESAMEMATTILING_SETTILINGTREATMENTANDADJUSTENCAPSULATINGSAMPLINGRECT_OFFSET UNITYSDK_OFFSET(0x1BEC8680)
#define DIGITALOPUS_MB_CORE_MB_TEXSET_PIPELINEVARIATIONALLTEXTURESUSESAMEMATTILING__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEC8560)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB_TexSet_PipelineVariationAllTexturesUseSameMatTiling_TypeDefinitionIndex = 85131;

	class MB_TexSet_PipelineVariationAllTexturesUseSameMatTiling : public ::System::Object
	{
	public:
		::DigitalOpus::MB::Core::MB_TexSet* texSet; // 0x10

		::System::Void _ctor(::DigitalOpus::MB::Core::MB_TexSet* ts)
		{
			return ((::System::Void(*)(::PVOID, ::DigitalOpus::MB::Core::MB_TexSet*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB_TEXSET_PIPELINEVARIATIONALLTEXTURESUSESAMEMATTILING__CTOR_OFFSET))(this, ts);
		}

		::System::Void GetRectsForTextureBakeResults(::UnityEngine::Rect& allPropsUseSameTiling_encapsulatingSamplingRect, ::UnityEngine::Rect& propsUseDifferntTiling_obUVRect)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect&, ::UnityEngine::Rect&))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB_TEXSET_PIPELINEVARIATIONALLTEXTURESUSESAMEMATTILING_GETRECTSFORTEXTUREBAKERESULTS_OFFSET))(this, allPropsUseSameTiling_encapsulatingSamplingRect, propsUseDifferntTiling_obUVRect);
		}

		::System::Void SetTilingTreatmentAndAdjustEncapsulatingSamplingRect(::DigitalOpus::MB::Core::MB_TextureTilingTreatment newTilingTreatment)
		{
			return ((::System::Void(*)(::PVOID, ::DigitalOpus::MB::Core::MB_TextureTilingTreatment))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB_TEXSET_PIPELINEVARIATIONALLTEXTURESUSESAMEMATTILING_SETTILINGTREATMENTANDADJUSTENCAPSULATINGSAMPLINGRECT_OFFSET))(this, newTilingTreatment);
		}

		::UnityEngine::Rect GetMaterialTilingRectForTextureBakerResults(::System::Int32 materialIndex)
		{
			return ((::UnityEngine::Rect(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB_TEXSET_PIPELINEVARIATIONALLTEXTURESUSESAMEMATTILING_GETMATERIALTILINGRECTFORTEXTUREBAKERRESULTS_OFFSET))(this, materialIndex);
		}

		::System::Void AdjustResultMaterialNonTextureProperties(::UnityEngine::Material* resultMaterial, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>* props)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB_TEXSET_PIPELINEVARIATIONALLTEXTURESUSESAMEMATTILING_ADJUSTRESULTMATERIALNONTEXTUREPROPERTIES_OFFSET))(this, resultMaterial, props);
		}
	};
}
