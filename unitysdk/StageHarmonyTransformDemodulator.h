#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DemodulatorOutPutType.h"
#include "unitysdk/StageHarmonyBaseDemodulator_1.h"
#include "unitysdk/Struct_2_FBA4730A60751401_1.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define STAGEHARMONYTRANSFORMDEMODULATOR_METHOD_3_4BF7DA9CA52F7891_OFFSET UNITYSDK_OFFSET(0x14ED0C80)
#define STAGEHARMONYTRANSFORMDEMODULATOR_METHOD_3_F4B1CC0F7E08D926_OFFSET UNITYSDK_OFFSET(0x14ED0FA0)
#define STAGEHARMONYTRANSFORMDEMODULATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x14ED0FF0)

inline static constexpr unsigned int StageHarmonyTransformDemodulator_TypeDefinitionIndex = 45738;

class StageHarmonyTransformDemodulator : public ::StageHarmonyBaseDemodulator_1<::Struct_2_FBA4730A60751401_1>
{
public:
	::UnityEngine::Vector3 MinPos; // 0x48
	::UnityEngine::Vector3 MinRotation; // 0x54
	::UnityEngine::Vector3 MinScale; // 0x60
	::UnityEngine::Vector4 MaxPos; // 0x6C
	::UnityEngine::Vector4 MaxRotation; // 0x7C
	::UnityEngine::Vector4 MaxSale; // 0x8C
	::System::Boolean SmoothSignal; // 0x9C
	::System::Single SmoothTime; // 0xA0
	::System::Single MaxSpeed; // 0xA4
	::System::Boolean _LastSignalPause; // 0xA8
	::System::Single _Signal; // 0xAC
	::System::Single _RecordSignalVelocity; // 0xB0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYTRANSFORMDEMODULATOR__CTOR_OFFSET))(this);
	}

	::Struct_2_FBA4730A60751401_1 Method_3_4BF7DA9CA52F7891(::System::Single a1)
	{
		return ((::Struct_2_FBA4730A60751401_1(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STAGEHARMONYTRANSFORMDEMODULATOR_METHOD_3_4BF7DA9CA52F7891_OFFSET))(this, a1);
	}

	::DemodulatorOutPutType Method_3_F4B1CC0F7E08D926()
	{
		return ((::DemodulatorOutPutType(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYTRANSFORMDEMODULATOR_METHOD_3_F4B1CC0F7E08D926_OFFSET))(this);
	}
};
