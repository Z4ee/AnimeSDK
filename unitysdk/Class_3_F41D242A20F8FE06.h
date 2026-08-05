#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Enum_3_1458C7B62FA3FC72.h"
#include "unitysdk/MoleMole/Battle/AbilityEventMaskList_1.h"
#include "unitysdk/MoleMole/Config/BuffGroupName.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_4C8453486C91E3A1_8.h"
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
class Class_1_C15F20696B789569;
class Class_2_0206DD479BB5C906;
class Class_2_14986121AA61AD99;
class Class_2_15880D2539860D46;
class Class_2_1C93660C39236995;
class Class_2_D456F475C91F9E7E;
class Class_2_E4FDA1EA6179615B;
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

#define CLASS_3_F41D242A20F8FE06_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x18D8FBD0)
#define CLASS_3_F41D242A20F8FE06_METHOD_3_24C7A1D76381B35D_OFFSET UNITYSDK_OFFSET(0x18D90740)
#define CLASS_3_F41D242A20F8FE06_METHOD_3_283228DCA08F69C7_OFFSET UNITYSDK_OFFSET(0x18D923E0)
#define CLASS_3_F41D242A20F8FE06_METHOD_3_3D78D2E0F9F95F07_OFFSET UNITYSDK_OFFSET(0x18D92200)
#define CLASS_3_F41D242A20F8FE06_METHOD_3_3ED63ACB246FDFAE_1_OFFSET UNITYSDK_OFFSET(0x18D91300)
#define CLASS_3_F41D242A20F8FE06_METHOD_3_3ED63ACB246FDFAE_OFFSET UNITYSDK_OFFSET(0x18D907D0)
#define CLASS_3_F41D242A20F8FE06_METHOD_3_6AB1B76F40F49C93_OFFSET UNITYSDK_OFFSET(0x18D91AD0)
#define CLASS_3_F41D242A20F8FE06_METHOD_3_78EE10FBBE42151B_OFFSET UNITYSDK_OFFSET(0x18D91420)
#define CLASS_3_F41D242A20F8FE06_METHOD_3_9891F66946E94FFC_OFFSET UNITYSDK_OFFSET(0x18D908F0)
#define CLASS_3_F41D242A20F8FE06_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x18D92350)
#define CLASS_3_F41D242A20F8FE06_METHOD_3_B9EC3F44C1BFC5EF_1_OFFSET UNITYSDK_OFFSET(0x18D922C0)
#define CLASS_3_F41D242A20F8FE06_METHOD_3_B9EC3F44C1BFC5EF_OFFSET UNITYSDK_OFFSET(0x18D92210)
#define CLASS_3_F41D242A20F8FE06_METHOD_3_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x18D922A0)
#define CLASS_3_F41D242A20F8FE06_METHOD_3_CB613A5EF970C11B_OFFSET UNITYSDK_OFFSET(0x18D91A30)
#define CLASS_3_F41D242A20F8FE06_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x18D924A0)
#define CLASS_3_F41D242A20F8FE06_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x18D922B0)
#define CLASS_3_F41D242A20F8FE06_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x18D8E980)
#define CLASS_3_F41D242A20F8FE06__CCTOR_OFFSET UNITYSDK_OFFSET(0x18D8FC20)
#define CLASS_3_F41D242A20F8FE06__CTOR_OFFSET UNITYSDK_OFFSET(0x18D8FCA0)

inline static constexpr unsigned int Class_3_F41D242A20F8FE06_TypeDefinitionIndex = 49601;

