#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace DigitalOpus::MB::Core { class ShaderTextureProperty; }
namespace System { class String; }
namespace UnityEngine { class Material; }

#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERLEGACYDIFFUSE_DOESSHADERNAMEMATCH_OFFSET UNITYSDK_OFFSET(0x1DA6E220)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERLEGACYDIFFUSE_GETCOLORIFNOTEXTURE_OFFSET UNITYSDK_OFFSET(0x1DA6E4B0)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERLEGACYDIFFUSE_NONTEXTUREPROPERTIESAREEQUAL_OFFSET UNITYSDK_OFFSET(0x1DA6E3E0)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERLEGACYDIFFUSE_ONBEFORETINTTEXTURE_OFFSET UNITYSDK_OFFSET(0x1DA6E310)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERLEGACYDIFFUSE_ONBLENDTEXTUREPIXEL_OFFSET UNITYSDK_OFFSET(0x1DA6E3B0)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERLEGACYDIFFUSE_SETNONTEXTUREPROPERTYVALUESONRESULTMATERIAL_OFFSET UNITYSDK_OFFSET(0x1DA6E440)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERLEGACYDIFFUSE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DA6E6A0)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int TextureBlenderLegacyDiffuse_TypeDefinitionIndex = 90581;

	class TextureBlenderLegacyDiffuse : public ::System::Object
	{
	public:
		::System::Boolean doColor; // 0x10
		::UnityEngine::Color m_tintColor; // 0x14
		::UnityEngine::Color m_defaultTintColor; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_TEXTUREBLENDERLEGACYDIFFUSE__CTOR_OFFSET))(this);
		}

		::System::Boolean DoesShaderNameMatch(::System::String* shaderName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_TEXTUREBLENDERLEGACYDIFFUSE_DOESSHADERNAMEMATCH_OFFSET))(this, shaderName);
		}

		::System::Void OnBeforeTintTexture(::UnityEngine::Material* sourceMat, ::System::String* shaderTexturePropertyName)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::String*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_TEXTUREBLENDERLEGACYDIFFUSE_ONBEFORETINTTEXTURE_OFFSET))(this, sourceMat, shaderTexturePropertyName);
		}

		::UnityEngine::Color OnBlendTexturePixel(::System::String* propertyToDoshaderPropertyName, ::UnityEngine::Color pixelColor)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::String*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_TEXTUREBLENDERLEGACYDIFFUSE_ONBLENDTEXTUREPIXEL_OFFSET))(this, propertyToDoshaderPropertyName, pixelColor);
		}

		::System::Boolean NonTexturePropertiesAreEqual(::UnityEngine::Material* a, ::UnityEngine::Material* b)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_TEXTUREBLENDERLEGACYDIFFUSE_NONTEXTUREPROPERTIESAREEQUAL_OFFSET))(this, a, b);
		}

		::System::Void SetNonTexturePropertyValuesOnResultMaterial(::UnityEngine::Material* resultMaterial)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_TEXTUREBLENDERLEGACYDIFFUSE_SETNONTEXTUREPROPERTYVALUESONRESULTMATERIAL_OFFSET))(this, resultMaterial);
		}

		::UnityEngine::Color GetColorIfNoTexture(::UnityEngine::Material* m, ::DigitalOpus::MB::Core::ShaderTextureProperty* texPropertyName)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::UnityEngine::Material*, ::DigitalOpus::MB::Core::ShaderTextureProperty*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_TEXTUREBLENDERLEGACYDIFFUSE_GETCOLORIFNOTEXTURE_OFFSET))(this, m, texPropertyName);
		}
	};
}
