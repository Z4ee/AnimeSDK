#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace DigitalOpus::MB::Core { class MB2_EditorMethodsInterface; }
namespace DigitalOpus::MB::Core { class MB3_TextureCombinerNonTextureProperties; }
namespace DigitalOpus::MB::Core { class MB_TexSet; }
namespace DigitalOpus::MB::Core { class ShaderTextureProperty; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture2D; }

#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERNONTEXTUREPROPERTIES_NONTEXTUREPROPERTIESDONTBLENDPROPS_ADJUSTNONTEXTUREPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1C465000)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERNONTEXTUREPROPERTIES_NONTEXTUREPROPERTIESDONTBLENDPROPS_GETCOLORASITWOULDAPPEARINATLASIFNOTEXTURE_OFFSET UNITYSDK_OFFSET(0x1C465430)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERNONTEXTUREPROPERTIES_NONTEXTUREPROPERTIESDONTBLENDPROPS_GETCOLORFORTEMPORARYTEXTURE_OFFSET UNITYSDK_OFFSET(0x1C465440)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERNONTEXTUREPROPERTIES_NONTEXTUREPROPERTIESDONTBLENDPROPS_NONTEXTUREPROPERTIESAREEQUAL_OFFSET UNITYSDK_OFFSET(0x1C464F90)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERNONTEXTUREPROPERTIES_NONTEXTUREPROPERTIESDONTBLENDPROPS_TINTTEXTUREWITHTEXTURECOMBINER_OFFSET UNITYSDK_OFFSET(0x1C464FA0)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERNONTEXTUREPROPERTIES_NONTEXTUREPROPERTIESDONTBLENDPROPS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C464F80)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesDontBlendProps_TypeDefinitionIndex = 85143;

	class MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesDontBlendProps : public ::System::Object
	{
	public:
		::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties* _textureProperties; // 0x10

		::System::Void _ctor(::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties* textureProperties)
		{
			return ((::System::Void(*)(::PVOID, ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERNONTEXTUREPROPERTIES_NONTEXTUREPROPERTIESDONTBLENDPROPS__CTOR_OFFSET))(this, textureProperties);
		}

		::System::Boolean NonTexturePropertiesAreEqual(::UnityEngine::Material* a, ::UnityEngine::Material* b)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERNONTEXTUREPROPERTIES_NONTEXTUREPROPERTIESDONTBLENDPROPS_NONTEXTUREPROPERTIESAREEQUAL_OFFSET))(this, a, b);
		}

		::UnityEngine::Texture2D* TintTextureWithTextureCombiner(::UnityEngine::Texture2D* t, ::DigitalOpus::MB::Core::MB_TexSet* sourceMaterial, ::DigitalOpus::MB::Core::ShaderTextureProperty* shaderPropertyName)
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID, ::UnityEngine::Texture2D*, ::DigitalOpus::MB::Core::MB_TexSet*, ::DigitalOpus::MB::Core::ShaderTextureProperty*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERNONTEXTUREPROPERTIES_NONTEXTUREPROPERTIESDONTBLENDPROPS_TINTTEXTUREWITHTEXTURECOMBINER_OFFSET))(this, t, sourceMaterial, shaderPropertyName);
		}

		::System::Void AdjustNonTextureProperties(::UnityEngine::Material* resultMat, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>* texPropertyNames, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface* editorMethods)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERNONTEXTUREPROPERTIES_NONTEXTUREPROPERTIESDONTBLENDPROPS_ADJUSTNONTEXTUREPROPERTIES_OFFSET))(this, resultMat, texPropertyNames, editorMethods);
		}

		::UnityEngine::Color GetColorAsItWouldAppearInAtlasIfNoTexture(::UnityEngine::Material* matIfBlender, ::DigitalOpus::MB::Core::ShaderTextureProperty* texProperty)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::UnityEngine::Material*, ::DigitalOpus::MB::Core::ShaderTextureProperty*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERNONTEXTUREPROPERTIES_NONTEXTUREPROPERTIESDONTBLENDPROPS_GETCOLORASITWOULDAPPEARINATLASIFNOTEXTURE_OFFSET))(this, matIfBlender, texProperty);
		}

		::UnityEngine::Color GetColorForTemporaryTexture(::UnityEngine::Material* matIfBlender, ::DigitalOpus::MB::Core::ShaderTextureProperty* texProperty)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::UnityEngine::Material*, ::DigitalOpus::MB::Core::ShaderTextureProperty*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERNONTEXTUREPROPERTIES_NONTEXTUREPROPERTIESDONTBLENDPROPS_GETCOLORFORTEMPORARYTEXTURE_OFFSET))(this, matIfBlender, texProperty);
		}
	};
}
