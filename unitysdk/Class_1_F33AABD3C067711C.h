#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PhysicsRigidBodyType.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2BodyId.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ShapeDef.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/Struct_2_3437ECE1CCDFA38D.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_28;
class Class_0_16E4307DCC419505_30;
class Class_1_4CFA9D029955CE66;
namespace RPG::LittleGameShare::HoyoPhysics { class PhysicsCollider2DConfig; }
namespace RPG::LittleGameShare::HoyoPhysics { class PhysicsCollider2DFilterConfig; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F33AABD3C067711C_GET_BODYID_OFFSET UNITYSDK_OFFSET(0x198E6FE0)
#define CLASS_1_F33AABD3C067711C_GET_OWNERWORLD_OFFSET UNITYSDK_OFFSET(0x198E7010)
#define CLASS_1_F33AABD3C067711C_GET_USERDATA_OFFSET UNITYSDK_OFFSET(0x198E7940)
#define CLASS_1_F33AABD3C067711C_METHOD_1_0608E01D4DD006F1_OFFSET UNITYSDK_OFFSET(0x198E9F90)
#define CLASS_1_F33AABD3C067711C_METHOD_1_112303E9A8651F72_OFFSET UNITYSDK_OFFSET(0x198E8080)
#define CLASS_1_F33AABD3C067711C_METHOD_1_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0x198E97F0)
#define CLASS_1_F33AABD3C067711C_METHOD_1_27D584710DA10578_OFFSET UNITYSDK_OFFSET(0x198E91A0)
#define CLASS_1_F33AABD3C067711C_METHOD_1_2A9A146A20FBE18A_OFFSET UNITYSDK_OFFSET(0x198E7CD0)
#define CLASS_1_F33AABD3C067711C_METHOD_1_2BE05C4C42BE6CD6_OFFSET UNITYSDK_OFFSET(0x198E7350)
#define CLASS_1_F33AABD3C067711C_METHOD_1_3422201382CE593B_OFFSET UNITYSDK_OFFSET(0x198E7470)
#define CLASS_1_F33AABD3C067711C_METHOD_1_374139978EA55AC1_OFFSET UNITYSDK_OFFSET(0x198E7E00)
#define CLASS_1_F33AABD3C067711C_METHOD_1_3C6DBDE6395906E2_OFFSET UNITYSDK_OFFSET(0x198E86B0)
#define CLASS_1_F33AABD3C067711C_METHOD_1_479759059E440327_1_OFFSET UNITYSDK_OFFSET(0x198E99D0)
#define CLASS_1_F33AABD3C067711C_METHOD_1_479759059E440327_OFFSET UNITYSDK_OFFSET(0x198E7880)
#define CLASS_1_F33AABD3C067711C_METHOD_1_5C00C2EE4FCF347E_OFFSET UNITYSDK_OFFSET(0x198EA2A0)
#define CLASS_1_F33AABD3C067711C_METHOD_1_6A78160405356F2C_1_OFFSET UNITYSDK_OFFSET(0x198E7410)
#define CLASS_1_F33AABD3C067711C_METHOD_1_6A78160405356F2C_OFFSET UNITYSDK_OFFSET(0x198E70E0)
#define CLASS_1_F33AABD3C067711C_METHOD_1_94F018F9ECD484F7_OFFSET UNITYSDK_OFFSET(0x198E8C30)
#define CLASS_1_F33AABD3C067711C_METHOD_1_9753F3012C1D596B_OFFSET UNITYSDK_OFFSET(0x198E8530)
#define CLASS_1_F33AABD3C067711C_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x198E9710)
#define CLASS_1_F33AABD3C067711C_METHOD_1_BA904CAFF6C7217F_OFFSET UNITYSDK_OFFSET(0x198E98B0)
#define CLASS_1_F33AABD3C067711C_METHOD_1_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0x198E77D0)
#define CLASS_1_F33AABD3C067711C_METHOD_1_D7924FE52B50B418_OFFSET UNITYSDK_OFFSET(0x198E7570)
#define CLASS_1_F33AABD3C067711C_METHOD_1_DC518C0507DB9345_1_OFFSET UNITYSDK_OFFSET(0x198E72A0)
#define CLASS_1_F33AABD3C067711C_METHOD_1_DC518C0507DB9345_2_OFFSET UNITYSDK_OFFSET(0x198E7660)
#define CLASS_1_F33AABD3C067711C_METHOD_1_DC518C0507DB9345_OFFSET UNITYSDK_OFFSET(0x198E7030)
#define CLASS_1_F33AABD3C067711C_METHOD_1_E260C3E600964F66_OFFSET UNITYSDK_OFFSET(0x198E6D60)
#define CLASS_1_F33AABD3C067711C_METHOD_1_E52C357E96F7A058_OFFSET UNITYSDK_OFFSET(0x198E9650)
#define CLASS_1_F33AABD3C067711C_METHOD_1_EB3B5E5EB8F8E567_OFFSET UNITYSDK_OFFSET(0x198E8CD0)
#define CLASS_1_F33AABD3C067711C_METHOD_1_ECFC288813B49631_1_OFFSET UNITYSDK_OFFSET(0x198E85F0)
#define CLASS_1_F33AABD3C067711C_METHOD_1_ECFC288813B49631_OFFSET UNITYSDK_OFFSET(0x198E7710)
#define CLASS_1_F33AABD3C067711C_METHOD_1_EDACF3D84F32DDEF_OFFSET UNITYSDK_OFFSET(0x198E7BA0)
#define CLASS_1_F33AABD3C067711C_METHOD_1_F4D77AB700A9EDDE_OFFSET UNITYSDK_OFFSET(0x198E9C20)
#define CLASS_1_F33AABD3C067711C_METHOD_1_FC545203151D288E_OFFSET UNITYSDK_OFFSET(0x198E7960)
#define CLASS_1_F33AABD3C067711C_METHOD_1_FE1A1A30B3CE9C46_OFFSET UNITYSDK_OFFSET(0x198E82D0)
#define CLASS_1_F33AABD3C067711C_SET_BODYID_OFFSET UNITYSDK_OFFSET(0x198E7000)
#define CLASS_1_F33AABD3C067711C_SET_OWNERWORLD_OFFSET UNITYSDK_OFFSET(0x198E7020)
#define CLASS_1_F33AABD3C067711C_SET_USERDATA_OFFSET UNITYSDK_OFFSET(0x198E7950)
#define CLASS_1_F33AABD3C067711C__CTOR_OFFSET UNITYSDK_OFFSET(0x198E6D50)

inline static constexpr unsigned int Class_1_F33AABD3C067711C_TypeDefinitionIndex = 35001;

class Class_1_F33AABD3C067711C : public ::System::Object
{
public:
	::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId _BodyId_k__BackingField; // 0x10
	::Class_1_4CFA9D029955CE66* _OwnerWorld_k__BackingField; // 0x28
	::System::Object* _UserData_k__BackingField; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F33AABD3C067711C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E260C3E600964F66(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId a1, ::Class_1_4CFA9D029955CE66* a2, ::System::Object* a3, ::RPG::GameCore::PhysicsRigidBodyType a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId, ::Class_1_4CFA9D029955CE66*, ::System::Object*, ::RPG::GameCore::PhysicsRigidBodyType))((::PBYTE)hIl2Cpp + CLASS_1_F33AABD3C067711C_METHOD_1_E260C3E600964F66_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId get_BodyId()
	{
		return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F33AABD3C067711C_GET_BODYID_OFFSET))(this);
	}

	::System::Void set_BodyId(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId))((::PBYTE)hIl2Cpp + CLASS_1_F33AABD3C067711C_SET_BODYID_OFFSET))(this, a1);
	}

	::Class_1_4CFA9D029955CE66* get_OwnerWorld()
	{
		return ((::Class_1_4CFA9D029955CE66*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F33AABD3C067711C_GET_OWNERWORLD_OFFSET))(this);
	}

	::System::Void set_OwnerWorld(::Class_1_4CFA9D029955CE66* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4CFA9D029955CE66*))((::PBYTE)hIl2Cpp + CLASS_1_F33AABD3C067711C_SET_OWNERWORLD_OFFSET))(this, a1);
	}

	::RPG::MVector2 Method_1_DC518C0507DB9345()
	{
		return ((::RPG::MVector2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F33AABD3C067711C_METHOD_1_DC518C0507DB9345_OFFSET))(this);
	}

	::System::Void Method_1_6A78160405356F2C(::RPG::MVector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::MVector2))((::PBYTE)hIl2Cpp + CLASS_1_F33AABD3C067711C_METHOD_1_6A78160405356F2C_OFFSET))(this, a1);
	}

	::RPG::MVector2 Method_1_DC518C0507DB9345_1()
	{
		return ((::RPG::MVector2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F33AABD3C067711C_METHOD_1_DC518C0507DB9345_1_OFFSET))(this);
	}

	::System::Void Method_1_6A78160405356F2C_1(::RPG::MVector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::MVector2))((::PBYTE)hIl2Cpp + CLASS_1_F33AABD3C067711C_METHOD_1_6A78160405356F2C_1_OFFSET))(this, a1);
	}

	::System::Single Method_1_3422201382CE593B()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F33AABD3C067711C_METHOD_1_3422201382CE593B_OFFSET))(this);
	}

	::System::Void Method_1_D7924FE52B50B418(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F33AABD3C067711C_METHOD_1_D7924FE52B50B418_OFFSET))(this, a1);
	}

	::RPG::MVector2 Method_1_DC518C0507DB9345_2()
	{
		return ((::RPG::MVector2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F33AABD3C067711C_METHOD_1_DC518C0507DB9345_2_OFFSET))(this);
	}

	::System::Void Method_1_ECFC288813B49631(::RPG::MVector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::MVector2))((::PBYTE)hIl2Cpp + CLASS_1_F33AABD3C067711C_METHOD_1_ECFC288813B49631_OFFSET))(this, a1);
	}

	::System::Single Method_1_D64FD9A228A1C4E0()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F33AABD3C067711C_METHOD_1_D64FD9A228A1C4E0_OFFSET))(this);
	}

	::System::Void Method_1_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F33AABD3C067711C_METHOD_1_479759059E440327_OFFSET))(this, a1);
	}

	::System::Object* get_UserData()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F33AABD3C067711C_GET_USERDATA_OFFSET))(this);
	}

	::System::Void set_UserData(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_F33AABD3C067711C_SET_USERDATA_OFFSET))(this, a1);
	}

	::Struct_2_3437ECE1CCDFA38D Method_1_FC545203151D288E()
	{
		return ((::Struct_2_3437ECE1CCDFA38D(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F33AABD3C067711C_METHOD_1_FC545203151D288E_OFFSET))(this);
	}

	::System::Single Method_1_EDACF3D84F32DDEF()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F33AABD3C067711C_METHOD_1_EDACF3D84F32DDEF_OFFSET))(this);
	}

	::RPG::GameCore::PhysicsRigidBodyType Method_1_2A9A146A20FBE18A()
	{
		return ((::RPG::GameCore::PhysicsRigidBodyType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F33AABD3C067711C_METHOD_1_2A9A146A20FBE18A_OFFSET))(this);
	}

	::System::Void Method_1_374139978EA55AC1(::RPG::MVector2 a1, ::RPG::MVector2 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::MVector2, ::RPG::MVector2, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F33AABD3C067711C_METHOD_1_374139978EA55AC1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_112303E9A8651F72(::RPG::MVector2 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::MVector2, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F33AABD3C067711C_METHOD_1_112303E9A8651F72_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_FE1A1A30B3CE9C46(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F33AABD3C067711C_METHOD_1_FE1A1A30B3CE9C46_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9753F3012C1D596B(::RPG::GameCore::PhysicsRigidBodyType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PhysicsRigidBodyType))((::PBYTE)hIl2Cpp + CLASS_1_F33AABD3C067711C_METHOD_1_9753F3012C1D596B_OFFSET))(this, a1);
	}

	::System::Void Method_1_ECFC288813B49631_1(::RPG::MVector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::MVector2))((::PBYTE)hIl2Cpp + CLASS_1_F33AABD3C067711C_METHOD_1_ECFC288813B49631_1_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_30* Method_1_3C6DBDE6395906E2(::RPG::LittleGameShare::HoyoPhysics::PhysicsCollider2DConfig* a1, ::System::Single a2, ::System::Single a3, ::RPG::MVector2 a4, ::RPG::MVector2 a5, ::System::Object* a6, ::RPG::LittleGameShare::HoyoPhysics::PhysicsCollider2DFilterConfig* a7)
	{
		return ((::Class_0_16E4307DCC419505_30*(*)(::PVOID, ::RPG::LittleGameShare::HoyoPhysics::PhysicsCollider2DConfig*, ::System::Single, ::System::Single, ::RPG::MVector2, ::RPG::MVector2, ::System::Object*, ::RPG::LittleGameShare::HoyoPhysics::PhysicsCollider2DFilterConfig*))((::PBYTE)hIl2Cpp + CLASS_1_F33AABD3C067711C_METHOD_1_3C6DBDE6395906E2_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::Class_0_16E4307DCC419505_30* Method_1_EB3B5E5EB8F8E567(::RPG::LittleGameShare::HoyoPhysics::PhysicsCollider2DConfig* a1, ::RPG::MVector2 a2, ::System::Single a3, ::System::Object* a4, ::RPG::LittleGameShare::HoyoPhysics::PhysicsCollider2DFilterConfig* a5)
	{
		return ((::Class_0_16E4307DCC419505_30*(*)(::PVOID, ::RPG::LittleGameShare::HoyoPhysics::PhysicsCollider2DConfig*, ::RPG::MVector2, ::System::Single, ::System::Object*, ::RPG::LittleGameShare::HoyoPhysics::PhysicsCollider2DFilterConfig*))((::PBYTE)hIl2Cpp + CLASS_1_F33AABD3C067711C_METHOD_1_EB3B5E5EB8F8E567_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::Class_0_16E4307DCC419505_30* Method_1_27D584710DA10578(::RPG::LittleGameShare::HoyoPhysics::PhysicsCollider2DConfig* a1, ::RPG::MVector2 a2, ::RPG::MVector2 a3, ::System::Object* a4, ::RPG::LittleGameShare::HoyoPhysics::PhysicsCollider2DFilterConfig* a5)
	{
		return ((::Class_0_16E4307DCC419505_30*(*)(::PVOID, ::RPG::LittleGameShare::HoyoPhysics::PhysicsCollider2DConfig*, ::RPG::MVector2, ::RPG::MVector2, ::System::Object*, ::RPG::LittleGameShare::HoyoPhysics::PhysicsCollider2DFilterConfig*))((::PBYTE)hIl2Cpp + CLASS_1_F33AABD3C067711C_METHOD_1_27D584710DA10578_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_E52C357E96F7A058(::Class_0_16E4307DCC419505_30* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_30*))((::PBYTE)hIl2Cpp + CLASS_1_F33AABD3C067711C_METHOD_1_E52C357E96F7A058_OFFSET))(this, a1);
	}

	::System::Void Method_1_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F33AABD3C067711C_METHOD_1_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_1_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F33AABD3C067711C_METHOD_1_1B9CC121BDC8766D_OFFSET))(this, a1);
	}

	::System::Void Method_1_BA904CAFF6C7217F(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F33AABD3C067711C_METHOD_1_BA904CAFF6C7217F_OFFSET))(this, a1);
	}

	::System::Void Method_1_479759059E440327_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F33AABD3C067711C_METHOD_1_479759059E440327_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_2BE05C4C42BE6CD6(::RPG::MVector2 a1, ::RPG::MVector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::MVector2, ::RPG::MVector2))((::PBYTE)hIl2Cpp + CLASS_1_F33AABD3C067711C_METHOD_1_2BE05C4C42BE6CD6_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_F4D77AB700A9EDDE(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_30*>* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_30*>*))((::PBYTE)hIl2Cpp + CLASS_1_F33AABD3C067711C_METHOD_1_F4D77AB700A9EDDE_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_30*>* Method_1_0608E01D4DD006F1()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_30*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F33AABD3C067711C_METHOD_1_0608E01D4DD006F1_OFFSET))(this);
	}

	::System::Void Method_1_94F018F9ECD484F7(::RPG::LittleGameShare::HoyoPhysics::PhysicsCollider2DConfig* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeDef& a2, ::RPG::LittleGameShare::HoyoPhysics::PhysicsCollider2DFilterConfig* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::LittleGameShare::HoyoPhysics::PhysicsCollider2DConfig*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeDef&, ::RPG::LittleGameShare::HoyoPhysics::PhysicsCollider2DFilterConfig*))((::PBYTE)hIl2Cpp + CLASS_1_F33AABD3C067711C_METHOD_1_94F018F9ECD484F7_OFFSET))(this, a1, a2, a3);
	}

	::Class_0_16E4307DCC419505_28* Method_1_5C00C2EE4FCF347E()
	{
		return ((::Class_0_16E4307DCC419505_28*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F33AABD3C067711C_METHOD_1_5C00C2EE4FCF347E_OFFSET))(this);
	}
};
