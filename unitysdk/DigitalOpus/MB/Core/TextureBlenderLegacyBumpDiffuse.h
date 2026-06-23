#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace DigitalOpus::MB::Core { class ShaderTextureProperty; }
namespace System { class String; }
namespace UnityEngine { class Material; }

#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERLEGACYBUMPDIFFUSE_DOESSHADERNAMEMATCH_OFFSET UNITYSDK_OFFSET(0x1E2F1520)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERLEGACYBUMPDIFFUSE_GETCOLORIFNOTEXTURE_OFFSET UNITYSDK_OFFSET(0x1E2F17B0)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERLEGACYBUMPDIFFUSE_NONTEXTUREPROPERTIESAREEQUAL_OFFSET UNITYSDK_OFFSET(0x1E2F16E0)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERLEGACYBUMPDIFFUSE_ONBEFORETINTTEXTURE_OFFSET UNITYSDK_OFFSET(0x1E2F1610)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERLEGACYBUMPDIFFUSE_ONBLENDTEXTUREPIXEL_OFFSET UNITYSDK_OFFSET(0x1E2F16B0)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERLEGACYBUMPDIFFUSE_SETNONTEXTUREPROPERTYVALUESONRESULTMATERIAL_OFFSET UNITYSDK_OFFSET(0x1E2F1740)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERLEGACYBUMPDIFFUSE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E2F18D0)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int TextureBlenderLegacyBumpDiffuse_TypeDefinitionIndex = 90580;

	class TextureBlenderLegacyBumpDiffuse : public ::System::Object
	{
	public:
		::System::Boolean doColor; // 0x10
		::UnityEngine::Color m_tintColor; // 0x14
		::UnityEngine::Color m_defaultTintColor; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_TEXTUREBLENDERLEGACYBUMPDIFFUSE__CTOR_OFFSET))(this);
		}

		::System::Boolean DoesShaderNameMatch(::System::String* shaderName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_TEXTUREBLENDERLEGACYBUMPDIFFUSE_DOESSHADERNAMEMATCH_OFFSET))(this, shaderName);
		}

		::System::Void OnBeforeTintTexture(::UnityEngine::Material* sourceMat, ::System::String* shaderTexturePropertyName)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::String*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_TEXTUREBLENDERLEGACYBUMPDIFFUSE_ONBEFORETINTTEXTURE_OFFSET))(this, sourceMat, shaderTexturePropertyName);
		}

		::UnityEngine::Color OnBlendTexturePixel(::System::String* propertyToDoshaderPropertyName, ::UnityEngine::Color pixelColor)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::String*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_TEXTUREBLENDERLEGACYBUMPDIFFUSE_ONBLENDTEXTUREPIXEL_OFFSET))(this, propertyToDoshaderPropertyName, pixelColor);
		}

		::System::Boolean NonTexturePropertiesAreEqual(::UnityEngine::Material* a, ::UnityEngine::Material* b)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_TEXTUREBLENDERLEGACYBUMPDIFFUSE_NONTEXTUREPROPERTIESAREEQUAL_OFFSET))(this, a, b);
		}

		::System::Void SetNonTexturePropertyValuesOnResultMaterial(::UnityEngine::Material* resultMaterial)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_TEXTUREBLENDERLEGACYBUMPDIFFUSE_SETNONTEXTUREPROPERTYVALUESONRESULTMATERIAL_OFFSET))(this, resultMaterial);
		}

		::UnityEngine::Color GetColorIfNoTexture(::UnityEngine::Material* m, ::DigitalOpus::MB::Core::ShaderTextureProperty* texPropertyName)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::UnityEngine::Material*, ::DigitalOpus::MB::Core::ShaderTextureProperty*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_TEXTUREBLENDERLEGACYBUMPDIFFUSE_GETCOLORIFNOTEXTURE_OFFSET))(this, m, texPropertyName);
		}
	};
}
