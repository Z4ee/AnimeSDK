#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define MOLEMOLE_ABYSSS2_GENCONFIGMETA_ONVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x70A5E0)
#define MOLEMOLE_ABYSSS2_GENCONFIGMETA_VALIDATE_OFFSET UNITYSDK_OFFSET(0x70A620)

namespace MoleMole
{
	inline static constexpr unsigned int AbyssS2_GenConfigMeta_TypeDefinitionIndex = 82321;

	struct alignas(4) AbyssS2_GenConfigMeta
	{
		::System::Int32 ExcelFloorCount; // 0x10
		::System::Int32 floorCount; // 0x14
		::System::Int32 colCount; // 0x18
		::System::Int32 startCount; // 0x1C
		::System::Int32 routeCount; // 0x20

		::System::Void OnValueChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_GENCONFIGMETA_ONVALUECHANGED_OFFSET))(this);
		}

		::System::Boolean Validate(::System::Boolean log)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_GENCONFIGMETA_VALIDATE_OFFSET))(this, log);
		}
	};
}
