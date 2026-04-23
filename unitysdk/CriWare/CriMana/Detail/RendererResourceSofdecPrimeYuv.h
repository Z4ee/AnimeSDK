#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriMana/CodecType.h"
#include "unitysdk/CriWare/CriMana/Detail/RendererResource.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace CriWare::CriMana { class FrameInfo; }
namespace CriWare::CriMana { class MovieInfo; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Shader; }
namespace UnityEngine { class Texture2D; }

#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUV_ATTACHTOPLAYER_OFFSET UNITYSDK_OFFSET(0x12C0F7C0)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUV_CONTINUEPREPARING_OFFSET UNITYSDK_OFFSET(0x12C0F6C0)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUV_GET_ISEDITOR_OFFSET UNITYSDK_OFFSET(0x12C0F2C0)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUV_GET_NUMTEXTURESETS_OFFSET UNITYSDK_OFFSET(0x12C0F1C0)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUV_HASRENDEREDNEWFRAME_OFFSET UNITYSDK_OFFSET(0x12C0F7B0)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUV_ISPREPARED_OFFSET UNITYSDK_OFFSET(0x12C0F6B0)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUV_ISSUITABLE_OFFSET UNITYSDK_OFFSET(0x12C0F6D0)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUV_ONDISPOSEMANAGED_OFFSET UNITYSDK_OFFSET(0x12C0F2B0)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUV_ONDISPOSEUNMANAGED_OFFSET UNITYSDK_OFFSET(0x12C0F2D0)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUV_ONPLAYERSTOPFORSEEK_OFFSET UNITYSDK_OFFSET(0x12C0F7A0)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUV_UPDATEFRAME_OFFSET UNITYSDK_OFFSET(0x12C0F890)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUV_UPDATEMATERIAL_OFFSET UNITYSDK_OFFSET(0x12C0FA00)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUV_UPDATEMOVIETEXTUREST_OFFSET UNITYSDK_OFFSET(0x12C0F1D0)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUV_UPDATETEXTURES_OFFSET UNITYSDK_OFFSET(0x12C0FC90)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUV__CCTOR_OFFSET UNITYSDK_OFFSET(0x12C0FF50)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUV__CTOR_OFFSET UNITYSDK_OFFSET(0x12C0D480)

namespace CriWare::CriMana::Detail
{
	inline static constexpr unsigned int RendererResourceSofdecPrimeYuv_TypeDefinitionIndex = 36971;

	class RendererResourceSofdecPrimeYuv : public ::CriWare::CriMana::Detail::RendererResource
	{
	public:
		static ::System::Int32* StaticGet_IOSNumTextureSets()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RendererResourceSofdecPrimeYuv_TypeDefinitionIndex)->GetStaticField(0x3BE0);
		}
		::Il2CppArray<::UnityEngine::Texture2D*>* textureA; // 0x28
		::Il2CppArray<::System::IntPtr>* nativeTextures; // 0x30
		::Il2CppArray<::UnityEngine::Texture2D*>* textureY; // 0x38
		::Il2CppArray<::UnityEngine::Texture2D*>* textureU; // 0x40
		::Il2CppArray<::UnityEngine::Texture2D*>* textureV; // 0x48
		::System::Int32 height; // 0x50
		::System::Int32 currentTextureSet; // 0x54
		::UnityEngine::Vector4 movieChromaTextureST; // 0x58
		::CriWare::CriMana::CodecType codecType; // 0x68
		::System::Int32 playerID; // 0x6C
		::System::Int32 width; // 0x70
		::System::Boolean hasTextureUpdated; // 0x74
		::System::Boolean isStoppingForSeek; // 0x75
		::System::Boolean isTextureReady; // 0x76
		::System::Boolean isFirstTextureReady; // 0x77
		::System::Boolean useUserShader; // 0x78
		::System::Boolean hasRenderedNewFrame; // 0x79
		::UnityEngine::Vector4 movieTextureST; // 0x7C
		::System::Int32 drawTextureSet; // 0x8C

		::System::Void _ctor(::System::Int32 playerId, ::CriWare::CriMana::MovieInfo* movieInfo, ::System::Boolean additive, ::UnityEngine::Shader* userShader)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::CriWare::CriMana::MovieInfo*, ::System::Boolean, ::UnityEngine::Shader*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUV__CTOR_OFFSET))(this, playerId, movieInfo, additive, userShader);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUV__CCTOR_OFFSET))();
		}

		static ::System::Int32 get_NumTextureSets()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUV_GET_NUMTEXTURESETS_OFFSET))();
		}

		::System::Void OnDisposeManaged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUV_ONDISPOSEMANAGED_OFFSET))(this);
		}

		static ::System::Boolean get_IsEditor()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUV_GET_ISEDITOR_OFFSET))();
		}

		::System::Void OnDisposeUnmanaged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUV_ONDISPOSEUNMANAGED_OFFSET))(this);
		}

		::System::Boolean IsPrepared()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUV_ISPREPARED_OFFSET))(this);
		}

		::System::Boolean ContinuePreparing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUV_CONTINUEPREPARING_OFFSET))(this);
		}

		::System::Boolean IsSuitable(::System::Int32 playerId, ::CriWare::CriMana::MovieInfo* movieInfo, ::System::Boolean additive, ::UnityEngine::Shader* userShader)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CriWare::CriMana::MovieInfo*, ::System::Boolean, ::UnityEngine::Shader*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUV_ISSUITABLE_OFFSET))(this, playerId, movieInfo, additive, userShader);
		}

		::System::Boolean OnPlayerStopForSeek()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUV_ONPLAYERSTOPFORSEEK_OFFSET))(this);
		}

		::System::Boolean HasRenderedNewFrame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUV_HASRENDEREDNEWFRAME_OFFSET))(this);
		}

		::System::Void AttachToPlayer(::System::Int32 playerId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUV_ATTACHTOPLAYER_OFFSET))(this, playerId);
		}

		::System::Boolean UpdateFrame(::System::Int32 playerId, ::CriWare::CriMana::FrameInfo* frameInfo, ::System::Boolean& frameDrop)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CriWare::CriMana::FrameInfo*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUV_UPDATEFRAME_OFFSET))(this, playerId, frameInfo, frameDrop);
		}

		::System::Boolean UpdateMaterial(::UnityEngine::Material* material)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUV_UPDATEMATERIAL_OFFSET))(this, material);
		}

		::System::Void UpdateMovieTextureST(::System::UInt32 dispWidth, ::System::UInt32 dispHeight)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUV_UPDATEMOVIETEXTUREST_OFFSET))(this, dispWidth, dispHeight);
		}

		::System::Void UpdateTextures()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUV_UPDATETEXTURES_OFFSET))(this);
		}
	};
}
