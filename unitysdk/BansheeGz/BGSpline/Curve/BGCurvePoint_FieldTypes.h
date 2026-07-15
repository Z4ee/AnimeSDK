#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BansheeGz/BGSpline/Curve/BGCurvePointField_TypeEnum.h"
#include "unitysdk/System/Object.h"

namespace BansheeGz::BGSpline::Curve { class BGCurve; }
namespace BansheeGz::BGSpline::Curve { class BGCurvePoint_FieldsValues; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_FIELDTYPES_GETFIELD_OFFSET UNITYSDK_OFFSET(0x16911EE0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_FIELDTYPES_GETTYPE_OFFSET UNITYSDK_OFFSET(0x16913AF0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_FIELDTYPES_INDEXOFFIELDRELATIVE_OFFSET UNITYSDK_OFFSET(0x169149D0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_FIELDTYPES_REGISTER_OFFSET UNITYSDK_OFFSET(0x16914820)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_FIELDTYPES_SETFIELD_OFFSET UNITYSDK_OFFSET(0x16912300)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_FIELDTYPES__CCTOR_OFFSET UNITYSDK_OFFSET(0x16913B80)

namespace BansheeGz::BGSpline::Curve
{
	inline static constexpr unsigned int BGCurvePoint_FieldTypes_TypeDefinitionIndex = 34469;

	class BGCurvePoint_FieldTypes : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Action_3<::BansheeGz::BGSpline::Curve::BGCurvePoint_FieldsValues*, ::System::Int32, ::System::Object*>*>** StaticGet_type2fieldSetter()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Action_3<::BansheeGz::BGSpline::Curve::BGCurvePoint_FieldsValues*, ::System::Int32, ::System::Object*>*>**)Il2CppClass::FromTypeDefinitionIndex(BGCurvePoint_FieldTypes_TypeDefinitionIndex)->GetStaticField(0x4C560);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Func_3<::BansheeGz::BGSpline::Curve::BGCurvePoint_FieldsValues*, ::System::Int32, ::System::Object*>*>** StaticGet_type2fieldGetter()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Func_3<::BansheeGz::BGSpline::Curve::BGCurvePoint_FieldsValues*, ::System::Int32, ::System::Object*>*>**)Il2CppClass::FromTypeDefinitionIndex(BGCurvePoint_FieldTypes_TypeDefinitionIndex)->GetStaticField(0x4C568);
		}
		static ::System::Collections::Generic::Dictionary_2<::BansheeGz::BGSpline::Curve::BGCurvePointField_TypeEnum, ::System::Type*>** StaticGet_type2Type()
		{
			return (::System::Collections::Generic::Dictionary_2<::BansheeGz::BGSpline::Curve::BGCurvePointField_TypeEnum, ::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(BGCurvePoint_FieldTypes_TypeDefinitionIndex)->GetStaticField(0x4C570);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_FIELDTYPES__CCTOR_OFFSET))();
		}

		static ::System::Void Register(::BansheeGz::BGSpline::Curve::BGCurvePointField_TypeEnum a1, ::System::Type* a2, ::System::Func_3<::BansheeGz::BGSpline::Curve::BGCurvePoint_FieldsValues*, ::System::Int32, ::System::Object*>* a3, ::System::Action_3<::BansheeGz::BGSpline::Curve::BGCurvePoint_FieldsValues*, ::System::Int32, ::System::Object*>* a4)
		{
			return ((::System::Void(*)(::BansheeGz::BGSpline::Curve::BGCurvePointField_TypeEnum, ::System::Type*, ::System::Func_3<::BansheeGz::BGSpline::Curve::BGCurvePoint_FieldsValues*, ::System::Int32, ::System::Object*>*, ::System::Action_3<::BansheeGz::BGSpline::Curve::BGCurvePoint_FieldsValues*, ::System::Int32, ::System::Object*>*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_FIELDTYPES_REGISTER_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Type* GetType(::BansheeGz::BGSpline::Curve::BGCurvePointField_TypeEnum a1)
		{
			return ((::System::Type*(*)(::BansheeGz::BGSpline::Curve::BGCurvePointField_TypeEnum))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_FIELDTYPES_GETTYPE_OFFSET))(a1);
		}

		static ::System::Object* GetField(::BansheeGz::BGSpline::Curve::BGCurve* a1, ::System::Type* a2, ::System::String* a3, ::BansheeGz::BGSpline::Curve::BGCurvePoint_FieldsValues* a4)
		{
			return ((::System::Object*(*)(::BansheeGz::BGSpline::Curve::BGCurve*, ::System::Type*, ::System::String*, ::BansheeGz::BGSpline::Curve::BGCurvePoint_FieldsValues*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_FIELDTYPES_GETFIELD_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void SetField(::BansheeGz::BGSpline::Curve::BGCurve* a1, ::System::Type* a2, ::System::String* a3, ::System::Object* a4, ::BansheeGz::BGSpline::Curve::BGCurvePoint_FieldsValues* a5)
		{
			return ((::System::Void(*)(::BansheeGz::BGSpline::Curve::BGCurve*, ::System::Type*, ::System::String*, ::System::Object*, ::BansheeGz::BGSpline::Curve::BGCurvePoint_FieldsValues*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_FIELDTYPES_SETFIELD_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Int32 IndexOfFieldRelative(::BansheeGz::BGSpline::Curve::BGCurve* a1, ::System::String* a2)
		{
			return ((::System::Int32(*)(::BansheeGz::BGSpline::Curve::BGCurve*, ::System::String*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_FIELDTYPES_INDEXOFFIELDRELATIVE_OFFSET))(a1, a2);
		}
	};
}
