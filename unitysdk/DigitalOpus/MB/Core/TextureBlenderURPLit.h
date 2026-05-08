#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DigitalOpus/MB/Core/TextureBlenderURPLit_Prop.h"
#include "unitysdk/DigitalOpus/MB/Core/TextureBlenderURPLit_SmoothnessTextureChannel.h"
#include "unitysdk/DigitalOpus/MB/Core/TextureBlenderURPLit_WorkflowMode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace DigitalOpus::MB::Core { class ShaderTextureProperty; }
namespace DigitalOpus::MB::Core { class TextureBlenderMaterialPropertyCacheHelper; }
namespace System { class String; }
namespace UnityEngine { class Material; }

#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERURPLIT_DOESSHADERNAMEMATCH_OFFSET UNITYSDK_OFFSET(0x1C048E50)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERURPLIT_GETCOLORIFNOTEXTURE_OFFSET UNITYSDK_OFFSET(0x1C04B2D0)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERURPLIT_NONTEXTUREPROPERTIESAREEQUAL_OFFSET UNITYSDK_OFFSET(0x1C049CC0)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERURPLIT_ONBEFORETINTTEXTURE_OFFSET UNITYSDK_OFFSET(0x1C049120)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERURPLIT_ONBLENDTEXTUREPIXEL_OFFSET UNITYSDK_OFFSET(0x1C049AE0)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERURPLIT_SETNONTEXTUREPROPERTYVALUESONRESULTMATERIAL_OFFSET UNITYSDK_OFFSET(0x1C04A6E0)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERURPLIT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C04BD70)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERURPLIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C04BC20)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERURPLIT__MAPFLOATTOTEXTURECHANNEL_OFFSET UNITYSDK_OFFSET(0x1C0490E0)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERURPLIT__MAPFLOATTOWORKFLOWMODE_OFFSET UNITYSDK_OFFSET(0x1C0490A0)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERURPLIT__MAPTEXTURECHANNELTOFLOAT_OFFSET UNITYSDK_OFFSET(0x1C049100)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERURPLIT__MAPWORKFLOWMODETOFLOAT_OFFSET UNITYSDK_OFFSET(0x1C0490C0)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int TextureBlenderURPLit_TypeDefinitionIndex = 85016;

	class TextureBlenderURPLit : public ::System::Object
	{
	public:
		static ::UnityEngine::Color* StaticGet_NeutralNormalMap()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(TextureBlenderURPLit_TypeDefinitionIndex)->GetStaticField(0x11E70);
		}
		// static const ::System::Single m_generatedAlphaCutoff; // 0x0
		::DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper* sourceMaterialPropertyCache; // 0x10
		::UnityEngine::Color m_notGeneratingAtlasDefaultSpecularColor; // 0x18
		::UnityEngine::Color m_generatingTintedAtlaColor; // 0x28
		::System::Single m_alphaCutoff; // 0x38
		::System::Single m_smoothness; // 0x3C
		::UnityEngine::Color m_emissionColor; // 0x40
		::System::Single m_generatingTintedAtlasMetallic_smoothness; // 0x50
		::System::Single m_bumpScale; // 0x54
		::UnityEngine::Color m_specColor; // 0x58
		::UnityEngine::Color m_tintColor; // 0x68
		::DigitalOpus::MB::Core::TextureBlenderURPLit_WorkflowMode m_workflowMode; // 0x78
		::UnityEngine::Color m_generatingTintedAtlaEmission; // 0x7C
		::UnityEngine::Color m_notGeneratingAtlasDefaultEmisionColor; // 0x8C
		::System::Single m_generatingTintedAtlaBumpScale; // 0x9C
		::UnityEngine::Color m_generatingTintedAtlaSpecular; // 0xA0
		::UnityEngine::Color m_notGeneratingAtlasDefaultColor; // 0xB0
		::System::Single m_notGeneratingAtlasDefaultSmoothness_MetallicWorkflow; // 0xC0
		::System::Single m_generatingTintedAtlasSpecular_somoothness; // 0xC4
		::System::Single m_generatingTintedAtlasMetallic; // 0xC8
		::System::Single m_notGeneratingAtlasDefaultMetallic; // 0xCC
		::DigitalOpus::MB::Core::TextureBlenderURPLit_SmoothnessTextureChannel m_smoothnessTextureChannel; // 0xD0
		::System::Boolean m_shaderDoesEmission; // 0xD4
		::System::Boolean m_hasMetallicGlossMap; // 0xD5
		::System::Boolean m_hasSpecGlossMap; // 0xD6
		::System::Boolean m_doScaleAlphaCutoff; // 0xD7
		::DigitalOpus::MB::Core::TextureBlenderURPLit_Prop propertyToDo; // 0xD8
		::System::Single m_metallic; // 0xDC
		::System::Single m_notGeneratingAtlasDefaultSmoothness_SpecularWorkflow; // 0xE0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_TEXTUREBLENDERURPLIT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_TEXTUREBLENDERURPLIT__CCTOR_OFFSET))();
		}

		::System::Boolean DoesShaderNameMatch(::System::String* shaderName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_TEXTUREBLENDERURPLIT_DOESSHADERNAMEMATCH_OFFSET))(this, shaderName);
		}

		::DigitalOpus::MB::Core::TextureBlenderURPLit_WorkflowMode _MapFloatToWorkflowMode(::System::Single workflowMode)
		{
			return ((::DigitalOpus::MB::Core::TextureBlenderURPLit_WorkflowMode(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_TEXTUREBLENDERURPLIT__MAPFLOATTOWORKFLOWMODE_OFFSET))(this, workflowMode);
		}

		::System::Single _MapWorkflowModeToFloat(::DigitalOpus::MB::Core::TextureBlenderURPLit_WorkflowMode workflowMode)
		{
			return ((::System::Single(*)(::PVOID, ::DigitalOpus::MB::Core::TextureBlenderURPLit_WorkflowMode))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_TEXTUREBLENDERURPLIT__MAPWORKFLOWMODETOFLOAT_OFFSET))(this, workflowMode);
		}

		::DigitalOpus::MB::Core::TextureBlenderURPLit_SmoothnessTextureChannel _MapFloatToTextureChannel(::System::Single texChannel)
		{
			return ((::DigitalOpus::MB::Core::TextureBlenderURPLit_SmoothnessTextureChannel(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_TEXTUREBLENDERURPLIT__MAPFLOATTOTEXTURECHANNEL_OFFSET))(this, texChannel);
		}

		::System::Single _MapTextureChannelToFloat(::DigitalOpus::MB::Core::TextureBlenderURPLit_SmoothnessTextureChannel workflowMode)
		{
			return ((::System::Single(*)(::PVOID, ::DigitalOpus::MB::Core::TextureBlenderURPLit_SmoothnessTextureChannel))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_TEXTUREBLENDERURPLIT__MAPTEXTURECHANNELTOFLOAT_OFFSET))(this, workflowMode);
		}

		::System::Void OnBeforeTintTexture(::UnityEngine::Material* sourceMat, ::System::String* shaderTexturePropertyName)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::String*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_TEXTUREBLENDERURPLIT_ONBEFORETINTTEXTURE_OFFSET))(this, sourceMat, shaderTexturePropertyName);
		}

		::UnityEngine::Color OnBlendTexturePixel(::System::String* propertyToDoshaderPropertyName, ::UnityEngine::Color pixelColor)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::String*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_TEXTUREBLENDERURPLIT_ONBLENDTEXTUREPIXEL_OFFSET))(this, propertyToDoshaderPropertyName, pixelColor);
		}

		::System::Boolean NonTexturePropertiesAreEqual(::UnityEngine::Material* a, ::UnityEngine::Material* b)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_TEXTUREBLENDERURPLIT_NONTEXTUREPROPERTIESAREEQUAL_OFFSET))(this, a, b);
		}

		::System::Void SetNonTexturePropertyValuesOnResultMaterial(::UnityEngine::Material* resultMaterial)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_TEXTUREBLENDERURPLIT_SETNONTEXTUREPROPERTYVALUESONRESULTMATERIAL_OFFSET))(this, resultMaterial);
		}

		::UnityEngine::Color GetColorIfNoTexture(::UnityEngine::Material* mat, ::DigitalOpus::MB::Core::ShaderTextureProperty* texPropertyName)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::UnityEngine::Material*, ::DigitalOpus::MB::Core::ShaderTextureProperty*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_TEXTUREBLENDERURPLIT_GETCOLORIFNOTEXTURE_OFFSET))(this, mat, texPropertyName);
		}
	};
}
