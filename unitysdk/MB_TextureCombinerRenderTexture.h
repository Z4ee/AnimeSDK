#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DigitalOpus/MB/Core/MB2_LogLevel.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace DigitalOpus::MB::Core { class MB3_TextureCombiner; }
namespace DigitalOpus::MB::Core { class MB3_TextureCombinerNonTextureProperties; }
namespace DigitalOpus::MB::Core { class MB_TexSet; }
namespace DigitalOpus::MB::Core { class MeshBakerMaterialTexture; }
namespace DigitalOpus::MB::Core { class ShaderTextureProperty; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Texture2D; }

#define MB_TEXTURECOMBINERRENDERTEXTURE_CONVERTNORMALFORMATFROMUNITY_TOSTANDARD_OFFSET UNITYSDK_OFFSET(0x1DA730B0)
#define MB_TEXTURECOMBINERRENDERTEXTURE_CONVERTRENDERTEXTURETOTEXTURE2D_OFFSET UNITYSDK_OFFSET(0x1DA72890)
#define MB_TEXTURECOMBINERRENDERTEXTURE_COPYSCALEDANDTILEDTOATLAS_OFFSET UNITYSDK_OFFSET(0x1DA718E0)
#define MB_TEXTURECOMBINERRENDERTEXTURE_DORENDERATLAS_OFFSET UNITYSDK_OFFSET(0x1DA6FCE0)
#define MB_TEXTURECOMBINERRENDERTEXTURE_ONRENDEROBJECT_OFFSET UNITYSDK_OFFSET(0x1DA70750)
#define MB_TEXTURECOMBINERRENDERTEXTURE_YISFLIPPED_OFFSET UNITYSDK_OFFSET(0x1DA71800)
#define MB_TEXTURECOMBINERRENDERTEXTURE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DA73190)
#define MB_TEXTURECOMBINERRENDERTEXTURE__PRINTTEXTURE_OFFSET UNITYSDK_OFFSET(0x1DA72D40)

inline static constexpr unsigned int MB_TextureCombinerRenderTexture_TypeDefinitionIndex = 90558;

