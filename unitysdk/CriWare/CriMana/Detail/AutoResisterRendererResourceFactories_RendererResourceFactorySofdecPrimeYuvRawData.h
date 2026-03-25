#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriMana/Detail/RendererResourceFactory.h"

namespace CriWare::CriMana { class MovieInfo; }
namespace CriWare::CriMana::Detail { class RendererResource; }
namespace UnityEngine { class Shader; }

#define CRIWARE_CRIMANA_DETAIL_AUTORESISTERRENDERERRESOURCEFACTORIES_RENDERERRESOURCEFACTORYSOFDECPRIMEYUVRAWDATA_CREATERENDERERRESOURCE_OFFSET UNITYSDK_OFFSET(0x11A3F450)
#define CRIWARE_CRIMANA_DETAIL_AUTORESISTERRENDERERRESOURCEFACTORIES_RENDERERRESOURCEFACTORYSOFDECPRIMEYUVRAWDATA_ONDISPOSEMANAGED_OFFSET UNITYSDK_OFFSET(0x11A3F4E0)
#define CRIWARE_CRIMANA_DETAIL_AUTORESISTERRENDERERRESOURCEFACTORIES_RENDERERRESOURCEFACTORYSOFDECPRIMEYUVRAWDATA_ONDISPOSEUNMANAGED_OFFSET UNITYSDK_OFFSET(0x11A3F4F0)
#define CRIWARE_CRIMANA_DETAIL_AUTORESISTERRENDERERRESOURCEFACTORIES_RENDERERRESOURCEFACTORYSOFDECPRIMEYUVRAWDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x11A3F500)

namespace CriWare::CriMana::Detail
{
	inline static constexpr unsigned int AutoResisterRendererResourceFactories_RendererResourceFactorySofdecPrimeYuvRawData_TypeDefinitionIndex = 31246;

	class AutoResisterRendererResourceFactories_RendererResourceFactorySofdecPrimeYuvRawData : public ::CriWare::CriMana::Detail::RendererResourceFactory
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_AUTORESISTERRENDERERRESOURCEFACTORIES_RENDERERRESOURCEFACTORYSOFDECPRIMEYUVRAWDATA__CTOR_OFFSET))(this);
		}

		::CriWare::CriMana::Detail::RendererResource* CreateRendererResource(::System::Int32 playerId, ::CriWare::CriMana::MovieInfo* movieInfo, ::System::Boolean additive, ::UnityEngine::Shader* userShader)
		{
			return ((::CriWare::CriMana::Detail::RendererResource*(*)(::PVOID, ::System::Int32, ::CriWare::CriMana::MovieInfo*, ::System::Boolean, ::UnityEngine::Shader*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_AUTORESISTERRENDERERRESOURCEFACTORIES_RENDERERRESOURCEFACTORYSOFDECPRIMEYUVRAWDATA_CREATERENDERERRESOURCE_OFFSET))(this, playerId, movieInfo, additive, userShader);
		}

		::System::Void OnDisposeManaged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_AUTORESISTERRENDERERRESOURCEFACTORIES_RENDERERRESOURCEFACTORYSOFDECPRIMEYUVRAWDATA_ONDISPOSEMANAGED_OFFSET))(this);
		}

		::System::Void OnDisposeUnmanaged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_AUTORESISTERRENDERERRESOURCEFACTORIES_RENDERERRESOURCEFACTORYSOFDECPRIMEYUVRAWDATA_ONDISPOSEUNMANAGED_OFFSET))(this);
		}
	};
}
