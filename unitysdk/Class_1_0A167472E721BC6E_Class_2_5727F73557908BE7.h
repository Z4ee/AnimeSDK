#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FD893FD36F6A3A6D.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ContactBeginTouchEvent.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ContactEndTouchEvent.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Manifold.h"
#include "unitysdk/RPG/MVector2.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2World; }

#define CLASS_1_0A167472E721BC6E_CLASS_2_5727F73557908BE7_METHOD_2_24714180D5E26D95_OFFSET UNITYSDK_OFFSET(0x15459090)
#define CLASS_1_0A167472E721BC6E_CLASS_2_5727F73557908BE7_METHOD_2_4510A41254A39DE3_OFFSET UNITYSDK_OFFSET(0x15459A20)
#define CLASS_1_0A167472E721BC6E_CLASS_2_5727F73557908BE7_METHOD_2_709CCF6162206ABF_OFFSET UNITYSDK_OFFSET(0x15459410)
#define CLASS_1_0A167472E721BC6E_CLASS_2_5727F73557908BE7_METHOD_2_74185C3B8A84ADF6_OFFSET UNITYSDK_OFFSET(0x15459B80)
#define CLASS_1_0A167472E721BC6E_CLASS_2_5727F73557908BE7_METHOD_2_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x15459E60)
#define CLASS_1_0A167472E721BC6E_CLASS_2_5727F73557908BE7_METHOD_2_FB7B32981F9D3633_OFFSET UNITYSDK_OFFSET(0x15459EB0)
#define CLASS_1_0A167472E721BC6E_CLASS_2_5727F73557908BE7__CTOR_OFFSET UNITYSDK_OFFSET(0x15459A00)

inline static constexpr unsigned int Class_1_0A167472E721BC6E_Class_2_5727F73557908BE7_TypeDefinitionIndex = 35860;

class Class_1_0A167472E721BC6E_Class_2_5727F73557908BE7 : public ::Class_1_FD893FD36F6A3A6D
{
public:
	::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Manifold MGJCFIPECOP; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A167472E721BC6E_CLASS_2_5727F73557908BE7__CTOR_OFFSET))(this);
	}

	::RPG::MVector2 Method_2_4510A41254A39DE3(::System::Int32 a1)
	{
		return ((::RPG::MVector2(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0A167472E721BC6E_CLASS_2_5727F73557908BE7_METHOD_2_4510A41254A39DE3_OFFSET))(this, a1);
	}

	::System::Single Method_2_74185C3B8A84ADF6()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A167472E721BC6E_CLASS_2_5727F73557908BE7_METHOD_2_74185C3B8A84ADF6_OFFSET))(this);
	}

	::System::Boolean Method_2_24714180D5E26D95(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ContactBeginTouchEvent& a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ContactBeginTouchEvent&, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*))((::PBYTE)hIl2Cpp + CLASS_1_0A167472E721BC6E_CLASS_2_5727F73557908BE7_METHOD_2_24714180D5E26D95_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_709CCF6162206ABF(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ContactEndTouchEvent& a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ContactEndTouchEvent&, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*))((::PBYTE)hIl2Cpp + CLASS_1_0A167472E721BC6E_CLASS_2_5727F73557908BE7_METHOD_2_709CCF6162206ABF_OFFSET))(this, a1, a2);
	}

	::RPG::MVector2 Method_2_FB7B32981F9D3633()
	{
		return ((::RPG::MVector2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A167472E721BC6E_CLASS_2_5727F73557908BE7_METHOD_2_FB7B32981F9D3633_OFFSET))(this);
	}

	::System::Int32 Method_2_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A167472E721BC6E_CLASS_2_5727F73557908BE7_METHOD_2_A1D8CD775DEC3C21_OFFSET))(this);
	}
};
