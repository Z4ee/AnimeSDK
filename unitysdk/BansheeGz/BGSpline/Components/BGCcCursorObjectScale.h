#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BansheeGz/BGSpline/Components/BGCcWithCursorObject.h"

namespace BansheeGz::BGSpline::Curve { class BGCurvePointField; }
namespace System { class EventHandler; }
namespace System { class String; }

#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOROBJECTSCALE_ADD_OBJECTSCALED_OFFSET UNITYSDK_OFFSET(0x165612C0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOROBJECTSCALE_GET_ERROR_OFFSET UNITYSDK_OFFSET(0x16561440)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOROBJECTSCALE_GET_SCALEFIELD_OFFSET UNITYSDK_OFFSET(0x16561380)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOROBJECTSCALE_REMOVE_OBJECTSCALED_OFFSET UNITYSDK_OFFSET(0x16561320)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOROBJECTSCALE_SET_SCALEFIELD_OFFSET UNITYSDK_OFFSET(0x16561390)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOROBJECTSCALE_UPDATE_OFFSET UNITYSDK_OFFSET(0x16561500)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOROBJECTSCALE__CTOR_OFFSET UNITYSDK_OFFSET(0x16561B30)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOROBJECTSCALE__GET_ERROR_B__8_0_OFFSET UNITYSDK_OFFSET(0x16561B40)

namespace BansheeGz::BGSpline::Components
{
	inline static constexpr unsigned int BGCcCursorObjectScale_TypeDefinitionIndex = 28215;

	class BGCcCursorObjectScale : public ::BansheeGz::BGSpline::Components::BGCcWithCursorObject
	{
	public:
		::System::EventHandler* ObjectScaled; // 0x60
		::BansheeGz::BGSpline::Curve::BGCurvePointField* scaleField; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOROBJECTSCALE__CTOR_OFFSET))(this);
		}

		::System::Void add_ObjectScaled(::System::EventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOROBJECTSCALE_ADD_OBJECTSCALED_OFFSET))(this, value);
		}

		::System::Void remove_ObjectScaled(::System::EventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOROBJECTSCALE_REMOVE_OBJECTSCALED_OFFSET))(this, value);
		}

		::BansheeGz::BGSpline::Curve::BGCurvePointField* get_ScaleField()
		{
			return ((::BansheeGz::BGSpline::Curve::BGCurvePointField*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOROBJECTSCALE_GET_SCALEFIELD_OFFSET))(this);
		}

		::System::Void set_ScaleField(::BansheeGz::BGSpline::Curve::BGCurvePointField* value)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurvePointField*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOROBJECTSCALE_SET_SCALEFIELD_OFFSET))(this, value);
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
