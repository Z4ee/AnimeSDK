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

#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUVRAWDATA_ATTACHTOPLAYER_OFFSET UNITYSDK_OFFSET(0x146CB470)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUVRAWDATA_CALCULATETEXTURESIZE_OFFSET UNITYSDK_OFFSET(0x146CAFE0)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUVRAWDATA_CONTINUEPREPARING_OFFSET UNITYSDK_OFFSET(0x146CB380)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUVRAWDATA_GET_NUMTEXTURESETS_OFFSET UNITYSDK_OFFSET(0x146CA7C0)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUVRAWDATA_HASRENDEREDNEWFRAME_OFFSET UNITYSDK_OFFSET(0x146CB460)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUVRAWDATA_ISPREPARED_OFFSET UNITYSDK_OFFSET(0x146CB370)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUVRAWDATA_ISSUITABLE_OFFSET UNITYSDK_OFFSET(0x146CB390)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUVRAWDATA_ONDISPOSEMANAGED_OFFSET UNITYSDK_OFFSET(0x146CB240)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUVRAWDATA_ONDISPOSEUNMANAGED_OFFSET UNITYSDK_OFFSET(0x146CB250)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUVRAWDATA_ONPLAYERSTOPFORSEEK_OFFSET UNITYSDK_OFFSET(0x146CB450)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUVRAWDATA_UPDATEFRAME_OFFSET UNITYSDK_OFFSET(0x146CB520)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUVRAWDATA_UPDATEMATERIAL_OFFSET UNITYSDK_OFFSET(0x146CB660)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUVRAWDATA_UPDATEMOVIETEXTUREST_OFFSET UNITYSDK_OFFSET(0x146CB150)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUVRAWDATA_UPDATETEXTURES_OFFSET UNITYSDK_OFFSET(0x146CB900)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUVRAWDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x146CA7D0)

namespace CriWare::CriMana::Detail
{
	inline static constexpr unsigned int RendererResourceSofdecPrimeYuvRawData_TypeDefinitionIndex = 37272;

	class RendererResourceSofdecPrimeYuvRawData : public ::CriWare::CriMana::Detail::RendererResource
	{
	public:
		::Il2CppArray<::Il2CppArray<::UnityEngine::Texture2D*>*>* textures; // 0x28
		::Il2CppArray<::System::IntPtr>* nativePixels; // 0x30
		::UnityEngine::Vector4 movieTextureST; // 0x38
		::System::Int32 width; // 0x48
		::System::Int32 drawTextureSet; // 0x4C
		::System::Int32 playerID; // 0x50
		::System::Int32 height; // 0x54
		::System::Boolean hasTextureUpdated; // 0x58
		::System::Boolean useUserShader; // 0x59
		::System::Boolean isTextureReady; // 0x5A
		::System::Boolean hasRenderedNewFrame; // 0x5B
		::System::Int32 chromaHeight; // 0x5C
		::UnityEngine::Vector4 movieChromaTextureST; // 0x60
		::CriWare::CriMana::CodecType codecType; // 0x70
		::System::Int32 chromaWidth; // 0x74
		::System::Int32 currentTextureSet; // 0x78

		::System::Void _ctor(::System::Int32 a1, ::CriWare::CriMana::MovieInfo* a2, ::System::Boolean a3, ::UnityEngine::Shader* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::CriWare::CriMana::MovieInfo*, ::System::Boolean, ::UnityEngine::Shader*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUVRAWDATA__CTOR_OFFSET))(this, a1, a2, a3, a4);
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

		::System::Boolean IsSuitable(::System::Int32 a1, ::CriWare::CriMana::MovieInfo* a2, ::System::Boolean a3, ::UnityEngine::Shader* a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CriWare::CriMana::MovieInfo*, ::System::Boolean, ::UnityEngine::Shader*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUVRAWDATA_ISSUITABLE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean OnPlayerStopForSeek()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUVRAWDATA_ONPLAYERSTOPFORSEEK_OFFSET))(this);
		}

		::System::Boolean HasRenderedNewFrame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUVRAWDATA_HASRENDEREDNEWFRAME_OFFSET))(this);
		}

		::System::Void AttachToPlayer(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUVRAWDATA_ATTACHTOPLAYER_OFFSET))(this, a1);
		}

		::System::Boolean UpdateFrame(::System::Int32 a1, ::CriWare::CriMana::FrameInfo* a2, ::System::Boolean& a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CriWare::CriMana::FrameInfo*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUVRAWDATA_UPDATEFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean UpdateMaterial(::UnityEngine::Material* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUVRAWDATA_UPDATEMATERIAL_OFFSET))(this, a1);
		}

		::System::Void UpdateMovieTextureST(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUVRAWDATA_UPDATEMOVIETEXTUREST_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateTextures()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUVRAWDATA_UPDATETEXTURES_OFFSET))(this);
		}

		static ::System::Void CalculateTextureSize(::System::Int32& a1, ::System::Int32& a2, ::System::Int32 a3, ::System::Int32 a4, ::CriWare::CriMana::CodecType a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::System::Int32&, ::System::Int32&, ::System::Int32, ::System::Int32, ::CriWare::CriMana::CodecType, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUVRAWDATA_CALCULATETEXTURESIZE_OFFSET))(a1, a2, a3, a4, a5, a6);
		}
	};
}
