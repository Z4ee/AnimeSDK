#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/FocusCameraTargetByRotationYSetting.h"
#include "unitysdk/MoleMole/Config/FocusCameraTargetPolicy.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int FocusCameraTargetSetting_TypeDefinitionIndex = 82854;

	struct alignas(4) FocusCameraTargetSetting
	{
		::MoleMole::Config::FocusCameraTargetPolicy focusPolicy; // 0x10
		::MoleMole::Config::FocusCameraTargetByRotationYSetting ByRotationYSetting; // 0x14
	};
}
