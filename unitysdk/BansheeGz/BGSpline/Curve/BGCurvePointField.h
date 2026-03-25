#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BansheeGz/BGSpline/Curve/BGCurvePointField_TypeEnum.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace BansheeGz::BGSpline::Curve { class BGCurve; }
namespace System { class Object; }
namespace System { class String; }

#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTFIELD_CHECKNAME_OFFSET UNITYSDK_OFFSET(0x165808C0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTFIELD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x165934E0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTFIELD_EQUALS_OFFSET UNITYSDK_OFFSET(0x16593450)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTFIELD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x165935F0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTFIELD_GET_CURVE_OFFSET UNITYSDK_OFFSET(0x16593440)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTFIELD_GET_FIELDNAME_OFFSET UNITYSDK_OFFSET(0x165931D0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTFIELD_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x16593430)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTFIELD_INIT_OFFSET UNITYSDK_OFFSET(0x16580AF0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTFIELD_SET_FIELDNAME_OFFSET UNITYSDK_OFFSET(0x165931E0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTFIELD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x16593690)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTFIELD__CTOR_OFFSET UNITYSDK_OFFSET(0x165936A0)

namespace BansheeGz::BGSpline::Curve
{
	inline static constexpr unsigned int BGCurvePointField_TypeDefinitionIndex = 28195;

	class BGCurvePointField : public ::UnityEngine::MonoBehaviour
	{
	public:
		::BansheeGz::BGSpline::Curve::BGCurve* curve; // 0x18
		::System::String* fieldName; // 0x20
		::BansheeGz::BGSpline::Curve::BGCurvePointField_TypeEnum type; // 0x28
		::System::Boolean showHandles; // 0x2C
		::System::Int32 handlesType; // 0x30
		::UnityEngine::Color handlesColor; // 0x34
		::System::Boolean showInPointsMenu; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTFIELD__CTOR_OFFSET))(this);
		}

		::System::String* get_FieldName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTFIELD_GET_FIELDNAME_OFFSET))(this);
		}

		::System::Void set_FieldName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTFIELD_SET_FIELDNAME_OFFSET))(this, value);
		}

		::BansheeGz::BGSpline::Curve::BGCurvePointField_TypeEnum get_Type()
		{
			return ((::BansheeGz::BGSpline::Curve::BGCurvePointField_TypeEnum(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTFIELD_GET_TYPE_OFFSET))(this);
		}

		::BansheeGz::BGSpline::Curve::BGCurve* get_Curve()
		{
			return ((::BansheeGz::BGSpline::Curve::BGCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTFIELD_GET_CURVE_OFFSET))(this);
		}

		::System::Void Init(::BansheeGz::BGSpline::Curve::BGCurve* curve, ::System::String* fieldName, ::BansheeGz::BGSpline::Curve::BGCurvePointField_TypeEnum type)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurve*, ::System::String*, ::BansheeGz::BGSpline::Curve::BGCurvePointField_TypeEnum))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTFIELD_INIT_OFFSET))(this, curve, fieldName, type);
		}

		static ::System::String* CheckName(::BansheeGz::BGSpline::Curve::BGCurve* curve, ::System::String* name, ::System::Boolean throwException)
		{
			return ((::System::String*(*)(::BansheeGz::BGSpline::Curve::BGCurve*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTFIELD_CHECKNAME_OFFSET))(curve, name, throwException);
		}

		::System::Boolean Equals(::BansheeGz::BGSpline::Curve::BGCurvePointField* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurvePointField*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTFIELD_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTFIELD_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTFIELD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTFIELD_TOSTRING_OFFSET))(this);
		}
	};
}
