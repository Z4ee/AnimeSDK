#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharaReplaceMatBase.h"
#include "unitysdk/UnityEngine/Color.h"

#define RPG_CLIENT_MONOEFFECTPLUGINHOLOGRAM_METHOD_8_52607DE4C357D269_OFFSET UNITYSDK_OFFSET(0x1912F9B0)
#define RPG_CLIENT_MONOEFFECTPLUGINHOLOGRAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1912FC90)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginHologram_TypeDefinitionIndex = 66872;

	class MonoEffectPluginHologram : public ::RPG::Client::MonoEffectPluginCharaReplaceMatBase
	{
	public:
		::UnityEngine::Color BaseColor; // 0x170
		::System::Single OffsetIntensity; // 0x180
		::System::Single OffsetDuration; // 0x184
		::System::Single OffsetMaskRange; // 0x188
		::System::Single OffsetMaskSize; // 0x18C
		::System::Single OffsetMaskSpeed; // 0x190
		::System::Single OffsetSize; // 0x194
		::System::Single OffsetSpeed; // 0x198
		::System::Boolean enableDither; // 0x19C
		::System::Boolean UsingDither; // 0x19D
		::System::Single DitherAlpha; // 0x1A0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINHOLOGRAM__CTOR_OFFSET))(this);
		}

		::System::Void Method_8_52607DE4C357D269()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINHOLOGRAM_METHOD_8_52607DE4C357D269_OFFSET))(this);
		}
	};
}
