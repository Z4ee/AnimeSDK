#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Vehicle/VehicleControlInput.h"
#include "unitysdk/Struct_2_1B34AC822988DAB1.h"
#include "unitysdk/Struct_2_6E1B724B14572104_5.h"
#include "unitysdk/Struct_2_A0DCDC0C49E88627.h"
#include "unitysdk/Struct_2_A0DCDC0C49E88627_Enum_3_6CD40AC38147E2AC.h"
#include "unitysdk/Struct_2_A5F3F97A94B01E4C_1.h"
#include "unitysdk/Struct_2_B868F9E0979D2EE8.h"
#include "unitysdk/Struct_2_BA49C0837CB7956A.h"
#include "unitysdk/Struct_2_BA76FAC59DBCB80D.h"
#include "unitysdk/Struct_2_EFC517AD0B056245.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_0698DCBDF48031C1;
namespace MoleMole::Vehicle { class VehicleConfig; }
namespace UnityEngine { class Transform; }

#define CLASS_1_563051C0C7EF9F5C_METHOD_1_090740344CAC81EE_OFFSET UNITYSDK_OFFSET(0x1451E990)
#define CLASS_1_563051C0C7EF9F5C_METHOD_1_10BA33E5106447FB_OFFSET UNITYSDK_OFFSET(0x1451FB50)
#define CLASS_1_563051C0C7EF9F5C_METHOD_1_1B9D1609D109354C_OFFSET UNITYSDK_OFFSET(0x1451D480)
#define CLASS_1_563051C0C7EF9F5C_METHOD_1_1F5E8B49C371604B_OFFSET UNITYSDK_OFFSET(0x1451F4E0)
#define CLASS_1_563051C0C7EF9F5C_METHOD_1_299654759D4DDDC9_OFFSET UNITYSDK_OFFSET(0x1451EBB0)
#define CLASS_1_563051C0C7EF9F5C_METHOD_1_2AFB6BBB367D3DC0_OFFSET UNITYSDK_OFFSET(0x1451F6C0)
#define CLASS_1_563051C0C7EF9F5C_METHOD_1_3422201382CE593B_OFFSET UNITYSDK_OFFSET(0x1451FF50)
#define CLASS_1_563051C0C7EF9F5C_METHOD_1_5323F2DF46A044DA_1_OFFSET UNITYSDK_OFFSET(0x1451CDC0)
#define CLASS_1_563051C0C7EF9F5C_METHOD_1_5323F2DF46A044DA_2_OFFSET UNITYSDK_OFFSET(0x1451EBA0)
#define CLASS_1_563051C0C7EF9F5C_METHOD_1_5323F2DF46A044DA_3_OFFSET UNITYSDK_OFFSET(0x145207F0)
#define CLASS_1_563051C0C7EF9F5C_METHOD_1_5323F2DF46A044DA_4_OFFSET UNITYSDK_OFFSET(0x14520820)
#define CLASS_1_563051C0C7EF9F5C_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x1451CDB0)
#define CLASS_1_563051C0C7EF9F5C_METHOD_1_570C5557A774C69E_OFFSET UNITYSDK_OFFSET(0x1451EE70)
#define CLASS_1_563051C0C7EF9F5C_METHOD_1_58C15A7060DC2B5A_OFFSET UNITYSDK_OFFSET(0x1451DFE0)
#define CLASS_1_563051C0C7EF9F5C_METHOD_1_68A2CA32DC720C44_OFFSET UNITYSDK_OFFSET(0x1451CAC0)
#define CLASS_1_563051C0C7EF9F5C_METHOD_1_6DBF6F974FD0BF92_OFFSET UNITYSDK_OFFSET(0x1451E5D0)
#define CLASS_1_563051C0C7EF9F5C_METHOD_1_77FD543600E00498_OFFSET UNITYSDK_OFFSET(0x1451EFB0)
#define CLASS_1_563051C0C7EF9F5C_METHOD_1_874846059EAFD17F_OFFSET UNITYSDK_OFFSET(0x1451EF60)
#define CLASS_1_563051C0C7EF9F5C_METHOD_1_91C638630F1EEE79_OFFSET UNITYSDK_OFFSET(0x1451F610)
#define CLASS_1_563051C0C7EF9F5C_METHOD_1_9519C6B76A1D0897_OFFSET UNITYSDK_OFFSET(0x1451F800)
#define CLASS_1_563051C0C7EF9F5C_METHOD_1_970C37CAE66934C3_OFFSET UNITYSDK_OFFSET(0x145205A0)
#define CLASS_1_563051C0C7EF9F5C_METHOD_1_A9028653D936EDE2_OFFSET UNITYSDK_OFFSET(0x1451CDD0)
#define CLASS_1_563051C0C7EF9F5C_METHOD_1_AB508AA7C4C9D894_OFFSET UNITYSDK_OFFSET(0x1451C9F0)
#define CLASS_1_563051C0C7EF9F5C_METHOD_1_ABEFD375EB6CEBE0_OFFSET UNITYSDK_OFFSET(0x1451D2E0)
#define CLASS_1_563051C0C7EF9F5C_METHOD_1_BE64D436ED6799A8_OFFSET UNITYSDK_OFFSET(0x1451E3E0)
#define CLASS_1_563051C0C7EF9F5C_METHOD_1_C3B113AF6205EF51_OFFSET UNITYSDK_OFFSET(0x1451C810)
#define CLASS_1_563051C0C7EF9F5C_METHOD_1_C7741A1A6CA74398_OFFSET UNITYSDK_OFFSET(0x14520090)
#define CLASS_1_563051C0C7EF9F5C_METHOD_1_C93FC4D17E1407D3_OFFSET UNITYSDK_OFFSET(0x1451F270)
#define CLASS_1_563051C0C7EF9F5C_METHOD_1_D37FAD0A6AA04B25_OFFSET UNITYSDK_OFFSET(0x14520800)
#define CLASS_1_563051C0C7EF9F5C_METHOD_1_D437D090E63BE8A7_OFFSET UNITYSDK_OFFSET(0x1451F1C0)
#define CLASS_1_563051C0C7EF9F5C_METHOD_1_DD99DFCC28018665_OFFSET UNITYSDK_OFFSET(0x1451EA50)
#define CLASS_1_563051C0C7EF9F5C_METHOD_1_ECF5752EC6D68585_OFFSET UNITYSDK_OFFSET(0x1451FFE0)
#define CLASS_1_563051C0C7EF9F5C_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x14520580)
#define CLASS_1_563051C0C7EF9F5C_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x14520080)
#define CLASS_1_563051C0C7EF9F5C_METHOD_1_F10A0D072D26C4BF_OFFSET UNITYSDK_OFFSET(0x1451E7C0)
#define CLASS_1_563051C0C7EF9F5C_METHOD_1_F6945418C3EF6D3A_OFFSET UNITYSDK_OFFSET(0x1451C910)
#define CLASS_1_563051C0C7EF9F5C_METHOD_1_FB4BE762B6186C23_1_OFFSET UNITYSDK_OFFSET(0x1451F5F0)
#define CLASS_1_563051C0C7EF9F5C_METHOD_1_FB4BE762B6186C23_2_OFFSET UNITYSDK_OFFSET(0x1451FAE0)
#define CLASS_1_563051C0C7EF9F5C_METHOD_1_FB4BE762B6186C23_OFFSET UNITYSDK_OFFSET(0x1451E7A0)
#define CLASS_1_563051C0C7EF9F5C_METHOD_1_FD1EFD5A6E481F5B_1_OFFSET UNITYSDK_OFFSET(0x1451C980)
#define CLASS_1_563051C0C7EF9F5C_METHOD_1_FD1EFD5A6E481F5B_OFFSET UNITYSDK_OFFSET(0x1451F580)
#define CLASS_1_563051C0C7EF9F5C_METHOD_1_FF7B2911BBACA4A9_1_OFFSET UNITYSDK_OFFSET(0x1451EE10)
#define CLASS_1_563051C0C7EF9F5C_METHOD_1_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0x1451E380)
#define CLASS_1_563051C0C7EF9F5C__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1451CD10)
#define CLASS_1_563051C0C7EF9F5C__CTOR_OFFSET UNITYSDK_OFFSET(0x1451C2D0)

