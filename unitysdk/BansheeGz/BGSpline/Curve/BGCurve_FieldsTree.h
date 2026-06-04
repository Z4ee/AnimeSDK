#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace BansheeGz::BGSpline::Curve { class BGCurvePointField; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_FIELDSTREE_COMPLY_OFFSET UNITYSDK_OFFSET(0x18954C20)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_FIELDSTREE_GETINDEX_OFFSET UNITYSDK_OFFSET(0x18954D50)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_FIELDSTREE_UPDATE_OFFSET UNITYSDK_OFFSET(0x18954EB0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_FIELDSTREE__CTOR_OFFSET UNITYSDK_OFFSET(0x18954E30)

namespace BansheeGz::BGSpline::Curve
{
	inline static constexpr unsigned int BGCurve_FieldsTree_TypeDefinitionIndex = 34076;

	class BGCurve_FieldsTree : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* fieldName2Index; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_FIELDSTREE__CTOR_OFFSET))(this);
		}

		::System::Boolean Comply(::Il2CppArray<::BansheeGz::BGSpline::Curve::BGCurvePointField*>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::BansheeGz::BGSpline::Curve::BGCurvePointField*>*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_FIELDSTREE_COMPLY_OFFSET))(this, a1);
		}

		::System::Int32 GetIndex(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_FIELDSTREE_GETINDEX_OFFSET))(this, a1);
		}

		::System::Void Update(::Il2CppArray<::BansheeGz::BGSpline::Curve::BGCurvePointField*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::BansheeGz::BGSpline::Curve::BGCurvePointField*>*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_FIELDSTREE_UPDATE_OFFSET))(this, a1);
		}
	};
}
