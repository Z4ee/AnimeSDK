#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define MOLEMOLE_ABYSSS2_RUNTIMENCONFIGMETA_ISVALID_OFFSET UNITYSDK_OFFSET(0x84A5A0)

namespace MoleMole
{
	inline static constexpr unsigned int AbyssS2_RuntimenConfigMeta_TypeDefinitionIndex = 87607;

	struct alignas(4) AbyssS2_RuntimenConfigMeta
	{
		::System::Int32 floorCount; // 0x10
		::System::Int32 colCount; // 0x14
		::System::Int32 startCount; // 0x18
		::System::Int32 routeMapID; // 0x1C
		::System::Int32 routeMapLayer; // 0x20

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_RUNTIMENCONFIGMETA_ISVALID_OFFSET))(this);
		}
	};
}
