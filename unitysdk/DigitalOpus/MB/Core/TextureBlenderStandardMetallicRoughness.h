#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DigitalOpus/MB/Core/TextureBlenderStandardMetallicRoughness_Prop.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace DigitalOpus::MB::Core { class ShaderTextureProperty; }
namespace DigitalOpus::MB::Core { class TextureBlenderMaterialPropertyCacheHelper; }
namespace System { class String; }
namespace UnityEngine { class Material; }

#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDMETALLICROUGHNESS_DOESSHADERNAMEMATCH_OFFSET UNITYSDK_OFFSET(0x1AF8AD90)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDMETALLICROUGHNESS_GETCOLORIFNOTEXTURE_OFFSET UNITYSDK_OFFSET(0x1AF8C5D0)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDMETALLICROUGHNESS_NONTEXTUREPROPERTIESAREEQUAL_OFFSET UNITYSDK_OFFSET(0x1AF8B600)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDMETALLICROUGHNESS_ONBEFORETINTTEXTURE_OFFSET UNITYSDK_OFFSET(0x1AF8AE20)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDMETALLICROUGHNESS_ONBLENDTEXTUREPIXEL_OFFSET UNITYSDK_OFFSET(0x1AF8B4A0)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDMETALLICROUGHNESS_SETNONTEXTUREPROPERTYVALUESONRESULTMATERIAL_OFFSET UNITYSDK_OFFSET(0x1AF8BCF0)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDMETALLICROUGHNESS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AF8D130)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDMETALLICROUGHNESS__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF8D010)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int TextureBlenderStandardMetallicRoughness_TypeDefinitionIndex = 85012;

	class TextureBlenderStandardMetallicRoughness : public ::System::Object
	{
	public:
		static ::UnityEngine::Color* StaticGet_NeutralNormalMap()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(TextureBlenderStandardMetallicRoughness_TypeDefinitionIndex)->GetStaticField(0x11E40);
		}
		::DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper* sourceMaterialPropertyCache; // 0x10
		::System::Single m_notGeneratingAtlasDefaultMetallic; // 0x18
		::System::Boolean m_hasSpecGlossMap; // 0x1C
		::System::Boolean m_shaderDoesEmission; // 0x1D
		::System::Boolean m_hasMetallicGlossMap; // 0x1E
		::System::Single m_bumpScale; // 0x20
		::System::Single m_metallic; // 0x24
		::UnityEngine::Color m_notGeneratingAtlasDefaultEmisionColor; // 0x28
		::UnityEngine::Color m_notGeneratingAtlasDefaultColor; // 0x38
		::System::Single m_generatingTintedAtlasBumpScale; // 0x48
		::UnityEngine::Color m_generatingTintedAtlasColor; // 0x4C
		::System::Single m_roughness; // 0x5C
		::System::Single m_generatingTintedAtlasMetallic; // 0x60
		::UnityEngine::Color m_emissionColor; // 0x64
		::UnityEngine::Color m_generatingTintedAtlasEmission; // 0x74
		::System::Single m_notGeneratingAtlasDefaultGlossiness; // 0x84
		::UnityEngine::Color m_tintColor; // 0x88
		::DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness_Prop propertyToDo; // 0x98
		::System::Single m_generatingTintedAtlasRoughness; // 0x9C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDMETALLICROUGHNESS__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDMETALLICROUGHNESS__CCTOR_OFFSET))();
		}

		::System::Boolean DoesShaderNameMatch(::System::String* shaderName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDMETALLICROUGHNESS_DOESSHADERNAMEMATCH_OFFSET))(this, shaderName);
		}

		::System::Void OnBeforeTintTexture(::UnityEngine::Material* sourceMat, ::System::String* shaderTexturePropertyName)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::String*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDMETALLICROUGHNESS_ONBEFORETINTTEXTURE_OFFSET))(this, sourceMat, shaderTexturePropertyName);
		}

		::UnityEngine::Color OnBlendTexturePixel(::System::String* propertyToDoshaderPropertyName, ::UnityEngine::Color pixelColor)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::String*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDMETALLICROUGHNESS_ONBLENDTEXTUREPIXEL_OFFSET))(this, propertyToDoshaderPropertyName, pixelColor);
		}

		::System::Boolean NonTexturePropertiesAreEqual(::UnityEngine::Material* a, ::UnityEngine::Material* b)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDMETALLICROUGHNESS_NONTEXTUREPROPERTIESAREEQUAL_OFFSET))(this, a, b);
		}

		::System::Void SetNonTexturePropertyValuesOnResultMaterial(::UnityEngine::Material* resultMaterial)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDMETALLICROUGHNESS_SETNONTEXTUREPROPERTYVALUESONRESULTMATERIAL_OFFSET))(this, resultMaterial);
		}

		::UnityEngine::Color GetColorIfNoTexture(::UnityEngine::Material* mat, ::DigitalOpus::MB::Core::ShaderTextureProperty* texPropertyName)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::UnityEngine::Material*, ::DigitalOpus::MB::Core::ShaderTextureProperty*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDMETALLICROUGHNESS_GETCOLORIFNOTEXTURE_OFFSET))(this, mat, texPropertyName);
		}
	};
}
