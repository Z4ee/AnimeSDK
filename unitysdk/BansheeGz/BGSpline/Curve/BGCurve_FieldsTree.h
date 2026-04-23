#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace BansheeGz::BGSpline::Curve { class BGCurvePointField; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_FIELDSTREE_COMPLY_OFFSET UNITYSDK_OFFSET(0x17BA5160)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_FIELDSTREE_GETINDEX_OFFSET UNITYSDK_OFFSET(0x17BA5290)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_FIELDSTREE_UPDATE_OFFSET UNITYSDK_OFFSET(0x17BA5400)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_FIELDSTREE__CTOR_OFFSET UNITYSDK_OFFSET(0x17BA5380)

namespace BansheeGz::BGSpline::Curve
{
	inline static constexpr unsigned int BGCurve_FieldsTree_TypeDefinitionIndex = 33794;

	class BGCurve_FieldsTree : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* fieldName2Index; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_FIELDSTREE__CTOR_OFFSET))(this);
		}

		::System::Boolean Comply(::Il2CppArray<::BansheeGz::BGSpline::Curve::BGCurvePointField*>* fields)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::BansheeGz::BGSpline::Curve::BGCurvePointField*>*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_FIELDSTREE_COMPLY_OFFSET))(this, fields);
		}

		::System::Int32 GetIndex(::System::String* name)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_FIELDSTREE_GETINDEX_OFFSET))(this, name);
		}

		::System::Void Update(::Il2CppArray<::BansheeGz::BGSpline::Curve::BGCurvePointField*>* fields)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::BansheeGz::BGSpline::Curve::BGCurvePointField*>*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_FIELDSTREE_UPDATE_OFFSET))(this, fields);
		}
	};
}
