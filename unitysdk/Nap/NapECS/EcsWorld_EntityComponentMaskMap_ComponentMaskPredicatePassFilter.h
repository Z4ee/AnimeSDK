#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Nap::NapECS { class ComponentMaskFilter; }

#define NAP_NAPECS_ECSWORLD_ENTITYCOMPONENTMASKMAP_COMPONENTMASKPREDICATEPASSFILTER_INVOKE_OFFSET UNITYSDK_OFFSET(0x95BF40)
#define NAP_NAPECS_ECSWORLD_ENTITYCOMPONENTMASKMAP_COMPONENTMASKPREDICATEPASSFILTER_NAP_NAPECS_ECSWORLD_ENTITYCOMPONENTMASKMAP_ICOMPONENTMASKPREDICATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x95BFF0)

namespace Nap::NapECS
{
	inline static constexpr unsigned int EcsWorld_EntityComponentMaskMap_ComponentMaskPredicatePassFilter_TypeDefinitionIndex = 37974;

	struct alignas(8) EcsWorld_EntityComponentMaskMap_ComponentMaskPredicatePassFilter
	{
		::Nap::NapECS::ComponentMaskFilter* Filter; // 0x10

		/*
		::System::Boolean Invoke(::Nap::NapECS::ComponentMask& mask)
		{
			return ((::System::Boolean(*)(::PVOID, ::Nap::NapECS::ComponentMask&))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLD_ENTITYCOMPONENTMASKMAP_COMPONENTMASKPREDICATEPASSFILTER_INVOKE_OFFSET))(this, mask);
		}
		*/

		/*
		::System::Boolean Nap_NapECS_EcsWorld_EntityComponentMaskMap_IComponentMaskPredicate_Invoke(::Nap::NapECS::ComponentMask& mask)
		{
			return ((::System::Boolean(*)(::PVOID, ::Nap::NapECS::ComponentMask&))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLD_ENTITYCOMPONENTMASKMAP_COMPONENTMASKPREDICATEPASSFILTER_NAP_NAPECS_ECSWORLD_ENTITYCOMPONENTMASKMAP_ICOMPONENTMASKPREDICATE_INVOKE_OFFSET))(this, mask);
		}
		*/
	};
}
