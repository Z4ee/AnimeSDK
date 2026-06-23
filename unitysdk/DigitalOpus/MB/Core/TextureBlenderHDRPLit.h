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

#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERHDRPLIT_DOESSHADERNAMEMATCH_OFFSET UNITYSDK_OFFSET(0x1DE89CC0)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERHDRPLIT_GETCOLORIFNOTEXTURE_OFFSET UNITYSDK_OFFSET(0x1DE8B490)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERHDRPLIT_NONTEXTUREPROPERTIESAREEQUAL_OFFSET UNITYSDK_OFFSET(0x1DE8A670)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERHDRPLIT_ONBEFORETINTTEXTURE_OFFSET UNITYSDK_OFFSET(0x1DE89DE0)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERHDRPLIT_ONBLENDTEXTUREPIXEL_OFFSET UNITYSDK_OFFSET(0x1DE8A580)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERHDRPLIT_SETNONTEXTUREPROPERTYVALUESONRESULTMATERIAL_OFFSET UNITYSDK_OFFSET(0x1DE8AC10)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERHDRPLIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE8C030)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERHDRPLIT__MAPFLOATTOMATERIALTYPE_OFFSET UNITYSDK_OFFSET(0x1DE89D50)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERHDRPLIT__MAPMATERIALTYPETOFLOAT_OFFSET UNITYSDK_OFFSET(0x1DE89DC0)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int TextureBlenderHDRPLit_TypeDefinitionIndex = 90577;

	class TextureBlenderHDRPLit : public ::System::Object
	{
	public:
		::DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper* sourceMaterialPropertyCache; // 0x10
		::System::Single m_notGeneratingAtlasDefaultSmoothness; // 0x18
		::UnityEngine::Color m_notGeneratingAtlasDefaultColor; // 0x1C
		::UnityEngine::Color m_generatingTintedAtlaColor; // 0x2C
		::UnityEngine::Color m_notGeneratingAtlasDefaultEmissiveColor; // 0x3C
		::UnityEngine::Color m_generatingTintedAtlaSpecular; // 0x4C
		::UnityEngine::Color m_specularColor; // 0x5C
		::System::Single m_metallic; // 0x6C
		::System::Single m_notGeneratingAtlasDefaultMetallic; // 0x70
		::System::Boolean m_hasMaskMap; // 0x74
		::System::Boolean m_hasSpecMap; // 0x75
		::UnityEngine::Color m_generatingTintedAtlaEmission; // 0x78
		::UnityEngine::Color m_notGeneratingAtlasDefaultSpecular; // 0x88
		::DigitalOpus::MB::Core::TextureBlenderHDRPLit_MaterialType m_materialType; // 0x98
		::UnityEngine::Color m_emissiveColor; // 0x9C
		::UnityEngine::Color m_tintColor; // 0xAC
		::System::Single m_smoothness; // 0xBC
		::DigitalOpus::MB::Core::TextureBlenderHDRPLit_Prop propertyToDo; // 0xC0

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
