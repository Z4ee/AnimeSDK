#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_REPORTERUTIL_AVGRESULT_GET_FRACTIONAVG_OFFSET UNITYSDK_OFFSET(0xA1F8BD0)
#define MIHOYO_SDK_REPORTERUTIL_AVGRESULT_GET_MAINAVG_OFFSET UNITYSDK_OFFSET(0xA1F8BB0)
#define MIHOYO_SDK_REPORTERUTIL_AVGRESULT_SET_FRACTIONAVG_OFFSET UNITYSDK_OFFSET(0xA1F8BE0)
#define MIHOYO_SDK_REPORTERUTIL_AVGRESULT_SET_MAINAVG_OFFSET UNITYSDK_OFFSET(0xA1F8BC0)
#define MIHOYO_SDK_REPORTERUTIL_AVGRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0xA1F8BF0)

namespace MiHoYo::SDK::ReporterUtil
{
	inline static constexpr unsigned int AvgResult_TypeDefinitionIndex = 44002;

	class AvgResult : public ::System::Object
	{
	public:
		::System::Decimal _FractionAvg_k__BackingField; // 0x10
		::System::Decimal _MainAvg_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_AVGRESULT__CTOR_OFFSET))(this);
		}

		::System::Decimal get_MainAvg()
		{
			return ((::System::Decimal(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_AVGRESULT_GET_MAINAVG_OFFSET))(this);
		}

		::System::Void set_MainAvg(::System::Decimal a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Decimal))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_AVGRESULT_SET_MAINAVG_OFFSET))(this, a1);
		}

		::System::Decimal get_FractionAvg()
		{
			return ((::System::Decimal(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_AVGRESULT_GET_FRACTIONAVG_OFFSET))(this);
		}

		::System::Void set_FractionAvg(::System::Decimal a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Decimal))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_AVGRESULT_SET_FRACTIONAVG_OFFSET))(this, a1);
		}
	};
}
