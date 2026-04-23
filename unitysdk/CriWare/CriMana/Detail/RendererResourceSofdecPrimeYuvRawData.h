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

#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUVRAWDATA_ATTACHTOPLAYER_OFFSET UNITYSDK_OFFSET(0x12C10CD0)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUVRAWDATA_CALCULATETEXTURESIZE_OFFSET UNITYSDK_OFFSET(0x12C10890)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUVRAWDATA_CONTINUEPREPARING_OFFSET UNITYSDK_OFFSET(0x12C10BD0)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUVRAWDATA_GET_NUMTEXTURESETS_OFFSET UNITYSDK_OFFSET(0x12C0FF60)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUVRAWDATA_HASRENDEREDNEWFRAME_OFFSET UNITYSDK_OFFSET(0x12C10CC0)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUVRAWDATA_ISPREPARED_OFFSET UNITYSDK_OFFSET(0x12C10BC0)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUVRAWDATA_ISSUITABLE_OFFSET UNITYSDK_OFFSET(0x12C10BE0)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUVRAWDATA_ONDISPOSEMANAGED_OFFSET UNITYSDK_OFFSET(0x12C10AF0)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUVRAWDATA_ONDISPOSEUNMANAGED_OFFSET UNITYSDK_OFFSET(0x12C10B00)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUVRAWDATA_ONPLAYERSTOPFORSEEK_OFFSET UNITYSDK_OFFSET(0x12C10CB0)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUVRAWDATA_UPDATEFRAME_OFFSET UNITYSDK_OFFSET(0x12C10D80)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUVRAWDATA_UPDATEMATERIAL_OFFSET UNITYSDK_OFFSET(0x12C10EC0)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUVRAWDATA_UPDATEMOVIETEXTUREST_OFFSET UNITYSDK_OFFSET(0x12C10A00)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUVRAWDATA_UPDATETEXTURES_OFFSET UNITYSDK_OFFSET(0x12C111D0)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUVRAWDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x12C0FF70)

namespace CriWare::CriMana::Detail
{
	inline static constexpr unsigned int RendererResourceSofdecPrimeYuvRawData_TypeDefinitionIndex = 36972;

	class RendererResourceSofdecPrimeYuvRawData : public ::CriWare::CriMana::Detail::RendererResource
	{
	public:
		::Il2CppArray<::System::IntPtr>* nativePixels; // 0x28
		::Il2CppArray<::Il2CppArray<::UnityEngine::Texture2D*>*>* textures; // 0x30
		::UnityEngine::Vector4 movieTextureST; // 0x38
		::System::Int32 currentTextureSet; // 0x48
		::System::Int32 drawTextureSet; // 0x4C
		::System::Int32 chromaHeight; // 0x50
		::System::Boolean hasRenderedNewFrame; // 0x54
		::System::Boolean hasTextureUpdated; // 0x55
		::System::Boolean useUserShader; // 0x56
		::System::Boolean isTextureReady; // 0x57
		::UnityEngine::Vector4 movieChromaTextureST; // 0x58
		::System::Int32 chromaWidth; // 0x68
		::CriWare::CriMana::CodecType codecType; // 0x6C
		::System::Int32 height; // 0x70
		::System::Int32 playerID; // 0x74
		::System::Int32 width; // 0x78

		::System::Void _ctor(::System::Int32 playerId, ::CriWare::CriMana::MovieInfo* movieInfo, ::System::Boolean additive, ::UnityEngine::Shader* userShader)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::CriWare::CriMana::MovieInfo*, ::System::Boolean, ::UnityEngine::Shader*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUVRAWDATA__CTOR_OFFSET))(this, playerId, movieInfo, additive, userShader);
		}

		static ::System::Int32 get_NumTextureSets()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUVRAWDATA_GET_NUMTEXTURESETS_OFFSET))();
		}

		::System::Void OnDisposeManaged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUVRAWDATA_ONDISPOSEMANAGED_OFFSET))(this);
		}

		::System::Void OnDisposeUnmanaged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUVRAWDATA_ONDISPOSEUNMANAGED_OFFSET))(this);
		}

		::System::Boolean IsPrepared()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUVRAWDATA_ISPREPARED_OFFSET))(this);
		}

		::System::Boolean ContinuePreparing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUVRAWDATA_CONTINUEPREPARING_OFFSET))(this);
		}

		::System::Boolean IsSuitable(::System::Int32 playerId, ::CriWare::CriMana::MovieInfo* movieInfo, ::System::Boolean additive, ::UnityEngine::Shader* userShader)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CriWare::CriMana::MovieInfo*, ::System::Boolean, ::UnityEngine::Shader*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUVRAWDATA_ISSUITABLE_OFFSET))(this, playerId, movieInfo, additive, userShader);
		}

		::System::Boolean OnPlayerStopForSeek()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUVRAWDATA_ONPLAYERSTOPFORSEEK_OFFSET))(this);
		}

		::System::Boolean HasRenderedNewFrame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUVRAWDATA_HASRENDEREDNEWFRAME_OFFSET))(this);
		}

		::System::Void AttachToPlayer(::System::Int32 playerId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUVRAWDATA_ATTACHTOPLAYER_OFFSET))(this, playerId);
		}

		::System::Boolean UpdateFrame(::System::Int32 playerId, ::CriWare::CriMana::FrameInfo* frameInfo, ::System::Boolean& frameDrop)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CriWare::CriMana::FrameInfo*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUVRAWDATA_UPDATEFRAME_OFFSET))(this, playerId, frameInfo, frameDrop);
		}

		::System::Boolean UpdateMaterial(::UnityEngine::Material* material)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUVRAWDATA_UPDATEMATERIAL_OFFSET))(this, material);
		}

		::System::Void UpdateMovieTextureST(::System::UInt32 dispWidth, ::System::UInt32 dispHeight)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUVRAWDATA_UPDATEMOVIETEXTUREST_OFFSET))(this, dispWidth, dispHeight);
		}

		::System::Void UpdateTextures()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUVRAWDATA_UPDATETEXTURES_OFFSET))(this);
		}

		static ::System::Void CalculateTextureSize(::System::Int32& w, ::System::Int32& h, ::System::Int32 videoWidth, ::System::Int32 videoHeight, ::CriWare::CriMana::CodecType type, ::System::Boolean isChroma)
		{
			return ((::System::Void(*)(::System::Int32&, ::System::Int32&, ::System::Int32, ::System::Int32, ::CriWare::CriMana::CodecType, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUVRAWDATA_CALCULATETEXTURESIZE_OFFSET))(w, h, videoWidth, videoHeight, type, isChroma);
		}
	};
}
