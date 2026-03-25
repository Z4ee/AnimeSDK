#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DemodulatorOutPutType.h"
#include "unitysdk/StageHarmonyBaseDemodulator_1.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define STAGEHARMONYFLOATDEMODULATOR_METHOD_3_D437D090E63BE8A7_OFFSET UNITYSDK_OFFSET(0xABDC690)
#define STAGEHARMONYFLOATDEMODULATOR_METHOD_3_F4B1CC0F7E08D926_OFFSET UNITYSDK_OFFSET(0xABDC720)
#define STAGEHARMONYFLOATDEMODULATOR__CTOR_OFFSET UNITYSDK_OFFSET(0xABDB810)

inline static constexpr unsigned int StageHarmonyFloatDemodulator_TypeDefinitionIndex = 38388;

class StageHarmonyFloatDemodulator : public ::StageHarmonyBaseDemodulator_1<::System::Single>
{
public:
	::System::Boolean PassThrough; // 0x28
	::UnityEngine::Vector2 MinMax; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYFLOATDEMODULATOR__CTOR_OFFSET))(this);
	}

	::System::Single Method_3_D437D090E63BE8A7(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STAGEHARMONYFLOATDEMODULATOR_METHOD_3_D437D090E63BE8A7_OFFSET))(this, a1);
	}

	::DemodulatorOutPutType Method_3_F4B1CC0F7E08D926()
	{
		return ((::DemodulatorOutPutType(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYFLOATDEMODULATOR_METHOD_3_F4B1CC0F7E08D926_OFFSET))(this);
	}
};
