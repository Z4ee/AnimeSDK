#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"

namespace System { class String; }

#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVECHANGEDARGS_BEFORECHANGE_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x17BA6F30)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVECHANGEDARGS_BEFORECHANGE__CCTOR_OFFSET UNITYSDK_OFFSET(0x17BB6050)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVECHANGEDARGS_BEFORECHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x17BB6030)

namespace BansheeGz::BGSpline::Curve
{
	inline static constexpr unsigned int BGCurveChangedArgs_BeforeChange_TypeDefinitionIndex = 33808;

	class BGCurveChangedArgs_BeforeChange : public ::System::EventArgs
	{
	public:
		static ::BansheeGz::BGSpline::Curve::BGCurveChangedArgs_BeforeChange** StaticGet_BeforeChangeInstance()
		{
			return (::BansheeGz::BGSpline::Curve::BGCurveChangedArgs_BeforeChange**)Il2CppClass::FromTypeDefinitionIndex(BGCurveChangedArgs_BeforeChange_TypeDefinitionIndex)->GetStaticField(0x69C00);
		}
		::System::String* Operation; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVECHANGEDARGS_BEFORECHANGE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVECHANGEDARGS_BEFORECHANGE__CCTOR_OFFSET))();
		}

		static ::BansheeGz::BGSpline::Curve::BGCurveChangedArgs_BeforeChange* GetInstance(::System::String* operation)
		{
			return ((::BansheeGz::BGSpline::Curve::BGCurveChangedArgs_BeforeChange*(*)(::System::String*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVECHANGEDARGS_BEFORECHANGE_GETINSTANCE_OFFSET))(operation);
		}
	};
}
