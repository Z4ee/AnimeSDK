#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharaOverlayMatBase.h"

#define RPG_CLIENT_MONOEFFECTPLUGINFREEZEOVERLAY_METHOD_8_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x1B38B1E0)
#define RPG_CLIENT_MONOEFFECTPLUGINFREEZEOVERLAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1B38B3D0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginFreezeOverlay_TypeDefinitionIndex = 69972;

	class MonoEffectPluginFreezeOverlay : public ::RPG::Client::MonoEffectPluginCharaOverlayMatBase
	{
	public:
		::System::Boolean FollowScale; // 0x220
		::System::Single KABMCJNCNFE; // 0x224
		::System::Single DJOJMMKJGIJ; // 0x228

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFREEZEOVERLAY__CTOR_OFFSET))(this);
		}

		::System::Void Method_8_508D4DD02D3DB74E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFREEZEOVERLAY_METHOD_8_508D4DD02D3DB74E_OFFSET))(this);
		}
	};
}
