#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DigitalOpus/MB/Core/TextureBlenderStandardSpecular_Prop.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace DigitalOpus::MB::Core { class ShaderTextureProperty; }
namespace DigitalOpus::MB::Core { class TextureBlenderMaterialPropertyCacheHelper; }
namespace System { class String; }
namespace UnityEngine { class Material; }

#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDSPECULAR_DOESSHADERNAMEMATCH_OFFSET UNITYSDK_OFFSET(0x1F7AD830)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDSPECULAR_GETCOLORIFNOTEXTURE_OFFSET UNITYSDK_OFFSET(0x1F7AEF60)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDSPECULAR_NONTEXTUREPROPERTIESAREEQUAL_OFFSET UNITYSDK_OFFSET(0x1F7AE090)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDSPECULAR_ONBEFORETINTTEXTURE_OFFSET UNITYSDK_OFFSET(0x1F7AD8C0)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDSPECULAR_ONBLENDTEXTUREPIXEL_OFFSET UNITYSDK_OFFSET(0x1F7ADEF0)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDSPECULAR_SETNONTEXTUREPROPERTYVALUESONRESULTMATERIAL_OFFSET UNITYSDK_OFFSET(0x1F7AE690)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDSPECULAR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F7AFA30)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDSPECULAR__CTOR_OFFSET UNITYSDK_OFFSET(0x1F7AF900)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int TextureBlenderStandardSpecular_TypeDefinitionIndex = 94521;

	class TextureBlenderStandardSpecular : public ::System::Object
	{
	public:
		static ::UnityEngine::Color* StaticGet_NeutralNormalMap()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(TextureBlenderStandardSpecular_TypeDefinitionIndex)->GetStaticField(0x132E0);
		}
		// static const ::System::Single m_generatedAlphaCutoff; // 0x0
		::DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper* sourceMaterialPropertyCache; // 0x10
		::UnityEngine::Color m_notGeneratingAtlasDefaultSpecularColor; // 0x18
		::UnityEngine::Color m_generatingTintedAtlaEmission; // 0x28
		::UnityEngine::Color m_specColor; // 0x38
		::System::Single m_glossiness; // 0x48
		::System::Single m_generatingTintedAtlaGlossiness; // 0x4C
		::System::Single m_generatingTintedAtlaBumpScale; // 0x50
		::System::Single m_notGeneratingAtlasDefaultGlossiness; // 0x54
		::System::Boolean m_hasSpecGlossMap; // 0x58
		::System::Boolean m_doScaleAlphaCutoff; // 0x59
		::System::Boolean m_shaderDoesEmission; // 0x5A
		::UnityEngine::Color m_generatingTintedAtlaSpecular; // 0x5C
		::System::Single m_bumpScale; // 0x6C
		::DigitalOpus::MB::Core::TextureBlenderStandardSpecular_Prop propertyToDo; // 0x70
		::System::Single m_generatingTintedAtlaSpecGlossMapScale; // 0x74
		::UnityEngine::Color m_notGeneratingAtlasDefaultColor; // 0x78
		::System::Single m_SpecGlossMapScale; // 0x88
		::System::Single m_alphaCutoff; // 0x8C
		::UnityEngine::Color m_generatingTintedAtlaColor; // 0x90
		::UnityEngine::Color m_notGeneratingAtlasDefaultEmisionColor; // 0xA0
		::UnityEngine::Color m_emissionColor; // 0xB0
		::UnityEngine::Color m_tintColor; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDSPECULAR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDSPECULAR__CCTOR_OFFSET))();
		}

		::System::Boolean DoesShaderNameMatch(::System::String* shaderName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDSPECULAR_DOESSHADERNAMEMATCH_OFFSET))(this, shaderName);
		}

		::System::Void OnBeforeTintTexture(::UnityEngine::Material* sourceMat, ::System::String* shaderTexturePropertyName)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::String*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDSPECULAR_ONBEFORETINTTEXTURE_OFFSET))(this, sourceMat, shaderTexturePropertyName);
		}

		::UnityEngine::Color OnBlendTexturePixel(::System::String* propertyToDoshaderPropertyName, ::UnityEngine::Color pixelColor)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::String*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDSPECULAR_ONBLENDTEXTUREPIXEL_OFFSET))(this, propertyToDoshaderPropertyName, pixelColor);
		}

		::System::Boolean NonTexturePropertiesAreEqual(::UnityEngine::Material* a, ::UnityEngine::Material* b)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDSPECULAR_NONTEXTUREPROPERTIESAREEQUAL_OFFSET))(this, a, b);
		}

		::System::Void SetNonTexturePropertyValuesOnResultMaterial(::UnityEngine::Material* resultMaterial)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDSPECULAR_SETNONTEXTUREPROPERTYVALUESONRESULTMATERIAL_OFFSET))(this, resultMaterial);
		}

		::UnityEngine::Color GetColorIfNoTexture(::UnityEngine::Material* mat, ::DigitalOpus::MB::Core::ShaderTextureProperty* texPropertyName)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::UnityEngine::Material*, ::DigitalOpus::MB::Core::ShaderTextureProperty*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDSPECULAR_GETCOLORIFNOTEXTURE_OFFSET))(this, mat, texPropertyName);
		}
	};
}
