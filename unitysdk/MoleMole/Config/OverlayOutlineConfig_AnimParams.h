#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NapGradient;

#define MOLEMOLE_CONFIG_OVERLAYOUTLINECONFIG_ANIMPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x170C58D0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int OverlayOutlineConfig_AnimParams_TypeDefinitionIndex = 73115;

	class OverlayOutlineConfig_AnimParams : public ::System::Object
	{
	public:
		::NapGradient* OutlineColorGradient; // 0x10
		::NapGradient* OverlayColorGradient; // 0x18
		::System::Single AnimLifetime; // 0x20
		::System::Boolean Loop; // 0x24
		::System::Single BlendDuration; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_OVERLAYOUTLINECONFIG_ANIMPARAMS__CTOR_OFFSET))(this);
		}
	};
}
