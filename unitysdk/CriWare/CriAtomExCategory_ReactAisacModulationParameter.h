#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define CRIWARE_CRIATOMEXCATEGORY_REACTAISACMODULATIONPARAMETER_GET_ENABLEDECREMENTAISACMODULATIONKEY_OFFSET UNITYSDK_OFFSET(0x1030)
#define CRIWARE_CRIATOMEXCATEGORY_REACTAISACMODULATIONPARAMETER_GET_ENABLEINCREMENTAISACMODULATIONKEY_OFFSET UNITYSDK_OFFSET(0x14F13C0)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExCategory_ReactAisacModulationParameter_TypeDefinitionIndex = 31017;

	struct alignas(4) CriAtomExCategory_ReactAisacModulationParameter
	{
		::System::Int32 _enableDecrementAisacModulationKey; // 0x10
		::System::UInt32 decrementAisacModulationKey; // 0x14
		::System::Int32 _enableIncrementAisacModulationKey; // 0x18
		::System::UInt32 incrementAisacModulationKey; // 0x1C

		::System::Boolean get_enableDecrementAisacModulationKey()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_REACTAISACMODULATIONPARAMETER_GET_ENABLEDECREMENTAISACMODULATIONKEY_OFFSET))(this);
		}

		::System::Boolean get_enableIncrementAisacModulationKey()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_REACTAISACMODULATIONPARAMETER_GET_ENABLEINCREMENTAISACMODULATIONKEY_OFFSET))(this);
		}
	};
}
