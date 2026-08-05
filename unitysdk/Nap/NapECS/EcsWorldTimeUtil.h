#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Nap::NapECS { class EcsWorld; }
namespace Nap::NapECS { class EcsWorldTimeCenter; }

#define NAP_NAPECS_ECSWORLDTIMEUTIL_GETECSWORLDTIMECENTER_OFFSET UNITYSDK_OFFSET(0x1C85A3F0)

namespace Nap::NapECS
{
	inline static constexpr unsigned int EcsWorldTimeUtil_TypeDefinitionIndex = 38041;

	class EcsWorldTimeUtil : public ::System::Object
	{
	public:
		static ::Nap::NapECS::EcsWorldTimeCenter* GetEcsWorldTimeCenter(::Nap::NapECS::EcsWorld*& ecsWorld)
		{
			return ((::Nap::NapECS::EcsWorldTimeCenter*(*)(::Nap::NapECS::EcsWorld*&))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLDTIMEUTIL_GETECSWORLDTIMECENTER_OFFSET))(ecsWorld);
		}
	};
}
