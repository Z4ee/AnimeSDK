#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace DigitalOpus::MB::Core { class MB2_EditorMethodsInterface; }
namespace DigitalOpus::MB::Core { class MB3_TextureCombinerNonTextureProperties; }
namespace DigitalOpus::MB::Core { class MB_TexSet; }
namespace DigitalOpus::MB::Core { class ShaderTextureProperty; }
namespace DigitalOpus::MB::Core { class TextureBlender; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture2D; }

#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERNONTEXTUREPROPERTIES_NONTEXTUREPROPERTIESBLENDPROPS_ADJUSTNONTEXTUREPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1F6383C0)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERNONTEXTUREPROPERTIES_NONTEXTUREPROPERTIESBLENDPROPS_GETCOLORASITWOULDAPPEARINATLASIFNOTEXTURE_OFFSET UNITYSDK_OFFSET(0x1F638700)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERNONTEXTUREPROPERTIES_NONTEXTUREPROPERTIESBLENDPROPS_GETCOLORFORTEMPORARYTEXTURE_OFFSET UNITYSDK_OFFSET(0x1F6388F0)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERNONTEXTUREPROPERTIES_NONTEXTUREPROPERTIESBLENDPROPS_NONTEXTUREPROPERTIESAREEQUAL_OFFSET UNITYSDK_OFFSET(0x1F637D40)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERNONTEXTUREPROPERTIES_NONTEXTUREPROPERTIESBLENDPROPS_TINTTEXTUREWITHTEXTURECOMBINER_OFFSET UNITYSDK_OFFSET(0x1F637E30)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERNONTEXTUREPROPERTIES_NONTEXTUREPROPERTIESBLENDPROPS__CTOR_OFFSET UNITYSDK_OFFSET(0x1F637D30)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesBlendProps_TypeDefinitionIndex = 94651;

	class MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesBlendProps : public ::System::Object
	{
	public:
		::DigitalOpus::MB::Core::TextureBlender* resultMaterialTextureBlender; // 0x10
		::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties* _textureProperties; // 0x18

		::System::Void _ctor(::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties* textureProperties, ::DigitalOpus::MB::Core::TextureBlender* resultMats)
		{
			return ((::System::Void(*)(::PVOID, ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*, ::DigitalOpus::MB::Core::TextureBlender*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERNONTEXTUREPROPERTIES_NONTEXTUREPROPERTIESBLENDPROPS__CTOR_OFFSET))(this, textureProperties, resultMats);
		}

		::System::Boolean NonTexturePropertiesAreEqual(::UnityEngine::Material* a, ::UnityEngine::Material* b)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERNONTEXTUREPROPERTIES_NONTEXTUREPROPERTIESBLENDPROPS_NONTEXTUREPROPERTIESAREEQUAL_OFFSET))(this, a, b);
		}

		::UnityEngine::Texture2D* TintTextureWithTextureCombiner(::UnityEngine::Texture2D* t, ::DigitalOpus::MB::Core::MB_TexSet* sourceMaterial, ::DigitalOpus::MB::Core::ShaderTextureProperty* shaderPropertyName)
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID, ::UnityEngine::Texture2D*, ::DigitalOpus::MB::Core::MB_TexSet*, ::DigitalOpus::MB::Core::ShaderTextureProperty*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERNONTEXTUREPROPERTIES_NONTEXTUREPROPERTIESBLENDPROPS_TINTTEXTUREWITHTEXTURECOMBINER_OFFSET))(this, t, sourceMaterial, shaderPropertyName);
		}

		::System::Void AdjustNonTextureProperties(::UnityEngine::Material* resultMat, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>* texPropertyNames, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface* editorMethods)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERNONTEXTUREPROPERTIES_NONTEXTUREPROPERTIESBLENDPROPS_ADJUSTNONTEXTUREPROPERTIES_OFFSET))(this, resultMat, texPropertyNames, editorMethods);
		}

		::UnityEngine::Color GetColorAsItWouldAppearInAtlasIfNoTexture(::UnityEngine::Material* matIfBlender, ::DigitalOpus::MB::Core::ShaderTextureProperty* texProperty)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::UnityEngine::Material*, ::DigitalOpus::MB::Core::ShaderTextureProperty*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERNONTEXTUREPROPERTIES_NONTEXTUREPROPERTIESBLENDPROPS_GETCOLORASITWOULDAPPEARINATLASIFNOTEXTURE_OFFSET))(this, matIfBlender, texProperty);
		}

		::UnityEngine::Color GetColorForTemporaryTexture(::UnityEngine::Material* matIfBlender, ::DigitalOpus::MB::Core::ShaderTextureProperty* texProperty)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::UnityEngine::Material*, ::DigitalOpus::MB::Core::ShaderTextureProperty*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERNONTEXTUREPROPERTIES_NONTEXTUREPROPERTIESBLENDPROPS_GETCOLORFORTEMPORARYTEXTURE_OFFSET))(this, matIfBlender, texProperty);
		}
	};
}
