#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace DigitalOpus::MB::Core { class ShaderTextureProperty; }
namespace System { class String; }
namespace UnityEngine { class Material; }

#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERFALLBACK_DOESSHADERNAMEMATCH_OFFSET UNITYSDK_OFFSET(0x1C120CB0)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERFALLBACK_GETCOLORIFNOTEXTURE_OFFSET UNITYSDK_OFFSET(0x1C121110)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERFALLBACK_NONTEXTUREPROPERTIESAREEQUAL_OFFSET UNITYSDK_OFFSET(0x1C120E40)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERFALLBACK_ONBEFORETINTTEXTURE_OFFSET UNITYSDK_OFFSET(0x1C120CC0)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERFALLBACK_ONBLENDTEXTUREPIXEL_OFFSET UNITYSDK_OFFSET(0x1C120E10)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERFALLBACK_SETNONTEXTUREPROPERTYVALUESONRESULTMATERIAL_OFFSET UNITYSDK_OFFSET(0x1C121040)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERFALLBACK__COMPARECOLOR_OFFSET UNITYSDK_OFFSET(0x1C120F10)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERFALLBACK__COMPAREFLOAT_OFFSET UNITYSDK_OFFSET(0x1C121E10)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERFALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1C121ED0)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int TextureBlenderFallback_TypeDefinitionIndex = 85002;

	class TextureBlenderFallback : public ::System::Object
	{
	public:
		::System::Boolean m_doTintColor; // 0x10
		::UnityEngine::Color m_tintColor; // 0x14
		::UnityEngine::Color m_defaultColor; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_TEXTUREBLENDERFALLBACK__CTOR_OFFSET))(this);
		}

		::System::Boolean DoesShaderNameMatch(::System::String* shaderName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_TEXTUREBLENDERFALLBACK_DOESSHADERNAMEMATCH_OFFSET))(this, shaderName);
		}

		::System::Void OnBeforeTintTexture(::UnityEngine::Material* sourceMat, ::System::String* shaderTexturePropertyName)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::String*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_TEXTUREBLENDERFALLBACK_ONBEFORETINTTEXTURE_OFFSET))(this, sourceMat, shaderTexturePropertyName);
		}

		::UnityEngine::Color OnBlendTexturePixel(::System::String* shaderPropertyName, ::UnityEngine::Color pixelColor)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::String*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_TEXTUREBLENDERFALLBACK_ONBLENDTEXTUREPIXEL_OFFSET))(this, shaderPropertyName, pixelColor);
		}

		::System::Boolean NonTexturePropertiesAreEqual(::UnityEngine::Material* a, ::UnityEngine::Material* b)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_TEXTUREBLENDERFALLBACK_NONTEXTUREPROPERTIESAREEQUAL_OFFSET))(this, a, b);
		}

		::System::Void SetNonTexturePropertyValuesOnResultMaterial(::UnityEngine::Material* resultMaterial)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_TEXTUREBLENDERFALLBACK_SETNONTEXTUREPROPERTYVALUESONRESULTMATERIAL_OFFSET))(this, resultMaterial);
		}

		::UnityEngine::Color GetColorIfNoTexture(::UnityEngine::Material* mat, ::DigitalOpus::MB::Core::ShaderTextureProperty* texProperty)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::UnityEngine::Material*, ::DigitalOpus::MB::Core::ShaderTextureProperty*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_TEXTUREBLENDERFALLBACK_GETCOLORIFNOTEXTURE_OFFSET))(this, mat, texProperty);
		}

		static ::System::Boolean _compareColor(::UnityEngine::Material* a, ::UnityEngine::Material* b, ::UnityEngine::Color defaultVal, ::System::String* propertyName)
		{
			return ((::System::Boolean(*)(::UnityEngine::Material*, ::UnityEngine::Material*, ::UnityEngine::Color, ::System::String*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_TEXTUREBLENDERFALLBACK__COMPARECOLOR_OFFSET))(a, b, defaultVal, propertyName);
		}

		static ::System::Boolean _compareFloat(::UnityEngine::Material* a, ::UnityEngine::Material* b, ::System::Single defaultVal, ::System::String* propertyName)
		{
			return ((::System::Boolean(*)(::UnityEngine::Material*, ::UnityEngine::Material*, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_TEXTUREBLENDERFALLBACK__COMPAREFLOAT_OFFSET))(a, b, defaultVal, propertyName);
		}
	};
}
