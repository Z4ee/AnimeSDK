#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Car;
class Lane;
namespace BansheeGz::BGSpline::Components { class BGCcMath; }
namespace BansheeGz::BGSpline::Curve { class BGCurve; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CARFLOWROAD_ADDCAR_OFFSET UNITYSDK_OFFSET(0x16B2CDF0)
#define CARFLOWROAD_GETCARLIMIT_OFFSET UNITYSDK_OFFSET(0x16B2CF60)
#define CARFLOWROAD_GET_CARS_OFFSET UNITYSDK_OFFSET(0x16B2CDB0)
#define CARFLOWROAD_GET_CURVE_OFFSET UNITYSDK_OFFSET(0x16B2CDD0)
#define CARFLOWROAD_GET_MATH_OFFSET UNITYSDK_OFFSET(0x16B2CD90)
#define CARFLOWROAD_INIT_OFFSET UNITYSDK_OFFSET(0x16B2D040)
#define CARFLOWROAD_REMOVECAR_OFFSET UNITYSDK_OFFSET(0x16B2CED0)
#define CARFLOWROAD_SET_CARS_OFFSET UNITYSDK_OFFSET(0x16B2CDC0)
#define CARFLOWROAD_SET_CURVE_OFFSET UNITYSDK_OFFSET(0x16B2CDE0)
#define CARFLOWROAD_SET_MATH_OFFSET UNITYSDK_OFFSET(0x16B2CDA0)
#define CARFLOWROAD__CTOR_OFFSET UNITYSDK_OFFSET(0x16B2D290)

inline static constexpr unsigned int CarFlowRoad_TypeDefinitionIndex = 45301;

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
