#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriMana/Detail/RendererResourceFactory.h"

namespace CriWare::CriMana { class MovieInfo; }
namespace CriWare::CriMana::Detail { class RendererResource; }
namespace UnityEngine { class Shader; }

#define CRIWARE_CRIMANA_DETAIL_AUTORESISTERRENDERERRESOURCEFACTORIES_RENDERERRESOURCEFACTORYH264YUV_CREATERENDERERRESOURCE_OFFSET UNITYSDK_OFFSET(0x1DC3AB80)
#define CRIWARE_CRIMANA_DETAIL_AUTORESISTERRENDERERRESOURCEFACTORIES_RENDERERRESOURCEFACTORYH264YUV_ONDISPOSEMANAGED_OFFSET UNITYSDK_OFFSET(0x1DC3AC50)
#define CRIWARE_CRIMANA_DETAIL_AUTORESISTERRENDERERRESOURCEFACTORIES_RENDERERRESOURCEFACTORYH264YUV_ONDISPOSEUNMANAGED_OFFSET UNITYSDK_OFFSET(0x1DC3AC60)
#define CRIWARE_CRIMANA_DETAIL_AUTORESISTERRENDERERRESOURCEFACTORIES_RENDERERRESOURCEFACTORYH264YUV__CTOR_OFFSET UNITYSDK_OFFSET(0x1DC3AC70)

namespace CriWare::CriMana::Detail
{
	inline static constexpr unsigned int AutoResisterRendererResourceFactories_RendererResourceFactoryH264Yuv_TypeDefinitionIndex = 38933;

	class AutoResisterRendererResourceFactories_RendererResourceFactoryH264Yuv : public ::CriWare::CriMana::Detail::RendererResourceFactory
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_AUTORESISTERRENDERERRESOURCEFACTORIES_RENDERERRESOURCEFACTORYH264YUV__CTOR_OFFSET))(this);
		}

		::CriWare::CriMana::Detail::RendererResource* CreateRendererResource(::System::Int32 a1, ::CriWare::CriMana::MovieInfo* a2, ::System::Boolean a3, ::UnityEngine::Shader* a4)
		{
			return ((::CriWare::CriMana::Detail::RendererResource*(*)(::PVOID, ::System::Int32, ::CriWare::CriMana::MovieInfo*, ::System::Boolean, ::UnityEngine::Shader*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_AUTORESISTERRENDERERRESOURCEFACTORIES_RENDERERRESOURCEFACTORYH264YUV_CREATERENDERERRESOURCE_OFFSET))(this, a1, a2, a3, a4);
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
