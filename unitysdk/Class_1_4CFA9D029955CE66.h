#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ShapeId.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Vec2.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/Struct_2_74525F1A3B6647FC.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_27;
class Class_0_16E4307DCC419505_29;
class Class_0_16E4307DCC419505_30;
class Class_1_9B3DA0461DA15F70;
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2World; }

#define CLASS_1_4CFA9D029955CE66_GET_CONTACTLISTENER_OFFSET UNITYSDK_OFFSET(0x1C237880)
#define CLASS_1_4CFA9D029955CE66_GET_WORLD_OFFSET UNITYSDK_OFFSET(0x1C237860)
#define CLASS_1_4CFA9D029955CE66_METHOD_1_09E373608DD83721_OFFSET UNITYSDK_OFFSET(0x1C2371C0)
#define CLASS_1_4CFA9D029955CE66_METHOD_1_35CEA807166152E4_OFFSET UNITYSDK_OFFSET(0x1C236580)
#define CLASS_1_4CFA9D029955CE66_METHOD_1_5B8F3FB3543E70FC_OFFSET UNITYSDK_OFFSET(0x1C2378A0)
#define CLASS_1_4CFA9D029955CE66_METHOD_1_84638F4B4A94771E_OFFSET UNITYSDK_OFFSET(0x1C236920)
#define CLASS_1_4CFA9D029955CE66_METHOD_1_94C7F832314C1308_OFFSET UNITYSDK_OFFSET(0x1C237900)
#define CLASS_1_4CFA9D029955CE66_METHOD_1_A0374C870A27A45B_OFFSET UNITYSDK_OFFSET(0x1C236830)
#define CLASS_1_4CFA9D029955CE66_METHOD_1_A5F12DCC7C4FF06B_OFFSET UNITYSDK_OFFSET(0x1C2376C0)
#define CLASS_1_4CFA9D029955CE66_METHOD_1_A6BD50BA4A9BE23B_OFFSET UNITYSDK_OFFSET(0x1C2374B0)
#define CLASS_1_4CFA9D029955CE66_METHOD_1_AA72C26C65126892_OFFSET UNITYSDK_OFFSET(0x1C236AF0)
#define CLASS_1_4CFA9D029955CE66_METHOD_1_C50B93169B85DAEA_OFFSET UNITYSDK_OFFSET(0x1C237460)
#define CLASS_1_4CFA9D029955CE66_METHOD_1_DB001DA64B766E2A_OFFSET UNITYSDK_OFFSET(0x1C236C40)
#define CLASS_1_4CFA9D029955CE66_SET_CONTACTLISTENER_OFFSET UNITYSDK_OFFSET(0x1C237890)
#define CLASS_1_4CFA9D029955CE66_SET_WORLD_OFFSET UNITYSDK_OFFSET(0x1C237870)
#define CLASS_1_4CFA9D029955CE66__CTOR_OFFSET UNITYSDK_OFFSET(0x1C236570)

inline static constexpr unsigned int Class_1_4CFA9D029955CE66_TypeDefinitionIndex = 35865;

