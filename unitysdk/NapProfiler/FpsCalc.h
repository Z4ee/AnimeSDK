#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }

#define NAPPROFILER_FPSCALC_START_OFFSET UNITYSDK_OFFSET(0xE585350)
#define NAPPROFILER_FPSCALC_UPDATE_OFFSET UNITYSDK_OFFSET(0xE585400)
#define NAPPROFILER_FPSCALC__CTOR_OFFSET UNITYSDK_OFFSET(0xE585500)

namespace NapProfiler
{
	inline static constexpr unsigned int FpsCalc_TypeDefinitionIndex = 89906;

	class FpsCalc : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single updateInterval; // 0x18
		::System::Single fpsMin; // 0x1C
		::System::Single fpsMax; // 0x20
		::System::Single fps; // 0x24
		::System::Single fpsAvg; // 0x28
		::System::String* logContext; // 0x30
		::System::Single Field_5_5; // 0x38
		::System::Int32 Field_5_4; // 0x3C
		::System::Single Field_5_11; // 0x40
		::System::Single Field_5_10; // 0x44
		::System::Int32 Field_5_9; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPPROFILER_FPSCALC__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPPROFILER_FPSCALC_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPPROFILER_FPSCALC_UPDATE_OFFSET))(this);
		}
	};
}
