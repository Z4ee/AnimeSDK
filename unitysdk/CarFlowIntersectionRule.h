#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Car;
class CarFlowIntersection;
class CarFlowLanePort;
namespace BansheeGz::BGSpline::Components { class BGCcMath; }
namespace BansheeGz::BGSpline::Curve { class BGCurve; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CARFLOWINTERSECTIONRULE_ADDCAR_OFFSET UNITYSDK_OFFSET(0xC7387E0)
#define CARFLOWINTERSECTIONRULE_GETCARLIMIT_OFFSET UNITYSDK_OFFSET(0xC738950)
#define CARFLOWINTERSECTIONRULE_GET_CARS_OFFSET UNITYSDK_OFFSET(0xC7387A0)
#define CARFLOWINTERSECTIONRULE_GET_CURVE_OFFSET UNITYSDK_OFFSET(0xC7387C0)
#define CARFLOWINTERSECTIONRULE_GET_MATH_OFFSET UNITYSDK_OFFSET(0xC738780)
#define CARFLOWINTERSECTIONRULE_REMOVECAR_OFFSET UNITYSDK_OFFSET(0xC7388C0)
#define CARFLOWINTERSECTIONRULE_SET_CARS_OFFSET UNITYSDK_OFFSET(0xC7387B0)
#define CARFLOWINTERSECTIONRULE_SET_CURVE_OFFSET UNITYSDK_OFFSET(0xC7387D0)
#define CARFLOWINTERSECTIONRULE_SET_MATH_OFFSET UNITYSDK_OFFSET(0xC738790)
#define CARFLOWINTERSECTIONRULE__CTOR_OFFSET UNITYSDK_OFFSET(0xC738A80)

inline static constexpr unsigned int CarFlowIntersectionRule_TypeDefinitionIndex = 44422;

class CarFlowIntersectionRule : public ::System::Object
{
public:
	::BansheeGz::BGSpline::Curve::BGCurve* IntersectionCurve; // 0x10
	::BansheeGz::BGSpline::Components::BGCcMath* CurveMath; // 0x18
	::CarFlowLanePort* InPort; // 0x20
	::CarFlowLanePort* OutPort; // 0x28
	::System::Boolean IgnoreTrafficRules; // 0x30
	::System::Single Weight; // 0x34
	::System::Boolean Active; // 0x38
	::System::Boolean Warning; // 0x39
	::CarFlowIntersection* OwnerIntersection; // 0x40
	::System::Collections::Generic::List_1<::Car*>* RunningCars; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CARFLOWINTERSECTIONRULE__CTOR_OFFSET))(this);
	}

	::BansheeGz::BGSpline::Components::BGCcMath* get_Math()
	{
		return ((::BansheeGz::BGSpline::Components::BGCcMath*(*)(::PVOID))((::PBYTE)hIl2Cpp + CARFLOWINTERSECTIONRULE_GET_MATH_OFFSET))(this);
	}

	::System::Void set_Math(::BansheeGz::BGSpline::Components::BGCcMath* a1)
	{
		return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Components::BGCcMath*))((::PBYTE)hIl2Cpp + CARFLOWINTERSECTIONRULE_SET_MATH_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Car*>* get_Cars()
	{
		return ((::System::Collections::Generic::List_1<::Car*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CARFLOWINTERSECTIONRULE_GET_CARS_OFFSET))(this);
	}

	::System::Void set_Cars(::System::Collections::Generic::List_1<::Car*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Car*>*))((::PBYTE)hIl2Cpp + CARFLOWINTERSECTIONRULE_SET_CARS_OFFSET))(this, a1);
	}

	::BansheeGz::BGSpline::Curve::BGCurve* get_Curve()
	{
		return ((::BansheeGz::BGSpline::Curve::BGCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + CARFLOWINTERSECTIONRULE_GET_CURVE_OFFSET))(this);
	}

	::System::Void set_Curve(::BansheeGz::BGSpline::Curve::BGCurve* a1)
	{
		return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurve*))((::PBYTE)hIl2Cpp + CARFLOWINTERSECTIONRULE_SET_CURVE_OFFSET))(this, a1);
	}

	::System::Void AddCar(::Car* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Car*))((::PBYTE)hIl2Cpp + CARFLOWINTERSECTIONRULE_ADDCAR_OFFSET))(this, a1);
	}

	::System::Void RemoveCar(::Car* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Car*))((::PBYTE)hIl2Cpp + CARFLOWINTERSECTIONRULE_REMOVECAR_OFFSET))(this, a1);
	}

	::System::Int32 GetCarLimit()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CARFLOWINTERSECTIONRULE_GETCARLIMIT_OFFSET))(this);
	}
};