class Class_1_4CFA9D029955CE66 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_29* _ContactListener_k__BackingField; // 0x10
	::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* _World_k__BackingField; // 0x18
	::System::Int32 KLMMFOCMIDI; // 0x20

	::System::Void _ctor(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*))((::PBYTE)hIl2Cpp + CLASS_1_4CFA9D029955CE66__CTOR_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_27* Method_1_35CEA807166152E4(::Class_1_9B3DA0461DA15F70* a1)
	{
		return ((::Class_0_16E4307DCC419505_27*(*)(::PVOID, ::Class_1_9B3DA0461DA15F70*))((::PBYTE)hIl2Cpp + CLASS_1_4CFA9D029955CE66_METHOD_1_35CEA807166152E4_OFFSET))(this, a1);
	}

	::System::Void Method_1_A0374C870A27A45B(::Class_0_16E4307DCC419505_27* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_27*))((::PBYTE)hIl2Cpp + CLASS_1_4CFA9D029955CE66_METHOD_1_A0374C870A27A45B_OFFSET))(this, a1);
	}

	::System::Void Method_1_84638F4B4A94771E(::RPG::MVector2 a1, ::RPG::MVector2 a2, ::Struct_2_74525F1A3B6647FC& a3, ::System::UInt64 a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::MVector2, ::RPG::MVector2, ::Struct_2_74525F1A3B6647FC&, ::System::UInt64, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4CFA9D029955CE66_METHOD_1_84638F4B4A94771E_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Int32 Method_1_AA72C26C65126892(::RPG::MVector2 a1, ::RPG::MVector2 a2, ::Il2CppArray<::Struct_2_74525F1A3B6647FC>* a3, ::System::UInt64 a4)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::MVector2, ::RPG::MVector2, ::Il2CppArray<::Struct_2_74525F1A3B6647FC>*, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_4CFA9D029955CE66_METHOD_1_AA72C26C65126892_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Int32 Method_1_DB001DA64B766E2A(::RPG::MVector2 a1, ::System::Single a2, ::System::Single a3, ::RPG::MVector2 a4, ::Il2CppArray<::Class_0_16E4307DCC419505_30*>* a5, ::System::UInt64 a6)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::MVector2, ::System::Single, ::System::Single, ::RPG::MVector2, ::Il2CppArray<::Class_0_16E4307DCC419505_30*>*, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_4CFA9D029955CE66_METHOD_1_DB001DA64B766E2A_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Int32 Method_1_09E373608DD83721(::Class_0_16E4307DCC419505_30* a1, ::RPG::MVector2 a2, ::Il2CppArray<::Struct_2_74525F1A3B6647FC>* a3, ::System::UInt64 a4)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_0_16E4307DCC419505_30*, ::RPG::MVector2, ::Il2CppArray<::Struct_2_74525F1A3B6647FC>*, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_4CFA9D029955CE66_METHOD_1_09E373608DD83721_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_C50B93169B85DAEA(::Class_0_16E4307DCC419505_29* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_29*))((::PBYTE)hIl2Cpp + CLASS_1_4CFA9D029955CE66_METHOD_1_C50B93169B85DAEA_OFFSET))(this, a1);
	}

	::System::Single Method_1_A6BD50BA4A9BE23B(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a3, ::System::Single a4, ::System::Object* a5)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2, ::System::Single, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4CFA9D029955CE66_METHOD_1_A6BD50BA4A9BE23B_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_1_A5F12DCC7C4FF06B(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId a1, ::System::Object* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4CFA9D029955CE66_METHOD_1_A5F12DCC7C4FF06B_OFFSET))(this, a1, a2);
	}

	::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* get_World()
	{
		return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CFA9D029955CE66_GET_WORLD_OFFSET))(this);
	}

	::System::Void set_World(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*))((::PBYTE)hIl2Cpp + CLASS_1_4CFA9D029955CE66_SET_WORLD_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_29* get_ContactListener()
	{
		return ((::Class_0_16E4307DCC419505_29*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CFA9D029955CE66_GET_CONTACTLISTENER_OFFSET))(this);
	}

	::System::Void set_ContactListener(::Class_0_16E4307DCC419505_29* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_29*))((::PBYTE)hIl2Cpp + CLASS_1_4CFA9D029955CE66_SET_CONTACTLISTENER_OFFSET))(this, a1);
	}

	::RPG::MVector2 Method_1_5B8F3FB3543E70FC()
	{
		return ((::RPG::MVector2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CFA9D029955CE66_METHOD_1_5B8F3FB3543E70FC_OFFSET))(this);
	}

	::System::Void Method_1_94C7F832314C1308(::RPG::MVector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::MVector2))((::PBYTE)hIl2Cpp + CLASS_1_4CFA9D029955CE66_METHOD_1_94C7F832314C1308_OFFSET))(this, a1);
	}
};
