#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TrackCameraOverrideWayPointType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_AD7DDABF71A10F42_2;
namespace BansheeGz::BGSpline::Components { class BGCcMath; }
namespace RPG::GameCore { class LevelCurveInstance; }

#define CLASS_1_4C0469F4D6589193_CLEAR_OFFSET UNITYSDK_OFFSET(0xA4613F0)
#define CLASS_1_4C0469F4D6589193_METHOD_1_04AE334A094172CE_OFFSET UNITYSDK_OFFSET(0xA461930)
#define CLASS_1_4C0469F4D6589193_METHOD_1_151A47AE32DACFF7_OFFSET UNITYSDK_OFFSET(0xA4614B0)
#define CLASS_1_4C0469F4D6589193_METHOD_1_18F294C5182B1AE0_OFFSET UNITYSDK_OFFSET(0xA461B20)
#define CLASS_1_4C0469F4D6589193_METHOD_1_2601E276E572C540_OFFSET UNITYSDK_OFFSET(0xA461360)
#define CLASS_1_4C0469F4D6589193_METHOD_1_BDA35C2D78ED0BB0_OFFSET UNITYSDK_OFFSET(0xA462070)
#define CLASS_1_4C0469F4D6589193_METHOD_1_C84CCF03778FD9E5_OFFSET UNITYSDK_OFFSET(0xA462730)
#define CLASS_1_4C0469F4D6589193_METHOD_1_CF811623AC0D51BD_OFFSET UNITYSDK_OFFSET(0xA461E00)
#define CLASS_1_4C0469F4D6589193_METHOD_1_D74BCDEED2B87956_OFFSET UNITYSDK_OFFSET(0xA462570)
#define CLASS_1_4C0469F4D6589193_METHOD_1_DE52BD42C4B0B772_1_OFFSET UNITYSDK_OFFSET(0xA461950)
#define CLASS_1_4C0469F4D6589193_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0xA461760)
#define CLASS_1_4C0469F4D6589193__CTOR_OFFSET UNITYSDK_OFFSET(0xA4629D0)

inline static constexpr unsigned int Class_1_4C0469F4D6589193_TypeDefinitionIndex = 56951;

class Class_1_4C0469F4D6589193 : public ::System::Object
{
public:
	::RPG::GameCore::LevelCurveInstance* Field_1_0; // 0x10
	::Class_2_AD7DDABF71A10F42_2* Field_1_5; // 0x18
	::UnityEngine::Vector3 Field_1_3; // 0x20
	::System::Int32 Field_1_1; // 0x2C
	::UnityEngine::Vector3 Field_1_4; // 0x30
	::System::Single Field_1_2; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C0469F4D6589193__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_2601E276E572C540(::System::UInt32 a1, ::System::UInt32 a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_4C0469F4D6589193_METHOD_1_2601E276E572C540_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C0469F4D6589193_CLEAR_OFFSET))(this);
	}

	::System::Single Method_1_151A47AE32DACFF7(::System::Boolean& a1, ::System::Boolean& a2, ::System::Boolean a3)
	{
		return ((::System::Single(*)(::PVOID, ::System::Boolean&, ::System::Boolean&, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4C0469F4D6589193_METHOD_1_151A47AE32DACFF7_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Vector3 Method_1_18F294C5182B1AE0(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4C0469F4D6589193_METHOD_1_18F294C5182B1AE0_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_CF811623AC0D51BD(::System::Int32 a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4C0469F4D6589193_METHOD_1_CF811623AC0D51BD_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_BDA35C2D78ED0BB0(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_4C0469F4D6589193_METHOD_1_BDA35C2D78ED0BB0_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_D74BCDEED2B87956(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_4C0469F4D6589193_METHOD_1_D74BCDEED2B87956_OFFSET))(this, a1);
	}

	::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C0469F4D6589193_METHOD_1_DE52BD42C4B0B772_OFFSET))(this);
	}

	::System::Void Method_1_DE52BD42C4B0B772_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C0469F4D6589193_METHOD_1_DE52BD42C4B0B772_1_OFFSET))(this);
	}

	::System::Void Method_1_C84CCF03778FD9E5(::RPG::Client::TrackCameraOverrideWayPointType a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TrackCameraOverrideWayPointType, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_4C0469F4D6589193_METHOD_1_C84CCF03778FD9E5_OFFSET))(this, a1, a2);
	}

	::BansheeGz::BGSpline::Components::BGCcMath* Method_1_04AE334A094172CE()
	{
		return ((::BansheeGz::BGSpline::Components::BGCcMath*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C0469F4D6589193_METHOD_1_04AE334A094172CE_OFFSET))(this);
	}
};
