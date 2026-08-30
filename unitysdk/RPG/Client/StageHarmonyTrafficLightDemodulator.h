#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DemodulatorOutPutType.h"
#include "unitysdk/StageHarmonyBaseDemodulator_1.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define RPG_CLIENT_STAGEHARMONYTRAFFICLIGHTDEMODULATOR_METHOD_3_D4F7E73269C0B79B_OFFSET UNITYSDK_OFFSET(0x1A4ED800)
#define RPG_CLIENT_STAGEHARMONYTRAFFICLIGHTDEMODULATOR_METHOD_3_F4B1CC0F7E08D926_OFFSET UNITYSDK_OFFSET(0x1A4ED890)
#define RPG_CLIENT_STAGEHARMONYTRAFFICLIGHTDEMODULATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4ED8E0)

namespace RPG::Client
{
	inline static constexpr unsigned int StageHarmonyTrafficLightDemodulator_TypeDefinitionIndex = 70931;

	class StageHarmonyTrafficLightDemodulator : public ::StageHarmonyBaseDemodulator_1<::UnityEngine::Vector4>
	{
	public:
		::UnityEngine::Color TargetColor; // 0x30
		::System::Int32 PhaseValue; // 0x40
		::System::UInt32 _UintSignal; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYTRAFFICLIGHTDEMODULATOR__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector4 Method_3_D4F7E73269C0B79B(::System::Single a1)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYTRAFFICLIGHTDEMODULATOR_METHOD_3_D4F7E73269C0B79B_OFFSET))(this, a1);
		}

		::DemodulatorOutPutType Method_3_F4B1CC0F7E08D926()
		{
			return ((::DemodulatorOutPutType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYTRAFFICLIGHTDEMODULATOR_METHOD_3_F4B1CC0F7E08D926_OFFSET))(this);
		}
	};
}
