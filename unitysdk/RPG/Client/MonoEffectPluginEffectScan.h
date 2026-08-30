#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharaOverlayMatBase.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define RPG_CLIENT_MONOEFFECTPLUGINEFFECTSCAN_METHOD_8_489E0B827662C211_OFFSET UNITYSDK_OFFSET(0xD7B9600)
#define RPG_CLIENT_MONOEFFECTPLUGINEFFECTSCAN__CTOR_OFFSET UNITYSDK_OFFSET(0xD7B9AB0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginEffectScan_TypeDefinitionIndex = 69970;

	class MonoEffectPluginEffectScan : public ::RPG::Client::MonoEffectPluginCharaOverlayMatBase
	{
	public:
		::UnityEngine::Color _MainColor; // 0x220
		::System::Single _ScanHeight; // 0x230
		::UnityEngine::Vector4 _ScanDirection; // 0x234
		::System::Single _GlobalGradientRange; // 0x244
		::UnityEngine::Vector4 _FresnelCT; // 0x248
		::UnityEngine::Color _ScanLineColor; // 0x258
		::System::Single _ScanLineIntensity; // 0x268
		::System::Single _ScanLineWidth; // 0x26C
		::UnityEngine::Color _GradientColor; // 0x270
		::System::Single _GradientIntensity; // 0x280
		::System::Single _GradientDarken; // 0x284
		::UnityEngine::Color _GridsLineColor; // 0x288
		::System::Single _GridsLineIntensity; // 0x298
		::System::Single _GridsGradientRange; // 0x29C
		::System::Single _GridsLineDensity; // 0x2A0
		::System::Single _GridsLineWidth; // 0x2A4
		::System::Single _GridsLineXYZBlend; // 0x2A8
		::System::Single _GridsLineDepthBlend; // 0x2AC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINEFFECTSCAN__CTOR_OFFSET))(this);
		}

		::System::Void Method_8_489E0B827662C211()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINEFFECTSCAN_METHOD_8_489E0B827662C211_OFFSET))(this);
		}
	};
}
