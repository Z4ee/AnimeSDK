#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DigitalOpus/MB/Core/TextureBlenderStandardSpecular_Prop.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace DigitalOpus::MB::Core { class ShaderTextureProperty; }
namespace DigitalOpus::MB::Core { class TextureBlenderMaterialPropertyCacheHelper; }
namespace System { class String; }
namespace UnityEngine { class Material; }

#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDSPECULAR_DOESSHADERNAMEMATCH_OFFSET UNITYSDK_OFFSET(0x1E36ACD0)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDSPECULAR_GETCOLORIFNOTEXTURE_OFFSET UNITYSDK_OFFSET(0x1E36C440)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDSPECULAR_NONTEXTUREPROPERTIESAREEQUAL_OFFSET UNITYSDK_OFFSET(0x1E36B560)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDSPECULAR_ONBEFORETINTTEXTURE_OFFSET UNITYSDK_OFFSET(0x1E36AD60)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDSPECULAR_ONBLENDTEXTUREPIXEL_OFFSET UNITYSDK_OFFSET(0x1E36B3A0)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDSPECULAR_SETNONTEXTUREPROPERTYVALUESONRESULTMATERIAL_OFFSET UNITYSDK_OFFSET(0x1E36BB50)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDSPECULAR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E36CF20)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDSPECULAR__CTOR_OFFSET UNITYSDK_OFFSET(0x1E36CDE0)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int TextureBlenderStandardSpecular_TypeDefinitionIndex = 90588;

	class TextureBlenderStandardSpecular : public ::System::Object
	{
	public:
		static ::UnityEngine::Color* StaticGet_NeutralNormalMap()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(TextureBlenderStandardSpecular_TypeDefinitionIndex)->GetStaticField(0x12CD0);
		}
		// static const ::System::Single m_generatedAlphaCutoff; // 0x0
		::DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper* sourceMaterialPropertyCache; // 0x10
		::System::Single m_generatingTintedAtlaBumpScale; // 0x18
		::DigitalOpus::MB::Core::TextureBlenderStandardSpecular_Prop propertyToDo; // 0x1C
		::UnityEngine::Color m_emissionColor; // 0x20
		::UnityEngine::Color m_notGeneratingAtlasDefaultSpecularColor; // 0x30
		::System::Single m_bumpScale; // 0x40
		::UnityEngine::Color m_generatingTintedAtlaColor; // 0x44
		::UnityEngine::Color m_tintColor; // 0x54
		::UnityEngine::Color m_generatingTintedAtlaSpecular; // 0x64
		::System::Single m_generatingTintedAtlaSpecGlossMapScale; // 0x74
		::UnityEngine::Color m_notGeneratingAtlasDefaultColor; // 0x78
		::System::Single m_SpecGlossMapScale; // 0x88
		::System::Boolean m_shaderDoesEmission; // 0x8C
		::System::Boolean m_hasSpecGlossMap; // 0x8D
		::System::Boolean m_doScaleAlphaCutoff; // 0x8E
		::UnityEngine::Color m_notGeneratingAtlasDefaultEmisionColor; // 0x90
		::UnityEngine::Color m_generatingTintedAtlaEmission; // 0xA0
		::UnityEngine::Color m_specColor; // 0xB0
		::System::Single m_notGeneratingAtlasDefaultGlossiness; // 0xC0
		::System::Single m_glossiness; // 0xC4
		::System::Single m_alphaCutoff; // 0xC8
		::System::Single m_generatingTintedAtlaGlossiness; // 0xCC

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
