#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FD893FD36F6A3A6D_1.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2SensorBeginTouchEvent.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2SensorEndTouchEvent.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2World; }

#define CLASS_1_0A167472E721BC6E_CLASS_2_4BD45C3CEB3BD881_METHOD_2_3D006C58601330A8_OFFSET UNITYSDK_OFFSET(0x15459760)
#define CLASS_1_0A167472E721BC6E_CLASS_2_4BD45C3CEB3BD881_METHOD_2_E692829DF13B01D3_OFFSET UNITYSDK_OFFSET(0x154592E0)
#define CLASS_1_0A167472E721BC6E_CLASS_2_4BD45C3CEB3BD881__CTOR_OFFSET UNITYSDK_OFFSET(0x15459A10)

inline static constexpr unsigned int Class_1_0A167472E721BC6E_Class_2_4BD45C3CEB3BD881_TypeDefinitionIndex = 35861;

class Class_1_0A167472E721BC6E_Class_2_4BD45C3CEB3BD881 : public ::Class_1_FD893FD36F6A3A6D_1
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A167472E721BC6E_CLASS_2_4BD45C3CEB3BD881__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_E692829DF13B01D3(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SensorBeginTouchEvent& a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SensorBeginTouchEvent&, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*))((::PBYTE)hIl2Cpp + CLASS_1_0A167472E721BC6E_CLASS_2_4BD45C3CEB3BD881_METHOD_2_E692829DF13B01D3_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_3D006C58601330A8(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SensorEndTouchEvent& a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SensorEndTouchEvent&, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*))((::PBYTE)hIl2Cpp + CLASS_1_0A167472E721BC6E_CLASS_2_4BD45C3CEB3BD881_METHOD_2_3D006C58601330A8_OFFSET))(this, a1, a2);
	}
};
