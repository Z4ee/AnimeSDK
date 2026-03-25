#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGPPU_GET_X_OFFSET UNITYSDK_OFFSET(0x59D0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGPPU_GET_Y_OFFSET UNITYSDK_OFFSET(0x1DA90)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGPPU_SET_X_OFFSET UNITYSDK_OFFSET(0x29130)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGPPU_SET_Y_OFFSET UNITYSDK_OFFSET(0x1D50)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGPPU__CTOR_OFFSET UNITYSDK_OFFSET(0x72EF0)

namespace BansheeGz::BGSpline::Components
{
	inline static constexpr unsigned int BGPpu_TypeDefinitionIndex = 28245;

	struct alignas(4) BGPpu
	{
		::System::Int32 x; // 0x10
		::System::Int32 y; // 0x14

		::System::Void _ctor(::System::Int32 x, ::System::Int32 y)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGPPU__CTOR_OFFSET))(this, x, y);
		}

		::System::Int32 get_X()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGPPU_GET_X_OFFSET))(this);
		}

		::System::Void set_X(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGPPU_SET_X_OFFSET))(this, value);
		}

		::System::Int32 get_Y()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGPPU_GET_Y_OFFSET))(this);
		}

		::System::Void set_Y(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGPPU_SET_Y_OFFSET))(this, value);
		}
	};
}
