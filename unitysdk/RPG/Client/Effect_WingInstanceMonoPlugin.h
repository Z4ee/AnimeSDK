#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"

namespace RPG::Client { class Effect_WingInstanceBehavior; }

#define RPG_CLIENT_EFFECT_WINGINSTANCEMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x9590220)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_WingInstanceMonoPlugin_TypeDefinitionIndex = 57762;

	class Effect_WingInstanceMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::Effect_WingInstanceBehavior*>
	{
	public:
		::System::Single TimeLocation; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_WINGINSTANCEMONOPLUGIN__CTOR_OFFSET))(this);
		}
	};
}
