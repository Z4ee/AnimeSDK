#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightTrait; }
namespace RPG::Client { class GridFightTraitRemarkLineEffectBase; }
namespace RPG::GameCore { class GridFightTraitRemarkRow; }

#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEEFFECTFACTORY_CREATEEFFECT_OFFSET UNITYSDK_OFFSET(0x1A60DB60)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitRemarkLineEffectFactory_TypeDefinitionIndex = 62549;

	class GridFightTraitRemarkLineEffectFactory : public ::System::Object
	{
	public:
		static ::RPG::Client::GridFightTraitRemarkLineEffectBase* CreateEffect(::RPG::Client::GridFightTrait* a1, ::RPG::GameCore::GridFightTraitRemarkRow* a2)
		{
			return ((::RPG::Client::GridFightTraitRemarkLineEffectBase*(*)(::RPG::Client::GridFightTrait*, ::RPG::GameCore::GridFightTraitRemarkRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEEFFECTFACTORY_CREATEEFFECT_OFFSET))(a1, a2);
		}
	};
}
