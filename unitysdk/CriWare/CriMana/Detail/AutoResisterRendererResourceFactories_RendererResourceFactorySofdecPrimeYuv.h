#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriMana/Detail/RendererResourceFactory.h"

namespace CriWare::CriMana { class MovieInfo; }
namespace CriWare::CriMana::Detail { class RendererResource; }
namespace UnityEngine { class Shader; }

#define CRIWARE_CRIMANA_DETAIL_AUTORESISTERRENDERERRESOURCEFACTORIES_RENDERERRESOURCEFACTORYSOFDECPRIMEYUV_CREATERENDERERRESOURCE_OFFSET UNITYSDK_OFFSET(0x146C7E50)
#define CRIWARE_CRIMANA_DETAIL_AUTORESISTERRENDERERRESOURCEFACTORIES_RENDERERRESOURCEFACTORYSOFDECPRIMEYUV_ONDISPOSEMANAGED_OFFSET UNITYSDK_OFFSET(0x146C85E0)
#define CRIWARE_CRIMANA_DETAIL_AUTORESISTERRENDERERRESOURCEFACTORIES_RENDERERRESOURCEFACTORYSOFDECPRIMEYUV_ONDISPOSEUNMANAGED_OFFSET UNITYSDK_OFFSET(0x146C85F0)
#define CRIWARE_CRIMANA_DETAIL_AUTORESISTERRENDERERRESOURCEFACTORIES_RENDERERRESOURCEFACTORYSOFDECPRIMEYUV__CTOR_OFFSET UNITYSDK_OFFSET(0x146C8600)

namespace CriWare::CriMana::Detail
{
	inline static constexpr unsigned int AutoResisterRendererResourceFactories_RendererResourceFactorySofdecPrimeYuv_TypeDefinitionIndex = 37265;

	class AutoResisterRendererResourceFactories_RendererResourceFactorySofdecPrimeYuv : public ::CriWare::CriMana::Detail::RendererResourceFactory
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_AUTORESISTERRENDERERRESOURCEFACTORIES_RENDERERRESOURCEFACTORYSOFDECPRIMEYUV__CTOR_OFFSET))(this);
		}

		::CriWare::CriMana::Detail::RendererResource* CreateRendererResource(::System::Int32 a1, ::CriWare::CriMana::MovieInfo* a2, ::System::Boolean a3, ::UnityEngine::Shader* a4)
		{
			return ((::CriWare::CriMana::Detail::RendererResource*(*)(::PVOID, ::System::Int32, ::CriWare::CriMana::MovieInfo*, ::System::Boolean, ::UnityEngine::Shader*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_AUTORESISTERRENDERERRESOURCEFACTORIES_RENDERERRESOURCEFACTORYSOFDECPRIMEYUV_CREATERENDERERRESOURCE_OFFSET))(this, a1, a2, a3, a4);
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
