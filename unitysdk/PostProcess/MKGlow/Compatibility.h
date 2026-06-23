#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RenderTextureFormat.h"

#define POSTPROCESS_MKGLOW_COMPATIBILITY_CHECKCOMPUTESHADERSUPPORT_OFFSET UNITYSDK_OFFSET(0x1B7F1930)
#define POSTPROCESS_MKGLOW_COMPATIBILITY_CHECKGEOMETRYSHADERSUPPORT_OFFSET UNITYSDK_OFFSET(0x1B7F18E0)
#define POSTPROCESS_MKGLOW_COMPATIBILITY_CHECKGLAREFEATURESUPPORT_OFFSET UNITYSDK_OFFSET(0x1B7F1A80)
#define POSTPROCESS_MKGLOW_COMPATIBILITY_CHECKLENSFLAREFEATURESUPPORT_OFFSET UNITYSDK_OFFSET(0x1B7F1980)
#define POSTPROCESS_MKGLOW_COMPATIBILITY_CHECKSUPPORTEDRENDERTEXTUREFORMAT_OFFSET UNITYSDK_OFFSET(0x1B7F1B80)
#define POSTPROCESS_MKGLOW_COMPATIBILITY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B7F1C70)

namespace PostProcess::MKGlow
{
	inline static constexpr unsigned int Compatibility_TypeDefinitionIndex = 26223;

	class Compatibility : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet__defaultHDRFormatSupported()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Compatibility_TypeDefinitionIndex)->GetStaticField(0x5B80);
		}
		static ::System::Boolean* StaticGet__2A10R10G10BFormatSupported()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Compatibility_TypeDefinitionIndex)->GetStaticField(0x5B81);
		}
		static ::System::Boolean* StaticGet_IsSupported()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Compatibility_TypeDefinitionIndex)->GetStaticField(0x5B82);
		}
		static ::System::Boolean* StaticGet__11R11G10BFormatSupported()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Compatibility_TypeDefinitionIndex)->GetStaticField(0x5B83);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_COMPATIBILITY__CCTOR_OFFSET))();
		}

		static ::System::Boolean CheckGeometryShaderSupport()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_COMPATIBILITY_CHECKGEOMETRYSHADERSUPPORT_OFFSET))();
		}

		static ::System::Boolean CheckComputeShaderSupport()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_COMPATIBILITY_CHECKCOMPUTESHADERSUPPORT_OFFSET))();
		}

		static ::System::Boolean CheckLensFlareFeatureSupport()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_COMPATIBILITY_CHECKLENSFLAREFEATURESUPPORT_OFFSET))();
		}

		static ::System::Boolean CheckGlareFeatureSupport()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_COMPATIBILITY_CHECKGLAREFEATURESUPPORT_OFFSET))();
		}

		static ::UnityEngine::RenderTextureFormat CheckSupportedRenderTextureFormat()
		{
			return ((::UnityEngine::RenderTextureFormat(*)())((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_COMPATIBILITY_CHECKSUPPORTEDRENDERTEXTUREFORMAT_OFFSET))();
		}
	};
}
