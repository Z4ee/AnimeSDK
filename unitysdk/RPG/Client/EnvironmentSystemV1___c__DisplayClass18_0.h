#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace EnviromentSystem { class EnviromentClip_OnEnvironmentClipLoadDelegate; }
namespace RPG::Client { class EnvironmentSystemV1; }

#define RPG_CLIENT_ENVIRONMENTSYSTEMV1___C__DISPLAYCLASS18_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19926BA0)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1___C__DISPLAYCLASS18_0___REFRESHACTIVEPROFILEASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x199319F0)

namespace RPG::Client
{
	inline static constexpr unsigned int EnvironmentSystemV1___c__DisplayClass18_0_TypeDefinitionIndex = 69752;

	class EnvironmentSystemV1___c__DisplayClass18_0 : public ::System::Object
	{
	public:
		::EnviromentSystem::EnviromentClip_OnEnvironmentClipLoadDelegate* onLoadFinish; // 0x10
		::RPG::Client::EnvironmentSystemV1* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1___C__DISPLAYCLASS18_0__CTOR_OFFSET))(this);
		}

		::System::Void __RefreshActiveProfileAsync_b__0(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1___C__DISPLAYCLASS18_0___REFRESHACTIVEPROFILEASYNC_B__0_OFFSET))(this, a1);
		}
	};
}
