#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"

namespace RPG::Client { class MonoPrefabLightFadeInOutBehavior; }

#define RPG_CLIENT_MONOPREFABLIGHTFADEINOUTMONOPLUGIN_ISFORBIDFASTFADING_OFFSET UNITYSDK_OFFSET(0xD8575E0)
#define RPG_CLIENT_MONOPREFABLIGHTFADEINOUTMONOPLUGIN_SETFADEINOUTINTENSITY_OFFSET UNITYSDK_OFFSET(0xD857540)
#define RPG_CLIENT_MONOPREFABLIGHTFADEINOUTMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0xD857620)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoPrefabLightFadeInOutMonoPlugin_TypeDefinitionIndex = 70892;

	class MonoPrefabLightFadeInOutMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::MonoPrefabLightFadeInOutBehavior*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPREFABLIGHTFADEINOUTMONOPLUGIN__CTOR_OFFSET))(this);
		}

		::System::Void SetFadeInOutIntensity(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPREFABLIGHTFADEINOUTMONOPLUGIN_SETFADEINOUTINTENSITY_OFFSET))(this, a1);
		}

		::System::Boolean IsForbidFastFading()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPREFABLIGHTFADEINOUTMONOPLUGIN_ISFORBIDFASTFADING_OFFSET))(this);
		}
	};
}
