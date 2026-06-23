#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/ComponentMask.h"
#include "unitysdk/System/Object.h"

namespace Nap::NapECS { class EcsArchetype; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsWorld; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NAP_NAPECS_ECSARCHETYPEGROUP_GETARCHETYPE_OFFSET UNITYSDK_OFFSET(0x1B2EBF10)
#define NAP_NAPECS_ECSARCHETYPEGROUP_GET_ARCHETYPECOUNT_OFFSET UNITYSDK_OFFSET(0x1B2EBEF0)
#define NAP_NAPECS_ECSARCHETYPEGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2EBD70)

namespace Nap::NapECS
{
	inline static constexpr unsigned int EcsArchetypeGroup_TypeDefinitionIndex = 37282;

	class EcsArchetypeGroup : public ::System::Object
	{
	public:
		::Nap::NapECS::EcsWorld* _refWorld; // 0x10
		::Nap::NapECS::EcsArchetype* OrphanArchetype; // 0x18
		::System::Collections::Generic::Dictionary_2<::Nap::NapECS::ComponentMask, ::Nap::NapECS::EcsArchetype*>* _archetypeIndex; // 0x20
		::System::Collections::Generic::Dictionary_2<::Nap::NapECS::EcsEntity*, ::Nap::NapECS::EcsArchetype*>* _cachedLastArchetype; // 0x28

		::System::Void _ctor(::Nap::NapECS::EcsWorld* world)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSARCHETYPEGROUP__CTOR_OFFSET))(this, world);
		}

		::System::Int32 get_ArchetypeCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSARCHETYPEGROUP_GET_ARCHETYPECOUNT_OFFSET))(this);
		}

		::Nap::NapECS::EcsArchetype* GetArchetype(::Nap::NapECS::ComponentMask& inCompMask)
		{
			return ((::Nap::NapECS::EcsArchetype*(*)(::PVOID, ::Nap::NapECS::ComponentMask&))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSARCHETYPEGROUP_GETARCHETYPE_OFFSET))(this, inCompMask);
		}
	};
}
