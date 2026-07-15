#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeSpeakerPolicy.h"
#include "unitysdk/RPG/GameCore/CakeValidAreaType.h"
#include "unitysdk/System/Object.h"

class Class_1_1C87E05DC1AC3C04;
class Class_1_3745C69C00F04B7D_5;
class Class_1_B9D6E7E76075C6E2;
class Class_1_CCF20DC2AAC0169A;
class Class_1_D1601FECDF0AF831;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_3ED5A82F1CC73B98_GET_ISPLAYERINRANGE_OFFSET UNITYSDK_OFFSET(0x186C6240)
#define CLASS_1_3ED5A82F1CC73B98_METHOD_1_068B4AEAE065BF6B_OFFSET UNITYSDK_OFFSET(0x186C4A70)
#define CLASS_1_3ED5A82F1CC73B98_METHOD_1_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0x186C2110)
#define CLASS_1_3ED5A82F1CC73B98_METHOD_1_1AC95E6AE9F6E5EE_OFFSET UNITYSDK_OFFSET(0x186C4410)
#define CLASS_1_3ED5A82F1CC73B98_METHOD_1_1C78EE63BA50E1F4_OFFSET UNITYSDK_OFFSET(0x186C5160)
#define CLASS_1_3ED5A82F1CC73B98_METHOD_1_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x186C5020)
#define CLASS_1_3ED5A82F1CC73B98_METHOD_1_2ADDC85169A509AB_OFFSET UNITYSDK_OFFSET(0x186C30A0)
#define CLASS_1_3ED5A82F1CC73B98_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x186C2290)
#define CLASS_1_3ED5A82F1CC73B98_METHOD_1_3C21BDEDBD6FE047_OFFSET UNITYSDK_OFFSET(0x186C5F70)
#define CLASS_1_3ED5A82F1CC73B98_METHOD_1_3F2E29BF8C9EC4BD_OFFSET UNITYSDK_OFFSET(0x186C48B0)
#define CLASS_1_3ED5A82F1CC73B98_METHOD_1_411E7A8435321DF1_OFFSET UNITYSDK_OFFSET(0x186C3D60)
#define CLASS_1_3ED5A82F1CC73B98_METHOD_1_43D99DDD80B1E30C_OFFSET UNITYSDK_OFFSET(0x186C3730)
#define CLASS_1_3ED5A82F1CC73B98_METHOD_1_459C79521BFE514E_OFFSET UNITYSDK_OFFSET(0x186C2F80)
#define CLASS_1_3ED5A82F1CC73B98_METHOD_1_4C6E61AF390E97BC_OFFSET UNITYSDK_OFFSET(0x186C4230)
#define CLASS_1_3ED5A82F1CC73B98_METHOD_1_583809286E1C016E_OFFSET UNITYSDK_OFFSET(0x186C5BC0)
#define CLASS_1_3ED5A82F1CC73B98_METHOD_1_5CC03502EAD4F9B5_OFFSET UNITYSDK_OFFSET(0x186C40D0)
#define CLASS_1_3ED5A82F1CC73B98_METHOD_1_5FEC3C6C90DDD082_OFFSET UNITYSDK_OFFSET(0x186C4D60)
#define CLASS_1_3ED5A82F1CC73B98_METHOD_1_640F4AE91A2BCEF7_OFFSET UNITYSDK_OFFSET(0x186C5330)
#define CLASS_1_3ED5A82F1CC73B98_METHOD_1_7B411317D337F87A_OFFSET UNITYSDK_OFFSET(0x186C3130)
#define CLASS_1_3ED5A82F1CC73B98_METHOD_1_8131D4D8C02BAA62_OFFSET UNITYSDK_OFFSET(0x186C39C0)
#define CLASS_1_3ED5A82F1CC73B98_METHOD_1_834AF38C8CA52142_1_OFFSET UNITYSDK_OFFSET(0x186C4820)
#define CLASS_1_3ED5A82F1CC73B98_METHOD_1_834AF38C8CA52142_OFFSET UNITYSDK_OFFSET(0x186C4550)
#define CLASS_1_3ED5A82F1CC73B98_METHOD_1_85B15CC64C647D47_OFFSET UNITYSDK_OFFSET(0x186C5CF0)
#define CLASS_1_3ED5A82F1CC73B98_METHOD_1_9064EB805F8736A6_OFFSET UNITYSDK_OFFSET(0x186C45E0)
#define CLASS_1_3ED5A82F1CC73B98_METHOD_1_921C3C3E09D59CD4_OFFSET UNITYSDK_OFFSET(0x186C2360)
#define CLASS_1_3ED5A82F1CC73B98_METHOD_1_9CF94858353BDDAE_OFFSET UNITYSDK_OFFSET(0x186C42C0)
#define CLASS_1_3ED5A82F1CC73B98_METHOD_1_A27DC2C5A103933A_1_OFFSET UNITYSDK_OFFSET(0x186C2980)
#define CLASS_1_3ED5A82F1CC73B98_METHOD_1_A27DC2C5A103933A_OFFSET UNITYSDK_OFFSET(0x186C2410)
#define CLASS_1_3ED5A82F1CC73B98_METHOD_1_ABEAB8AF7FE7565E_OFFSET UNITYSDK_OFFSET(0x186C5A90)
#define CLASS_1_3ED5A82F1CC73B98_METHOD_1_AEFABE6F39C8AC14_OFFSET UNITYSDK_OFFSET(0x186C60B0)
#define CLASS_1_3ED5A82F1CC73B98_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x186C2EF0)
#define CLASS_1_3ED5A82F1CC73B98_METHOD_1_B2FFCD73952844ED_OFFSET UNITYSDK_OFFSET(0x186C5580)
#define CLASS_1_3ED5A82F1CC73B98_METHOD_1_C162117C603CDA29_OFFSET UNITYSDK_OFFSET(0x186C52A0)
#define CLASS_1_3ED5A82F1CC73B98_METHOD_1_D24807D5AA3CAD5D_OFFSET UNITYSDK_OFFSET(0x186C5720)
#define CLASS_1_3ED5A82F1CC73B98_METHOD_1_D46323BB19F85803_1_OFFSET UNITYSDK_OFFSET(0x186C4F10)
#define CLASS_1_3ED5A82F1CC73B98_METHOD_1_D46323BB19F85803_OFFSET UNITYSDK_OFFSET(0x186C4960)
#define CLASS_1_3ED5A82F1CC73B98_METHOD_1_EB7A7FABD82F88FB_OFFSET UNITYSDK_OFFSET(0x186C5B40)
#define CLASS_1_3ED5A82F1CC73B98_METHOD_1_EE5274A6BA3552C8_OFFSET UNITYSDK_OFFSET(0x186C3A20)
#define CLASS_1_3ED5A82F1CC73B98_SET_ISPLAYERINRANGE_OFFSET UNITYSDK_OFFSET(0x186C6250)
#define CLASS_1_3ED5A82F1CC73B98__CTOR_OFFSET UNITYSDK_OFFSET(0x186C6260)

