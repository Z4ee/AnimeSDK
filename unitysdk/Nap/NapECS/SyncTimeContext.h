#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/SyncTimestamp.h"
#include "unitysdk/System/ValueType.h"

#define NAP_NAPECS_SYNCTIMECONTEXT_GET_DELTATIME_OFFSET UNITYSDK_OFFSET(0x3EA130)
#define NAP_NAPECS_SYNCTIMECONTEXT_GET_TIMESTAMP_OFFSET UNITYSDK_OFFSET(0x2ADAB0)
#define NAP_NAPECS_SYNCTIMECONTEXT_GET_UNSCALEDDELTATIME_OFFSET UNITYSDK_OFFSET(0x48E380)
#define NAP_NAPECS_SYNCTIMECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x90D900)

namespace Nap::NapECS
{
	inline static constexpr unsigned int SyncTimeContext_TypeDefinitionIndex = 37332;

	struct alignas(8) SyncTimeContext
	{
		::Nap::NapECS::SyncTimestamp _Timestamp_k__BackingField; // 0x10
		::System::Single _DeltaTime_k__BackingField; // 0x20
		::System::Single _UnscaledDeltaTime_k__BackingField; // 0x24
		::System::Single _DeltaTimeRatioFactor_k__BackingField; // 0x28

		::System::Void _ctor(::Nap::NapECS::SyncTimestamp& timestamp, ::System::Single& deltaTime, ::System::Single unscaledDeltaTime, ::System::Single deltaTimeFactor)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::SyncTimestamp&, ::System::Single&, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NAP_NAPECS_SYNCTIMECONTEXT__CTOR_OFFSET))(this, timestamp, deltaTime, unscaledDeltaTime, deltaTimeFactor);
		}

		::Nap::NapECS::SyncTimestamp get_Timestamp()
		{
			return ((::Nap::NapECS::SyncTimestamp(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_SYNCTIMECONTEXT_GET_TIMESTAMP_OFFSET))(this);
		}

		::System::Single get_DeltaTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_SYNCTIMECONTEXT_GET_DELTATIME_OFFSET))(this);
		}

		::System::Single get_UnscaledDeltaTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_SYNCTIMECONTEXT_GET_UNSCALEDDELTATIME_OFFSET))(this);
		}
	};
}
