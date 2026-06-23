#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Nap::NapECS { class EcsWorld; }

#define NAP_NAPECS_ARCHETYPECOMPONENTACCESSSCOPEDLOCK_CREATE_OFFSET UNITYSDK_OFFSET(0x1B2E0790)
#define NAP_NAPECS_ARCHETYPECOMPONENTACCESSSCOPEDLOCK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x90C610)

namespace Nap::NapECS
{
	inline static constexpr unsigned int ArchetypeComponentAccessScopedLock_TypeDefinitionIndex = 37313;

	struct alignas(1) ArchetypeComponentAccessScopedLock
	{
		/*
		static ::Nap::NapECS::ArchetypeComponentAccessScopedLock Create(::Nap::NapECS::EcsWorld* world, ::Nap::NapECS::ComponentMask archetype, ::Nap::NapECS::ComponentMask readable, ::Nap::NapECS::ComponentMask writable)
		{
			return ((::Nap::NapECS::ArchetypeComponentAccessScopedLock(*)(::Nap::NapECS::EcsWorld*, ::Nap::NapECS::ComponentMask, ::Nap::NapECS::ComponentMask, ::Nap::NapECS::ComponentMask))((::PBYTE)hIl2Cpp + NAP_NAPECS_ARCHETYPECOMPONENTACCESSSCOPEDLOCK_CREATE_OFFSET))(world, archetype, readable, writable);
		}
		*/

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ARCHETYPECOMPONENTACCESSSCOPEDLOCK_DISPOSE_OFFSET))(this);
		}
	};
}