inline static constexpr unsigned int Class_1_563051C0C7EF9F5C_TypeDefinitionIndex = 84264;

class Class_1_563051C0C7EF9F5C : public ::System::Object
{
public:
	// static const ::System::Single Field_1_0; // 0x0
	// static const ::System::Single Field_1_1; // 0x0
	// static const ::System::Single Field_1_2; // 0x0
	// static const ::System::Single Field_1_3; // 0x0
	// static const ::System::Single Field_1_4; // 0x0
	::MoleMole::Vehicle::VehicleConfig* Field_1_13; // 0x10
	::Struct_2_B868F9E0979D2EE8 Field_1_14; // 0x18
	::System::Single Field_1_12; // 0x48
	::System::Single Field_1_16; // 0x4C
	::System::Single Field_1_19; // 0x50
	::Struct_2_BA76FAC59DBCB80D Field_1_25; // 0x54
	::System::Single Field_1_23; // 0x68
	::System::Single Field_1_5; // 0x6C
	::System::Single Field_1_6; // 0x70
	::System::Single Field_1_15; // 0x74
	::System::Boolean Field_1_10; // 0x78
	::System::Boolean Field_1_9; // 0x79
	::System::Single Field_1_7; // 0x7C
	::System::Single Field_1_22; // 0x80
	::Struct_2_BA49C0837CB7956A Field_1_24; // 0x84
	::System::Single Field_1_20; // 0x94
	::System::Single Field_1_11; // 0x98
	::System::Single Field_1_18; // 0x9C
	::Struct_2_EFC517AD0B056245 Field_1_26; // 0xA0
	::System::Single Field_1_17; // 0xB4
	::System::Single Field_1_21; // 0xB8
	::UnityEngine::Vector3 Field_1_8; // 0xBC

