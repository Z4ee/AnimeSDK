#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_RESTRICTGIZMOZSETTING_COMPLY_OFFSET UNITYSDK_OFFSET(0x17BC3990)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_RESTRICTGIZMOZSETTING_GET_HASVALUE_OFFSET UNITYSDK_OFFSET(0x17BC38C0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_RESTRICTGIZMOZSETTING_GET_VALID_OFFSET UNITYSDK_OFFSET(0x17BC38E0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_RESTRICTGIZMOZSETTING_ISSHOWING_OFFSET UNITYSDK_OFFSET(0x17BC38F0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_RESTRICTGIZMOZSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x17BC34C0)

namespace BansheeGz::BGSpline::Curve
{
	inline static constexpr unsigned int BGCurveSettings_RestrictGizmozSetting_TypeDefinitionIndex = 33829;

	class BGCurveSettings_RestrictGizmozSetting : public ::System::Object
	{
	public:
		::System::String* value; // 0x10
		::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Int32>>* fromToList; // 0x18
		::System::Collections::Generic::HashSet_1<::System::Int32>* numbersList; // 0x20
		::System::Boolean valid; // 0x28

		::System::Void _ctor(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_RESTRICTGIZMOZSETTING__CTOR_OFFSET))(this, value);
		}

		::System::Boolean get_HasValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_RESTRICTGIZMOZSETTING_GET_HASVALUE_OFFSET))(this);
		}

		::System::Boolean get_Valid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_RESTRICTGIZMOZSETTING_GET_VALID_OFFSET))(this);
		}

		::System::Boolean IsShowing(::System::Int32 point)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_RESTRICTGIZMOZSETTING_ISSHOWING_OFFSET))(this, point);
		}

		::BansheeGz::BGSpline::Curve::BGCurveSettings_RestrictGizmozSetting* Comply(::System::String* value)
		{
			return ((::BansheeGz::BGSpline::Curve::BGCurveSettings_RestrictGizmozSetting*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_RESTRICTGIZMOZSETTING_COMPLY_OFFSET))(this, value);
		}
	};
}
