#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Nap::NapECS { class EcsEntity; }

#define NAP_NAPECS_ECSDATACOMPSCOPEWRITER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x95BCB0)
#define NAP_NAPECS_ECSDATACOMPSCOPEWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x95BCA0)

namespace Nap::NapECS
{
	inline static constexpr unsigned int EcsDataCompScopeWriter_TypeDefinitionIndex = 37983;

	struct alignas(8) EcsDataCompScopeWriter
	{
		::Nap::NapECS::EcsEntity* _entity; // 0x10

		::System::Void _ctor(::Nap::NapECS::EcsEntity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSDATACOMPSCOPEWRITER__CTOR_OFFSET))(this, entity);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSDATACOMPSCOPEWRITER_DISPOSE_OFFSET))(this);
		}
	};
}
