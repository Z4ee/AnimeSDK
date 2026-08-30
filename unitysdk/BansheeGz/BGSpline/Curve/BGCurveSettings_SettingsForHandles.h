#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_SETTINGSFORHANDLES_GET_DISABLED_OFFSET UNITYSDK_OFFSET(0x1C01BED0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_SETTINGSFORHANDLES__CTOR_OFFSET UNITYSDK_OFFSET(0x1C01B970)

namespace BansheeGz::BGSpline::Curve
{
	inline static constexpr unsigned int BGCurveSettings_SettingsForHandles_TypeDefinitionIndex = 35342;

	class BGCurveSettings_SettingsForHandles : public ::System::Object
	{
	public:
		::System::Boolean RemoveX; // 0x10
		::System::Boolean RemoveY; // 0x11
		::System::Boolean RemoveZ; // 0x12
		::System::Boolean RemoveXZ; // 0x13
		::System::Boolean RemoveXY; // 0x14
		::System::Boolean RemoveYZ; // 0x15
		::System::Single AxisScale; // 0x18
		::System::Single PlanesScale; // 0x1C
		::System::Single Alpha; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_SETTINGSFORHANDLES__CTOR_OFFSET))(this);
		}

		::System::Boolean get_Disabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_SETTINGSFORHANDLES_GET_DISABLED_OFFSET))(this);
		}
	};
}
