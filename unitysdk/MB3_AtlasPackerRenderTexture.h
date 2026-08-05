#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DigitalOpus/MB/Core/MB2_LogLevel.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Rect.h"

class MB_TextureCombinerRenderTexture;
namespace DigitalOpus::MB::Core { class MB3_TextureCombiner; }
namespace DigitalOpus::MB::Core { class MB3_TextureCombinerNonTextureProperties; }
namespace DigitalOpus::MB::Core { class MB_TexSet; }
namespace DigitalOpus::MB::Core { class ShaderTextureProperty; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture2D; }

#define MB3_ATLASPACKERRENDERTEXTURE_ONRENDERATLAS_OFFSET UNITYSDK_OFFSET(0x1F639F90)
#define MB3_ATLASPACKERRENDERTEXTURE_ONRENDEROBJECT_OFFSET UNITYSDK_OFFSET(0x1F63A090)
#define MB3_ATLASPACKERRENDERTEXTURE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F63A0C0)

inline static constexpr unsigned int MB3_AtlasPackerRenderTexture_TypeDefinitionIndex = 94492;

class MB3_AtlasPackerRenderTexture : public ::UnityEngine::MonoBehaviour
{
public:
	::MB_TextureCombinerRenderTexture* fastRenderer; // 0x18
	::System::Boolean _doRenderAtlas; // 0x20
	::System::Int32 width; // 0x24
	::System::Int32 height; // 0x28
	::System::Int32 padding; // 0x2C
	::System::Boolean isNormalMap; // 0x30
	::System::Boolean fixOutOfBoundsUVs; // 0x31
	::System::Boolean considerNonTextureProperties; // 0x32
	::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties* resultMaterialTextureBlender; // 0x38
	::Il2CppArray<::UnityEngine::Rect>* rects; // 0x40
	::UnityEngine::Texture2D* tex1; // 0x48
	::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB_TexSet*>* textureSets; // 0x50
	::System::Int32 indexOfTexSetToRender; // 0x58
	::DigitalOpus::MB::Core::ShaderTextureProperty* texPropertyName; // 0x60
	::DigitalOpus::MB::Core::MB2_LogLevel LOG_LEVEL; // 0x68
	::UnityEngine::Texture2D* testTex; // 0x70
	::UnityEngine::Material* testMat; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MB3_ATLASPACKERRENDERTEXTURE__CTOR_OFFSET))(this);
	}

	::UnityEngine::Texture2D* OnRenderAtlas(::DigitalOpus::MB::Core::MB3_TextureCombiner* combiner)
	{
		return ((::UnityEngine::Texture2D*(*)(::PVOID, ::DigitalOpus::MB::Core::MB3_TextureCombiner*))((::PBYTE)hIl2Cpp + MB3_ATLASPACKERRENDERTEXTURE_ONRENDERATLAS_OFFSET))(this, combiner);
	}

	::System::Void OnRenderObject()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MB3_ATLASPACKERRENDERTEXTURE_ONRENDEROBJECT_OFFSET))(this);
	}
};
