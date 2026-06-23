#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/DevTools/Ring_1.h"

namespace System::Diagnostics { class Stopwatch; }

#define FLUFFYUNDERWARE_DEVTOOLS_TIMEMEASURE_GET_AVERAGEMS_OFFSET UNITYSDK_OFFSET(0x1D6A02A0)
#define FLUFFYUNDERWARE_DEVTOOLS_TIMEMEASURE_GET_AVERAGETICKS_OFFSET UNITYSDK_OFFSET(0x1D6A0680)
#define FLUFFYUNDERWARE_DEVTOOLS_TIMEMEASURE_GET_LASTMS_OFFSET UNITYSDK_OFFSET(0x1D6A0260)
#define FLUFFYUNDERWARE_DEVTOOLS_TIMEMEASURE_GET_LASTTICKS_OFFSET UNITYSDK_OFFSET(0x1D6A0220)
#define FLUFFYUNDERWARE_DEVTOOLS_TIMEMEASURE_GET_MAXIMUMMS_OFFSET UNITYSDK_OFFSET(0x1D6A0560)
#define FLUFFYUNDERWARE_DEVTOOLS_TIMEMEASURE_GET_MAXIMUMTICKS_OFFSET UNITYSDK_OFFSET(0x1D6A08F0)
#define FLUFFYUNDERWARE_DEVTOOLS_TIMEMEASURE_GET_MINIMUMMS_OFFSET UNITYSDK_OFFSET(0x1D6A0440)
#define FLUFFYUNDERWARE_DEVTOOLS_TIMEMEASURE_GET_MINIMUMTICKS_OFFSET UNITYSDK_OFFSET(0x1D6A07F0)
#define FLUFFYUNDERWARE_DEVTOOLS_TIMEMEASURE_PAUSE_OFFSET UNITYSDK_OFFSET(0x1D6A0170)
#define FLUFFYUNDERWARE_DEVTOOLS_TIMEMEASURE_START_OFFSET UNITYSDK_OFFSET(0x1D69FF40)
#define FLUFFYUNDERWARE_DEVTOOLS_TIMEMEASURE_STOP_OFFSET UNITYSDK_OFFSET(0x1D69FFE0)
#define FLUFFYUNDERWARE_DEVTOOLS_TIMEMEASURE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D69FEF0)

namespace FluffyUnderware::DevTools
{
	inline static constexpr unsigned int TimeMeasure_TypeDefinitionIndex = 28337;

	class TimeMeasure : public ::FluffyUnderware::DevTools::Ring_1<::System::Int64>
	{
	public:
		::System::Diagnostics::Stopwatch* mWatch; // 0x20

		::System::Void _ctor(::System::Int32 size)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_TIMEMEASURE__CTOR_OFFSET))(this, size);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_TIMEMEASURE_START_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_TIMEMEASURE_STOP_OFFSET))(this);
		}

		::System::Void Pause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_TIMEMEASURE_PAUSE_OFFSET))(this);
		}

		::System::Double get_LastTicks()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_TIMEMEASURE_GET_LASTTICKS_OFFSET))(this);
		}

		::System::Double get_LastMS()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_TIMEMEASURE_GET_LASTMS_OFFSET))(this);
		}

		::System::Double get_AverageMS()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_TIMEMEASURE_GET_AVERAGEMS_OFFSET))(this);
		}

		::System::Double get_MinimumMS()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_TIMEMEASURE_GET_MINIMUMMS_OFFSET))(this);
		}

		::System::Double get_MaximumMS()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_TIMEMEASURE_GET_MAXIMUMMS_OFFSET))(this);
		}

		::System::Double get_AverageTicks()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_TIMEMEASURE_GET_AVERAGETICKS_OFFSET))(this);
		}

		::System::Double get_MinimumTicks()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_TIMEMEASURE_GET_MINIMUMTICKS_OFFSET))(this);
		}

		::System::Double get_MaximumTicks()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_TIMEMEASURE_GET_MAXIMUMTICKS_OFFSET))(this);
		}
	};
}
