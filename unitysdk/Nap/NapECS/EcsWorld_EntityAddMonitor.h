#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsWorld_EntityComponentMaskMap; }

#define NAP_NAPECS_ECSWORLD_ENTITYADDMONITOR_DISPOSE_OFFSET UNITYSDK_OFFSET(0x95BD20)
#define NAP_NAPECS_ECSWORLD_ENTITYADDMONITOR__CTOR_OFFSET UNITYSDK_OFFSET(0x346F70)

namespace Nap::NapECS
{
	inline static constexpr unsigned int EcsWorld_EntityAddMonitor_TypeDefinitionIndex = 37975;

	struct alignas(8) EcsWorld_EntityAddMonitor
	{
		::Nap::NapECS::EcsWorld_EntityComponentMaskMap* _maskMap; // 0x10
		::Nap::NapECS::EcsEntity* _entity; // 0x18

		::System::Void _ctor(::Nap::NapECS::EcsWorld_EntityComponentMaskMap* map, ::Nap::NapECS::EcsEntity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld_EntityComponentMaskMap*, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLD_ENTITYADDMONITOR__CTOR_OFFSET))(this, map, entity);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLD_ENTITYADDMONITOR_DISPOSE_OFFSET))(this);
		}
	};
}
