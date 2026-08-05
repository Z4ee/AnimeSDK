#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_REPORTERUTIL_AVGRESULT_GET_FRACTIONAVG_OFFSET UNITYSDK_OFFSET(0x1DF69FA0)
#define MIHOYO_SDK_REPORTERUTIL_AVGRESULT_GET_MAINAVG_OFFSET UNITYSDK_OFFSET(0x1DF69F80)
#define MIHOYO_SDK_REPORTERUTIL_AVGRESULT_SET_FRACTIONAVG_OFFSET UNITYSDK_OFFSET(0x1DF69FB0)
#define MIHOYO_SDK_REPORTERUTIL_AVGRESULT_SET_MAINAVG_OFFSET UNITYSDK_OFFSET(0x1DF69F90)
#define MIHOYO_SDK_REPORTERUTIL_AVGRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF69FC0)

namespace MiHoYo::SDK::ReporterUtil
{
	inline static constexpr unsigned int AvgResult_TypeDefinitionIndex = 37670;

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

		::System::Void set_MainAvg(::System::Decimal value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Decimal))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_AVGRESULT_SET_MAINAVG_OFFSET))(this, value);
		}

		::System::Decimal get_FractionAvg()
		{
			return ((::System::Decimal(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_AVGRESULT_GET_FRACTIONAVG_OFFSET))(this);
		}

		::System::Void set_FractionAvg(::System::Decimal value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Decimal))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_AVGRESULT_SET_FRACTIONAVG_OFFSET))(this, value);
		}
	};
}