inline static constexpr unsigned int Class_1_3ED5A82F1CC73B98_TypeDefinitionIndex = 60214;

class Class_1_3ED5A82F1CC73B98 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::Class_1_CCF20DC2AAC0169A*>*>*>* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CakeValidAreaType, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::Class_1_CCF20DC2AAC0169A*>*>*>* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::Class_1_D1601FECDF0AF831*>* Field_1_2; // 0x20
	::System::Int32 Field_1_3; // 0x28
	::System::Boolean _IsPlayerInRange_k__BackingField; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3ED5A82F1CC73B98__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3ED5A82F1CC73B98_METHOD_1_0865E94460F11643_OFFSET))(this);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3ED5A82F1CC73B98_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_1_459C79521BFE514E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_3ED5A82F1CC73B98_METHOD_1_459C79521BFE514E_OFFSET))(this, a1);
	}

	::System::Void Method_1_921C3C3E09D59CD4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3ED5A82F1CC73B98_METHOD_1_921C3C3E09D59CD4_OFFSET))(this);
	}

	::System::Void Method_1_A27DC2C5A103933A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3ED5A82F1CC73B98_METHOD_1_A27DC2C5A103933A_OFFSET))(this);
	}

	::System::Void Method_1_A27DC2C5A103933A_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3ED5A82F1CC73B98_METHOD_1_A27DC2C5A103933A_1_OFFSET))(this);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3ED5A82F1CC73B98_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_1_2ADDC85169A509AB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3ED5A82F1CC73B98_METHOD_1_2ADDC85169A509AB_OFFSET))(this);
	}

	::System::Void Method_1_7B411317D337F87A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3ED5A82F1CC73B98_METHOD_1_7B411317D337F87A_OFFSET))(this);
	}

	::System::Void Method_1_EE5274A6BA3552C8(::RPG::GameCore::CakeValidAreaType a1, ::System::UInt32 a2, ::Class_1_CCF20DC2AAC0169A* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeValidAreaType, ::System::UInt32, ::Class_1_CCF20DC2AAC0169A*))((::PBYTE)hIl2Cpp + CLASS_1_3ED5A82F1CC73B98_METHOD_1_EE5274A6BA3552C8_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_411E7A8435321DF1(::RPG::GameCore::CakeValidAreaType a1, ::System::UInt32 a2, ::Class_1_CCF20DC2AAC0169A* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeValidAreaType, ::System::UInt32, ::Class_1_CCF20DC2AAC0169A*))((::PBYTE)hIl2Cpp + CLASS_1_3ED5A82F1CC73B98_METHOD_1_411E7A8435321DF1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_43D99DDD80B1E30C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3ED5A82F1CC73B98_METHOD_1_43D99DDD80B1E30C_OFFSET))(this);
	}

	::System::Void Method_1_8131D4D8C02BAA62()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3ED5A82F1CC73B98_METHOD_1_8131D4D8C02BAA62_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_B9D6E7E76075C6E2*>* Method_1_5CC03502EAD4F9B5()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_B9D6E7E76075C6E2*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3ED5A82F1CC73B98_METHOD_1_5CC03502EAD4F9B5_OFFSET))(this);
	}

	::System::Void Method_1_1AC95E6AE9F6E5EE(::Class_1_D1601FECDF0AF831* a1, ::System::Collections::Generic::List_1<::Class_1_B9D6E7E76075C6E2*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D1601FECDF0AF831*, ::System::Collections::Generic::List_1<::Class_1_B9D6E7E76075C6E2*>*))((::PBYTE)hIl2Cpp + CLASS_1_3ED5A82F1CC73B98_METHOD_1_1AC95E6AE9F6E5EE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_834AF38C8CA52142(::Class_1_D1601FECDF0AF831* a1, ::System::Collections::Generic::List_1<::Class_1_B9D6E7E76075C6E2*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D1601FECDF0AF831*, ::System::Collections::Generic::List_1<::Class_1_B9D6E7E76075C6E2*>*))((::PBYTE)hIl2Cpp + CLASS_1_3ED5A82F1CC73B98_METHOD_1_834AF38C8CA52142_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9064EB805F8736A6(::Class_1_D1601FECDF0AF831* a1, ::System::Collections::Generic::List_1<::Class_1_B9D6E7E76075C6E2*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D1601FECDF0AF831*, ::System::Collections::Generic::List_1<::Class_1_B9D6E7E76075C6E2*>*))((::PBYTE)hIl2Cpp + CLASS_1_3ED5A82F1CC73B98_METHOD_1_9064EB805F8736A6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_834AF38C8CA52142_1(::Class_1_D1601FECDF0AF831* a1, ::System::Collections::Generic::List_1<::Class_1_B9D6E7E76075C6E2*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D1601FECDF0AF831*, ::System::Collections::Generic::List_1<::Class_1_B9D6E7E76075C6E2*>*))((::PBYTE)hIl2Cpp + CLASS_1_3ED5A82F1CC73B98_METHOD_1_834AF38C8CA52142_1_OFFSET))(this, a1, a2);
	}

	::Class_1_B9D6E7E76075C6E2* Method_1_4C6E61AF390E97BC(::System::Collections::Generic::List_1<::Class_1_B9D6E7E76075C6E2*>* a1)
	{
		return ((::Class_1_B9D6E7E76075C6E2*(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_B9D6E7E76075C6E2*>*))((::PBYTE)hIl2Cpp + CLASS_1_3ED5A82F1CC73B98_METHOD_1_4C6E61AF390E97BC_OFFSET))(this, a1);
	}

	::System::Void Method_1_9CF94858353BDDAE(::Class_1_B9D6E7E76075C6E2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B9D6E7E76075C6E2*))((::PBYTE)hIl2Cpp + CLASS_1_3ED5A82F1CC73B98_METHOD_1_9CF94858353BDDAE_OFFSET))(this, a1);
	}

	::System::Void Method_1_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3ED5A82F1CC73B98_METHOD_1_25DEA5C65A602671_OFFSET))(this);
	}

	::System::Boolean Method_1_3F2E29BF8C9EC4BD(::Class_1_D1601FECDF0AF831* a1, ::RPG::GameCore::CakeValidAreaType a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D1601FECDF0AF831*, ::RPG::GameCore::CakeValidAreaType))((::PBYTE)hIl2Cpp + CLASS_1_3ED5A82F1CC73B98_METHOD_1_3F2E29BF8C9EC4BD_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_D46323BB19F85803(::Class_1_D1601FECDF0AF831* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D1601FECDF0AF831*))((::PBYTE)hIl2Cpp + CLASS_1_3ED5A82F1CC73B98_METHOD_1_D46323BB19F85803_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_5FEC3C6C90DDD082(::Class_1_D1601FECDF0AF831* a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D1601FECDF0AF831*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3ED5A82F1CC73B98_METHOD_1_5FEC3C6C90DDD082_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_D46323BB19F85803_1(::Class_1_D1601FECDF0AF831* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D1601FECDF0AF831*))((::PBYTE)hIl2Cpp + CLASS_1_3ED5A82F1CC73B98_METHOD_1_D46323BB19F85803_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1C78EE63BA50E1F4(::Il2CppArray<::Class_1_3745C69C00F04B7D_5*>* a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::Class_1_CCF20DC2AAC0169A*>*>* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::Class_1_3745C69C00F04B7D_5*>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::Class_1_CCF20DC2AAC0169A*>*>*))((::PBYTE)hIl2Cpp + CLASS_1_3ED5A82F1CC73B98_METHOD_1_1C78EE63BA50E1F4_OFFSET))(this, a1, a2);
	}

	::System::UInt32 Method_1_C162117C603CDA29(::Il2CppArray<::Class_1_3745C69C00F04B7D_5*>* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::Il2CppArray<::Class_1_3745C69C00F04B7D_5*>*))((::PBYTE)hIl2Cpp + CLASS_1_3ED5A82F1CC73B98_METHOD_1_C162117C603CDA29_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_640F4AE91A2BCEF7(::Il2CppArray<::Class_1_3745C69C00F04B7D_5*>* a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::Class_1_CCF20DC2AAC0169A*>*>* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::Class_1_3745C69C00F04B7D_5*>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::Class_1_CCF20DC2AAC0169A*>*>*))((::PBYTE)hIl2Cpp + CLASS_1_3ED5A82F1CC73B98_METHOD_1_640F4AE91A2BCEF7_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_B2FFCD73952844ED(::System::UInt32 a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::Class_1_CCF20DC2AAC0169A*>*>* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::Class_1_CCF20DC2AAC0169A*>*>*))((::PBYTE)hIl2Cpp + CLASS_1_3ED5A82F1CC73B98_METHOD_1_B2FFCD73952844ED_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_D24807D5AA3CAD5D(::System::UInt32 a1, ::System::UInt32 a2, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::Class_1_CCF20DC2AAC0169A*>*>* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::Class_1_CCF20DC2AAC0169A*>*>*))((::PBYTE)hIl2Cpp + CLASS_1_3ED5A82F1CC73B98_METHOD_1_D24807D5AA3CAD5D_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_ABEAB8AF7FE7565E(::Class_1_CCF20DC2AAC0169A* a1, ::Class_1_CCF20DC2AAC0169A* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_CCF20DC2AAC0169A*, ::Class_1_CCF20DC2AAC0169A*))((::PBYTE)hIl2Cpp + CLASS_1_3ED5A82F1CC73B98_METHOD_1_ABEAB8AF7FE7565E_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_EB7A7FABD82F88FB(::Class_1_CCF20DC2AAC0169A* a1, ::Class_1_CCF20DC2AAC0169A* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_CCF20DC2AAC0169A*, ::Class_1_CCF20DC2AAC0169A*))((::PBYTE)hIl2Cpp + CLASS_1_3ED5A82F1CC73B98_METHOD_1_EB7A7FABD82F88FB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_068B4AEAE065BF6B(::Class_1_D1601FECDF0AF831* a1, ::RPG::GameCore::CakeValidAreaType a2, ::System::Collections::Generic::List_1<::Class_1_B9D6E7E76075C6E2*>* a3, ::System::UInt32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D1601FECDF0AF831*, ::RPG::GameCore::CakeValidAreaType, ::System::Collections::Generic::List_1<::Class_1_B9D6E7E76075C6E2*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3ED5A82F1CC73B98_METHOD_1_068B4AEAE065BF6B_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::Class_1_CCF20DC2AAC0169A*>*>* Method_1_583809286E1C016E(::RPG::GameCore::CakeValidAreaType a1, ::System::UInt32 a2)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::Class_1_CCF20DC2AAC0169A*>*>*(*)(::PVOID, ::RPG::GameCore::CakeValidAreaType, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3ED5A82F1CC73B98_METHOD_1_583809286E1C016E_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::Class_1_CCF20DC2AAC0169A*>*>* Method_1_85B15CC64C647D47(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::Class_1_CCF20DC2AAC0169A*>*>* a1)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::Class_1_CCF20DC2AAC0169A*>*>*(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::Class_1_CCF20DC2AAC0169A*>*>*))((::PBYTE)hIl2Cpp + CLASS_1_3ED5A82F1CC73B98_METHOD_1_85B15CC64C647D47_OFFSET))(this, a1);
	}

	::Class_1_1C87E05DC1AC3C04* Method_1_3C21BDEDBD6FE047(::System::UInt32 a1, ::RPG::GameCore::CakeSpeakerPolicy a2, ::RPG::GameCore::CakeValidAreaType a3, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::Class_1_CCF20DC2AAC0169A*>*>* a4, ::System::UInt32 a5)
	{
		return ((::Class_1_1C87E05DC1AC3C04*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::CakeSpeakerPolicy, ::RPG::GameCore::CakeValidAreaType, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::Class_1_CCF20DC2AAC0169A*>*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3ED5A82F1CC73B98_METHOD_1_3C21BDEDBD6FE047_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::Class_1_CCF20DC2AAC0169A* Method_1_AEFABE6F39C8AC14(::System::UInt32 a1, ::RPG::GameCore::CakeSpeakerPolicy a2, ::RPG::GameCore::CakeValidAreaType a3, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::Class_1_CCF20DC2AAC0169A*>*>* a4, ::System::UInt32 a5)
	{
		return ((::Class_1_CCF20DC2AAC0169A*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::CakeSpeakerPolicy, ::RPG::GameCore::CakeValidAreaType, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::Class_1_CCF20DC2AAC0169A*>*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3ED5A82F1CC73B98_METHOD_1_AEFABE6F39C8AC14_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean get_IsPlayerInRange()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3ED5A82F1CC73B98_GET_ISPLAYERINRANGE_OFFSET))(this);
	}

	::System::Void set_IsPlayerInRange(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3ED5A82F1CC73B98_SET_ISPLAYERINRANGE_OFFSET))(this, a1);
	}
};
