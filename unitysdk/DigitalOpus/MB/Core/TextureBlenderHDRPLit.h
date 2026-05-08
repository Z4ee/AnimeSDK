#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DigitalOpus/MB/Core/TextureBlenderHDRPLit_MaterialType.h"
#include "unitysdk/DigitalOpus/MB/Core/TextureBlenderHDRPLit_Prop.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace DigitalOpus::MB::Core { class ShaderTextureProperty; }
namespace DigitalOpus::MB::Core { class TextureBlenderMaterialPropertyCacheHelper; }
namespace System { class String; }
namespace UnityEngine { class Material; }

#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERHDRPLIT_DOESSHADERNAMEMATCH_OFFSET UNITYSDK_OFFSET(0x1BB005E0)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERHDRPLIT_GETCOLORIFNOTEXTURE_OFFSET UNITYSDK_OFFSET(0x1BB01DE0)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERHDRPLIT_NONTEXTUREPROPERTIESAREEQUAL_OFFSET UNITYSDK_OFFSET(0x1BB00FB0)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERHDRPLIT_ONBEFORETINTTEXTURE_OFFSET UNITYSDK_OFFSET(0x1BB00700)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERHDRPLIT_ONBLENDTEXTUREPIXEL_OFFSET UNITYSDK_OFFSET(0x1BB00EB0)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERHDRPLIT_SETNONTEXTUREPROPERTYVALUESONRESULTMATERIAL_OFFSET UNITYSDK_OFFSET(0x1BB01550)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERHDRPLIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB02980)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERHDRPLIT__MAPFLOATTOMATERIALTYPE_OFFSET UNITYSDK_OFFSET(0x1BB00670)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERHDRPLIT__MAPMATERIALTYPETOFLOAT_OFFSET UNITYSDK_OFFSET(0x1BB006E0)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int TextureBlenderHDRPLit_TypeDefinitionIndex = 85003;

	class TextureBlenderHDRPLit : public ::System::Object
	{
	public:
		::DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper* sourceMaterialPropertyCache; // 0x10
		::System::Single m_notGeneratingAtlasDefaultMetallic; // 0x18
		::UnityEngine::Color m_tintColor; // 0x1C
		::UnityEngine::Color m_specularColor; // 0x2C
		::System::Single m_notGeneratingAtlasDefaultSmoothness; // 0x3C
		::UnityEngine::Color m_notGeneratingAtlasDefaultColor; // 0x40
		::UnityEngine::Color m_emissiveColor; // 0x50
		::UnityEngine::Color m_notGeneratingAtlasDefaultEmissiveColor; // 0x60
		::UnityEngine::Color m_generatingTintedAtlaSpecular; // 0x70
		::System::Boolean m_hasSpecMap; // 0x80
		::System::Boolean m_hasMaskMap; // 0x81
		::System::Single m_metallic; // 0x84
		::DigitalOpus::MB::Core::TextureBlenderHDRPLit_MaterialType m_materialType; // 0x88
		::System::Single m_smoothness; // 0x8C
		::DigitalOpus::MB::Core::TextureBlenderHDRPLit_Prop propertyToDo; // 0x90
		::UnityEngine::Color m_generatingTintedAtlaColor; // 0x94
		::UnityEngine::Color m_generatingTintedAtlaEmission; // 0xA4
		::UnityEngine::Color m_notGeneratingAtlasDefaultSpecular; // 0xB4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_TEXTUREBLENDERHDRPLIT__CTOR_OFFSET))(this);
		}

		::System::Boolean DoesShaderNameMatch(::System::String* shaderName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_TEXTUREBLENDERHDRPLIT_DOESSHADERNAMEMATCH_OFFSET))(this, shaderName);
		}

		::DigitalOpus::MB::Core::TextureBlenderHDRPLit_MaterialType _MapFloatToMaterialType(::System::Single materialType)
		{
			return ((::DigitalOpus::MB::Core::TextureBlenderHDRPLit_MaterialType(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_TEXTUREBLENDERHDRPLIT__MAPFLOATTOMATERIALTYPE_OFFSET))(this, materialType);
		}

		::System::Single _MapMaterialTypeToFloat(::DigitalOpus::MB::Core::TextureBlenderHDRPLit_MaterialType materialType)
		{
			return ((::System::Single(*)(::PVOID, ::DigitalOpus::MB::Core::TextureBlenderHDRPLit_MaterialType))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_TEXTUREBLENDERHDRPLIT__MAPMATERIALTYPETOFLOAT_OFFSET))(this, materialType);
		}

		::System::Void OnBeforeTintTexture(::UnityEngine::Material* sourceMat, ::System::String* shaderTexturePropertyName)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::String*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_TEXTUREBLENDERHDRPLIT_ONBEFORETINTTEXTURE_OFFSET))(this, sourceMat, shaderTexturePropertyName);
		}

		::UnityEngine::Color OnBlendTexturePixel(::System::String* propertyToDoshaderPropertyName, ::UnityEngine::Color pixelColor)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::String*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_TEXTUREBLENDERHDRPLIT_ONBLENDTEXTUREPIXEL_OFFSET))(this, propertyToDoshaderPropertyName, pixelColor);
		}

		::System::Boolean NonTexturePropertiesAreEqual(::UnityEngine::Material* a, ::UnityEngine::Material* b)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_TEXTUREBLENDERHDRPLIT_NONTEXTUREPROPERTIESAREEQUAL_OFFSET))(this, a, b);
		}

		::System::Void SetNonTexturePropertyValuesOnResultMaterial(::UnityEngine::Material* resultMaterial)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_TEXTUREBLENDERHDRPLIT_SETNONTEXTUREPROPERTYVALUESONRESULTMATERIAL_OFFSET))(this, resultMaterial);
		}

		::UnityEngine::Color GetColorIfNoTexture(::UnityEngine::Material* mat, ::DigitalOpus::MB::Core::ShaderTextureProperty* texPropertyName)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::UnityEngine::Material*, ::DigitalOpus::MB::Core::ShaderTextureProperty*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_TEXTUREBLENDERHDRPLIT_GETCOLORIFNOTEXTURE_OFFSET))(this, mat, texPropertyName);
		}
	};
}