	::System::Void _ctor(::MoleMole::Vehicle::VehicleConfig* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Vehicle::VehicleConfig*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_563051C0C7EF9F5C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1(::Class_1_563051C0C7EF9F5C* a1, ::MoleMole::Vehicle::VehicleConfig* a2, ::UnityEngine::Transform* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_563051C0C7EF9F5C*, ::MoleMole::Vehicle::VehicleConfig*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_563051C0C7EF9F5C__CTOR_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_563051C0C7EF9F5C_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Single Method_1_5323F2DF46A044DA_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_563051C0C7EF9F5C_METHOD_1_5323F2DF46A044DA_1_OFFSET))(this);
	}

	::Struct_2_A5F3F97A94B01E4C_1 Method_1_A9028653D936EDE2(::MoleMole::Vehicle::VehicleControlInput& a1, ::System::Single a2, ::System::Boolean a3, ::System::Boolean a4, ::Struct_2_A0DCDC0C49E88627_Enum_3_6CD40AC38147E2AC a5, ::UnityEngine::Vector3 a6)
	{
		return ((::Struct_2_A5F3F97A94B01E4C_1(*)(::PVOID, ::MoleMole::Vehicle::VehicleControlInput&, ::System::Single, ::System::Boolean, ::System::Boolean, ::Struct_2_A0DCDC0C49E88627_Enum_3_6CD40AC38147E2AC, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_563051C0C7EF9F5C_METHOD_1_A9028653D936EDE2_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Single Method_1_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_563051C0C7EF9F5C_METHOD_1_FF7B2911BBACA4A9_OFFSET))(this);
	}

	::System::Void Method_1_BE64D436ED6799A8(::System::Single a1, ::System::Single a2, ::System::Single a3, ::Struct_2_1B34AC822988DAB1& a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::Struct_2_1B34AC822988DAB1&))((::PBYTE)hIl2Cpp + CLASS_1_563051C0C7EF9F5C_METHOD_1_BE64D436ED6799A8_OFFSET))(this, a1, a2, a3, a4);
	}

	::UnityEngine::Vector3 Method_1_F10A0D072D26C4BF()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_563051C0C7EF9F5C_METHOD_1_F10A0D072D26C4BF_OFFSET))(this);
	}

	static ::System::Single Method_1_090740344CAC81EE(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_563051C0C7EF9F5C_METHOD_1_090740344CAC81EE_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_1_ABEFD375EB6CEBE0(::MoleMole::Vehicle::VehicleControlInput& a1, ::Struct_2_A0DCDC0C49E88627_Enum_3_6CD40AC38147E2AC a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Vehicle::VehicleControlInput&, ::Struct_2_A0DCDC0C49E88627_Enum_3_6CD40AC38147E2AC, ::System::Boolean, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_563051C0C7EF9F5C_METHOD_1_ABEFD375EB6CEBE0_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Single Method_1_DD99DFCC28018665(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_563051C0C7EF9F5C_METHOD_1_DD99DFCC28018665_OFFSET))(this, a1);
	}

	::System::Single Method_1_5323F2DF46A044DA_2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_563051C0C7EF9F5C_METHOD_1_5323F2DF46A044DA_2_OFFSET))(this);
	}

	::System::Single Method_1_FB4BE762B6186C23()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_563051C0C7EF9F5C_METHOD_1_FB4BE762B6186C23_OFFSET))(this);
	}

	::System::Single Method_1_299654759D4DDDC9(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_563051C0C7EF9F5C_METHOD_1_299654759D4DDDC9_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_874846059EAFD17F()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_563051C0C7EF9F5C_METHOD_1_874846059EAFD17F_OFFSET))(this);
	}

	::Struct_2_6E1B724B14572104_5 Method_1_1B9D1609D109354C(::System::Single a1)
	{
		return ((::Struct_2_6E1B724B14572104_5(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_563051C0C7EF9F5C_METHOD_1_1B9D1609D109354C_OFFSET))(this, a1);
	}

	static ::System::Single Method_1_AB508AA7C4C9D894(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_563051C0C7EF9F5C_METHOD_1_AB508AA7C4C9D894_OFFSET))(a1, a2, a3, a4);
	}

	::System::Single Method_1_FB4BE762B6186C23_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_563051C0C7EF9F5C_METHOD_1_FB4BE762B6186C23_1_OFFSET))(this);
	}

	static ::UnityEngine::Vector3 Method_1_2AFB6BBB367D3DC0(::System::Single a1, ::UnityEngine::Vector3 a2)
	{
		return ((::UnityEngine::Vector3(*)(::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_563051C0C7EF9F5C_METHOD_1_2AFB6BBB367D3DC0_OFFSET))(a1, a2);
	}

	::System::Single Method_1_D437D090E63BE8A7(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_563051C0C7EF9F5C_METHOD_1_D437D090E63BE8A7_OFFSET))(this, a1);
	}

	static ::System::Single Method_1_1F5E8B49C371604B(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_563051C0C7EF9F5C_METHOD_1_1F5E8B49C371604B_OFFSET))(a1, a2, a3, a4);
	}

	::UnityEngine::Vector3 Method_1_58C15A7060DC2B5A(::Struct_2_6E1B724B14572104_5& a1, ::System::Single a2, ::System::Boolean a3)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Struct_2_6E1B724B14572104_5&, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_563051C0C7EF9F5C_METHOD_1_58C15A7060DC2B5A_OFFSET))(this, a1, a2, a3);
	}

	::System::Single Method_1_570C5557A774C69E(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_563051C0C7EF9F5C_METHOD_1_570C5557A774C69E_OFFSET))(this, a1);
	}

	::System::Single Method_1_FB4BE762B6186C23_2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_563051C0C7EF9F5C_METHOD_1_FB4BE762B6186C23_2_OFFSET))(this);
	}

	::System::Void Method_1_10BA33E5106447FB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_563051C0C7EF9F5C_METHOD_1_10BA33E5106447FB_OFFSET))(this, a1);
	}

	::System::Single Method_1_3422201382CE593B()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_563051C0C7EF9F5C_METHOD_1_3422201382CE593B_OFFSET))(this);
	}

	static ::System::Single Method_1_ECF5752EC6D68585(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_563051C0C7EF9F5C_METHOD_1_ECF5752EC6D68585_OFFSET))(a1, a2);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_563051C0C7EF9F5C_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Single Method_1_C93FC4D17E1407D3(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_563051C0C7EF9F5C_METHOD_1_C93FC4D17E1407D3_OFFSET))(this, a1, a2);
	}

	static ::System::Single Method_1_FD1EFD5A6E481F5B(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_563051C0C7EF9F5C_METHOD_1_FD1EFD5A6E481F5B_OFFSET))(a1, a2);
	}

	::System::Void Method_1_C7741A1A6CA74398(::Struct_2_A0DCDC0C49E88627& a1, ::Class_1_0698DCBDF48031C1* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_A0DCDC0C49E88627&, ::Class_1_0698DCBDF48031C1*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_563051C0C7EF9F5C_METHOD_1_C7741A1A6CA74398_OFFSET))(this, a1, a2, a3);
	}

	::System::Single Method_1_68A2CA32DC720C44()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_563051C0C7EF9F5C_METHOD_1_68A2CA32DC720C44_OFFSET))(this);
	}

	::System::Single Method_1_6DBF6F974FD0BF92(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_563051C0C7EF9F5C_METHOD_1_6DBF6F974FD0BF92_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_970C37CAE66934C3(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_563051C0C7EF9F5C_METHOD_1_970C37CAE66934C3_OFFSET))(this, a1);
	}

	::System::Single Method_1_5323F2DF46A044DA_3()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_563051C0C7EF9F5C_METHOD_1_5323F2DF46A044DA_3_OFFSET))(this);
	}

	static ::System::Single Method_1_91C638630F1EEE79(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_563051C0C7EF9F5C_METHOD_1_91C638630F1EEE79_OFFSET))(a1, a2, a3);
	}

	::System::Single Method_1_FF7B2911BBACA4A9_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_563051C0C7EF9F5C_METHOD_1_FF7B2911BBACA4A9_1_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_77FD543600E00498()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_563051C0C7EF9F5C_METHOD_1_77FD543600E00498_OFFSET))(this);
	}

	::System::ValueTuple_2<::System::Single, ::System::Single> Method_1_F6945418C3EF6D3A(::System::Single a1)
	{
		return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_563051C0C7EF9F5C_METHOD_1_F6945418C3EF6D3A_OFFSET))(this, a1);
	}

	static ::System::Single Method_1_FD1EFD5A6E481F5B_1(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_563051C0C7EF9F5C_METHOD_1_FD1EFD5A6E481F5B_1_OFFSET))(a1, a2);
	}

	::UnityEngine::Vector3 Method_1_D37FAD0A6AA04B25()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_563051C0C7EF9F5C_METHOD_1_D37FAD0A6AA04B25_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_563051C0C7EF9F5C_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	static ::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3> Method_1_9519C6B76A1D0897(::System::Single a1, ::System::Single a2, ::System::Single a3, ::UnityEngine::Vector3 a4)
	{
		return ((::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3>(*)(::System::Single, ::System::Single, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_563051C0C7EF9F5C_METHOD_1_9519C6B76A1D0897_OFFSET))(a1, a2, a3, a4);
	}

	static ::UnityEngine::Vector3 Method_1_C3B113AF6205EF51(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_563051C0C7EF9F5C_METHOD_1_C3B113AF6205EF51_OFFSET))(a1);
	}

	::System::Single Method_1_5323F2DF46A044DA_4()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_563051C0C7EF9F5C_METHOD_1_5323F2DF46A044DA_4_OFFSET))(this);
	}
};
