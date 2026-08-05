#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_590214B1C850A70F.h"
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

class Class_0_16E4307DCC419505_279;
class Class_1_06B1338741BDFCD0;
class Class_1_43BD383C98B4C0C5_49;
class Class_1_B7E341C5F1A6F199;
class Class_1_E6FFFFD82483DB9E;
class Class_2_0C6A364076BE9BB5;
class Class_2_3A7E865224D42F8A;
class Class_2_72BDD67FEA972F1C;
class Class_2_9E8CD0C1037EB98E_20;
class Class_3_DD81183BF1438207;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace UnityEngine { class Collider; }

#define CLASS_1_052C27733D9F07A3_METHOD_1_08C7418911474ABE_OFFSET UNITYSDK_OFFSET(0x16A04330)
#define CLASS_1_052C27733D9F07A3_METHOD_1_0B40089A5B5C3FB1_OFFSET UNITYSDK_OFFSET(0x16A033E0)
#define CLASS_1_052C27733D9F07A3_METHOD_1_10EA26C7BF1A2303_OFFSET UNITYSDK_OFFSET(0x16A00370)
#define CLASS_1_052C27733D9F07A3_METHOD_1_12F619E2DA0F67D1_OFFSET UNITYSDK_OFFSET(0x16A03290)
#define CLASS_1_052C27733D9F07A3_METHOD_1_237DC8C6EAD8055C_OFFSET UNITYSDK_OFFSET(0x16A03EF0)
#define CLASS_1_052C27733D9F07A3_METHOD_1_2DBF804138F5DA90_OFFSET UNITYSDK_OFFSET(0x16A03D60)
#define CLASS_1_052C27733D9F07A3_METHOD_1_318F78C7FEEEB23B_OFFSET UNITYSDK_OFFSET(0x16A01B90)
#define CLASS_1_052C27733D9F07A3_METHOD_1_34F3742F2B91F146_OFFSET UNITYSDK_OFFSET(0x16A01480)
#define CLASS_1_052C27733D9F07A3_METHOD_1_35558F5E75FE4CE5_OFFSET UNITYSDK_OFFSET(0x16A02B60)
#define CLASS_1_052C27733D9F07A3_METHOD_1_3B6052B3C18B3A64_OFFSET UNITYSDK_OFFSET(0x16A044D0)
#define CLASS_1_052C27733D9F07A3_METHOD_1_3D80AF6F3ED50584_OFFSET UNITYSDK_OFFSET(0x169FFF50)
#define CLASS_1_052C27733D9F07A3_METHOD_1_449A7DD0254C81A3_1_OFFSET UNITYSDK_OFFSET(0x16A03280)
#define CLASS_1_052C27733D9F07A3_METHOD_1_449A7DD0254C81A3_OFFSET UNITYSDK_OFFSET(0x16A03270)
#define CLASS_1_052C27733D9F07A3_METHOD_1_4D7DAD0E39981B78_OFFSET UNITYSDK_OFFSET(0x16A03530)
#define CLASS_1_052C27733D9F07A3_METHOD_1_50F0B4DDCEFCFC53_OFFSET UNITYSDK_OFFSET(0x16A008D0)
#define CLASS_1_052C27733D9F07A3_METHOD_1_52A3FEDD63707B13_OFFSET UNITYSDK_OFFSET(0x16A042B0)
#define CLASS_1_052C27733D9F07A3_METHOD_1_531E6B6F3F4C19E2_OFFSET UNITYSDK_OFFSET(0x16A04A90)
#define CLASS_1_052C27733D9F07A3_METHOD_1_59A95DDBE5FD7EAF_OFFSET UNITYSDK_OFFSET(0x16A02D10)
#define CLASS_1_052C27733D9F07A3_METHOD_1_5EED8EDF891E4F3F_OFFSET UNITYSDK_OFFSET(0x16A00970)
#define CLASS_1_052C27733D9F07A3_METHOD_1_62DA4BB42DBD2F24_OFFSET UNITYSDK_OFFSET(0x16A047A0)
#define CLASS_1_052C27733D9F07A3_METHOD_1_69D74E19A9F3D397_OFFSET UNITYSDK_OFFSET(0x16A039B0)
#define CLASS_1_052C27733D9F07A3_METHOD_1_83A1E89BF484B0EB_OFFSET UNITYSDK_OFFSET(0x16A019A0)
#define CLASS_1_052C27733D9F07A3_METHOD_1_88E4DD0FF5AF8D17_1_OFFSET UNITYSDK_OFFSET(0x16A02110)
#define CLASS_1_052C27733D9F07A3_METHOD_1_88E4DD0FF5AF8D17_OFFSET UNITYSDK_OFFSET(0x16A00D00)
#define CLASS_1_052C27733D9F07A3_METHOD_1_897587484972E418_OFFSET UNITYSDK_OFFSET(0x16A03BC0)
#define CLASS_1_052C27733D9F07A3_METHOD_1_90C7BC765C2861DF_OFFSET UNITYSDK_OFFSET(0x16A00E80)
#define CLASS_1_052C27733D9F07A3_METHOD_1_9BE171BC955DFAEA_OFFSET UNITYSDK_OFFSET(0x16A00100)
#define CLASS_1_052C27733D9F07A3_METHOD_1_A4CF27E397393115_OFFSET UNITYSDK_OFFSET(0x16A02920)
#define CLASS_1_052C27733D9F07A3_METHOD_1_AA1B4A8D7F75116E_OFFSET UNITYSDK_OFFSET(0x16A01EC0)
#define CLASS_1_052C27733D9F07A3_METHOD_1_AA24ACE6DC9948B7_OFFSET UNITYSDK_OFFSET(0x16A02C50)
#define CLASS_1_052C27733D9F07A3_METHOD_1_AEE43AA6EF40E903_OFFSET UNITYSDK_OFFSET(0x16A021C0)
#define CLASS_1_052C27733D9F07A3_METHOD_1_B538FCB769D3D1B3_OFFSET UNITYSDK_OFFSET(0x169FFC70)
#define CLASS_1_052C27733D9F07A3_METHOD_1_BC8E2121E3BBA5BE_OFFSET UNITYSDK_OFFSET(0x16A02030)
#define CLASS_1_052C27733D9F07A3_METHOD_1_BCD4984B7193EBAE_OFFSET UNITYSDK_OFFSET(0x16A046C0)
#define CLASS_1_052C27733D9F07A3_METHOD_1_C7950961C767D9D7_OFFSET UNITYSDK_OFFSET(0x169FFE80)
#define CLASS_1_052C27733D9F07A3_METHOD_1_C82BBF168012F343_OFFSET UNITYSDK_OFFSET(0x16A01F90)
#define CLASS_1_052C27733D9F07A3_METHOD_1_CA1F7DC254432E8F_1_OFFSET UNITYSDK_OFFSET(0x16A00DB0)
#define CLASS_1_052C27733D9F07A3_METHOD_1_CA1F7DC254432E8F_OFFSET UNITYSDK_OFFSET(0x16A00F70)
#define CLASS_1_052C27733D9F07A3_METHOD_1_D8B3AC54FF6C5D53_OFFSET UNITYSDK_OFFSET(0x16A03320)
#define CLASS_1_052C27733D9F07A3_METHOD_1_EB8EBCC919915330_OFFSET UNITYSDK_OFFSET(0x16A01040)
#define CLASS_1_052C27733D9F07A3_METHOD_1_ED26F16B3E4387A5_OFFSET UNITYSDK_OFFSET(0x16A026A0)
#define CLASS_1_052C27733D9F07A3_METHOD_1_F4BAA3157FB7DD60_OFFSET UNITYSDK_OFFSET(0x16A00AD0)
#define CLASS_1_052C27733D9F07A3_METHOD_1_F65AC83AA4591BFC_OFFSET UNITYSDK_OFFSET(0x16A01E10)
#define CLASS_1_052C27733D9F07A3_METHOD_1_F9DFE5ED808CF67F_OFFSET UNITYSDK_OFFSET(0x16A03840)

