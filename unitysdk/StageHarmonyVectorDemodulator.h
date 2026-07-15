#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DemodulatorOutPutType.h"
#include "unitysdk/StageHarmonyBaseDemodulator_1.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define STAGEHARMONYVECTORDEMODULATOR_METHOD_3_B4DE4A1745AD2498_OFFSET UNITYSDK_OFFSET(0x14ED1A80)
#define STAGEHARMONYVECTORDEMODULATOR_METHOD_3_F4B1CC0F7E08D926_OFFSET UNITYSDK_OFFSET(0x14ED1B20)
#define STAGEHARMONYVECTORDEMODULATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x14ED1B70)

inline static constexpr unsigned int StageHarmonyVectorDemodulator_TypeDefinitionIndex = 45741;

class StageHarmonyVectorDemodulator : public ::StageHarmonyBaseDemodulator_1<::UnityEngine::Vector4>
{
public:
	::UnityEngine::Vector4 Min; // 0x30
	::UnityEngine::Vector4 Max; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYVECTORDEMODULATOR__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector4 Method_3_B4DE4A1745AD2498(::System::Single a1)
	{
		return ((::UnityEngine::Vector4(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STAGEHARMONYVECTORDEMODULATOR_METHOD_3_B4DE4A1745AD2498_OFFSET))(this, a1);
	}

	::DemodulatorOutPutType Method_3_F4B1CC0F7E08D926()
	{
		return ((::DemodulatorOutPutType(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYVECTORDEMODULATOR_METHOD_3_F4B1CC0F7E08D926_OFFSET))(this);
	}
};
