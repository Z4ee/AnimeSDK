#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharaReplaceMatBase.h"
#include "unitysdk/UnityEngine/Color.h"

#define RPG_CLIENT_MONOEFFECTPLUGINHOLOGRAM_METHOD_8_29352E75304CF2A0_OFFSET UNITYSDK_OFFSET(0x9CD26B0)
#define RPG_CLIENT_MONOEFFECTPLUGINHOLOGRAM_METHOD_8_749948B663FCCCEF_OFFSET UNITYSDK_OFFSET(0x9CD2990)
#define RPG_CLIENT_MONOEFFECTPLUGINHOLOGRAM__CTOR_OFFSET UNITYSDK_OFFSET(0x9CD2970)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginHologram_TypeDefinitionIndex = 57283;

	class MonoEffectPluginHologram : public ::RPG::Client::MonoEffectPluginCharaReplaceMatBase
	{
	public:
		::UnityEngine::Color BaseColor; // 0x168
		::System::Single OffsetIntensity; // 0x178
		::System::Single OffsetDuration; // 0x17C
		::System::Single OffsetMaskRange; // 0x180
		::System::Single OffsetMaskSize; // 0x184
		::System::Single OffsetMaskSpeed; // 0x188
		::System::Single OffsetSize; // 0x18C
		::System::Single OffsetSpeed; // 0x190
		::System::Boolean enableDither; // 0x194
		::System::Boolean UsingDither; // 0x195
		::System::Single DitherAlpha; // 0x198

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINHOLOGRAM__CTOR_OFFSET))(this);
		}

		::System::Void Method_8_29352E75304CF2A0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINHOLOGRAM_METHOD_8_29352E75304CF2A0_OFFSET))(this);
		}

		::System::Void Method_8_749948B663FCCCEF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINHOLOGRAM_METHOD_8_749948B663FCCCEF_OFFSET))(this);
		}
	};
}
