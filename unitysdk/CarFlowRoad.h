#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Car;
class Lane;
namespace BansheeGz::BGSpline::Components { class BGCcMath; }
namespace BansheeGz::BGSpline::Curve { class BGCurve; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CARFLOWROAD_ADDCAR_OFFSET UNITYSDK_OFFSET(0xACF88C0)
#define CARFLOWROAD_GETCARLIMIT_OFFSET UNITYSDK_OFFSET(0xACF8950)
#define CARFLOWROAD_GET_CARS_OFFSET UNITYSDK_OFFSET(0xACF8F90)
#define CARFLOWROAD_GET_CURVE_OFFSET UNITYSDK_OFFSET(0xACF8FB0)
#define CARFLOWROAD_GET_MATH_OFFSET UNITYSDK_OFFSET(0xACF8F70)
#define CARFLOWROAD_INIT_OFFSET UNITYSDK_OFFSET(0xACF5CB0)
#define CARFLOWROAD_REMOVECAR_OFFSET UNITYSDK_OFFSET(0xACF8830)
#define CARFLOWROAD_SET_CARS_OFFSET UNITYSDK_OFFSET(0xACF8FA0)
#define CARFLOWROAD_SET_CURVE_OFFSET UNITYSDK_OFFSET(0xACF8FC0)
#define CARFLOWROAD_SET_MATH_OFFSET UNITYSDK_OFFSET(0xACF8F80)
#define CARFLOWROAD__CTOR_OFFSET UNITYSDK_OFFSET(0xACF8FD0)

inline static constexpr unsigned int CarFlowRoad_TypeDefinitionIndex = 43885;

class CarFlowRoad : public ::UnityEngine::MonoBehaviour
{
public:
	::BansheeGz::BGSpline::Curve::BGCurve* RoadCurve; // 0x18
	::System::Collections::Generic::List_1<::Lane*>* Lanes; // 0x20
	::BansheeGz::BGSpline::Components::BGCcMath* Field_5_2; // 0x28
	::System::Collections::Generic::List_1<::Car*>* Field_5_3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CARFLOWROAD__CTOR_OFFSET))(this);
	}

	::BansheeGz::BGSpline::Components::BGCcMath* get_Math()
	{
		return ((::BansheeGz::BGSpline::Components::BGCcMath*(*)(::PVOID))((::PBYTE)hIl2Cpp + CARFLOWROAD_GET_MATH_OFFSET))(this);
	}

	::System::Void set_Math(::BansheeGz::BGSpline::Components::BGCcMath* a1)
	{
		return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Components::BGCcMath*))((::PBYTE)hIl2Cpp + CARFLOWROAD_SET_MATH_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Car*>* get_Cars()
	{
		return ((::System::Collections::Generic::List_1<::Car*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CARFLOWROAD_GET_CARS_OFFSET))(this);
	}

	::System::Void set_Cars(::System::Collections::Generic::List_1<::Car*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Car*>*))((::PBYTE)hIl2Cpp + CARFLOWROAD_SET_CARS_OFFSET))(this, a1);
	}

	::BansheeGz::BGSpline::Curve::BGCurve* get_Curve()
	{
		return ((::BansheeGz::BGSpline::Curve::BGCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + CARFLOWROAD_GET_CURVE_OFFSET))(this);
	}

	::System::Void set_Curve(::BansheeGz::BGSpline::Curve::BGCurve* a1)
	{
		return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurve*))((::PBYTE)hIl2Cpp + CARFLOWROAD_SET_CURVE_OFFSET))(this, a1);
	}

	::System::Void AddCar(::Car* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Car*))((::PBYTE)hIl2Cpp + CARFLOWROAD_ADDCAR_OFFSET))(this, a1);
	}

	::System::Void RemoveCar(::Car* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Car*))((::PBYTE)hIl2Cpp + CARFLOWROAD_REMOVECAR_OFFSET))(this, a1);
	}

	::System::Int32 GetCarLimit()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CARFLOWROAD_GETCARLIMIT_OFFSET))(this);
	}

	::System::Void Init()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CARFLOWROAD_INIT_OFFSET))(this);
	}
};
