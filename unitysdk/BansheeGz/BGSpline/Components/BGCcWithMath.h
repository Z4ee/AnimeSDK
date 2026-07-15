#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BansheeGz/BGSpline/Curve/BGCc.h"

namespace BansheeGz::BGSpline::Components { class BGCcMath; }
namespace System { class String; }

#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCWITHMATH_GET_ERROR_OFFSET UNITYSDK_OFFSET(0x168E66C0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCWITHMATH_GET_MATH_OFFSET UNITYSDK_OFFSET(0x168D6B10)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCWITHMATH_SET_MATH_OFFSET UNITYSDK_OFFSET(0x168EE380)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCWITHMATH__CTOR_OFFSET UNITYSDK_OFFSET(0x168D9790)

namespace BansheeGz::BGSpline::Components
{
	inline static constexpr unsigned int BGCcWithMath_TypeDefinitionIndex = 34515;

	class BGCcWithMath : public ::BansheeGz::BGSpline::Curve::BGCc
	{
	public:
		::BansheeGz::BGSpline::Components::BGCcMath* math; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCWITHMATH__CTOR_OFFSET))(this);
		}

		::BansheeGz::BGSpline::Components::BGCcMath* get_Math()
		{
			return ((::BansheeGz::BGSpline::Components::BGCcMath*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCWITHMATH_GET_MATH_OFFSET))(this);
		}

		::System::Void set_Math(::BansheeGz::BGSpline::Components::BGCcMath* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Components::BGCcMath*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCWITHMATH_SET_MATH_OFFSET))(this, a1);
		}

		::System::String* get_Error()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCWITHMATH_GET_ERROR_OFFSET))(this);
		}
	};
}
