#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Enum_3_1458C7B62FA3FC72.h"
#include "unitysdk/MoleMole/Battle/AbilityEventMaskList_1.h"
#include "unitysdk/MoleMole/Config/BuffGroupName.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_4C8453486C91E3A1_12.h"
#include "unitysdk/Struct_2_7C0C45934B7D5974.h"
#include "unitysdk/Struct_2_CBFCD940F8949246.h"
#include "unitysdk/Struct_2_CD17D37138E13AA3.h"
#include "unitysdk/Struct_2_DEEA0ABDF25E6D55.h"

class Class_1_41557767124BA48C;
class Class_1_5CAB9AA46D466E98;
class Class_1_61587F018E03A222_1;
class Class_1_7F58229BE40473D2;
class Class_1_8289F2785D9AA990;
class Class_1_87283A6158188D15;
class Class_1_939F4CF9E3ADB3C5;
class Class_1_B7E341C5F1A6F199;
class Class_2_0206DD479BB5C906;
class Class_2_167BB37617B940E3;
class Class_2_D456F475C91F9E7E;
class Class_2_E4FDA1EA6179615B;
class Class_2_EA995402651EF7A9;
namespace MoleMole { template <typename T1, typename T2, typename T3> class ThreeDiffValue_3; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigEntityAttackProperty; }
namespace MoleMole::Config { class ConfigHitEffect; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Tuple_4; }
namespace System { template <typename T1, typename T2, typename T3> class Tuple_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_1_C58A00E1AA54FFD3;

#define CLASS_3_F41D242A20F8FE06_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x113F6920)
#define CLASS_3_F41D242A20F8FE06_METHOD_3_24C7A1D76381B35D_OFFSET UNITYSDK_OFFSET(0x113F7EA0)
#define CLASS_3_F41D242A20F8FE06_METHOD_3_283228DCA08F69C7_OFFSET UNITYSDK_OFFSET(0x113F8CD0)
#define CLASS_3_F41D242A20F8FE06_METHOD_3_3D78D2E0F9F95F07_OFFSET UNITYSDK_OFFSET(0x113F8D90)
#define CLASS_3_F41D242A20F8FE06_METHOD_3_3ED63ACB246FDFAE_1_OFFSET UNITYSDK_OFFSET(0x113F8F60)
#define CLASS_3_F41D242A20F8FE06_METHOD_3_3ED63ACB246FDFAE_OFFSET UNITYSDK_OFFSET(0x113F7D80)
#define CLASS_3_F41D242A20F8FE06_METHOD_3_6AB1B76F40F49C93_OFFSET UNITYSDK_OFFSET(0x113F7F40)
#define CLASS_3_F41D242A20F8FE06_METHOD_3_9891F66946E94FFC_OFFSET UNITYSDK_OFFSET(0x113F7400)
#define CLASS_3_F41D242A20F8FE06_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x113F8C40)
#define CLASS_3_F41D242A20F8FE06_METHOD_3_B9EC3F44C1BFC5EF_1_OFFSET UNITYSDK_OFFSET(0x113F8ED0)
#define CLASS_3_F41D242A20F8FE06_METHOD_3_B9EC3F44C1BFC5EF_OFFSET UNITYSDK_OFFSET(0x113F8E40)
#define CLASS_3_F41D242A20F8FE06_METHOD_3_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x113F7F30)
#define CLASS_3_F41D242A20F8FE06_METHOD_3_CB613A5EF970C11B_OFFSET UNITYSDK_OFFSET(0x113F8DA0)
#define CLASS_3_F41D242A20F8FE06_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x113F9090)
#define CLASS_3_F41D242A20F8FE06_METHOD_3_D5959613025900E6_OFFSET UNITYSDK_OFFSET(0x113F8660)
#define CLASS_3_F41D242A20F8FE06_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x113F9080)
#define CLASS_3_F41D242A20F8FE06_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x113F57A0)
#define CLASS_3_F41D242A20F8FE06__CCTOR_OFFSET UNITYSDK_OFFSET(0x113F6970)
#define CLASS_3_F41D242A20F8FE06__CTOR_OFFSET UNITYSDK_OFFSET(0x113F69F0)

inline static constexpr unsigned int Class_3_F41D242A20F8FE06_TypeDefinitionIndex = 80922;

class Class_3_F41D242A20F8FE06 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_62 = 0x4; // 0x0
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BuffGroupName, ::System::Collections::Generic::List_1<::System::Int32>*>* Field_3_25; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* Field_3_31; // 0x50
	::System::Collections::Generic::HashSet_1<::Class_2_167BB37617B940E3*>* Field_3_33; // 0x58
	::Class_1_939F4CF9E3ADB3C5* Field_3_49; // 0x60
	::System::Collections::Generic::List_1<::System::Tuple_4<::Class_2_EA995402651EF7A9*, ::Class_1_8289F2785D9AA990*, ::Class_1_7F58229BE40473D2*, ::Class_1_61587F018E03A222_1*>*>* Field_3_20; // 0x68
	::System::Collections::Generic::List_1<::System::Tuple_4<::Class_2_EA995402651EF7A9*, ::Class_1_8289F2785D9AA990*, ::Class_1_41557767124BA48C*, ::Class_1_61587F018E03A222_1*>*>* Field_3_21; // 0x70
	::System::Collections::Generic::Dictionary_2<::Struct_2_CD17D37138E13AA3, ::Class_2_D456F475C91F9E7E*>* Field_3_29; // 0x78
	::System::Collections::Generic::List_1<::System::Int32>* Field_3_28; // 0x80
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_C58A00E1AA54FFD3<::System::Single>*>* Field_3_15; // 0x88
	::System::Action_1<::System::String*>* Field_3_52; // 0x90
	::Class_2_0206DD479BB5C906* Field_3_36; // 0x98
	::System::Collections::Generic::List_1<::Class_1_5CAB9AA46D466E98*>* Field_3_4; // 0xA0
	::System::Action_1<::System::Int32>* Field_3_54; // 0xA8
	::System::Action_1<::Class_2_EA995402651EF7A9*>* Field_3_56; // 0xB0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_C58A00E1AA54FFD3<::System::String*>*>* Field_3_18; // 0xB8
	::Class_1_939F4CF9E3ADB3C5* Field_3_48; // 0xC0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_87283A6158188D15*>* Field_3_24; // 0xC8
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::EntityHandle>* Field_3_30; // 0xD0
	::System::Collections::Generic::List_1<::System::Tuple_3<::Class_2_EA995402651EF7A9*, ::Class_1_8289F2785D9AA990*, ::Class_1_61587F018E03A222_1*>*>* Field_3_19; // 0xD8
	::System::Action_1<::System::Int32>* Field_3_55; // 0xE0
	::System::Collections::Generic::List_1<::Class_2_167BB37617B940E3*>* Field_3_10; // 0xE8
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::String*>*>* Field_3_57; // 0xF0
	::System::Collections::Generic::List_1<::System::String*>* Field_3_27; // 0xF8
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BuffGroupName, ::MoleMole::Config::ConfigHitEffect*>* Field_3_7; // 0x100
	::System::Collections::Generic::List_1<::System::Int32>* Field_3_6; // 0x108
	::MoleMole::Battle::AbilityEventMaskList_1<::Class_2_167BB37617B940E3*> Field_3_2; // 0x110
	::System::Collections::Generic::List_1<::Class_2_EA995402651EF7A9*>* Field_3_11; // 0x148
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Struct_2_4C8453486C91E3A1_12>* Field_3_61; // 0x150
	::System::Collections::Generic::List_1<::Class_2_E4FDA1EA6179615B*>* Field_3_59; // 0x158
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::EntityHandle>* Field_3_32; // 0x160
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* Field_3_23; // 0x168
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::ThreeDiffValue_3<::MoleMole::Config::ConfigEntityAttackProperty*, ::System::Int32, ::System::String*>*>* Field_3_46; // 0x170
	::Class_2_0206DD479BB5C906* Field_3_45; // 0x178
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::String*>*>* Field_3_58; // 0x180
	::System::Action_1<::System::String*>* Field_3_53; // 0x188
	::MoleMole::Battle::AbilityEventMaskList_1<::Class_2_EA995402651EF7A9*> Field_3_3; // 0x190
	::System::Collections::Generic::List_1<::Class_2_EA995402651EF7A9*>* Field_3_14; // 0x1C8
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_C58A00E1AA54FFD3<::System::Boolean>*>* Field_3_16; // 0x1D0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_C58A00E1AA54FFD3<::System::Int32>*>* Field_3_17; // 0x1D8
	::Struct_2_DEEA0ABDF25E6D55 Field_3_60; // 0x1E0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_3_35; // 0x1E8
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_2_D456F475C91F9E7E*>* Field_3_22; // 0x1F0
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>*>* Field_3_26; // 0x1F8
	::System::Int32 Field_3_39; // 0x200
	::MoleMole::Config::DamageElementType Field_3_51; // 0x204
	::Struct_2_CBFCD940F8949246 Field_3_12; // 0x208
	::Struct_2_CBFCD940F8949246 Field_3_13; // 0x3B8
	::System::Boolean Field_3_40; // 0x568
	::System::Boolean Field_3_9; // 0x569
	::System::Boolean Field_3_43; // 0x56A
	::System::Boolean Field_3_8; // 0x56B
	::System::Boolean Field_3_1; // 0x56C
	::System::Boolean Field_3_42; // 0x56D
	::System::Boolean Field_3_37; // 0x56E
	::System::Boolean Field_3_44; // 0x56F
	::System::Single Field_3_38; // 0x570
	::System::Boolean Field_3_41; // 0x574
	::System::Boolean Field_3_5; // 0x575
	::System::Int32 Field_3_47; // 0x578
	::System::Int32 Field_3_34; // 0x57C
	::Struct_2_7C0C45934B7D5974 Field_3_0; // 0x580
	::System::Int32 Field_3_50; // 0x6C0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_F41D242A20F8FE06__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F41D242A20F8FE06__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F41D242A20F8FE06_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F41D242A20F8FE06_GETCLASSID_OFFSET))(this);
	}

	::System::Void Method_3_9891F66946E94FFC(::System::Collections::Generic::List_1<::System::String*>* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* a3, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* a4, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a5, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* a6, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* a7)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_3_F41D242A20F8FE06_METHOD_3_9891F66946E94FFC_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::Enum_3_1458C7B62FA3FC72 Method_3_3ED63ACB246FDFAE(::Class_2_EA995402651EF7A9* a1)
	{
		return ((::Enum_3_1458C7B62FA3FC72(*)(::PVOID, ::Class_2_EA995402651EF7A9*))((::PBYTE)hIl2Cpp + CLASS_3_F41D242A20F8FE06_METHOD_3_3ED63ACB246FDFAE_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F41D242A20F8FE06_METHOD_3_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_3_6AB1B76F40F49C93(::Struct_2_7C0C45934B7D5974& a1, ::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>* a2, ::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>* a3, ::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>* a4, ::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>* a5, ::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>* a6)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_7C0C45934B7D5974&, ::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>*, ::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>*, ::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>*, ::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>*, ::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + CLASS_3_F41D242A20F8FE06_METHOD_3_6AB1B76F40F49C93_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::Enum_3_1458C7B62FA3FC72 Method_3_D5959613025900E6(::Struct_2_7C0C45934B7D5974& a1)
	{
		return ((::Enum_3_1458C7B62FA3FC72(*)(::PVOID, ::Struct_2_7C0C45934B7D5974&))((::PBYTE)hIl2Cpp + CLASS_3_F41D242A20F8FE06_METHOD_3_D5959613025900E6_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F41D242A20F8FE06_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Void Method_3_283228DCA08F69C7(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_F41D242A20F8FE06_METHOD_3_283228DCA08F69C7_OFFSET))(this, a1);
	}

	::Struct_2_DEEA0ABDF25E6D55& Method_3_3D78D2E0F9F95F07()
	{
		return ((::Struct_2_DEEA0ABDF25E6D55&(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F41D242A20F8FE06_METHOD_3_3D78D2E0F9F95F07_OFFSET))(this);
	}

	::System::Void Method_3_CB613A5EF970C11B(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_F41D242A20F8FE06_METHOD_3_CB613A5EF970C11B_OFFSET))(this, a1);
	}

	::System::Void Method_3_B9EC3F44C1BFC5EF(::Class_2_EA995402651EF7A9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_EA995402651EF7A9*))((::PBYTE)hIl2Cpp + CLASS_3_F41D242A20F8FE06_METHOD_3_B9EC3F44C1BFC5EF_OFFSET))(this, a1);
	}

	::System::Void Method_3_B9EC3F44C1BFC5EF_1(::Class_2_167BB37617B940E3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_167BB37617B940E3*))((::PBYTE)hIl2Cpp + CLASS_3_F41D242A20F8FE06_METHOD_3_B9EC3F44C1BFC5EF_1_OFFSET))(this, a1);
	}

	::Enum_3_1458C7B62FA3FC72 Method_3_3ED63ACB246FDFAE_1(::Class_2_167BB37617B940E3* a1)
	{
		return ((::Enum_3_1458C7B62FA3FC72(*)(::PVOID, ::Class_2_167BB37617B940E3*))((::PBYTE)hIl2Cpp + CLASS_3_F41D242A20F8FE06_METHOD_3_3ED63ACB246FDFAE_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F41D242A20F8FE06_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
	}

	::Enum_3_1458C7B62FA3FC72 Method_3_24C7A1D76381B35D(::Struct_2_7C0C45934B7D5974& a1)
	{
		return ((::Enum_3_1458C7B62FA3FC72(*)(::PVOID, ::Struct_2_7C0C45934B7D5974&))((::PBYTE)hIl2Cpp + CLASS_3_F41D242A20F8FE06_METHOD_3_24C7A1D76381B35D_OFFSET))(this, a1);
	}

	static ::Class_3_F41D242A20F8FE06* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_F41D242A20F8FE06*(*)())((::PBYTE)hIl2Cpp + CLASS_3_F41D242A20F8FE06_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}
};