class MB_TextureCombinerRenderTexture : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB_TexSet*>* textureSets; // 0x10
	::UnityEngine::Camera* myCamera; // 0x18
	::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties* _resultMaterialTextureBlender; // 0x20
	::DigitalOpus::MB::Core::ShaderTextureProperty* _texPropertyName; // 0x28
	::UnityEngine::RenderTexture* _destinationTexture; // 0x30
	::Il2CppArray<::UnityEngine::Rect>* rs; // 0x38
	::UnityEngine::Material* mat; // 0x40
	::UnityEngine::Texture2D* targTex; // 0x48
	::System::Boolean _fixOutOfBoundsUVs; // 0x50
	::System::Boolean _doRenderAtlas; // 0x51
	::System::Boolean _isNormalMap; // 0x52
	::System::Int32 indexOfTexSetToRender; // 0x54
	::System::Int32 _padding; // 0x58
	::DigitalOpus::MB::Core::MB2_LogLevel LOG_LEVEL; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MB_TEXTURECOMBINERRENDERTEXTURE__CTOR_OFFSET))(this);
	}

	::UnityEngine::Texture2D* DoRenderAtlas(::UnityEngine::GameObject* gameObject, ::System::Int32 width, ::System::Int32 height, ::System::Int32 padding, ::Il2CppArray<::UnityEngine::Rect>* rss, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB_TexSet*>* textureSetss, ::System::Int32 indexOfTexSetToRenders, ::DigitalOpus::MB::Core::ShaderTextureProperty* texPropertyname, ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties* resultMaterialTextureBlender, ::System::Boolean isNormalMap, ::System::Boolean fixOutOfBoundsUVs, ::System::Boolean considerNonTextureProperties, ::DigitalOpus::MB::Core::MB3_TextureCombiner* texCombiner, ::DigitalOpus::MB::Core::MB2_LogLevel LOG_LEV)
	{
		return ((::UnityEngine::Texture2D*(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Int32, ::System::Int32, ::System::Int32, ::Il2CppArray<::UnityEngine::Rect>*, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB_TexSet*>*, ::System::Int32, ::DigitalOpus::MB::Core::ShaderTextureProperty*, ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::DigitalOpus::MB::Core::MB3_TextureCombiner*, ::DigitalOpus::MB::Core::MB2_LogLevel))((::PBYTE)hIl2Cpp + MB_TEXTURECOMBINERRENDERTEXTURE_DORENDERATLAS_OFFSET))(this, gameObject, width, height, padding, rss, textureSetss, indexOfTexSetToRenders, texPropertyname, resultMaterialTextureBlender, isNormalMap, fixOutOfBoundsUVs, considerNonTextureProperties, texCombiner, LOG_LEV);
	}

	::System::Void OnRenderObject()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MB_TEXTURECOMBINERRENDERTEXTURE_ONRENDEROBJECT_OFFSET))(this);
	}

	static ::System::Void ConvertRenderTextureToTexture2D(::UnityEngine::RenderTexture* _destinationTexture, ::System::Boolean yIsFlipped, ::System::Boolean doLinearColorSpace, ::DigitalOpus::MB::Core::MB2_LogLevel LOG_LEVEL, ::UnityEngine::Texture2D* tempTexture)
	{
		return ((::System::Void(*)(::UnityEngine::RenderTexture*, ::System::Boolean, ::System::Boolean, ::DigitalOpus::MB::Core::MB2_LogLevel, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + MB_TEXTURECOMBINERRENDERTEXTURE_CONVERTRENDERTEXTURETOTEXTURE2D_OFFSET))(_destinationTexture, yIsFlipped, doLinearColorSpace, LOG_LEVEL, tempTexture);
	}

	::UnityEngine::Color32 ConvertNormalFormatFromUnity_ToStandard(::UnityEngine::Color32 c)
	{
		return ((::UnityEngine::Color32(*)(::PVOID, ::UnityEngine::Color32))((::PBYTE)hIl2Cpp + MB_TEXTURECOMBINERRENDERTEXTURE_CONVERTNORMALFORMATFROMUNITY_TOSTANDARD_OFFSET))(this, c);
	}

	static ::System::Boolean YisFlipped(::DigitalOpus::MB::Core::MB2_LogLevel LOG_LEVEL)
	{
		return ((::System::Boolean(*)(::DigitalOpus::MB::Core::MB2_LogLevel))((::PBYTE)hIl2Cpp + MB_TEXTURECOMBINERRENDERTEXTURE_YISFLIPPED_OFFSET))(LOG_LEVEL);
	}

	::System::Void CopyScaledAndTiledToAtlas(::DigitalOpus::MB::Core::MB_TexSet* texSet, ::DigitalOpus::MB::Core::MeshBakerMaterialTexture* source, ::UnityEngine::Vector2 obUVoffset, ::UnityEngine::Vector2 obUVscale, ::UnityEngine::Rect rec, ::DigitalOpus::MB::Core::ShaderTextureProperty* texturePropertyName, ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties* resultMatTexBlender, ::System::Boolean yIsFlipped)
	{
		return ((::System::Void(*)(::PVOID, ::DigitalOpus::MB::Core::MB_TexSet*, ::DigitalOpus::MB::Core::MeshBakerMaterialTexture*, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Rect, ::DigitalOpus::MB::Core::ShaderTextureProperty*, ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*, ::System::Boolean))((::PBYTE)hIl2Cpp + MB_TEXTURECOMBINERRENDERTEXTURE_COPYSCALEDANDTILEDTOATLAS_OFFSET))(this, texSet, source, obUVoffset, obUVscale, rec, texturePropertyName, resultMatTexBlender, yIsFlipped);
	}

	static ::System::Void _printTexture(::UnityEngine::Texture2D* t)
	{
		return ((::System::Void(*)(::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + MB_TEXTURECOMBINERRENDERTEXTURE__PRINTTEXTURE_OFFSET))(t);
	}
};
