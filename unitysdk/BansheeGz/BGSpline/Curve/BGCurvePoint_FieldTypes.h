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

#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_FIELDTYPES_GETFIELD_OFFSET UNITYSDK_OFFSET(0x17BB99D0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_FIELDTYPES_GETTYPE_OFFSET UNITYSDK_OFFSET(0x17BBB660)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_FIELDTYPES_INDEXOFFIELDRELATIVE_OFFSET UNITYSDK_OFFSET(0x17BBC320)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_FIELDTYPES_REGISTER_OFFSET UNITYSDK_OFFSET(0x17BBC170)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_FIELDTYPES_SETFIELD_OFFSET UNITYSDK_OFFSET(0x17BB9E10)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_FIELDTYPES__CCTOR_OFFSET UNITYSDK_OFFSET(0x17BBB6F0)

namespace BansheeGz::BGSpline::Curve
{
	inline static constexpr unsigned int BGCurvePoint_FieldTypes_TypeDefinitionIndex = 33816;

	class BGCurvePoint_FieldTypes : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Action_3<::BansheeGz::BGSpline::Curve::BGCurvePoint_FieldsValues*, ::System::Int32, ::System::Object*>*>** StaticGet_type2fieldSetter()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Action_3<::BansheeGz::BGSpline::Curve::BGCurvePoint_FieldsValues*, ::System::Int32, ::System::Object*>*>**)Il2CppClass::FromTypeDefinitionIndex(BGCurvePoint_FieldTypes_TypeDefinitionIndex)->GetStaticField(0x69C60);
		}
		static ::System::Collections::Generic::Dictionary_2<::BansheeGz::BGSpline::Curve::BGCurvePointField_TypeEnum, ::System::Type*>** StaticGet_type2Type()
		{
			return (::System::Collections::Generic::Dictionary_2<::BansheeGz::BGSpline::Curve::BGCurvePointField_TypeEnum, ::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(BGCurvePoint_FieldTypes_TypeDefinitionIndex)->GetStaticField(0x69C68);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Func_3<::BansheeGz::BGSpline::Curve::BGCurvePoint_FieldsValues*, ::System::Int32, ::System::Object*>*>** StaticGet_type2fieldGetter()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Func_3<::BansheeGz::BGSpline::Curve::BGCurvePoint_FieldsValues*, ::System::Int32, ::System::Object*>*>**)Il2CppClass::FromTypeDefinitionIndex(BGCurvePoint_FieldTypes_TypeDefinitionIndex)->GetStaticField(0x69C70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_FIELDTYPES__CCTOR_OFFSET))();
		}

		static ::System::Void Register(::BansheeGz::BGSpline::Curve::BGCurvePointField_TypeEnum typeEnum, ::System::Type* type, ::System::Func_3<::BansheeGz::BGSpline::Curve::BGCurvePoint_FieldsValues*, ::System::Int32, ::System::Object*>* getter, ::System::Action_3<::BansheeGz::BGSpline::Curve::BGCurvePoint_FieldsValues*, ::System::Int32, ::System::Object*>* setter)
		{
			return ((::System::Void(*)(::BansheeGz::BGSpline::Curve::BGCurvePointField_TypeEnum, ::System::Type*, ::System::Func_3<::BansheeGz::BGSpline::Curve::BGCurvePoint_FieldsValues*, ::System::Int32, ::System::Object*>*, ::System::Action_3<::BansheeGz::BGSpline::Curve::BGCurvePoint_FieldsValues*, ::System::Int32, ::System::Object*>*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_FIELDTYPES_REGISTER_OFFSET))(typeEnum, type, getter, setter);
		}

		static ::System::Type* GetType(::BansheeGz::BGSpline::Curve::BGCurvePointField_TypeEnum type)
		{
			return ((::System::Type*(*)(::BansheeGz::BGSpline::Curve::BGCurvePointField_TypeEnum))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_FIELDTYPES_GETTYPE_OFFSET))(type);
		}

		static ::System::Object* GetField(::BansheeGz::BGSpline::Curve::BGCurve* curve, ::System::Type* type, ::System::String* name, ::BansheeGz::BGSpline::Curve::BGCurvePoint_FieldsValues* values)
		{
			return ((::System::Object*(*)(::BansheeGz::BGSpline::Curve::BGCurve*, ::System::Type*, ::System::String*, ::BansheeGz::BGSpline::Curve::BGCurvePoint_FieldsValues*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_FIELDTYPES_GETFIELD_OFFSET))(curve, type, name, values);
		}

		static ::System::Void SetField(::BansheeGz::BGSpline::Curve::BGCurve* curve, ::System::Type* type, ::System::String* name, ::System::Object* value, ::BansheeGz::BGSpline::Curve::BGCurvePoint_FieldsValues* values)
		{
			return ((::System::Void(*)(::BansheeGz::BGSpline::Curve::BGCurve*, ::System::Type*, ::System::String*, ::System::Object*, ::BansheeGz::BGSpline::Curve::BGCurvePoint_FieldsValues*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_FIELDTYPES_SETFIELD_OFFSET))(curve, type, name, value, values);
		}

		static ::System::Int32 IndexOfFieldRelative(::BansheeGz::BGSpline::Curve::BGCurve* curve, ::System::String* name)
		{
			return ((::System::Int32(*)(::BansheeGz::BGSpline::Curve::BGCurve*, ::System::String*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_FIELDTYPES_INDEXOFFIELDRELATIVE_OFFSET))(curve, name);
		}
	};
}
