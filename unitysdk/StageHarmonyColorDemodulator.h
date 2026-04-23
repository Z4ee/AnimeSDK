#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DemodulatorOutPutType.h"
#include "unitysdk/StageHarmonyBaseDemodulator_1.h"
#include "unitysdk/UnityEngine/Color.h"

#define STAGEHARMONYCOLORDEMODULATOR_METHOD_3_ABDB3ADBC66AC39E_OFFSET UNITYSDK_OFFSET(0xB951080)
#define STAGEHARMONYCOLORDEMODULATOR_METHOD_3_F4B1CC0F7E08D926_OFFSET UNITYSDK_OFFSET(0xB951120)
#define STAGEHARMONYCOLORDEMODULATOR__CTOR_OFFSET UNITYSDK_OFFSET(0xB951170)

inline static constexpr unsigned int StageHarmonyColorDemodulator_TypeDefinitionIndex = 44270;

class StageHarmonyColorDemodulator : public ::StageHarmonyBaseDemodulator_1<::UnityEngine::Color>
{
public:
	::UnityEngine::Color Min; // 0x30
	::UnityEngine::Color Max; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYCOLORDEMODULATOR__CTOR_OFFSET))(this);
	}

	::UnityEngine::Color Method_3_ABDB3ADBC66AC39E(::System::Single a1)
	{
		return ((::UnityEngine::Color(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STAGEHARMONYCOLORDEMODULATOR_METHOD_3_ABDB3ADBC66AC39E_OFFSET))(this, a1);
	}

	::DemodulatorOutPutType Method_3_F4B1CC0F7E08D926()
	{
		return ((::DemodulatorOutPutType(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYCOLORDEMODULATOR_METHOD_3_F4B1CC0F7E08D926_OFFSET))(this);
	}
};
