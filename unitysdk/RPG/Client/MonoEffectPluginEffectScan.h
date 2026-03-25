#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharaOverlayMatBase.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define RPG_CLIENT_MONOEFFECTPLUGINEFFECTSCAN_METHOD_8_2566AD459572DFC3_OFFSET UNITYSDK_OFFSET(0x9CCE9A0)
#define RPG_CLIENT_MONOEFFECTPLUGINEFFECTSCAN_METHOD_8_D78B51BFDA4B8B32_OFFSET UNITYSDK_OFFSET(0x9CCEF70)
#define RPG_CLIENT_MONOEFFECTPLUGINEFFECTSCAN__CTOR_OFFSET UNITYSDK_OFFSET(0x9CCEE30)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginEffectScan_TypeDefinitionIndex = 57280;

	class MonoEffectPluginEffectScan : public ::RPG::Client::MonoEffectPluginCharaOverlayMatBase
	{
	public:
		::UnityEngine::Color _MainColor; // 0x218
		::System::Single _ScanHeight; // 0x228
		::UnityEngine::Vector4 _ScanDirection; // 0x22C
		::System::Single _GlobalGradientRange; // 0x23C
		::UnityEngine::Vector4 _FresnelCT; // 0x240
		::UnityEngine::Color _ScanLineColor; // 0x250
		::System::Single _ScanLineIntensity; // 0x260
		::System::Single _ScanLineWidth; // 0x264
		::UnityEngine::Color _GradientColor; // 0x268
		::System::Single _GradientIntensity; // 0x278
		::System::Single _GradientDarken; // 0x27C
		::UnityEngine::Color _GridsLineColor; // 0x280
		::System::Single _GridsLineIntensity; // 0x290
		::System::Single _GridsGradientRange; // 0x294
		::System::Single _GridsLineDensity; // 0x298
		::System::Single _GridsLineWidth; // 0x29C
		::System::Single _GridsLineXYZBlend; // 0x2A0
		::System::Single _GridsLineDepthBlend; // 0x2A4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINEFFECTSCAN__CTOR_OFFSET))(this);
		}

		::System::Void Method_8_2566AD459572DFC3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINEFFECTSCAN_METHOD_8_2566AD459572DFC3_OFFSET))(this);
		}

		::System::Void Method_8_D78B51BFDA4B8B32()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINEFFECTSCAN_METHOD_8_D78B51BFDA4B8B32_OFFSET))(this);
		}
	};
}
