#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define NAP_NAPECS_SYNCTIMESTAMP_GET_SCALEDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x364FD0)
#define NAP_NAPECS_SYNCTIMESTAMP_GET_UNSCALEDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x4262F0)
#define NAP_NAPECS_SYNCTIMESTAMP__CTOR_OFFSET UNITYSDK_OFFSET(0x95C130)

namespace Nap::NapECS
{
	inline static constexpr unsigned int SyncTimestamp_TypeDefinitionIndex = 37942;

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
