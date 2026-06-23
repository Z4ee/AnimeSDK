#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define NAP_NAPECS_SYNCTIMESTAMP_GET_SCALEDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x45A800)
#define NAP_NAPECS_SYNCTIMESTAMP_GET_UNSCALEDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x40CF10)
#define NAP_NAPECS_SYNCTIMESTAMP__CTOR_OFFSET UNITYSDK_OFFSET(0x90D930)

namespace Nap::NapECS
{
	inline static constexpr unsigned int SyncTimestamp_TypeDefinitionIndex = 37340;

	struct alignas(8) SyncTimestamp
	{
		::System::Double _ScaledTimestamp_k__BackingField; // 0x10
		::System::Double _UnscaledTimestamp_k__BackingField; // 0x18

		::System::Void _ctor(::System::Double& scaledTimestamp, ::System::Double& unscaledTimestamp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double&, ::System::Double&))((::PBYTE)hIl2Cpp + NAP_NAPECS_SYNCTIMESTAMP__CTOR_OFFSET))(this, scaledTimestamp, unscaledTimestamp);
		}

		::System::Double get_ScaledTimestamp()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_SYNCTIMESTAMP_GET_SCALEDTIMESTAMP_OFFSET))(this);
		}

		::System::Double get_UnscaledTimestamp()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_SYNCTIMESTAMP_GET_UNSCALEDTIMESTAMP_OFFSET))(this);
		}
	};
}
