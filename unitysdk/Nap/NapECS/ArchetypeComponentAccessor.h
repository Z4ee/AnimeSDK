#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/ComponentMask.h"
#include "unitysdk/System/ValueType.h"

namespace Nap::NapECS { class EcsWorld; }

#define NAP_NAPECS_ARCHETYPECOMPONENTACCESSOR_ENTERCRITICALSECTION_OFFSET UNITYSDK_OFFSET(0x86ACE0)
#define NAP_NAPECS_ARCHETYPECOMPONENTACCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x86AC50)

namespace Nap::NapECS
{
	inline static constexpr unsigned int ArchetypeComponentAccessor_TypeDefinitionIndex = 35660;

	struct alignas(8) ArchetypeComponentAccessor
	{
		::Nap::NapECS::ComponentMask _readComponents; // 0x10
		::Nap::NapECS::ComponentMask _writeComponents; // 0x50
		::Nap::NapECS::ComponentMask _archetypeComponents; // 0x90
		::Nap::NapECS::EcsWorld* _world; // 0xD0

		::System::Void _ctor(::Nap::NapECS::EcsWorld* world, ::Nap::NapECS::ComponentMask& readComponents, ::Nap::NapECS::ComponentMask& writeComponents, ::Nap::NapECS::ComponentMask& archetype)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*, ::Nap::NapECS::ComponentMask&, ::Nap::NapECS::ComponentMask&, ::Nap::NapECS::ComponentMask&))((::PBYTE)hIl2Cpp + NAP_NAPECS_ARCHETYPECOMPONENTACCESSOR__CTOR_OFFSET))(this, world, readComponents, writeComponents, archetype);
		}

		/*
		::Nap::NapECS::ArchetypeComponentAccessScopedLock EnterCriticalSection()
		{
			return ((::Nap::NapECS::ArchetypeComponentAccessScopedLock(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ARCHETYPECOMPONENTACCESSOR_ENTERCRITICALSECTION_OFFSET))(this);
		}
		*/
	};
}
