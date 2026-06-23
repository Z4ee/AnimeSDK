#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FTransform.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/Config/ConfigCircularSector3D.h"
#include "unitysdk/MoleMole/Config/ConfigInteractionFanCylinder.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_409E294815B4CE48.h"
#include "unitysdk/Struct_2_45B62668F0BA5CF8.h"
#include "unitysdk/Struct_2_74C6EE564641CFF8.h"
#include "unitysdk/Struct_2_870A2C4023B05F0B.h"
#include "unitysdk/Struct_2_984AA94FB23486F9_2.h"
#include "unitysdk/Struct_2_9D6AA6948DBEBA12.h"
#include "unitysdk/Struct_2_D0732A9EE482521E.h"
#include "unitysdk/Struct_2_EB409772687773A2_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_0_16E4307DCC419505_430;
class Class_1_43BD383C98B4C0C5_49;
class Class_1_4EC5DD4A862D08DB;
class Class_1_B7E341C5F1A6F199;
class Class_1_E6FFFFD82483DB9E;
class Class_2_0C6A364076BE9BB5;
class Class_2_3A7E865224D42F8A;
class Class_2_9E8CD0C1037EB98E_81;
class Class_2_A6C27A12AD62162A;
class Class_3_DD81183BF1438207;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace UnityEngine { class Collider; }

