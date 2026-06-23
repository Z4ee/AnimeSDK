#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define NAP_NAPECS_ECSWORLD_ENTITYCOMPONENTMASKMAP_COMPONENTMASKPREDICATEALWAYSTRUE_INVOKE_OFFSET UNITYSDK_OFFSET(0x90D570)
#define NAP_NAPECS_ECSWORLD_ENTITYCOMPONENTMASKMAP_COMPONENTMASKPREDICATEALWAYSTRUE_NAP_NAPECS_ECSWORLD_ENTITYCOMPONENTMASKMAP_ICOMPONENTMASKPREDICATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x90D610)

namespace Nap::NapECS
{
	inline static constexpr unsigned int EcsWorld_EntityComponentMaskMap_ComponentMaskPredicateAlwaysTrue_TypeDefinitionIndex = 37376;

	struct alignas(1) EcsWorld_EntityComponentMaskMap_ComponentMaskPredicateAlwaysTrue
	{
		/*
		::System::Boolean Invoke(::Nap::NapECS::ComponentMask& mask)
		{
			return ((::System::Boolean(*)(::PVOID, ::Nap::NapECS::ComponentMask&))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLD_ENTITYCOMPONENTMASKMAP_COMPONENTMASKPREDICATEALWAYSTRUE_INVOKE_OFFSET))(this, mask);
		}
		*/

		/*
		::System::Boolean Nap_NapECS_EcsWorld_EntityComponentMaskMap_IComponentMaskPredicate_Invoke(::Nap::NapECS::ComponentMask& mask)
		{
			return ((::System::Boolean(*)(::PVOID, ::Nap::NapECS::ComponentMask&))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLD_ENTITYCOMPONENTMASKMAP_COMPONENTMASKPREDICATEALWAYSTRUE_NAP_NAPECS_ECSWORLD_ENTITYCOMPONENTMASKMAP_ICOMPONENTMASKPREDICATE_INVOKE_OFFSET))(this, mask);
		}
		*/
	};
}
