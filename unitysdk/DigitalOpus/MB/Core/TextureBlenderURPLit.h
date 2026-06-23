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

#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERURPLIT_DOESSHADERNAMEMATCH_OFFSET UNITYSDK_OFFSET(0x1E36CF30)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERURPLIT_GETCOLORIFNOTEXTURE_OFFSET UNITYSDK_OFFSET(0x1E36F3E0)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERURPLIT_NONTEXTUREPROPERTIESAREEQUAL_OFFSET UNITYSDK_OFFSET(0x1E36DDC0)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERURPLIT_ONBEFORETINTTEXTURE_OFFSET UNITYSDK_OFFSET(0x1E36D200)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERURPLIT_ONBLENDTEXTUREPIXEL_OFFSET UNITYSDK_OFFSET(0x1E36DBD0)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERURPLIT_SETNONTEXTUREPROPERTYVALUESONRESULTMATERIAL_OFFSET UNITYSDK_OFFSET(0x1E36E7E0)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERURPLIT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E36FE70)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERURPLIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E36FD30)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERURPLIT__MAPFLOATTOTEXTURECHANNEL_OFFSET UNITYSDK_OFFSET(0x1E36D1C0)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERURPLIT__MAPFLOATTOWORKFLOWMODE_OFFSET UNITYSDK_OFFSET(0x1E36D180)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERURPLIT__MAPTEXTURECHANNELTOFLOAT_OFFSET UNITYSDK_OFFSET(0x1E36D1E0)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERURPLIT__MAPWORKFLOWMODETOFLOAT_OFFSET UNITYSDK_OFFSET(0x1E36D1A0)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int TextureBlenderURPLit_TypeDefinitionIndex = 90590;

	class TextureBlenderURPLit : public ::System::Object
	{
	public:
		static ::UnityEngine::Color* StaticGet_NeutralNormalMap()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(TextureBlenderURPLit_TypeDefinitionIndex)->GetStaticField(0x12CE0);
		}
		// static const ::System::Single m_generatedAlphaCutoff; // 0x0
		::DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper* sourceMaterialPropertyCache; // 0x10
		::UnityEngine::Color m_generatingTintedAtlaSpecular; // 0x18
		::DigitalOpus::MB::Core::TextureBlenderURPLit_SmoothnessTextureChannel m_smoothnessTextureChannel; // 0x28
		::UnityEngine::Color m_tintColor; // 0x2C
		::System::Boolean m_shaderDoesEmission; // 0x3C
		::System::Boolean m_hasMetallicGlossMap; // 0x3D
		::System::Boolean m_doScaleAlphaCutoff; // 0x3E
		::System::Boolean m_hasSpecGlossMap; // 0x3F
		::System::Single m_generatingTintedAtlasMetallic; // 0x40
		::UnityEngine::Color m_notGeneratingAtlasDefaultSpecularColor; // 0x44
		::System::Single m_bumpScale; // 0x54
		::UnityEngine::Color m_notGeneratingAtlasDefaultEmisionColor; // 0x58
		::UnityEngine::Color m_emissionColor; // 0x68
		::System::Single m_generatingTintedAtlasSpecular_somoothness; // 0x78
		::System::Single m_notGeneratingAtlasDefaultSmoothness_SpecularWorkflow; // 0x7C
		::DigitalOpus::MB::Core::TextureBlenderURPLit_WorkflowMode m_workflowMode; // 0x80
		::System::Single m_generatingTintedAtlasMetallic_smoothness; // 0x84
		::UnityEngine::Color m_specColor; // 0x88
		::System::Single m_notGeneratingAtlasDefaultSmoothness_MetallicWorkflow; // 0x98
		::System::Single m_smoothness; // 0x9C
		::UnityEngine::Color m_notGeneratingAtlasDefaultColor; // 0xA0
		::System::Single m_metallic; // 0xB0
		::System::Single m_alphaCutoff; // 0xB4
		::UnityEngine::Color m_generatingTintedAtlaColor; // 0xB8
		::DigitalOpus::MB::Core::TextureBlenderURPLit_Prop propertyToDo; // 0xC8
		::System::Single m_notGeneratingAtlasDefaultMetallic; // 0xCC
		::UnityEngine::Color m_generatingTintedAtlaEmission; // 0xD0
		::System::Single m_generatingTintedAtlaBumpScale; // 0xE0

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