#define CLASS_1_052C27733D9F07A3_METHOD_1_08C7418911474ABE_OFFSET UNITYSDK_OFFSET(0x13B77C30)
#define CLASS_1_052C27733D9F07A3_METHOD_1_0E397F2CD8A88FAD_OFFSET UNITYSDK_OFFSET(0x13B76630)
#define CLASS_1_052C27733D9F07A3_METHOD_1_12F619E2DA0F67D1_OFFSET UNITYSDK_OFFSET(0x13B76A30)
#define CLASS_1_052C27733D9F07A3_METHOD_1_2206254D783423ED_OFFSET UNITYSDK_OFFSET(0x13B75AF0)
#define CLASS_1_052C27733D9F07A3_METHOD_1_237DC8C6EAD8055C_OFFSET UNITYSDK_OFFSET(0x13B76AC0)
#define CLASS_1_052C27733D9F07A3_METHOD_1_2DBF804138F5DA90_OFFSET UNITYSDK_OFFSET(0x13B77470)
#define CLASS_1_052C27733D9F07A3_METHOD_1_318F78C7FEEEB23B_OFFSET UNITYSDK_OFFSET(0x13B778F0)
#define CLASS_1_052C27733D9F07A3_METHOD_1_34F3742F2B91F146_OFFSET UNITYSDK_OFFSET(0x13B75430)
#define CLASS_1_052C27733D9F07A3_METHOD_1_3D80AF6F3ED50584_OFFSET UNITYSDK_OFFSET(0x13B75070)
#define CLASS_1_052C27733D9F07A3_METHOD_1_449A7DD0254C81A3_1_OFFSET UNITYSDK_OFFSET(0x13B76ED0)
#define CLASS_1_052C27733D9F07A3_METHOD_1_449A7DD0254C81A3_OFFSET UNITYSDK_OFFSET(0x13B76EC0)
#define CLASS_1_052C27733D9F07A3_METHOD_1_449DC8F86F867303_OFFSET UNITYSDK_OFFSET(0x13B77600)
#define CLASS_1_052C27733D9F07A3_METHOD_1_48C5AB2C4A111599_OFFSET UNITYSDK_OFFSET(0x13B74A20)
#define CLASS_1_052C27733D9F07A3_METHOD_1_50F0B4DDCEFCFC53_OFFSET UNITYSDK_OFFSET(0x13B76EE0)
#define CLASS_1_052C27733D9F07A3_METHOD_1_52A3FEDD63707B13_OFFSET UNITYSDK_OFFSET(0x13B74360)
#define CLASS_1_052C27733D9F07A3_METHOD_1_531E6B6F3F4C19E2_OFFSET UNITYSDK_OFFSET(0x13B78C70)
#define CLASS_1_052C27733D9F07A3_METHOD_1_65F634C5E76CBD91_OFFSET UNITYSDK_OFFSET(0x13B74680)
#define CLASS_1_052C27733D9F07A3_METHOD_1_6D2A5DB0C743F460_OFFSET UNITYSDK_OFFSET(0x13B75220)
#define CLASS_1_052C27733D9F07A3_METHOD_1_80D10F12C5B6FAD6_1_OFFSET UNITYSDK_OFFSET(0x13B769B0)
#define CLASS_1_052C27733D9F07A3_METHOD_1_80D10F12C5B6FAD6_OFFSET UNITYSDK_OFFSET(0x13B76930)
#define CLASS_1_052C27733D9F07A3_METHOD_1_83A1E89BF484B0EB_OFFSET UNITYSDK_OFFSET(0x13B74CB0)
#define CLASS_1_052C27733D9F07A3_METHOD_1_897587484972E418_OFFSET UNITYSDK_OFFSET(0x13B761B0)
#define CLASS_1_052C27733D9F07A3_METHOD_1_8A45633135C63A13_OFFSET UNITYSDK_OFFSET(0x13B74EA0)
#define CLASS_1_052C27733D9F07A3_METHOD_1_90C7BC765C2861DF_OFFSET UNITYSDK_OFFSET(0x13B74040)
#define CLASS_1_052C27733D9F07A3_METHOD_1_A4CF27E397393115_OFFSET UNITYSDK_OFFSET(0x13B76350)
#define CLASS_1_052C27733D9F07A3_METHOD_1_A6553FF465519DFD_1_OFFSET UNITYSDK_OFFSET(0x13B78B40)
#define CLASS_1_052C27733D9F07A3_METHOD_1_A6553FF465519DFD_OFFSET UNITYSDK_OFFSET(0x13B77EE0)
#define CLASS_1_052C27733D9F07A3_METHOD_1_AA1B4A8D7F75116E_OFFSET UNITYSDK_OFFSET(0x13B77B60)
#define CLASS_1_052C27733D9F07A3_METHOD_1_AEE43AA6EF40E903_OFFSET UNITYSDK_OFFSET(0x13B76F80)
#define CLASS_1_052C27733D9F07A3_METHOD_1_B233326DDA65034A_OFFSET UNITYSDK_OFFSET(0x13B78370)
#define CLASS_1_052C27733D9F07A3_METHOD_1_B538FCB769D3D1B3_OFFSET UNITYSDK_OFFSET(0x13B758D0)
#define CLASS_1_052C27733D9F07A3_METHOD_1_B76E163EAD23B6FE_OFFSET UNITYSDK_OFFSET(0x13B77DD0)
#define CLASS_1_052C27733D9F07A3_METHOD_1_BC8E2121E3BBA5BE_OFFSET UNITYSDK_OFFSET(0x13B788F0)
#define CLASS_1_052C27733D9F07A3_METHOD_1_BCD4984B7193EBAE_OFFSET UNITYSDK_OFFSET(0x13B78010)
#define CLASS_1_052C27733D9F07A3_METHOD_1_BD576506657F3509_OFFSET UNITYSDK_OFFSET(0x13B748C0)
#define CLASS_1_052C27733D9F07A3_METHOD_1_C06F9AC638CE2C66_OFFSET UNITYSDK_OFFSET(0x13B743E0)
#define CLASS_1_052C27733D9F07A3_METHOD_1_C7950961C767D9D7_OFFSET UNITYSDK_OFFSET(0x13B74FA0)
#define CLASS_1_052C27733D9F07A3_METHOD_1_C82BBF168012F343_OFFSET UNITYSDK_OFFSET(0x13B76590)
#define CLASS_1_052C27733D9F07A3_METHOD_1_D8B3AC54FF6C5D53_OFFSET UNITYSDK_OFFSET(0x13B78F70)
#define CLASS_1_052C27733D9F07A3_METHOD_1_E5C9249EEBA76181_OFFSET UNITYSDK_OFFSET(0x13B75F40)
#define CLASS_1_052C27733D9F07A3_METHOD_1_ED26F16B3E4387A5_OFFSET UNITYSDK_OFFSET(0x13B780F0)
#define CLASS_1_052C27733D9F07A3_METHOD_1_F4BAA3157FB7DD60_OFFSET UNITYSDK_OFFSET(0x13B74130)
#define CLASS_1_052C27733D9F07A3_METHOD_1_F65AC83AA4591BFC_OFFSET UNITYSDK_OFFSET(0x13B73F90)
#define CLASS_1_052C27733D9F07A3_METHOD_1_F9DFE5ED808CF67F_OFFSET UNITYSDK_OFFSET(0x13B789D0)

