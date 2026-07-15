#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/ShadowSettings_MainLightShadow.h"
#include "unitysdk/System/Object.h"

#define RPG_CUSTOMRP_SHADOWSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D134AF0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int ShadowSettings_TypeDefinitionIndex = 36025;

	class ShadowSettings : public ::System::Object
	{
	public:
		::System::Single DistanceFade; // 0x10
		::System::Single Strength; // 0x14
		::System::Boolean PerObjectShadows; // 0x18
		::RPG::CustomRP::ShadowSettings_MainLightShadow MainLight; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SHADOWSETTINGS__CTOR_OFFSET))(this);
		}
	};
}
