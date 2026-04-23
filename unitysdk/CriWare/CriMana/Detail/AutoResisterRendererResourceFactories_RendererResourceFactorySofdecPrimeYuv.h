#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriMana/Detail/RendererResourceFactory.h"

namespace CriWare::CriMana { class MovieInfo; }
namespace CriWare::CriMana::Detail { class RendererResource; }
namespace UnityEngine { class Shader; }

#define CRIWARE_CRIMANA_DETAIL_AUTORESISTERRENDERERRESOURCEFACTORIES_RENDERERRESOURCEFACTORYSOFDECPRIMEYUV_CREATERENDERERRESOURCE_OFFSET UNITYSDK_OFFSET(0x12C0D410)
#define CRIWARE_CRIMANA_DETAIL_AUTORESISTERRENDERERRESOURCEFACTORIES_RENDERERRESOURCEFACTORYSOFDECPRIMEYUV_ONDISPOSEMANAGED_OFFSET UNITYSDK_OFFSET(0x12C0DC10)
#define CRIWARE_CRIMANA_DETAIL_AUTORESISTERRENDERERRESOURCEFACTORIES_RENDERERRESOURCEFACTORYSOFDECPRIMEYUV_ONDISPOSEUNMANAGED_OFFSET UNITYSDK_OFFSET(0x12C0DC20)
#define CRIWARE_CRIMANA_DETAIL_AUTORESISTERRENDERERRESOURCEFACTORIES_RENDERERRESOURCEFACTORYSOFDECPRIMEYUV__CTOR_OFFSET UNITYSDK_OFFSET(0x12C0DC30)

namespace CriWare::CriMana::Detail
{
	inline static constexpr unsigned int AutoResisterRendererResourceFactories_RendererResourceFactorySofdecPrimeYuv_TypeDefinitionIndex = 36965;

	class AutoResisterRendererResourceFactories_RendererResourceFactorySofdecPrimeYuv : public ::CriWare::CriMana::Detail::RendererResourceFactory
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_AUTORESISTERRENDERERRESOURCEFACTORIES_RENDERERRESOURCEFACTORYSOFDECPRIMEYUV__CTOR_OFFSET))(this);
		}

		::CriWare::CriMana::Detail::RendererResource* CreateRendererResource(::System::Int32 playerId, ::CriWare::CriMana::MovieInfo* movieInfo, ::System::Boolean additive, ::UnityEngine::Shader* userShader)
		{
			return ((::CriWare::CriMana::Detail::RendererResource*(*)(::PVOID, ::System::Int32, ::CriWare::CriMana::MovieInfo*, ::System::Boolean, ::UnityEngine::Shader*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_AUTORESISTERRENDERERRESOURCEFACTORIES_RENDERERRESOURCEFACTORYSOFDECPRIMEYUV_CREATERENDERERRESOURCE_OFFSET))(this, playerId, movieInfo, additive, userShader);
		}

		::System::Void OnDisposeManaged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_AUTORESISTERRENDERERRESOURCEFACTORIES_RENDERERRESOURCEFACTORYSOFDECPRIMEYUV_ONDISPOSEMANAGED_OFFSET))(this);
		}

		::System::Void OnDisposeUnmanaged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_AUTORESISTERRENDERERRESOURCEFACTORIES_RENDERERRESOURCEFACTORYSOFDECPRIMEYUV_ONDISPOSEUNMANAGED_OFFSET))(this);
		}
	};
}
