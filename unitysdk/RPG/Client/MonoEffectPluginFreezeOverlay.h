#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharaOverlayMatBase.h"

#define RPG_CLIENT_MONOEFFECTPLUGINFREEZEOVERLAY_METHOD_8_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0xC0E18A0)
#define RPG_CLIENT_MONOEFFECTPLUGINFREEZEOVERLAY_METHOD_8_D78B51BFDA4B8B32_OFFSET UNITYSDK_OFFSET(0xC0E1B50)
#define RPG_CLIENT_MONOEFFECTPLUGINFREEZEOVERLAY__CTOR_OFFSET UNITYSDK_OFFSET(0xC0E1A90)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginFreezeOverlay_TypeDefinitionIndex = 65456;

	class MonoEffectPluginFreezeOverlay : public ::RPG::Client::MonoEffectPluginCharaOverlayMatBase
	{
	public:
		::System::Boolean FollowScale; // 0x220
		::System::Single Field_8_1; // 0x224
		::System::Single Field_8_2; // 0x228

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFREEZEOVERLAY__CTOR_OFFSET))(this);
		}

		::System::Void Method_8_508D4DD02D3DB74E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFREEZEOVERLAY_METHOD_8_508D4DD02D3DB74E_OFFSET))(this);
		}

		::System::Void Method_8_D78B51BFDA4B8B32()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFREEZEOVERLAY_METHOD_8_D78B51BFDA4B8B32_OFFSET))(this);
		}
	};
}
