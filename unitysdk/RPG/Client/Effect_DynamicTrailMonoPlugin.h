#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"

namespace RPG::Client { class DynamicTrailModule; }
namespace RPG::Client { class Effect_DynamicTrailBehavior; }

#define RPG_CLIENT_EFFECT_DYNAMICTRAILMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x150E4CB0)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_DynamicTrailMonoPlugin_TypeDefinitionIndex = 67289;

	class Effect_DynamicTrailMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::Effect_DynamicTrailBehavior*>
	{
	public:
		::RPG::Client::DynamicTrailModule* DynamicTrail; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_DYNAMICTRAILMONOPLUGIN__CTOR_OFFSET))(this);
		}
	};
}
