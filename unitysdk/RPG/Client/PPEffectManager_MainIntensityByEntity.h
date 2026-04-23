#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_CLIENT_PPEFFECTMANAGER_MAININTENSITYBYENTITY_EQUALS_OFFSET UNITYSDK_OFFSET(0xDB710)

namespace RPG::Client
{
	inline static constexpr unsigned int PPEffectManager_MainIntensityByEntity_TypeDefinitionIndex = 64307;

	struct alignas(8) PPEffectManager_MainIntensityByEntity
	{
		::RPG::GameCore::GameEntity* Entity; // 0x10
		::System::Single MainIntensity; // 0x18

		::System::Boolean Equals(::RPG::Client::PPEffectManager_MainIntensityByEntity other)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PPEffectManager_MainIntensityByEntity))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_MAININTENSITYBYENTITY_EQUALS_OFFSET))(this, other);
		}
	};
}
