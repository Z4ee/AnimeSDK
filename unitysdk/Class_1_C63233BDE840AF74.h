#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TrackCameraOverrideWayPointType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_AD7DDABF71A10F42_2;
namespace BansheeGz::BGSpline::Components { class BGCcMath; }
namespace RPG::GameCore { class LevelCurveInstance; }

#define CLASS_1_C63233BDE840AF74_CLEAR_OFFSET UNITYSDK_OFFSET(0xBDA7CE0)
#define CLASS_1_C63233BDE840AF74_METHOD_1_04AE334A094172CE_OFFSET UNITYSDK_OFFSET(0xBDA81E0)
#define CLASS_1_C63233BDE840AF74_METHOD_1_18F294C5182B1AE0_OFFSET UNITYSDK_OFFSET(0xBDA8410)
#define CLASS_1_C63233BDE840AF74_METHOD_1_2601E276E572C540_OFFSET UNITYSDK_OFFSET(0xBDA7C50)
#define CLASS_1_C63233BDE840AF74_METHOD_1_80055F2F71D481F4_OFFSET UNITYSDK_OFFSET(0xBDA88E0)
#define CLASS_1_C63233BDE840AF74_METHOD_1_C84CCF03778FD9E5_OFFSET UNITYSDK_OFFSET(0xBDA8E70)
#define CLASS_1_C63233BDE840AF74_METHOD_1_CBDBDE12AB1E6A48_OFFSET UNITYSDK_OFFSET(0xBDA8740)
#define CLASS_1_C63233BDE840AF74_METHOD_1_D74BCDEED2B87956_OFFSET UNITYSDK_OFFSET(0xBDA8CB0)
#define CLASS_1_C63233BDE840AF74_METHOD_1_DE52BD42C4B0B772_1_OFFSET UNITYSDK_OFFSET(0xBDA8200)
#define CLASS_1_C63233BDE840AF74_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0xBDA7FD0)
#define CLASS_1_C63233BDE840AF74_METHOD_1_E5AD85004633A8EB_OFFSET UNITYSDK_OFFSET(0xBDA7DB0)
#define CLASS_1_C63233BDE840AF74__CTOR_OFFSET UNITYSDK_OFFSET(0xBDA9160)

inline static constexpr unsigned int Class_1_C63233BDE840AF74_TypeDefinitionIndex = 69619;

class Class_1_C63233BDE840AF74 : public ::System::Object
{
public:
	::Class_2_AD7DDABF71A10F42_2* GGDMEDCNELI; // 0x10
	::RPG::GameCore::LevelCurveInstance* OGNOFLGLAHM; // 0x18
	::System::Single LOBALJEAOPJ; // 0x20
	::System::Int32 FCHELGCIIOB; // 0x24
	::UnityEngine::Vector3 BKKLBFEGAKO; // 0x28
	::UnityEngine::Vector3 BCKLGIDNGPB; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C63233BDE840AF74__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_2601E276E572C540(::System::UInt32 a1, ::System::UInt32 a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C63233BDE840AF74_METHOD_1_2601E276E572C540_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C63233BDE840AF74_CLEAR_OFFSET))(this);
	}

	::System::Single Method_1_E5AD85004633A8EB(::System::Boolean& a1, ::System::Boolean& a2, ::System::Boolean a3)
	{
		return ((::System::Single(*)(::PVOID, ::System::Boolean&, ::System::Boolean&, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C63233BDE840AF74_METHOD_1_E5AD85004633A8EB_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Vector3 Method_1_18F294C5182B1AE0(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C63233BDE840AF74_METHOD_1_18F294C5182B1AE0_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_CBDBDE12AB1E6A48(::System::Int32 a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C63233BDE840AF74_METHOD_1_CBDBDE12AB1E6A48_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_80055F2F71D481F4(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_C63233BDE840AF74_METHOD_1_80055F2F71D481F4_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_D74BCDEED2B87956(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_C63233BDE840AF74_METHOD_1_D74BCDEED2B87956_OFFSET))(this, a1);
	}

	::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C63233BDE840AF74_METHOD_1_DE52BD42C4B0B772_OFFSET))(this);
	}

	::System::Void Method_1_DE52BD42C4B0B772_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C63233BDE840AF74_METHOD_1_DE52BD42C4B0B772_1_OFFSET))(this);
	}

	::System::Void Method_1_C84CCF03778FD9E5(::RPG::Client::TrackCameraOverrideWayPointType a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TrackCameraOverrideWayPointType, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_C63233BDE840AF74_METHOD_1_C84CCF03778FD9E5_OFFSET))(this, a1, a2);
	}

	::BansheeGz::BGSpline::Components::BGCcMath* Method_1_04AE334A094172CE()
	{
		return ((::BansheeGz::BGSpline::Components::BGCcMath*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C63233BDE840AF74_METHOD_1_04AE334A094172CE_OFFSET))(this);
	}
};
