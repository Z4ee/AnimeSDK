#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemUpdatePhase.h"
#include "unitysdk/System/ValueType.h"

namespace Nap::NapECS { class EcsSystem; }

#define NAP_NAPECS_ECSSYSTEMCONTEXTTLSDATA_SET_PHASE_OFFSET UNITYSDK_OFFSET(0x5C9410)
#define NAP_NAPECS_ECSSYSTEMCONTEXTTLSDATA_SET_SYSTEM_OFFSET UNITYSDK_OFFSET(0x2B6D10)

namespace Nap::NapECS
{
	inline static constexpr unsigned int EcsSystemContextTLSData_TypeDefinitionIndex = 37363;

	struct alignas(8) EcsSystemContextTLSData
	{
		::Nap::NapECS::EcsSystem* _System_k__BackingField; // 0x10
		::Nap::NapECS::EcsSystemUpdatePhase _Phase_k__BackingField; // 0x18

		::System::Void set_System(::Nap::NapECS::EcsSystem* value)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsSystem*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSSYSTEMCONTEXTTLSDATA_SET_SYSTEM_OFFSET))(this, value);
		}

		::System::Void set_Phase(::Nap::NapECS::EcsSystemUpdatePhase value)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsSystemUpdatePhase))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSSYSTEMCONTEXTTLSDATA_SET_PHASE_OFFSET))(this, value);
		}
	};
}
