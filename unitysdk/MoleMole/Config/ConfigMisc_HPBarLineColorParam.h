#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigMisc_HPBarLineColorParam_TypeDefinitionIndex = 48039;

	struct alignas(4) ConfigMisc_HPBarLineColorParam
	{
		::UnityEngine::Color RampColorE_Damage; // 0x10
		::UnityEngine::Color RampColorF_Damage; // 0x20
		::UnityEngine::Color RampColorE_Recover; // 0x30
		::UnityEngine::Color RampColorF_Recover; // 0x40
		::UnityEngine::Color RampColorE_SlowRecover; // 0x50
		::UnityEngine::Color RampColorF_SlowRecover; // 0x60
	};
}
