#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_RESTRICTGIZMOZSETTING_COMPLY_OFFSET UNITYSDK_OFFSET(0x1F00D140)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_RESTRICTGIZMOZSETTING_GET_HASVALUE_OFFSET UNITYSDK_OFFSET(0x1F00D010)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_RESTRICTGIZMOZSETTING_GET_VALID_OFFSET UNITYSDK_OFFSET(0x1F00D030)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_RESTRICTGIZMOZSETTING_ISSHOWING_OFFSET UNITYSDK_OFFSET(0x1F00D040)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_RESTRICTGIZMOZSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x1F00CC60)

namespace BansheeGz::BGSpline::Curve
{
	inline static constexpr unsigned int BGCurveSettings_RestrictGizmozSetting_TypeDefinitionIndex = 35343;

	class BGCurveSettings_RestrictGizmozSetting : public ::System::Object
	{
	public:
		::System::String* value; // 0x10
		::System::Collections::Generic::HashSet_1<::System::Int32>* numbersList; // 0x18
		::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Int32>>* fromToList; // 0x20
		::System::Boolean valid; // 0x28

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_RESTRICTGIZMOZSETTING__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean get_HasValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_RESTRICTGIZMOZSETTING_GET_HASVALUE_OFFSET))(this);
		}

		::System::Boolean get_Valid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_RESTRICTGIZMOZSETTING_GET_VALID_OFFSET))(this);
		}

		::System::Boolean IsShowing(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_RESTRICTGIZMOZSETTING_ISSHOWING_OFFSET))(this, a1);
		}

		::BansheeGz::BGSpline::Curve::BGCurveSettings_RestrictGizmozSetting* Comply(::System::String* a1)
		{
			return ((::BansheeGz::BGSpline::Curve::BGCurveSettings_RestrictGizmozSetting*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_RESTRICTGIZMOZSETTING_COMPLY_OFFSET))(this, a1);
		}
	};
}