inline static constexpr unsigned int Class_1_052C27733D9F07A3_TypeDefinitionIndex = 73352;

class Class_1_052C27733D9F07A3 : public ::System::Object
{
public:
	static ::Struct_2_D0732A9EE482521E Method_1_B538FCB769D3D1B3(::Struct_2_9D6AA6948DBEBA12<::MoleMole::Battle::Entity*>& a1)
	{
		return ((::Struct_2_D0732A9EE482521E(*)(::Struct_2_9D6AA6948DBEBA12<::MoleMole::Battle::Entity*>&))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_B538FCB769D3D1B3_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_C7950961C767D9D7(::MoleMole::EntityHandle& a1, ::MoleMole::Config::ConfigInteractionFanCylinder& a2, ::Class_2_3A7E865224D42F8A*& a3)
	{
		return ((::System::Boolean(*)(::MoleMole::EntityHandle&, ::MoleMole::Config::ConfigInteractionFanCylinder&, ::Class_2_3A7E865224D42F8A*&))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_C7950961C767D9D7_OFFSET))(a1, a2, a3);
	}

	static ::Struct_2_870A2C4023B05F0B Method_1_9BE171BC955DFAEA(::Struct_2_74C6EE564641CFF8& a1, ::Struct_2_D0732A9EE482521E& a2)
	{
		return ((::Struct_2_870A2C4023B05F0B(*)(::Struct_2_74C6EE564641CFF8&, ::Struct_2_D0732A9EE482521E&))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_9BE171BC955DFAEA_OFFSET))(a1, a2);
	}