inline static constexpr unsigned int Class_1_052C27733D9F07A3_TypeDefinitionIndex = 70414;

class Class_1_052C27733D9F07A3 : public ::System::Object
{
public:
	static ::System::Boolean Method_1_F65AC83AA4591BFC(::MoleMole::Config::ConfigInteractionFanCylinder a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Config::ConfigInteractionFanCylinder))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_F65AC83AA4591BFC_OFFSET))(a1);
	}

	static ::Foundation::Unreal::FTransform Method_1_90C7BC765C2861DF(::Class_2_9E8CD0C1037EB98E_81* a1, ::MoleMole::EntityHandle a2)
	{
		return ((::Foundation::Unreal::FTransform(*)(::Class_2_9E8CD0C1037EB98E_81*, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_90C7BC765C2861DF_OFFSET))(a1, a2);
	}

	static ::System::Single Method_1_52A3FEDD63707B13(::System::Single a1)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_52A3FEDD63707B13_OFFSET))(a1);
	}

	static ::Foundation::Unreal::FTransform Method_1_C06F9AC638CE2C66(::MoleMole::EntityHandle& a1)
	{
		return ((::Foundation::Unreal::FTransform(*)(::MoleMole::EntityHandle&))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_C06F9AC638CE2C66_OFFSET))(a1);
	}

	static ::Struct_2_D0732A9EE482521E Method_1_F4BAA3157FB7DD60(::MoleMole::EntityHandle& a1)
	{
		return ((::Struct_2_D0732A9EE482521E(*)(::MoleMole::EntityHandle&))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_F4BAA3157FB7DD60_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_65F634C5E76CBD91(::Class_2_A6C27A12AD62162A*& a1, ::Class_2_A6C27A12AD62162A*& a2)
	{
		return ((::System::Int32(*)(::Class_2_A6C27A12AD62162A*&, ::Class_2_A6C27A12AD62162A*&))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_65F634C5E76CBD91_OFFSET))(a1, a2);
	}

	static ::Struct_2_74C6EE564641CFF8 Method_1_48C5AB2C4A111599(::MoleMole::Config::ConfigCircularSector3D a1)
	{
		return ((::Struct_2_74C6EE564641CFF8(*)(::MoleMole::Config::ConfigCircularSector3D))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_48C5AB2C4A111599_OFFSET))(a1);
	}

	static ::Struct_2_74C6EE564641CFF8 Method_1_83A1E89BF484B0EB(::System::ValueTuple_2<::MoleMole::Config::ConfigCircularSector3D, ::Struct_2_D0732A9EE482521E>& a1)
	{
		return ((::Struct_2_74C6EE564641CFF8(*)(::System::ValueTuple_2<::MoleMole::Config::ConfigCircularSector3D, ::Struct_2_D0732A9EE482521E>&))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_83A1E89BF484B0EB_OFFSET))(a1);
	}

	static ::System::Single Method_1_8A45633135C63A13(::UnityEngine::Collider* a1)
	{
		return ((::System::Single(*)(::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_8A45633135C63A13_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_C7950961C767D9D7(::MoleMole::EntityHandle& a1, ::MoleMole::Config::ConfigInteractionFanCylinder& a2, ::Class_2_3A7E865224D42F8A*& a3)
	{
		return ((::System::Boolean(*)(::MoleMole::EntityHandle&, ::MoleMole::Config::ConfigInteractionFanCylinder&, ::Class_2_3A7E865224D42F8A*&))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_C7950961C767D9D7_OFFSET))(a1, a2, a3);
	}

	static ::Struct_2_45B62668F0BA5CF8 Method_1_6D2A5DB0C743F460(::Struct_2_EB409772687773A2_1& a1)
	{
		return ((::Struct_2_45B62668F0BA5CF8(*)(::Struct_2_EB409772687773A2_1&))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_6D2A5DB0C743F460_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_34F3742F2B91F146(::MoleMole::EntityHandle& a1, ::MoleMole::Config::ConfigCircularSector3D& a2, ::Class_2_0C6A364076BE9BB5*& a3)
	{
		return ((::System::Boolean(*)(::MoleMole::EntityHandle&, ::MoleMole::Config::ConfigCircularSector3D&, ::Class_2_0C6A364076BE9BB5*&))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_34F3742F2B91F146_OFFSET))(a1, a2, a3);
	}

	static ::Struct_2_D0732A9EE482521E Method_1_2206254D783423ED(::Class_0_16E4307DCC419505_430*& a1)
	{
		return ((::Struct_2_D0732A9EE482521E(*)(::Class_0_16E4307DCC419505_430*&))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_2206254D783423ED_OFFSET))(a1);
	}

	static ::Struct_2_870A2C4023B05F0B Method_1_E5C9249EEBA76181(::Struct_2_74C6EE564641CFF8& a1, ::Struct_2_D0732A9EE482521E& a2)
	{
		return ((::Struct_2_870A2C4023B05F0B(*)(::Struct_2_74C6EE564641CFF8&, ::Struct_2_D0732A9EE482521E&))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_E5C9249EEBA76181_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_897587484972E418(::MoleMole::EntityHandle& a1, ::Class_3_DD81183BF1438207*& a2)
	{
		return ((::System::Boolean(*)(::MoleMole::EntityHandle&, ::Class_3_DD81183BF1438207*&))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_897587484972E418_OFFSET))(a1, a2);
	}

	static ::System::Single Method_1_A4CF27E397393115(::MoleMole::EntityHandle& a1)
	{
		return ((::System::Single(*)(::MoleMole::EntityHandle&))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_A4CF27E397393115_OFFSET))(a1);
	}

	static ::Class_3_DD81183BF1438207* Method_1_C82BBF168012F343(::Class_2_3A7E865224D42F8A*& a1, ::Class_1_E6FFFFD82483DB9E*& a2, ::MoleMole::EntityHandle& a3)
	{
		return ((::Class_3_DD81183BF1438207*(*)(::Class_2_3A7E865224D42F8A*&, ::Class_1_E6FFFFD82483DB9E*&, ::MoleMole::EntityHandle&))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_C82BBF168012F343_OFFSET))(a1, a2, a3);
	}

	static ::Struct_2_409E294815B4CE48 Method_1_0E397F2CD8A88FAD(::Struct_2_984AA94FB23486F9_2& a1, ::Struct_2_D0732A9EE482521E& a2)
	{
		return ((::Struct_2_409E294815B4CE48(*)(::Struct_2_984AA94FB23486F9_2&, ::Struct_2_D0732A9EE482521E&))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_0E397F2CD8A88FAD_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_80D10F12C5B6FAD6(::Foundation::ViewObject::ViewObjectHandle& a1)
	{
		return ((::System::Boolean(*)(::Foundation::ViewObject::ViewObjectHandle&))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_80D10F12C5B6FAD6_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_80D10F12C5B6FAD6_1(::Foundation::ViewObject::ViewObjectHandle& a1)
	{
		return ((::System::Boolean(*)(::Foundation::ViewObject::ViewObjectHandle&))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_80D10F12C5B6FAD6_1_OFFSET))(a1);
	}

	static ::Class_3_DD81183BF1438207* Method_1_12F619E2DA0F67D1(::Class_2_3A7E865224D42F8A*& a1, ::Class_1_E6FFFFD82483DB9E*& a2)
	{
		return ((::Class_3_DD81183BF1438207*(*)(::Class_2_3A7E865224D42F8A*&, ::Class_1_E6FFFFD82483DB9E*&))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_12F619E2DA0F67D1_OFFSET))(a1, a2);
	}

	static ::System::Single Method_1_237DC8C6EAD8055C(::Foundation::Unreal::FTransform& a1, ::Foundation::Unreal::FTransform& a2, ::System::Single& a3, ::System::Single& a4)
	{
		return ((::System::Single(*)(::Foundation::Unreal::FTransform&, ::Foundation::Unreal::FTransform&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_237DC8C6EAD8055C_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_449A7DD0254C81A3()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_449A7DD0254C81A3_OFFSET))();
	}

	static ::System::Void Method_1_50F0B4DDCEFCFC53(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_50F0B4DDCEFCFC53_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_AEE43AA6EF40E903(::Foundation::Unreal::FTransform& a1, ::Foundation::Unreal::FTransform& a2, ::System::Single& a3, ::System::Single& a4)
	{
		return ((::System::Boolean(*)(::Foundation::Unreal::FTransform&, ::Foundation::Unreal::FTransform&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_AEE43AA6EF40E903_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_2DBF804138F5DA90(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_2DBF804138F5DA90_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_449DC8F86F867303(::Class_2_A6C27A12AD62162A* a1, ::Class_1_43BD383C98B4C0C5_49*& a2, ::MoleMole::EntityHandle& a3)
	{
		return ((::System::Boolean(*)(::Class_2_A6C27A12AD62162A*, ::Class_1_43BD383C98B4C0C5_49*&, ::MoleMole::EntityHandle&))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_449DC8F86F867303_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_318F78C7FEEEB23B(::MoleMole::EntityHandle& a1, ::MoleMole::Config::ConfigInteractionFanCylinder& a2, ::Class_3_DD81183BF1438207*& a3)
	{
		return ((::System::Boolean(*)(::MoleMole::EntityHandle&, ::MoleMole::Config::ConfigInteractionFanCylinder&, ::Class_3_DD81183BF1438207*&))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_318F78C7FEEEB23B_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_AA1B4A8D7F75116E(::MoleMole::Config::ConfigCircularSector3D& a1, ::Class_2_0C6A364076BE9BB5*& a2)
	{
		return ((::System::Boolean(*)(::MoleMole::Config::ConfigCircularSector3D&, ::Class_2_0C6A364076BE9BB5*&))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_AA1B4A8D7F75116E_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_08C7418911474ABE(::Class_3_DD81183BF1438207*& a1)
	{
		return ((::System::Boolean(*)(::Class_3_DD81183BF1438207*&))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_08C7418911474ABE_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_B76E163EAD23B6FE(::Class_2_A6C27A12AD62162A*& a1, ::Class_1_43BD383C98B4C0C5_49*& a2, ::MoleMole::EntityHandle& a3)
	{
		return ((::System::Boolean(*)(::Class_2_A6C27A12AD62162A*&, ::Class_1_43BD383C98B4C0C5_49*&, ::MoleMole::EntityHandle&))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_B76E163EAD23B6FE_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_A6553FF465519DFD(::MoleMole::EntityHandle& a1)
	{
		return ((::System::Boolean(*)(::MoleMole::EntityHandle&))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_A6553FF465519DFD_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_BCD4984B7193EBAE(::MoleMole::EntityHandle& a1, ::System::String*& a2)
	{
		return ((::System::Boolean(*)(::MoleMole::EntityHandle&, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_BCD4984B7193EBAE_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_ED26F16B3E4387A5(::Class_2_A6C27A12AD62162A* a1)
	{
		return ((::System::Boolean(*)(::Class_2_A6C27A12AD62162A*))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_ED26F16B3E4387A5_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_449A7DD0254C81A3_1()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_449A7DD0254C81A3_1_OFFSET))();
	}

	static ::System::ValueTuple_3<::Struct_2_74C6EE564641CFF8, ::Struct_2_74C6EE564641CFF8, ::Struct_2_870A2C4023B05F0B> Method_1_B233326DDA65034A(::System::ValueTuple_2<::MoleMole::Config::ConfigCircularSector3D, ::Struct_2_D0732A9EE482521E>& a1, ::Struct_2_D0732A9EE482521E& a2)
	{
		return ((::System::ValueTuple_3<::Struct_2_74C6EE564641CFF8, ::Struct_2_74C6EE564641CFF8, ::Struct_2_870A2C4023B05F0B>(*)(::System::ValueTuple_2<::MoleMole::Config::ConfigCircularSector3D, ::Struct_2_D0732A9EE482521E>&, ::Struct_2_D0732A9EE482521E&))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_B233326DDA65034A_OFFSET))(a1, a2);
	}

	static ::Class_1_4EC5DD4A862D08DB* Method_1_BD576506657F3509()
	{
		return ((::Class_1_4EC5DD4A862D08DB*(*)())((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_BD576506657F3509_OFFSET))();
	}

	static ::System::Single Method_1_BC8E2121E3BBA5BE(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_BC8E2121E3BBA5BE_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F9DFE5ED808CF67F(::Class_2_A6C27A12AD62162A* a1)
	{
		return ((::System::Boolean(*)(::Class_2_A6C27A12AD62162A*))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_F9DFE5ED808CF67F_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_A6553FF465519DFD_1(::MoleMole::EntityHandle& a1)
	{
		return ((::System::Boolean(*)(::MoleMole::EntityHandle&))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_A6553FF465519DFD_1_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_3D80AF6F3ED50584(::MoleMole::EntityHandle& a1, ::MoleMole::Config::ConfigInteractionFanCylinder& a2, ::Struct_2_984AA94FB23486F9_2& a3)
	{
		return ((::System::Boolean(*)(::MoleMole::EntityHandle&, ::MoleMole::Config::ConfigInteractionFanCylinder&, ::Struct_2_984AA94FB23486F9_2&))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_3D80AF6F3ED50584_OFFSET))(a1, a2, a3);
	}

	static ::Struct_2_D0732A9EE482521E Method_1_B538FCB769D3D1B3(::Struct_2_9D6AA6948DBEBA12<::MoleMole::Battle::Entity*>& a1)
	{
		return ((::Struct_2_D0732A9EE482521E(*)(::Struct_2_9D6AA6948DBEBA12<::MoleMole::Battle::Entity*>&))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_B538FCB769D3D1B3_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_531E6B6F3F4C19E2(::MoleMole::Config::ConfigInteractionFanCylinder& a1, ::Class_3_DD81183BF1438207*& a2, ::System::Single& a3)
	{
		return ((::System::Boolean(*)(::MoleMole::Config::ConfigInteractionFanCylinder&, ::Class_3_DD81183BF1438207*&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_531E6B6F3F4C19E2_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_D8B3AC54FF6C5D53(::Class_2_A6C27A12AD62162A* a1)
	{
		return ((::System::Boolean(*)(::Class_2_A6C27A12AD62162A*))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_D8B3AC54FF6C5D53_OFFSET))(a1);
	}
};
