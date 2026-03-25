#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/CustomVolumeComponent.h"

#define RPG_CUSTOMRP_RPGLENSFLARE__CTOR_OFFSET UNITYSDK_OFFSET(0x16ABF610)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int RPGLensFlare_TypeDefinitionIndex = 29426;

	class RPGLensFlare : public ::RPG::CustomRP::CustomVolumeComponent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGLENSFLARE__CTOR_OFFSET))(this);
		}
	};
}