	static ::Foundation::Unreal::FTransform Method_1_10EA26C7BF1A2303(::MoleMole::EntityHandle& a1)
	{
		return ((::Foundation::Unreal::FTransform(*)(::MoleMole::EntityHandle&))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_10EA26C7BF1A2303_OFFSET))(a1);
	}

	static ::System::Void Method_1_50F0B4DDCEFCFC53(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_50F0B4DDCEFCFC53_OFFSET))(a1, a2);
	}

	static ::Struct_2_D0732A9EE482521E Method_1_F4BAA3157FB7DD60(::MoleMole::EntityHandle& a1)
	{
		return ((::Struct_2_D0732A9EE482521E(*)(::MoleMole::EntityHandle&))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_F4BAA3157FB7DD60_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_88E4DD0FF5AF8D17(::MoleMole::EntityHandle& a1)
	{
		return ((::System::Boolean(*)(::MoleMole::EntityHandle&))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_88E4DD0FF5AF8D17_OFFSET))(a1);
	}

	static ::Foundation::Unreal::FTransform Method_1_90C7BC765C2861DF(::Class_2_9E8CD0C1037EB98E_20* a1, ::MoleMole::EntityHandle a2)
	{
		return ((::Foundation::Unreal::FTransform(*)(::Class_2_9E8CD0C1037EB98E_20*, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_90C7BC765C2861DF_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_CA1F7DC254432E8F(::Foundation::ViewObject::ViewObjectHandle& a1)
	{
		return ((::System::Boolean(*)(::Foundation::ViewObject::ViewObjectHandle&))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_CA1F7DC254432E8F_OFFSET))(a1);
	}

	static ::Struct_2_D0732A9EE482521E Method_1_EB8EBCC919915330(::Class_0_16E4307DCC419505_279*& a1)
	{
		return ((::Struct_2_D0732A9EE482521E(*)(::Class_0_16E4307DCC419505_279*&))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_EB8EBCC919915330_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_34F3742F2B91F146(::MoleMole::EntityHandle& a1, ::MoleMole::Config::ConfigCircularSector3D& a2, ::Class_2_0C6A364076BE9BB5*& a3)
	{
		return ((::System::Boolean(*)(::MoleMole::EntityHandle&, ::MoleMole::Config::ConfigCircularSector3D&, ::Class_2_0C6A364076BE9BB5*&))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_34F3742F2B91F146_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_318F78C7FEEEB23B(::MoleMole::EntityHandle& a1, ::MoleMole::Config::ConfigInteractionFanCylinder& a2, ::Class_3_DD81183BF1438207*& a3)
	{
		return ((::System::Boolean(*)(::MoleMole::EntityHandle&, ::MoleMole::Config::ConfigInteractionFanCylinder&, ::Class_3_DD81183BF1438207*&))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_318F78C7FEEEB23B_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_3D80AF6F3ED50584(::MoleMole::EntityHandle& a1, ::MoleMole::Config::ConfigInteractionFanCylinder& a2, ::Struct_2_984AA94FB23486F9_2& a3)
	{
		return ((::System::Boolean(*)(::MoleMole::EntityHandle&, ::MoleMole::Config::ConfigInteractionFanCylinder&, ::Struct_2_984AA94FB23486F9_2&))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_3D80AF6F3ED50584_OFFSET))(a1, a2, a3);
	}

	static ::System::Single Method_1_BC8E2121E3BBA5BE(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_BC8E2121E3BBA5BE_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_88E4DD0FF5AF8D17_1(::MoleMole::EntityHandle& a1)
	{
		return ((::System::Boolean(*)(::MoleMole::EntityHandle&))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_88E4DD0FF5AF8D17_1_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_AEE43AA6EF40E903(::Foundation::Unreal::FTransform& a1, ::Foundation::Unreal::FTransform& a2, ::System::Single& a3, ::System::Single& a4)
	{
		return ((::System::Boolean(*)(::Foundation::Unreal::FTransform&, ::Foundation::Unreal::FTransform&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_AEE43AA6EF40E903_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_ED26F16B3E4387A5(::Class_2_72BDD67FEA972F1C* a1)
	{
		return ((::System::Boolean(*)(::Class_2_72BDD67FEA972F1C*))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_ED26F16B3E4387A5_OFFSET))(a1);
	}

	static ::System::Single Method_1_A4CF27E397393115(::MoleMole::EntityHandle& a1)
	{
		return ((::System::Single(*)(::MoleMole::EntityHandle&))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_A4CF27E397393115_OFFSET))(a1);
	}

	static ::Enum_3_590214B1C850A70F Method_1_AA24ACE6DC9948B7()
	{
		return ((::Enum_3_590214B1C850A70F(*)())((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_AA24ACE6DC9948B7_OFFSET))();
	}

	static ::System::ValueTuple_3<::Struct_2_74C6EE564641CFF8, ::Struct_2_74C6EE564641CFF8, ::Struct_2_870A2C4023B05F0B> Method_1_59A95DDBE5FD7EAF(::System::ValueTuple_2<::MoleMole::Config::ConfigCircularSector3D, ::Struct_2_D0732A9EE482521E>& a1, ::Struct_2_D0732A9EE482521E& a2)
	{
		return ((::System::ValueTuple_3<::Struct_2_74C6EE564641CFF8, ::Struct_2_74C6EE564641CFF8, ::Struct_2_870A2C4023B05F0B>(*)(::System::ValueTuple_2<::MoleMole::Config::ConfigCircularSector3D, ::Struct_2_D0732A9EE482521E>&, ::Struct_2_D0732A9EE482521E&))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_59A95DDBE5FD7EAF_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_449A7DD0254C81A3()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_449A7DD0254C81A3_OFFSET))();
	}

	static ::Class_3_DD81183BF1438207* Method_1_12F619E2DA0F67D1(::Class_2_3A7E865224D42F8A*& a1, ::Class_1_E6FFFFD82483DB9E*& a2)
	{
		return ((::Class_3_DD81183BF1438207*(*)(::Class_2_3A7E865224D42F8A*&, ::Class_1_E6FFFFD82483DB9E*&))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_12F619E2DA0F67D1_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_D8B3AC54FF6C5D53(::Class_2_72BDD67FEA972F1C* a1)
	{
		return ((::System::Boolean(*)(::Class_2_72BDD67FEA972F1C*))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_D8B3AC54FF6C5D53_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_0B40089A5B5C3FB1(::Class_2_72BDD67FEA972F1C*& a1, ::Class_1_43BD383C98B4C0C5_49*& a2, ::MoleMole::EntityHandle& a3)
	{
		return ((::System::Boolean(*)(::Class_2_72BDD67FEA972F1C*&, ::Class_1_43BD383C98B4C0C5_49*&, ::MoleMole::EntityHandle&))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_0B40089A5B5C3FB1_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_F9DFE5ED808CF67F(::Class_2_72BDD67FEA972F1C* a1)
	{
		return ((::System::Boolean(*)(::Class_2_72BDD67FEA972F1C*))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_F9DFE5ED808CF67F_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F65AC83AA4591BFC(::MoleMole::Config::ConfigInteractionFanCylinder a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Config::ConfigInteractionFanCylinder))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_F65AC83AA4591BFC_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_CA1F7DC254432E8F_1(::Foundation::ViewObject::ViewObjectHandle& a1)
	{
		return ((::System::Boolean(*)(::Foundation::ViewObject::ViewObjectHandle&))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_CA1F7DC254432E8F_1_OFFSET))(a1);
	}

	static ::Struct_2_74C6EE564641CFF8 Method_1_83A1E89BF484B0EB(::System::ValueTuple_2<::MoleMole::Config::ConfigCircularSector3D, ::Struct_2_D0732A9EE482521E>& a1)
	{
		return ((::Struct_2_74C6EE564641CFF8(*)(::System::ValueTuple_2<::MoleMole::Config::ConfigCircularSector3D, ::Struct_2_D0732A9EE482521E>&))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_83A1E89BF484B0EB_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_897587484972E418(::MoleMole::EntityHandle& a1, ::Class_3_DD81183BF1438207*& a2)
	{
		return ((::System::Boolean(*)(::MoleMole::EntityHandle&, ::Class_3_DD81183BF1438207*&))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_897587484972E418_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2DBF804138F5DA90(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_2DBF804138F5DA90_OFFSET))(a1, a2);
	}

	static ::Struct_2_74C6EE564641CFF8 Method_1_69D74E19A9F3D397(::MoleMole::Config::ConfigCircularSector3D a1)
	{
		return ((::Struct_2_74C6EE564641CFF8(*)(::MoleMole::Config::ConfigCircularSector3D))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_69D74E19A9F3D397_OFFSET))(a1);
	}

	static ::System::Single Method_1_237DC8C6EAD8055C(::Foundation::Unreal::FTransform& a1, ::Foundation::Unreal::FTransform& a2, ::System::Single& a3, ::System::Single& a4)
	{
		return ((::System::Single(*)(::Foundation::Unreal::FTransform&, ::Foundation::Unreal::FTransform&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_237DC8C6EAD8055C_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_AA1B4A8D7F75116E(::MoleMole::Config::ConfigCircularSector3D& a1, ::Class_2_0C6A364076BE9BB5*& a2)
	{
		return ((::System::Boolean(*)(::MoleMole::Config::ConfigCircularSector3D&, ::Class_2_0C6A364076BE9BB5*&))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_AA1B4A8D7F75116E_OFFSET))(a1, a2);
	}

	static ::Class_1_06B1338741BDFCD0* Method_1_5EED8EDF891E4F3F()
	{
		return ((::Class_1_06B1338741BDFCD0*(*)())((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_5EED8EDF891E4F3F_OFFSET))();
	}

	static ::System::Boolean Method_1_4D7DAD0E39981B78(::Class_2_72BDD67FEA972F1C* a1, ::Class_1_43BD383C98B4C0C5_49*& a2, ::MoleMole::EntityHandle& a3)
	{
		return ((::System::Boolean(*)(::Class_2_72BDD67FEA972F1C*, ::Class_1_43BD383C98B4C0C5_49*&, ::MoleMole::EntityHandle&))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_4D7DAD0E39981B78_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_08C7418911474ABE(::Class_3_DD81183BF1438207*& a1)
	{
		return ((::System::Boolean(*)(::Class_3_DD81183BF1438207*&))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_08C7418911474ABE_OFFSET))(a1);
	}

	static ::Struct_2_45B62668F0BA5CF8 Method_1_3B6052B3C18B3A64(::Struct_2_EB409772687773A2_1& a1)
	{
		return ((::Struct_2_45B62668F0BA5CF8(*)(::Struct_2_EB409772687773A2_1&))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_3B6052B3C18B3A64_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_BCD4984B7193EBAE(::MoleMole::EntityHandle& a1, ::System::String*& a2)
	{
		return ((::System::Boolean(*)(::MoleMole::EntityHandle&, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_BCD4984B7193EBAE_OFFSET))(a1, a2);
	}

	static ::Struct_2_409E294815B4CE48 Method_1_62DA4BB42DBD2F24(::Struct_2_984AA94FB23486F9_2& a1, ::Struct_2_D0732A9EE482521E& a2)
	{
		return ((::Struct_2_409E294815B4CE48(*)(::Struct_2_984AA94FB23486F9_2&, ::Struct_2_D0732A9EE482521E&))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_62DA4BB42DBD2F24_OFFSET))(a1, a2);
	}

	static ::System::Single Method_1_35558F5E75FE4CE5(::UnityEngine::Collider* a1)
	{
		return ((::System::Single(*)(::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_35558F5E75FE4CE5_OFFSET))(a1);
	}

	static ::Class_3_DD81183BF1438207* Method_1_C82BBF168012F343(::Class_2_3A7E865224D42F8A*& a1, ::Class_1_E6FFFFD82483DB9E*& a2, ::MoleMole::EntityHandle& a3)
	{
		return ((::Class_3_DD81183BF1438207*(*)(::Class_2_3A7E865224D42F8A*&, ::Class_1_E6FFFFD82483DB9E*&, ::MoleMole::EntityHandle&))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_C82BBF168012F343_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_449A7DD0254C81A3_1()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_449A7DD0254C81A3_1_OFFSET))();
	}

	static ::System::Single Method_1_52A3FEDD63707B13(::System::Single a1)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_52A3FEDD63707B13_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_531E6B6F3F4C19E2(::MoleMole::Config::ConfigInteractionFanCylinder& a1, ::Class_3_DD81183BF1438207*& a2, ::System::Single& a3)
	{
		return ((::System::Boolean(*)(::MoleMole::Config::ConfigInteractionFanCylinder&, ::Class_3_DD81183BF1438207*&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_METHOD_1_531E6B6F3F4C19E2_OFFSET))(a1, a2, a3);
	}
};
