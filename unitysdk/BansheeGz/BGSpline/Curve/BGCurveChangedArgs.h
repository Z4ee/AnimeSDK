#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BansheeGz/BGSpline/Curve/BGCurveChangedArgs_ChangeTypeEnum.h"
#include "unitysdk/System/EventArgs.h"

namespace BansheeGz::BGSpline::Curve { class BGCurve; }
namespace BansheeGz::BGSpline::Curve { class BGCurvePointI; }
namespace System { class Object; }
namespace System { class String; }

#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVECHANGEDARGS_CLONE_OFFSET UNITYSDK_OFFSET(0x18956A40)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVECHANGEDARGS_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x18966240)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVECHANGEDARGS_EQUALS_OFFSET UNITYSDK_OFFSET(0x189661E0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVECHANGEDARGS_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18966310)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVECHANGEDARGS_GETINSTANCE_1_OFFSET UNITYSDK_OFFSET(0x189568D0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVECHANGEDARGS_GETINSTANCE_2_OFFSET UNITYSDK_OFFSET(0x18966110)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVECHANGEDARGS_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x1894D5F0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVECHANGEDARGS_GET_CHANGETYPE_OFFSET UNITYSDK_OFFSET(0x189660B0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVECHANGEDARGS_GET_CURVE_OFFSET UNITYSDK_OFFSET(0x189660C0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVECHANGEDARGS_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x189660D0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVECHANGEDARGS_GET_MULTIPLECHANGES_OFFSET UNITYSDK_OFFSET(0x189660E0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVECHANGEDARGS__CCTOR_OFFSET UNITYSDK_OFFSET(0x18966340)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVECHANGEDARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x189660F0)

namespace BansheeGz::BGSpline::Curve
{
	inline static constexpr unsigned int BGCurveChangedArgs_TypeDefinitionIndex = 34088;

	class BGCurveChangedArgs : public ::System::EventArgs
	{
	public:
		static ::BansheeGz::BGSpline::Curve::BGCurveChangedArgs** StaticGet_Instance()
		{
			return (::BansheeGz::BGSpline::Curve::BGCurveChangedArgs**)Il2CppClass::FromTypeDefinitionIndex(BGCurveChangedArgs_TypeDefinitionIndex)->GetStaticField(0x4FB60);
		}
		::System::String* message; // 0x10
		::BansheeGz::BGSpline::Curve::BGCurve* curve; // 0x18
		::Il2CppArray<::BansheeGz::BGSpline::Curve::BGCurveChangedArgs*>* multipleChanges; // 0x20
		::BansheeGz::BGSpline::Curve::BGCurvePointI* point; // 0x28
		::BansheeGz::BGSpline::Curve::BGCurveChangedArgs_ChangeTypeEnum changeType; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVECHANGEDARGS__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVECHANGEDARGS__CCTOR_OFFSET))();
		}

		::BansheeGz::BGSpline::Curve::BGCurveChangedArgs_ChangeTypeEnum get_ChangeType()
		{
			return ((::BansheeGz::BGSpline::Curve::BGCurveChangedArgs_ChangeTypeEnum(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVECHANGEDARGS_GET_CHANGETYPE_OFFSET))(this);
		}

		::BansheeGz::BGSpline::Curve::BGCurve* get_Curve()
		{
			return ((::BansheeGz::BGSpline::Curve::BGCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVECHANGEDARGS_GET_CURVE_OFFSET))(this);
		}

		::System::String* get_Message()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVECHANGEDARGS_GET_MESSAGE_OFFSET))(this);
		}

		::Il2CppArray<::BansheeGz::BGSpline::Curve::BGCurveChangedArgs*>* get_MultipleChanges()
		{
			return ((::Il2CppArray<::BansheeGz::BGSpline::Curve::BGCurveChangedArgs*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVECHANGEDARGS_GET_MULTIPLECHANGES_OFFSET))(this);
		}

		static ::BansheeGz::BGSpline::Curve::BGCurveChangedArgs* GetInstance(::BansheeGz::BGSpline::Curve::BGCurve* a1, ::BansheeGz::BGSpline::Curve::BGCurveChangedArgs_ChangeTypeEnum a2, ::System::String* a3)
		{
			return ((::BansheeGz::BGSpline::Curve::BGCurveChangedArgs*(*)(::BansheeGz::BGSpline::Curve::BGCurve*, ::BansheeGz::BGSpline::Curve::BGCurveChangedArgs_ChangeTypeEnum, ::System::String*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVECHANGEDARGS_GETINSTANCE_OFFSET))(a1, a2, a3);
		}

		static ::BansheeGz::BGSpline::Curve::BGCurveChangedArgs* GetInstance_1(::BansheeGz::BGSpline::Curve::BGCurve* a1, ::Il2CppArray<::BansheeGz::BGSpline::Curve::BGCurveChangedArgs*>* a2, ::System::String* a3)
		{
			return ((::BansheeGz::BGSpline::Curve::BGCurveChangedArgs*(*)(::BansheeGz::BGSpline::Curve::BGCurve*, ::Il2CppArray<::BansheeGz::BGSpline::Curve::BGCurveChangedArgs*>*, ::System::String*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVECHANGEDARGS_GETINSTANCE_1_OFFSET))(a1, a2, a3);
		}

		static ::BansheeGz::BGSpline::Curve::BGCurveChangedArgs* GetInstance_2(::BansheeGz::BGSpline::Curve::BGCurve* a1, ::BansheeGz::BGSpline::Curve::BGCurvePointI* a2, ::System::String* a3)
		{
			return ((::BansheeGz::BGSpline::Curve::BGCurveChangedArgs*(*)(::BansheeGz::BGSpline::Curve::BGCurve*, ::BansheeGz::BGSpline::Curve::BGCurvePointI*, ::System::String*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVECHANGEDARGS_GETINSTANCE_2_OFFSET))(a1, a2, a3);
		}

		::System::Object* Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVECHANGEDARGS_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::BansheeGz::BGSpline::Curve::BGCurveChangedArgs* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurveChangedArgs*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVECHANGEDARGS_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVECHANGEDARGS_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVECHANGEDARGS_GETHASHCODE_OFFSET))(this);
		}
	};
}
