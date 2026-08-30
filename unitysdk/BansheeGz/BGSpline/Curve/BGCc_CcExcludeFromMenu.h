#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define BANSHEEGZ_BGSPLINE_CURVE_BGCC_CCEXCLUDEFROMMENU__CTOR_OFFSET UNITYSDK_OFFSET(0x1BFF2320)

namespace BansheeGz::BGSpline::Curve
{
	inline static constexpr unsigned int BGCc_CcExcludeFromMenu_TypeDefinitionIndex = 35297;

	class BGCc_CcExcludeFromMenu : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCC_CCEXCLUDEFROMMENU__CTOR_OFFSET))(this);
		}
	};
}
