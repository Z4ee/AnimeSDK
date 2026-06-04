#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DemodulatorOutPutType.h"
#include "unitysdk/StageHarmonyBaseDemodulator_1.h"

namespace UnityEngine { class AnimationCurve; }

#define STAGEHARMONYCURVEDEMODULATOR_METHOD_3_D437D090E63BE8A7_OFFSET UNITYSDK_OFFSET(0xD096580)
#define STAGEHARMONYCURVEDEMODULATOR_METHOD_3_F4B1CC0F7E08D926_OFFSET UNITYSDK_OFFSET(0xD0965F0)
#define STAGEHARMONYCURVEDEMODULATOR__CTOR_OFFSET UNITYSDK_OFFSET(0xD096640)

inline static constexpr unsigned int StageHarmonyCurveDemodulator_TypeDefinitionIndex = 44819;

class StageHarmonyCurveDemodulator : public ::StageHarmonyBaseDemodulator_1<::System::Single>
{
public:
	::UnityEngine::AnimationCurve* Curve; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYCURVEDEMODULATOR__CTOR_OFFSET))(this);
	}

	::System::Single Method_3_D437D090E63BE8A7(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STAGEHARMONYCURVEDEMODULATOR_METHOD_3_D437D090E63BE8A7_OFFSET))(this, a1);
	}

	::DemodulatorOutPutType Method_3_F4B1CC0F7E08D926()
	{
		return ((::DemodulatorOutPutType(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYCURVEDEMODULATOR_METHOD_3_F4B1CC0F7E08D926_OFFSET))(this);
	}
};
