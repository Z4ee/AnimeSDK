#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightTrait; }
namespace RPG::Client { class GridFightTraitRemarkLineEffectBase; }
namespace RPG::GameCore { class GridFightTraitRemarkRow; }

#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEEFFECTFACTORY_CREATEEFFECT_OFFSET UNITYSDK_OFFSET(0xA5BD780)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitRemarkLineEffectFactory_TypeDefinitionIndex = 60272;

	class GridFightTraitRemarkLineEffectFactory : public ::System::Object
	{
	public:
		static ::RPG::Client::GridFightTraitRemarkLineEffectBase* CreateEffect(::RPG::Client::GridFightTrait* trait, ::RPG::GameCore::GridFightTraitRemarkRow* row)
		{
			return ((::RPG::Client::GridFightTraitRemarkLineEffectBase*(*)(::RPG::Client::GridFightTrait*, ::RPG::GameCore::GridFightTraitRemarkRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEEFFECTFACTORY_CREATEEFFECT_OFFSET))(trait, row);
		}
	};
}