class Class_3_F41D242A20F8FE06 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_75 = 0x6; // 0x0
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BuffGroupName, ::System::Collections::Generic::List_1<::System::Int32>*>* Field_3_29; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* Field_3_39; // 0x50
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_2_D456F475C91F9E7E*>* Field_3_24; // 0x58
	::System::Collections::Generic::List_1<::System::String*>* Field_3_50; // 0x60
	::Class_2_0206DD479BB5C906* Field_3_53; // 0x68
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::ThreeDiffValue_3<::MoleMole::Config::ConfigEntityAttackProperty*, ::System::Int32, ::System::String*>*>* Field_3_52; // 0x70
	::System::Collections::Generic::List_1<::System::Tuple_4<::Class_2_1C93660C39236995*, ::Class_1_8289F2785D9AA990*, ::Class_1_7F58229BE40473D2*, ::Class_1_61587F018E03A222_1*>*>* Field_3_26; // 0x78
	::System::Action_1<::System::String*>* Field_3_61; // 0x80
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_3_43; // 0x88
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_87283A6158188D15*>* Field_3_30; // 0x90
	::Struct_2_DEEA0ABDF25E6D55 Field_3_69; // 0x98
	::System::Action_1<::System::Int32>* Field_3_67; // 0xA0
	::Class_1_939F4CF9E3ADB3C5* Field_3_58; // 0xA8
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::EntityHandle>* Field_3_38; // 0xB0
	::System::Collections::Generic::List_1<::Class_2_1C93660C39236995*>* Field_3_16; // 0xB8
	::System::Action_1<::Class_2_1C93660C39236995*>* Field_3_65; // 0xC0
	::MoleMole::Battle::AbilityEventMaskList_1<::Class_2_1C93660C39236995*> Field_3_5; // 0xC8
	::System::Collections::Generic::List_1<::System::Tuple_4<::Class_2_1C93660C39236995*, ::Class_1_8289F2785D9AA990*, ::Class_1_41557767124BA48C*, ::Class_1_61587F018E03A222_1*>*>* Field_3_25; // 0x100
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* Field_3_51; // 0x108
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::EntityHandle>* Field_3_32; // 0x110
	::System::Collections::Generic::List_1<::Class_2_E4FDA1EA6179615B*>* Field_3_70; // 0x118
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_C58A00E1AA54FFD3<::System::Int32>*>* Field_3_21; // 0x120
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::String*>*>* Field_3_71; // 0x128
	::System::Action_1<::System::Int32>* Field_3_66; // 0x130
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::String*>*>* Field_3_64; // 0x138
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>*>* Field_3_28; // 0x140
	::System::Collections::Generic::List_1<::Class_1_5CAB9AA46D466E98*>* Field_3_4; // 0x148
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BuffGroupName, ::MoleMole::Config::ConfigHitEffect*>* Field_3_8; // 0x150
	::Class_2_15880D2539860D46* Field_3_49; // 0x158
	::MoleMole::Battle::AbilityEventMaskList_1<::Class_2_14986121AA61AD99*> Field_3_6; // 0x160
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_C58A00E1AA54FFD3<::System::Boolean>*>* Field_3_22; // 0x198
	::System::Collections::Generic::HashSet_1<::Class_2_14986121AA61AD99*>* Field_3_37; // 0x1A0
	::Class_2_0206DD479BB5C906* Field_3_42; // 0x1A8
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Struct_2_4C8453486C91E3A1_8>* Field_3_68; // 0x1B0
	::System::Collections::Generic::List_1<::System::String*>* Field_3_35; // 0x1B8
	::System::Collections::Generic::List_1<::System::Tuple_3<::Class_2_1C93660C39236995*, ::Class_1_8289F2785D9AA990*, ::Class_1_61587F018E03A222_1*>*>* Field_3_27; // 0x1C0
	::System::Action_1<::System::String*>* Field_3_60; // 0x1C8
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_C58A00E1AA54FFD3<::System::String*>*>* Field_3_20; // 0x1D0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_C58A00E1AA54FFD3<::System::Single>*>* Field_3_23; // 0x1D8
	::System::Collections::Generic::Dictionary_2<::Struct_2_CD17D37138E13AA3, ::Class_2_D456F475C91F9E7E*>* Field_3_33; // 0x1E0
	::System::Collections::Generic::List_1<::Class_2_14986121AA61AD99*>* Field_3_13; // 0x1E8
	::System::Collections::Generic::List_1<::System::Int32>* Field_3_34; // 0x1F0
	::Class_1_939F4CF9E3ADB3C5* Field_3_57; // 0x1F8
	::Class_1_C15F20696B789569* Field_3_10; // 0x200
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* Field_3_31; // 0x208
	::System::Collections::Generic::List_1<::Class_2_1C93660C39236995*>* Field_3_12; // 0x210
	::System::Int32 Field_3_59; // 0x218
	::System::Boolean Field_3_15; // 0x21C
	::System::Single Field_3_40; // 0x220
	::System::Boolean Field_3_54; // 0x224
	::System::Boolean Field_3_63; // 0x225
	::System::Boolean Field_3_44; // 0x226
	::System::Boolean Field_3_14; // 0x227
	::System::Boolean Field_3_48; // 0x228
	::System::Boolean Field_3_11; // 0x229
	::System::Boolean Field_3_55; // 0x22A
	::System::Boolean Field_3_7; // 0x22B
	::System::Int32 Field_3_47; // 0x22C
	::System::Int32 Field_3_36; // 0x230
	::MoleMole::Config::DamageElementType Field_3_9; // 0x234
	::Struct_2_CBFCD940F8949246 Field_3_19; // 0x238
	::Struct_2_7C0C45934B7D5974 Field_3_0; // 0x430
	::MoleMole::Config::DamageElementType Field_3_62; // 0x570
	::System::Boolean Field_3_46; // 0x574
	::System::Boolean Field_3_17; // 0x575
	::System::Boolean Field_3_45; // 0x576
	::System::Boolean Field_3_41; // 0x577
	::System::Int32 Field_3_56; // 0x578
	::Struct_2_CBFCD940F8949246 Field_3_18; // 0x580

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

	::Enum_3_1458C7B62FA3FC72 Method_3_24C7A1D76381B35D(::Struct_2_7C0C45934B7D5974& a1)
	{
		return ((::Enum_3_1458C7B62FA3FC72(*)(::PVOID, ::Struct_2_7C0C45934B7D5974&))((::PBYTE)hIl2Cpp + CLASS_3_F41D242A20F8FE06_METHOD_3_24C7A1D76381B35D_OFFSET))(this, a1);
	}

	::Enum_3_1458C7B62FA3FC72 Method_3_3ED63ACB246FDFAE(::Class_2_14986121AA61AD99* a1)
	{
		return ((::Enum_3_1458C7B62FA3FC72(*)(::PVOID, ::Class_2_14986121AA61AD99*))((::PBYTE)hIl2Cpp + CLASS_3_F41D242A20F8FE06_METHOD_3_3ED63ACB246FDFAE_OFFSET))(this, a1);
	}

	::System::Void Method_3_9891F66946E94FFC(::System::Collections::Generic::List_1<::System::String*>* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* a3, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* a4, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a5, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* a6, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* a7)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_3_F41D242A20F8FE06_METHOD_3_9891F66946E94FFC_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::Enum_3_1458C7B62FA3FC72 Method_3_3ED63ACB246FDFAE_1(::Class_2_1C93660C39236995* a1)
	{
		return ((::Enum_3_1458C7B62FA3FC72(*)(::PVOID, ::Class_2_1C93660C39236995*))((::PBYTE)hIl2Cpp + CLASS_3_F41D242A20F8FE06_METHOD_3_3ED63ACB246FDFAE_1_OFFSET))(this, a1);
	}

	::Enum_3_1458C7B62FA3FC72 Method_3_78EE10FBBE42151B(::Struct_2_7C0C45934B7D5974& a1)
	{
		return ((::Enum_3_1458C7B62FA3FC72(*)(::PVOID, ::Struct_2_7C0C45934B7D5974&))((::PBYTE)hIl2Cpp + CLASS_3_F41D242A20F8FE06_METHOD_3_78EE10FBBE42151B_OFFSET))(this, a1);
	}

	::System::Void Method_3_CB613A5EF970C11B(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_F41D242A20F8FE06_METHOD_3_CB613A5EF970C11B_OFFSET))(this, a1);
	}

	::System::Void Method_3_6AB1B76F40F49C93(::Struct_2_7C0C45934B7D5974& a1, ::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>* a2, ::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>* a3, ::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>* a4, ::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>* a5, ::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>* a6)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_7C0C45934B7D5974&, ::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>*, ::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>*, ::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>*, ::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>*, ::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + CLASS_3_F41D242A20F8FE06_METHOD_3_6AB1B76F40F49C93_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::Struct_2_DEEA0ABDF25E6D55& Method_3_3D78D2E0F9F95F07()
	{
		return ((::Struct_2_DEEA0ABDF25E6D55&(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F41D242A20F8FE06_METHOD_3_3D78D2E0F9F95F07_OFFSET))(this);
	}

	::System::Void Method_3_B9EC3F44C1BFC5EF(::Class_2_1C93660C39236995* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1C93660C39236995*))((::PBYTE)hIl2Cpp + CLASS_3_F41D242A20F8FE06_METHOD_3_B9EC3F44C1BFC5EF_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F41D242A20F8FE06_METHOD_3_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Boolean Method_3_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F41D242A20F8FE06_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_3_B9EC3F44C1BFC5EF_1(::Class_2_14986121AA61AD99* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_14986121AA61AD99*))((::PBYTE)hIl2Cpp + CLASS_3_F41D242A20F8FE06_METHOD_3_B9EC3F44C1BFC5EF_1_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F41D242A20F8FE06_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Void Method_3_283228DCA08F69C7(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_F41D242A20F8FE06_METHOD_3_283228DCA08F69C7_OFFSET))(this, a1);
	}

	static ::Class_3_F41D242A20F8FE06* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_F41D242A20F8FE06*(*)())((::PBYTE)hIl2Cpp + CLASS_3_F41D242A20F8FE06_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}
};
