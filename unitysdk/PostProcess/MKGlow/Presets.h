#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PostProcess/MKGlow/GlareStyle.h"
#include "unitysdk/PostProcess/MKGlow/LensFlareStyle.h"
#include "unitysdk/System/Object.h"

namespace PostProcess::MKGlow { class ISettings; }

#define POSTPROCESS_MKGLOW_PRESETS_SETGLAREPRESET_OFFSET UNITYSDK_OFFSET(0x1D2FB030)
#define POSTPROCESS_MKGLOW_PRESETS_SETLENSFLAREPRESET_OFFSET UNITYSDK_OFFSET(0x1D2FA7D0)
#define POSTPROCESS_MKGLOW_PRESETS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2FC8C0)

namespace PostProcess::MKGlow
{
	inline static constexpr unsigned int Presets_TypeDefinitionIndex = 27470;

	class Presets : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_PRESETS__CTOR_OFFSET))(this);
		}

		static ::System::Void SetLensFlarePreset(::PostProcess::MKGlow::LensFlareStyle lensFlareStyle, ::PostProcess::MKGlow::ISettings* settings)
		{
			return ((::System::Void(*)(::PostProcess::MKGlow::LensFlareStyle, ::PostProcess::MKGlow::ISettings*))((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_PRESETS_SETLENSFLAREPRESET_OFFSET))(lensFlareStyle, settings);
		}

		static ::System::Void SetGlarePreset(::PostProcess::MKGlow::GlareStyle glareStyle, ::PostProcess::MKGlow::ISettings* settings)
		{
			return ((::System::Void(*)(::PostProcess::MKGlow::GlareStyle, ::PostProcess::MKGlow::ISettings*))((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_PRESETS_SETGLAREPRESET_OFFSET))(glareStyle, settings);
		}
	};
}
