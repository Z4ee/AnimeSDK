#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Simplygon/EChartAggregatorMode.h"
#include "unitysdk/Simplygon/spSettingsObject.h"
#include "unitysdk/System/Runtime/InteropServices/HandleRef.h"

#define SIMPLYGON_SPCHARTAGGREGATORSETTINGS_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1836B880)
#define SIMPLYGON_SPCHARTAGGREGATORSETTINGS_SETCHARTAGGREGATORMODE_OFFSET UNITYSDK_OFFSET(0x1836BB90)
#define SIMPLYGON_SPCHARTAGGREGATORSETTINGS_SETSEPARATEOVERLAPPINGCHARTS_OFFSET UNITYSDK_OFFSET(0x1836BD90)
#define SIMPLYGON_SPCHARTAGGREGATORSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1836B5B0)

namespace Simplygon
{
	inline static constexpr unsigned int spChartAggregatorSettings_TypeDefinitionIndex = 29578;

	class spChartAggregatorSettings : public ::Simplygon::spSettingsObject
	{
	public:
		::System::Runtime::InteropServices::HandleRef swigCPtr; // 0x38

		::System::Void _ctor(::System::IntPtr cPtr, ::System::Boolean cMemoryOwn)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + SIMPLYGON_SPCHARTAGGREGATORSETTINGS__CTOR_OFFSET))(this, cPtr, cMemoryOwn);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SIMPLYGON_SPCHARTAGGREGATORSETTINGS_DISPOSE_OFFSET))(this, disposing);
		}

		::System::Void SetChartAggregatorMode(::Simplygon::EChartAggregatorMode value)
		{
			return ((::System::Void(*)(::PVOID, ::Simplygon::EChartAggregatorMode))((::PBYTE)hIl2Cpp + SIMPLYGON_SPCHARTAGGREGATORSETTINGS_SETCHARTAGGREGATORMODE_OFFSET))(this, value);
		}

		::System::Void SetSeparateOverlappingCharts(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SIMPLYGON_SPCHARTAGGREGATORSETTINGS_SETSEPARATEOVERLAPPINGCHARTS_OFFSET))(this, value);
		}
	};
}
