#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BansheeGz/BGSpline/Components/BGCcWithCursorObject.h"

namespace BansheeGz::BGSpline::Curve { class BGCurvePointField; }
namespace System { class EventHandler; }
namespace System { class String; }

#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOROBJECTSCALE_ADD_OBJECTSCALED_OFFSET UNITYSDK_OFFSET(0x1893A090)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOROBJECTSCALE_GET_ERROR_OFFSET UNITYSDK_OFFSET(0x1893A220)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOROBJECTSCALE_GET_SCALEFIELD_OFFSET UNITYSDK_OFFSET(0x1893A150)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOROBJECTSCALE_REMOVE_OBJECTSCALED_OFFSET UNITYSDK_OFFSET(0x1893A0F0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOROBJECTSCALE_SET_SCALEFIELD_OFFSET UNITYSDK_OFFSET(0x1893A160)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOROBJECTSCALE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1893A2F0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOROBJECTSCALE__CTOR_OFFSET UNITYSDK_OFFSET(0x1893A920)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOROBJECTSCALE__GET_ERROR_B__8_0_OFFSET UNITYSDK_OFFSET(0x1893A930)

namespace BansheeGz::BGSpline::Components
{
	inline static constexpr unsigned int BGCcCursorObjectScale_TypeDefinitionIndex = 34121;

	class BGCcCursorObjectScale : public ::BansheeGz::BGSpline::Components::BGCcWithCursorObject
	{
	public:
		::System::EventHandler* ObjectScaled; // 0x60
		::BansheeGz::BGSpline::Curve::BGCurvePointField* scaleField; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOROBJECTSCALE__CTOR_OFFSET))(this);
		}

		::System::Void add_ObjectScaled(::System::EventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOROBJECTSCALE_ADD_OBJECTSCALED_OFFSET))(this, a1);
		}

		::System::Void remove_ObjectScaled(::System::EventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOROBJECTSCALE_REMOVE_OBJECTSCALED_OFFSET))(this, a1);
		}

		::BansheeGz::BGSpline::Curve::BGCurvePointField* get_ScaleField()
		{
			return ((::BansheeGz::BGSpline::Curve::BGCurvePointField*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOROBJECTSCALE_GET_SCALEFIELD_OFFSET))(this);
		}

		::System::Void set_ScaleField(::BansheeGz::BGSpline::Curve::BGCurvePointField* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurvePointField*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOROBJECTSCALE_SET_SCALEFIELD_OFFSET))(this, a1);
		}

		::System::String* get_Error()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOROBJECTSCALE_GET_ERROR_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOROBJECTSCALE_UPDATE_OFFSET))(this);
		}

		::System::String* _get_Error_b__8_0()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOROBJECTSCALE__GET_ERROR_B__8_0_OFFSET))(this);
		}
	};
}
