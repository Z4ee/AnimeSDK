#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DigitalOpus/MB/Core/MB2_LogLevel.h"
#include "unitysdk/DigitalOpus/MB/Core/MB3_TextureCombinerNonTextureProperties_TexPropertyNameColorPair.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace DigitalOpus::MB::Core { class MB2_EditorMethodsInterface; }
namespace DigitalOpus::MB::Core { class MB3_TextureCombinerNonTextureProperties_MaterialProperty; }
namespace DigitalOpus::MB::Core { class MB3_TextureCombinerNonTextureProperties_NonTextureProperties; }
namespace DigitalOpus::MB::Core { class MB_TexSet; }
namespace DigitalOpus::MB::Core { class ShaderTextureProperty; }
namespace DigitalOpus::MB::Core { class TextureBlender; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture2D; }

#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERNONTEXTUREPROPERTIES_ADJUSTNONTEXTUREPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1DA6B590)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERNONTEXTUREPROPERTIES_COLLECTAVERAGEVALUESOFNONTEXTUREPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1DA6A430)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERNONTEXTUREPROPERTIES_FINDBESTTEXTUREBLENDER_OFFSET UNITYSDK_OFFSET(0x1DA6AF60)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERNONTEXTUREPROPERTIES_FINDMATCHINGTEXTUREBLENDER_OFFSET UNITYSDK_OFFSET(0x1DA6B230)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERNONTEXTUREPROPERTIES_GETCOLORASITWOULDAPPEARINATLASIFNOTEXTURE_OFFSET UNITYSDK_OFFSET(0x1DA6B790)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERNONTEXTUREPROPERTIES_GETCOLORFORTEMPORARYTEXTURE_OFFSET UNITYSDK_OFFSET(0x1DA6B8A0)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERNONTEXTUREPROPERTIES_INTERFACEFILTER_OFFSET UNITYSDK_OFFSET(0x1DA6B1A0)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERNONTEXTUREPROPERTIES_LOADTEXTUREBLENDERSIFNEEDED_OFFSET UNITYSDK_OFFSET(0x1DA6A750)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERNONTEXTUREPROPERTIES_LOADTEXTUREBLENDERS_OFFSET UNITYSDK_OFFSET(0x1DA6A780)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERNONTEXTUREPROPERTIES_NONTEXTUREPROPERTIESAREEQUAL_OFFSET UNITYSDK_OFFSET(0x1DA6B3B0)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERNONTEXTUREPROPERTIES_TINTTEXTUREWITHTEXTURECOMBINER_OFFSET UNITYSDK_OFFSET(0x1DA6B490)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERNONTEXTUREPROPERTIES__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DA6B9B0)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERNONTEXTUREPROPERTIES__CTOR_OFFSET UNITYSDK_OFFSET(0x1DA69A90)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB3_TextureCombinerNonTextureProperties_TypeDefinitionIndex = 90708;

	class MB3_TextureCombinerNonTextureProperties : public ::System::Object
	{
	public:
		static ::UnityEngine::Color* StaticGet_NEUTRAL_NORMAL_MAP_COLOR()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(MB3_TextureCombinerNonTextureProperties_TypeDefinitionIndex)->GetStaticField(0x12C70);
		}
		::Il2CppArray<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialProperty*>* _nonTextureProperties; // 0x10
		::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTextureProperties* _nonTexturePropertiesBlender; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Color>* textureProperty2DefaultColorMap; // 0x20
		::DigitalOpus::MB::Core::TextureBlender* resultMaterialTextureBlender; // 0x28
		::Il2CppArray<::DigitalOpus::MB::Core::TextureBlender*>* textureBlenders; // 0x30
		::Il2CppArray<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_TexPropertyNameColorPair>* defaultTextureProperty2DefaultColorMap; // 0x38
		::DigitalOpus::MB::Core::MB2_LogLevel LOG_LEVEL; // 0x40
		::System::Boolean _considerNonTextureProperties; // 0x44

		::System::Void _ctor(::DigitalOpus::MB::Core::MB2_LogLevel ll, ::System::Boolean considerNonTextureProps)
		{
			return ((::System::Void(*)(::PVOID, ::DigitalOpus::MB::Core::MB2_LogLevel, ::System::Boolean))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERNONTEXTUREPROPERTIES__CTOR_OFFSET))(this, ll, considerNonTextureProps);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERNONTEXTUREPROPERTIES__CCTOR_OFFSET))();
		}

		::System::Void CollectAverageValuesOfNonTextureProperties(::UnityEngine::Material* resultMaterial, ::UnityEngine::Material* mat)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERNONTEXTUREPROPERTIES_COLLECTAVERAGEVALUESOFNONTEXTUREPROPERTIES_OFFSET))(this, resultMaterial, mat);
		}

		::System::Void LoadTextureBlendersIfNeeded(::UnityEngine::Material* resultMaterial)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERNONTEXTUREPROPERTIES_LOADTEXTUREBLENDERSIFNEEDED_OFFSET))(this, resultMaterial);
		}

		static ::System::Boolean InterfaceFilter(::System::Type* typeObj, ::System::Object* criteriaObj)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERNONTEXTUREPROPERTIES_INTERFACEFILTER_OFFSET))(typeObj, criteriaObj);
		}

		::System::Void FindBestTextureBlender(::UnityEngine::Material* resultMaterial)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERNONTEXTUREPROPERTIES_FINDBESTTEXTUREBLENDER_OFFSET))(this, resultMaterial);
		}

		::System::Void LoadTextureBlenders()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERNONTEXTUREPROPERTIES_LOADTEXTUREBLENDERS_OFFSET))(this);
		}

		::System::Boolean NonTexturePropertiesAreEqual(::UnityEngine::Material* a, ::UnityEngine::Material* b)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERNONTEXTUREPROPERTIES_NONTEXTUREPROPERTIESAREEQUAL_OFFSET))(this, a, b);
		}

		::UnityEngine::Texture2D* TintTextureWithTextureCombiner(::UnityEngine::Texture2D* t, ::DigitalOpus::MB::Core::MB_TexSet* sourceMaterial, ::DigitalOpus::MB::Core::ShaderTextureProperty* shaderPropertyName)
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID, ::UnityEngine::Texture2D*, ::DigitalOpus::MB::Core::MB_TexSet*, ::DigitalOpus::MB::Core::ShaderTextureProperty*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERNONTEXTUREPROPERTIES_TINTTEXTUREWITHTEXTURECOMBINER_OFFSET))(this, t, sourceMaterial, shaderPropertyName);
		}

		::System::Void AdjustNonTextureProperties(::UnityEngine::Material* resultMat, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>* texPropertyNames, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface* editorMethods)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERNONTEXTUREPROPERTIES_ADJUSTNONTEXTUREPROPERTIES_OFFSET))(this, resultMat, texPropertyNames, editorMethods);
		}

		::UnityEngine::Color GetColorAsItWouldAppearInAtlasIfNoTexture(::UnityEngine::Material* matIfBlender, ::DigitalOpus::MB::Core::ShaderTextureProperty* texProperty)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::UnityEngine::Material*, ::DigitalOpus::MB::Core::ShaderTextureProperty*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERNONTEXTUREPROPERTIES_GETCOLORASITWOULDAPPEARINATLASIFNOTEXTURE_OFFSET))(this, matIfBlender, texProperty);
		}

		::UnityEngine::Color GetColorForTemporaryTexture(::UnityEngine::Material* matIfBlender, ::DigitalOpus::MB::Core::ShaderTextureProperty* texProperty)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::UnityEngine::Material*, ::DigitalOpus::MB::Core::ShaderTextureProperty*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERNONTEXTUREPROPERTIES_GETCOLORFORTEMPORARYTEXTURE_OFFSET))(this, matIfBlender, texProperty);
		}

		::DigitalOpus::MB::Core::TextureBlender* FindMatchingTextureBlender(::System::String* shaderName)
		{
			return ((::DigitalOpus::MB::Core::TextureBlender*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERNONTEXTUREPROPERTIES_FINDMATCHINGTEXTUREBLENDER_OFFSET))(this, shaderName);
		}
	};
}
