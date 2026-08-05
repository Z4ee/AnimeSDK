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

#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERURPLIT_DOESSHADERNAMEMATCH_OFFSET UNITYSDK_OFFSET(0x1F7AFA40)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERURPLIT_GETCOLORIFNOTEXTURE_OFFSET UNITYSDK_OFFSET(0x1F7B1E20)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERURPLIT_NONTEXTUREPROPERTIESAREEQUAL_OFFSET UNITYSDK_OFFSET(0x1F7B0880)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERURPLIT_ONBEFORETINTTEXTURE_OFFSET UNITYSDK_OFFSET(0x1F7AFD10)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERURPLIT_ONBLENDTEXTUREPIXEL_OFFSET UNITYSDK_OFFSET(0x1F7B06A0)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERURPLIT_SETNONTEXTUREPROPERTYVALUESONRESULTMATERIAL_OFFSET UNITYSDK_OFFSET(0x1F7B1250)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERURPLIT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F7B28B0)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERURPLIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1F7B2770)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERURPLIT__MAPFLOATTOTEXTURECHANNEL_OFFSET UNITYSDK_OFFSET(0x1F7AFCD0)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERURPLIT__MAPFLOATTOWORKFLOWMODE_OFFSET UNITYSDK_OFFSET(0x1F7AFC90)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERURPLIT__MAPTEXTURECHANNELTOFLOAT_OFFSET UNITYSDK_OFFSET(0x1F7AFCF0)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERURPLIT__MAPWORKFLOWMODETOFLOAT_OFFSET UNITYSDK_OFFSET(0x1F7AFCB0)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int TextureBlenderURPLit_TypeDefinitionIndex = 94523;

	class TextureBlenderURPLit : public ::System::Object
	{
	public:
		static ::UnityEngine::Color* StaticGet_NeutralNormalMap()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(TextureBlenderURPLit_TypeDefinitionIndex)->GetStaticField(0x132F0);
		}
		// static const ::System::Single m_generatedAlphaCutoff; // 0x0
		::DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper* sourceMaterialPropertyCache; // 0x10
		::DigitalOpus::MB::Core::TextureBlenderURPLit_Prop propertyToDo; // 0x18
		::UnityEngine::Color m_emissionColor; // 0x1C
		::System::Single m_smoothness; // 0x2C
		::System::Single m_notGeneratingAtlasDefaultMetallic; // 0x30
		::System::Single m_notGeneratingAtlasDefaultSmoothness_SpecularWorkflow; // 0x34
		::System::Single m_bumpScale; // 0x38
		::System::Single m_generatingTintedAtlasMetallic; // 0x3C
		::System::Single m_alphaCutoff; // 0x40
		::UnityEngine::Color m_specColor; // 0x44
		::DigitalOpus::MB::Core::TextureBlenderURPLit_SmoothnessTextureChannel m_smoothnessTextureChannel; // 0x54
		::UnityEngine::Color m_notGeneratingAtlasDefaultSpecularColor; // 0x58
		::DigitalOpus::MB::Core::TextureBlenderURPLit_WorkflowMode m_workflowMode; // 0x68
		::UnityEngine::Color m_notGeneratingAtlasDefaultEmisionColor; // 0x6C
		::UnityEngine::Color m_generatingTintedAtlaEmission; // 0x7C
		::System::Single m_generatingTintedAtlaBumpScale; // 0x8C
		::System::Boolean m_doScaleAlphaCutoff; // 0x90
		::System::Boolean m_shaderDoesEmission; // 0x91
		::System::Boolean m_hasSpecGlossMap; // 0x92
		::System::Boolean m_hasMetallicGlossMap; // 0x93
		::UnityEngine::Color m_generatingTintedAtlaColor; // 0x94
		::System::Single m_notGeneratingAtlasDefaultSmoothness_MetallicWorkflow; // 0xA4
		::System::Single m_metallic; // 0xA8
		::UnityEngine::Color m_generatingTintedAtlaSpecular; // 0xAC
		::System::Single m_generatingTintedAtlasSpecular_somoothness; // 0xBC
		::UnityEngine::Color m_notGeneratingAtlasDefaultColor; // 0xC0
		::System::Single m_generatingTintedAtlasMetallic_smoothness; // 0xD0
		::UnityEngine::Color m_tintColor; // 0xD4

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
