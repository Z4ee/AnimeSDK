#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DemodulatorOutPutType.h"
#include "unitysdk/StageHarmonyBaseDemodulator_1.h"
#include "unitysdk/UnityEngine/Color.h"

namespace UnityEngine { class Gradient; }

#define STAGEHARMONYGRADIENTDEMODULATOR_METHOD_3_39CA3A8D335F6DEC_OFFSET UNITYSDK_OFFSET(0xD098370)
#define STAGEHARMONYGRADIENTDEMODULATOR_METHOD_3_F4B1CC0F7E08D926_OFFSET UNITYSDK_OFFSET(0xD098410)
#define STAGEHARMONYGRADIENTDEMODULATOR__CTOR_OFFSET UNITYSDK_OFFSET(0xD098460)

inline static constexpr unsigned int StageHarmonyGradientDemodulator_TypeDefinitionIndex = 44817;

class StageHarmonyGradientDemodulator : public ::StageHarmonyBaseDemodulator_1<::UnityEngine::Color>
{
public:
	::UnityEngine::Gradient* Gradient; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYGRADIENTDEMODULATOR__CTOR_OFFSET))(this);
	}

	::UnityEngine::Color Method_3_39CA3A8D335F6DEC(::System::Single a1)
	{
		return ((::UnityEngine::Color(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STAGEHARMONYGRADIENTDEMODULATOR_METHOD_3_39CA3A8D335F6DEC_OFFSET))(this, a1);
	}

	::DemodulatorOutPutType Method_3_F4B1CC0F7E08D926()
	{
		return ((::DemodulatorOutPutType(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYGRADIENTDEMODULATOR_METHOD_3_F4B1CC0F7E08D926_OFFSET))(this);
	}
};
