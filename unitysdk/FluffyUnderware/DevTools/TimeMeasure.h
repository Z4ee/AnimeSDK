#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/DevTools/Ring_1.h"

namespace System::Diagnostics { class Stopwatch; }

#define FLUFFYUNDERWARE_DEVTOOLS_TIMEMEASURE_GET_AVERAGEMS_OFFSET UNITYSDK_OFFSET(0x1EA59690)
#define FLUFFYUNDERWARE_DEVTOOLS_TIMEMEASURE_GET_AVERAGETICKS_OFFSET UNITYSDK_OFFSET(0x1EA59BA0)
#define FLUFFYUNDERWARE_DEVTOOLS_TIMEMEASURE_GET_LASTMS_OFFSET UNITYSDK_OFFSET(0x1EA59650)
#define FLUFFYUNDERWARE_DEVTOOLS_TIMEMEASURE_GET_LASTTICKS_OFFSET UNITYSDK_OFFSET(0x1EA59610)
#define FLUFFYUNDERWARE_DEVTOOLS_TIMEMEASURE_GET_MAXIMUMMS_OFFSET UNITYSDK_OFFSET(0x1EA59990)
#define FLUFFYUNDERWARE_DEVTOOLS_TIMEMEASURE_GET_MAXIMUMTICKS_OFFSET UNITYSDK_OFFSET(0x1EA59E50)
#define FLUFFYUNDERWARE_DEVTOOLS_TIMEMEASURE_GET_MINIMUMMS_OFFSET UNITYSDK_OFFSET(0x1EA59780)
#define FLUFFYUNDERWARE_DEVTOOLS_TIMEMEASURE_GET_MINIMUMTICKS_OFFSET UNITYSDK_OFFSET(0x1EA59C60)
#define FLUFFYUNDERWARE_DEVTOOLS_TIMEMEASURE_PAUSE_OFFSET UNITYSDK_OFFSET(0x1EA59560)
#define FLUFFYUNDERWARE_DEVTOOLS_TIMEMEASURE_START_OFFSET UNITYSDK_OFFSET(0x1EA59330)
#define FLUFFYUNDERWARE_DEVTOOLS_TIMEMEASURE_STOP_OFFSET UNITYSDK_OFFSET(0x1EA593D0)
#define FLUFFYUNDERWARE_DEVTOOLS_TIMEMEASURE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA592E0)

namespace FluffyUnderware::DevTools
{
	inline static constexpr unsigned int TimeMeasure_TypeDefinitionIndex = 28941;

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
