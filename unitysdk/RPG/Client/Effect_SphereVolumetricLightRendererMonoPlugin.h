#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"

namespace RPG::Client { class Effect_SphereVolumetricLightRendererBehavior; }

#define RPG_CLIENT_EFFECT_SPHEREVOLUMETRICLIGHTRENDERERMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x9585AB0)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_SphereVolumetricLightRendererMonoPlugin_TypeDefinitionIndex = 57787;

	class Effect_SphereVolumetricLightRendererMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::Effect_SphereVolumetricLightRendererBehavior*>
	{
	public:
		::System::Int32 ExampleProperty; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SPHEREVOLUMETRICLIGHTRENDERERMONOPLUGIN__CTOR_OFFSET))(this);
		}
	};
}
