#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class IAssetOperation; }
namespace RPG::CustomRP { class LensFlareElement; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RenderTexture; }

#define RPG_CLIENT_CRPLENSFLAREPLUGIN_METHOD_5_755870B55A8B3AFF_OFFSET UNITYSDK_OFFSET(0x9EBA4C0)
#define RPG_CLIENT_CRPLENSFLAREPLUGIN_METHOD_5_AAFC2E07366CF380_OFFSET UNITYSDK_OFFSET(0x9EBA110)
#define RPG_CLIENT_CRPLENSFLAREPLUGIN_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x9EB9CA0)
#define RPG_CLIENT_CRPLENSFLAREPLUGIN_ONENABLE_OFFSET UNITYSDK_OFFSET(0x9EBA8F0)
#define RPG_CLIENT_CRPLENSFLAREPLUGIN_UPDATELENSFLARE_OFFSET UNITYSDK_OFFSET(0x9EBA8B0)
#define RPG_CLIENT_CRPLENSFLAREPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x9EBAA20)

namespace RPG::Client
{
	inline static constexpr unsigned int CRPLensFlarePlugin_TypeDefinitionIndex = 64687;

	class CRPLensFlarePlugin : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single DephtBias; // 0x18
		::System::Single SampleRedius; // 0x1C
		::System::Single ColorThreshold; // 0x20
		::System::Int32 Priority; // 0x24
		::System::Single TotalAlphaScale; // 0x28
		::System::Single TotalSizeScale; // 0x2C
		::System::Single TotalAspectScale; // 0x30
		::System::Single TotalOffsetScale; // 0x34
		::System::Single TotalRotationOffset; // 0x38
		::System::Single MinSizeWhenFade; // 0x3C
		::UnityEngine::RenderTexture* Field_5_10; // 0x40
		::System::Collections::Generic::List_1<::RPG::Client::IAssetOperation*>* Field_5_11; // 0x48
		::System::Int32 Field_5_12; // 0x50
		::System::Boolean Field_5_13; // 0x54
		::System::Collections::Generic::List_1<::RPG::CustomRP::LensFlareElement*>* LensFlareElements; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CRPLENSFLAREPLUGIN__CTOR_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CRPLENSFLAREPLUGIN_ONDISABLE_OFFSET))(this);
		}

		::System::Void Method_5_AAFC2E07366CF380()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CRPLENSFLAREPLUGIN_METHOD_5_AAFC2E07366CF380_OFFSET))(this);
		}

		::System::Void Method_5_755870B55A8B3AFF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CRPLENSFLAREPLUGIN_METHOD_5_755870B55A8B3AFF_OFFSET))(this);
		}

		::System::Void UpdateLensFlare()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CRPLENSFLAREPLUGIN_UPDATELENSFLARE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CRPLENSFLAREPLUGIN_ONENABLE_OFFSET))(this);
		}
	};
}
