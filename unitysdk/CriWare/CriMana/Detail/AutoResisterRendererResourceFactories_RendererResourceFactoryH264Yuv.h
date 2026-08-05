#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriMana/Detail/RendererResourceFactory.h"

namespace CriWare::CriMana { class MovieInfo; }
namespace CriWare::CriMana::Detail { class RendererResource; }
namespace UnityEngine { class Shader; }

#define CRIWARE_CRIMANA_DETAIL_AUTORESISTERRENDERERRESOURCEFACTORIES_RENDERERRESOURCEFACTORYH264YUV_CREATERENDERERRESOURCE_OFFSET UNITYSDK_OFFSET(0x1FC55900)
#define CRIWARE_CRIMANA_DETAIL_AUTORESISTERRENDERERRESOURCEFACTORIES_RENDERERRESOURCEFACTORYH264YUV_ONDISPOSEMANAGED_OFFSET UNITYSDK_OFFSET(0x1FC55990)
#define CRIWARE_CRIMANA_DETAIL_AUTORESISTERRENDERERRESOURCEFACTORIES_RENDERERRESOURCEFACTORYH264YUV_ONDISPOSEUNMANAGED_OFFSET UNITYSDK_OFFSET(0x1FC559A0)
#define CRIWARE_CRIMANA_DETAIL_AUTORESISTERRENDERERRESOURCEFACTORIES_RENDERERRESOURCEFACTORYH264YUV__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC559B0)

namespace CriWare::CriMana::Detail
{
	inline static constexpr unsigned int AutoResisterRendererResourceFactories_RendererResourceFactoryH264Yuv_TypeDefinitionIndex = 35069;

	class AutoResisterRendererResourceFactories_RendererResourceFactoryH264Yuv : public ::CriWare::CriMana::Detail::RendererResourceFactory
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_AUTORESISTERRENDERERRESOURCEFACTORIES_RENDERERRESOURCEFACTORYH264YUV__CTOR_OFFSET))(this);
		}

		::CriWare::CriMana::Detail::RendererResource* CreateRendererResource(::System::Int32 playerId, ::CriWare::CriMana::MovieInfo* movieInfo, ::System::Boolean additive, ::UnityEngine::Shader* userShader)
		{
			return ((::CriWare::CriMana::Detail::RendererResource*(*)(::PVOID, ::System::Int32, ::CriWare::CriMana::MovieInfo*, ::System::Boolean, ::UnityEngine::Shader*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_AUTORESISTERRENDERERRESOURCEFACTORIES_RENDERERRESOURCEFACTORYH264YUV_CREATERENDERERRESOURCE_OFFSET))(this, playerId, movieInfo, additive, userShader);
		}

		::System::Void OnDisposeManaged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_AUTORESISTERRENDERERRESOURCEFACTORIES_RENDERERRESOURCEFACTORYH264YUV_ONDISPOSEMANAGED_OFFSET))(this);
		}

		::System::Void OnDisposeUnmanaged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_AUTORESISTERRENDERERRESOURCEFACTORIES_RENDERERRESOURCEFACTORYH264YUV_ONDISPOSEUNMANAGED_OFFSET))(this);
		}
	};
}
