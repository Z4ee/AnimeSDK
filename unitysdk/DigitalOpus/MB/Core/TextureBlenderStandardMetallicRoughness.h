#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DigitalOpus/MB/Core/TextureBlenderStandardMetallicRoughness_Prop.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace DigitalOpus::MB::Core { class ShaderTextureProperty; }
namespace DigitalOpus::MB::Core { class TextureBlenderMaterialPropertyCacheHelper; }
namespace System { class String; }
namespace UnityEngine { class Material; }

#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDMETALLICROUGHNESS_DOESSHADERNAMEMATCH_OFFSET UNITYSDK_OFFSET(0x1E74E070)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDMETALLICROUGHNESS_GETCOLORIFNOTEXTURE_OFFSET UNITYSDK_OFFSET(0x1E74F8A0)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDMETALLICROUGHNESS_NONTEXTUREPROPERTIESAREEQUAL_OFFSET UNITYSDK_OFFSET(0x1E74E8D0)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDMETALLICROUGHNESS_ONBEFORETINTTEXTURE_OFFSET UNITYSDK_OFFSET(0x1E74E100)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDMETALLICROUGHNESS_ONBLENDTEXTUREPIXEL_OFFSET UNITYSDK_OFFSET(0x1E74E780)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDMETALLICROUGHNESS_SETNONTEXTUREPROPERTYVALUESONRESULTMATERIAL_OFFSET UNITYSDK_OFFSET(0x1E74EFC0)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDMETALLICROUGHNESS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E750400)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDMETALLICROUGHNESS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7502E0)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int TextureBlenderStandardMetallicRoughness_TypeDefinitionIndex = 94519;

	class TextureBlenderStandardMetallicRoughness : public ::System::Object
	{
	public:
		static ::UnityEngine::Color* StaticGet_NeutralNormalMap()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(TextureBlenderStandardMetallicRoughness_TypeDefinitionIndex)->GetStaticField(0x132C0);
		}
		::DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper* sourceMaterialPropertyCache; // 0x10
		::System::Single m_notGeneratingAtlasDefaultGlossiness; // 0x18
		::DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness_Prop propertyToDo; // 0x1C
		::UnityEngine::Color m_tintColor; // 0x20
		::UnityEngine::Color m_generatingTintedAtlasColor; // 0x30
		::System::Single m_metallic; // 0x40
		::System::Boolean m_shaderDoesEmission; // 0x44
		::System::Boolean m_hasSpecGlossMap; // 0x45
		::System::Boolean m_hasMetallicGlossMap; // 0x46
		::UnityEngine::Color m_notGeneratingAtlasDefaultColor; // 0x48
		::UnityEngine::Color m_notGeneratingAtlasDefaultEmisionColor; // 0x58
		::System::Single m_roughness; // 0x68
		::System::Single m_notGeneratingAtlasDefaultMetallic; // 0x6C
		::UnityEngine::Color m_generatingTintedAtlasEmission; // 0x70
		::System::Single m_generatingTintedAtlasRoughness; // 0x80
		::System::Single m_bumpScale; // 0x84
		::System::Single m_generatingTintedAtlasBumpScale; // 0x88
		::UnityEngine::Color m_emissionColor; // 0x8C
		::System::Single m_generatingTintedAtlasMetallic; // 0x9C

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
