#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/DLSSPass_Resolution.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/NVIDIA/DLSSQuality.h"

#define RPG_CUSTOMRP_DLSSPASS_DLSSVIEWDATA_CANFITINPUT_OFFSET UNITYSDK_OFFSET(0x3946060)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int DLSSPass_DlssViewData_TypeDefinitionIndex = 36010;

	struct alignas(4) DLSSPass_DlssViewData
	{
		::UnityEngine::NVIDIA::DLSSQuality perfQuality; // 0x10
		::RPG::CustomRP::DLSSPass_Resolution inputRes; // 0x14
		::RPG::CustomRP::DLSSPass_Resolution outputRes; // 0x1C
		::System::Single sharpness; // 0x24
		::System::Single jitterX; // 0x28
		::System::Single jitterY; // 0x2C
		::System::Boolean reset; // 0x30

		::System::Boolean CanFitInput(::RPG::CustomRP::DLSSPass_Resolution& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::CustomRP::DLSSPass_Resolution&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DLSSPASS_DLSSVIEWDATA_CANFITINPUT_OFFSET))(this, a1);
		}
	};
}
