#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightParticleEffect.h"

#define RPG_CLIENT_GRIDFIGHTUPGRADEREFRESHEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x98E1340)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightUpgradeRefreshEffect_TypeDefinitionIndex = 52401;

	class GridFightUpgradeRefreshEffect : public ::RPG::Client::GridFightParticleEffect
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUPGRADEREFRESHEFFECT__CTOR_OFFSET))(this);
		}
	};
}
