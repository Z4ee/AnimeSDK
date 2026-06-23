#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Class_3_816015CAFD8353F7_Enum_3_1A21FE4EAFEF3879.h"
#include "unitysdk/Enum_3_B7E66D8760FABD1A.h"
#include "unitysdk/Enum_3_C2761E57EE0B71AF.h"
#include "unitysdk/Enum_3_C6C58EFCBBBAFDFC.h"
#include "unitysdk/Enum_3_D2BFB44AC6DE1FD1.h"
#include "unitysdk/MoleMole/Config/AidAttackType.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_5887222B9AE38D34_3.h"
#include "unitysdk/Struct_2_A80C7074D9B7D776.h"
#include "unitysdk/Struct_2_D18F1D061EEF5E67_1.h"
#include "unitysdk/Struct_2_F2A7939F5DFF18C1_2.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_8289F2785D9AA990;
class Class_1_BBDCDD7F93208E26;
class Class_2_96512999D77B8CB1;
namespace MoleMole::Battle { class AnimatorParamControl; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigPosRot; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class BoxCollider; }

#define CLASS_3_816015CAFD8353F7_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x14AA7A00)
#define CLASS_3_816015CAFD8353F7_METHOD_3_1808E1CF7A125519_1_OFFSET UNITYSDK_OFFSET(0x134E1A80)
#define CLASS_3_816015CAFD8353F7_METHOD_3_1808E1CF7A125519_2_OFFSET UNITYSDK_OFFSET(0x134E1CF0)
#define CLASS_3_816015CAFD8353F7_METHOD_3_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x14AA8500)
#define CLASS_3_816015CAFD8353F7_METHOD_3_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0x134E1AF0)
#define CLASS_3_816015CAFD8353F7_METHOD_3_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x134E1A20)
#define CLASS_3_816015CAFD8353F7_METHOD_3_2E47F09A457E7E05_OFFSET UNITYSDK_OFFSET(0x14AA8350)
#define CLASS_3_816015CAFD8353F7_METHOD_3_3150507749BCEAEC_OFFSET UNITYSDK_OFFSET(0x14AA83C0)
#define CLASS_3_816015CAFD8353F7_METHOD_3_52FB29FB5E593F19_OFFSET UNITYSDK_OFFSET(0x134E1880)
#define CLASS_3_816015CAFD8353F7_METHOD_3_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x134E1A10)
#define CLASS_3_816015CAFD8353F7_METHOD_3_7ED98D5A80383780_OFFSET UNITYSDK_OFFSET(0x14AA8620)
#define CLASS_3_816015CAFD8353F7_METHOD_3_83F9AA70898125AA_OFFSET UNITYSDK_OFFSET(0x14AA8C70)
#define CLASS_3_816015CAFD8353F7_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x14AA82C0)
#define CLASS_3_816015CAFD8353F7_METHOD_3_A9805CA46D68009E_OFFSET UNITYSDK_OFFSET(0x134E1B60)
#define CLASS_3_816015CAFD8353F7_METHOD_3_BA9D72D2E98D603C_OFFSET UNITYSDK_OFFSET(0x134E1890)
#define CLASS_3_816015CAFD8353F7_METHOD_3_C74CF020AA42ED85_1_OFFSET UNITYSDK_OFFSET(0x134E1750)
#define CLASS_3_816015CAFD8353F7_METHOD_3_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x134E1740)
#define CLASS_3_816015CAFD8353F7_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x134E1620)
#define CLASS_3_816015CAFD8353F7_METHOD_3_EBCA8E5D8C47FF73_OFFSET UNITYSDK_OFFSET(0x14AA8460)
#define CLASS_3_816015CAFD8353F7_METHOD_3_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x134E1870)
#define CLASS_3_816015CAFD8353F7_METHOD_3_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0x134E19D0)
#define CLASS_3_816015CAFD8353F7_METHOD_3_F0088C88851A7DFB_3_OFFSET UNITYSDK_OFFSET(0x134E1B50)
#define CLASS_3_816015CAFD8353F7_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x14AA8570)
#define CLASS_3_816015CAFD8353F7_METHOD_3_F026F9F94BAA5E1F_OFFSET UNITYSDK_OFFSET(0x134E1800)
#define CLASS_3_816015CAFD8353F7_METHOD_3_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x134E19E0)
#define CLASS_3_816015CAFD8353F7_METHOD_3_FC21B103930CA6DE_OFFSET UNITYSDK_OFFSET(0x14AA8DA0)
#define CLASS_3_816015CAFD8353F7_METHOD_3_FE3C2A09ADE8A2F8_OFFSET UNITYSDK_OFFSET(0x14AA9020)
#define CLASS_3_816015CAFD8353F7_METHOD_3_FF7B2911BBACA4A9_1_OFFSET UNITYSDK_OFFSET(0x14AA8D00)
#define CLASS_3_816015CAFD8353F7_METHOD_3_FF7B2911BBACA4A9_2_OFFSET UNITYSDK_OFFSET(0x14AA90C0)
#define CLASS_3_816015CAFD8353F7_METHOD_3_FF7B2911BBACA4A9_3_OFFSET UNITYSDK_OFFSET(0x134E16A0)
#define CLASS_3_816015CAFD8353F7_METHOD_3_FF7B2911BBACA4A9_4_OFFSET UNITYSDK_OFFSET(0x134E1760)
#define CLASS_3_816015CAFD8353F7_METHOD_3_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0x14AA8580)
#define CLASS_3_816015CAFD8353F7_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x14AA7130)
#define CLASS_3_816015CAFD8353F7__CCTOR_OFFSET UNITYSDK_OFFSET(0x14AA7A50)
#define CLASS_3_816015CAFD8353F7__CTOR_OFFSET UNITYSDK_OFFSET(0x14AA7B20)

inline static constexpr unsigned int Class_3_816015CAFD8353F7_TypeDefinitionIndex = 61734;

class Class_3_816015CAFD8353F7 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet_Field_3_2()
	{
		return (::Il2CppArray<::UnityEngine::RaycastHit>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_816015CAFD8353F7_TypeDefinitionIndex)->GetStaticField(0x330E0);
	}
	static ::Il2CppArray<::UnityEngine::BoxCollider*>** StaticGet_Field_3_3()
	{
		return (::Il2CppArray<::UnityEngine::BoxCollider*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_816015CAFD8353F7_TypeDefinitionIndex)->GetStaticField(0x330E8);
	}
	static ::System::String** StaticGet_Field_3_67()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_3_816015CAFD8353F7_TypeDefinitionIndex)->GetStaticField(0x330F0);
	}
	static ::UnityEngine::RaycastHit* StaticGet_Field_3_1()
	{
		return (::UnityEngine::RaycastHit*)Il2CppClass::FromTypeDefinitionIndex(Class_3_816015CAFD8353F7_TypeDefinitionIndex)->GetStaticField(0xC720);
	}
	// static const ::System::String* Field_3_0; // 0x0
	// static const ::System::Int32 Field_3_90 = 0x74; // 0x0
	::Class_1_8289F2785D9AA990* Field_3_48; // 0x48
	::System::String* Field_3_16; // 0x50
	::Class_1_8289F2785D9AA990* Field_3_82; // 0x58
	::Class_1_8289F2785D9AA990* Field_3_4; // 0x60
	::MoleMole::Config::ConfigPosRot* Field_3_15; // 0x68
	::Class_1_8289F2785D9AA990* Field_3_49; // 0x70
	::Class_1_BBDCDD7F93208E26* Field_3_57; // 0x78
	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* Field_3_61; // 0x80
	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* Field_3_62; // 0x88
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Struct_2_A80C7074D9B7D776>* Field_3_64; // 0x90
	::System::Collections::Generic::List_1<::Struct_2_D18F1D061EEF5E67_1>* Field_3_69; // 0x98
	::System::Collections::Generic::List_1<::System::String*>* Field_3_66; // 0xA0
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Single>* Field_3_70; // 0xA8
	::Class_1_8289F2785D9AA990* Field_3_46; // 0xB0
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_3_38; // 0xB8
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Field_3_63; // 0xC0
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_3_39; // 0xC8
	::System::Collections::Generic::Dictionary_2<::Enum_3_D2BFB44AC6DE1FD1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>*>* Field_3_9; // 0xD0
	::MoleMole::EntityHandle Field_3_43; // 0xD8
	::System::Collections::Generic::List_1<::Struct_2_5887222B9AE38D34_3>* Field_3_56; // 0xE8
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Single>* Field_3_27; // 0xF0
	::System::Collections::Generic::List_1<::Class_2_96512999D77B8CB1*>* Field_3_89; // 0xF8
	::MoleMole::Battle::AnimatorParamControl* Field_3_23; // 0x100
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Single>* Field_3_26; // 0x108
	::System::Collections::Generic::List_1<::Struct_2_F2A7939F5DFF18C1_2>* Field_3_68; // 0x110
	::System::Action_1<::Class_3_816015CAFD8353F7_Enum_3_1A21FE4EAFEF3879>* Field_3_78; // 0x118
	::MoleMole::Battle::AnimatorParamControl* Field_3_22; // 0x120
	::System::String* Field_3_79; // 0x128
	::System::Collections::Generic::List_1<::Class_1_BBDCDD7F93208E26*>* Field_3_58; // 0x130
	::System::Collections::Generic::List_1<::System::String*>* Field_3_80; // 0x138
	::Class_1_8289F2785D9AA990* Field_3_47; // 0x140
	::System::Collections::Generic::List_1<::Class_1_BBDCDD7F93208E26*>* Field_3_60; // 0x148
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_3_40; // 0x150
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* Field_3_71; // 0x158
	::System::Collections::Generic::List_1<::Class_1_BBDCDD7F93208E26*>* Field_3_59; // 0x160
	::System::String* Field_3_21; // 0x168
	::System::Collections::Generic::List_1<::System::String*>* Field_3_42; // 0x170
	::System::Action_2<::System::Int32, ::System::Int32>* Field_3_45; // 0x178
	::MoleMole::Config::ConfigPosRot* Field_3_19; // 0x180
	::System::Single Field_3_53; // 0x188
	::System::Int32 Field_3_29; // 0x18C
	::System::Int32 Field_3_72; // 0x190
	::System::Boolean Field_3_33; // 0x194
	::System::Boolean Field_3_87; // 0x195
	::System::Boolean Field_3_65; // 0x196
	::System::Boolean Field_3_88; // 0x197
	::System::Int32 Field_3_25; // 0x198
	::Enum_3_B7E66D8760FABD1A Field_3_35; // 0x19C
	::System::Single Field_3_76; // 0x1A0
	::System::Boolean Field_3_18; // 0x1A4
	::System::Boolean Field_3_11; // 0x1A5
	::System::Boolean Field_3_50; // 0x1A6
	::System::Boolean Field_3_54; // 0x1A7
	::System::Int32 Field_3_44; // 0x1A8
	::System::Int32 Field_3_24; // 0x1AC
	::System::Single Field_3_55; // 0x1B0
	::System::Single Field_3_51; // 0x1B4
	::System::Single Field_3_7; // 0x1B8
	::System::Int32 Field_3_73; // 0x1BC
	::System::Single Field_3_5; // 0x1C0
	::System::Boolean Field_3_75; // 0x1C4
	::System::Boolean Field_3_52; // 0x1C5
	::System::Boolean Field_3_37; // 0x1C6
	::System::UInt32 Field_3_81; // 0x1C8
	::Enum_3_C2761E57EE0B71AF Field_3_32; // 0x1CC
	::System::Single Field_3_8; // 0x1D0
	::System::UInt32 Field_3_84; // 0x1D4
	::System::Single Field_3_31; // 0x1D8
	::System::Single Field_3_14; // 0x1DC
	::Enum_3_C6C58EFCBBBAFDFC Field_3_83; // 0x1E0
	::UnityEngine::Vector3 Field_3_20; // 0x1E4
	::System::Single Field_3_12; // 0x1F0
	::System::Int32 Field_3_10; // 0x1F4
	::System::Int32 Field_3_6; // 0x1F8
	::System::Single Field_3_17; // 0x1FC
	::System::Boolean Field_3_85; // 0x200
	::System::Boolean Field_3_36; // 0x201
	::System::Boolean Field_3_41; // 0x202
	::System::Boolean Field_3_13; // 0x203
	::MoleMole::Config::AidAttackType Field_3_34; // 0x204
	::Class_3_816015CAFD8353F7_Enum_3_1A21FE4EAFEF3879 Field_3_77; // 0x208
	::System::Single Field_3_74; // 0x20C
	::System::Single Field_3_30; // 0x210
	::System::UInt32 Field_3_86; // 0x214
	::System::Int32 Field_3_28; // 0x218

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_816015CAFD8353F7__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_816015CAFD8353F7__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_816015CAFD8353F7_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_816015CAFD8353F7_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_816015CAFD8353F7_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Void Method_3_2E47F09A457E7E05(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_816015CAFD8353F7_METHOD_3_2E47F09A457E7E05_OFFSET))(this, a1);
	}

	::System::Single Method_3_3150507749BCEAEC()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_816015CAFD8353F7_METHOD_3_3150507749BCEAEC_OFFSET))(this);
	}

	::System::Int32 Method_3_EBCA8E5D8C47FF73()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_816015CAFD8353F7_METHOD_3_EBCA8E5D8C47FF73_OFFSET))(this);
	}

	::System::Boolean Method_3_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_816015CAFD8353F7_METHOD_3_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Boolean Method_3_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_816015CAFD8353F7_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Single Method_3_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_816015CAFD8353F7_METHOD_3_FF7B2911BBACA4A9_OFFSET))(this);
	}

	::Class_3_816015CAFD8353F7* Method_3_7ED98D5A80383780()
	{
		return ((::Class_3_816015CAFD8353F7*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_816015CAFD8353F7_METHOD_3_7ED98D5A80383780_OFFSET))(this);
	}

	::System::Void Method_3_83F9AA70898125AA(::Class_3_816015CAFD8353F7_Enum_3_1A21FE4EAFEF3879 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_816015CAFD8353F7_Enum_3_1A21FE4EAFEF3879))((::PBYTE)hIl2Cpp + CLASS_3_816015CAFD8353F7_METHOD_3_83F9AA70898125AA_OFFSET))(this, a1);
	}

	::System::Single Method_3_FF7B2911BBACA4A9_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_816015CAFD8353F7_METHOD_3_FF7B2911BBACA4A9_1_OFFSET))(this);
	}

	::System::Void Method_3_FC21B103930CA6DE(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_816015CAFD8353F7_METHOD_3_FC21B103930CA6DE_OFFSET))(this, a1);
	}

	::MoleMole::Config::ConfigPosRot* Method_3_FE3C2A09ADE8A2F8()
	{
		return ((::MoleMole::Config::ConfigPosRot*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_816015CAFD8353F7_METHOD_3_FE3C2A09ADE8A2F8_OFFSET))(this);
	}

	::System::Single Method_3_FF7B2911BBACA4A9_2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_816015CAFD8353F7_METHOD_3_FF7B2911BBACA4A9_2_OFFSET))(this);
	}

	static ::Class_3_816015CAFD8353F7* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_816015CAFD8353F7*(*)())((::PBYTE)hIl2Cpp + CLASS_3_816015CAFD8353F7_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Single Method_3_FF7B2911BBACA4A9_3()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_816015CAFD8353F7_METHOD_3_FF7B2911BBACA4A9_3_OFFSET))(this);
	}

	::System::Int32 Method_3_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_816015CAFD8353F7_METHOD_3_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Int32 Method_3_C74CF020AA42ED85_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_816015CAFD8353F7_METHOD_3_C74CF020AA42ED85_1_OFFSET))(this);
	}

	::System::Single Method_3_FF7B2911BBACA4A9_4()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_816015CAFD8353F7_METHOD_3_FF7B2911BBACA4A9_4_OFFSET))(this);
	}

	::System::Int32 Method_3_F026F9F94BAA5E1F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_816015CAFD8353F7_METHOD_3_F026F9F94BAA5E1F_OFFSET))(this);
	}

	::System::Boolean Method_3_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_816015CAFD8353F7_METHOD_3_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::Class_3_816015CAFD8353F7_Enum_3_1A21FE4EAFEF3879 Method_3_52FB29FB5E593F19()
	{
		return ((::Class_3_816015CAFD8353F7_Enum_3_1A21FE4EAFEF3879(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_816015CAFD8353F7_METHOD_3_52FB29FB5E593F19_OFFSET))(this);
	}

	::System::Void Method_3_BA9D72D2E98D603C(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_816015CAFD8353F7_METHOD_3_BA9D72D2E98D603C_OFFSET))(this, a1);
	}

	::System::Single Method_3_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_816015CAFD8353F7_METHOD_3_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Boolean Method_3_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_816015CAFD8353F7_METHOD_3_F0088C88851A7DFB_2_OFFSET))(this);
	}

	::System::Boolean Method_3_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_816015CAFD8353F7_METHOD_3_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_3_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_816015CAFD8353F7_METHOD_3_F0E307B84478A272_OFFSET))(this);
	}

	::System::Boolean Method_3_1808E1CF7A125519_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_816015CAFD8353F7_METHOD_3_1808E1CF7A125519_1_OFFSET))(this);
	}

	::System::Boolean Method_3_1D4018D4200358D0_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_816015CAFD8353F7_METHOD_3_1D4018D4200358D0_1_OFFSET))(this);
	}

	::System::Boolean Method_3_F0088C88851A7DFB_3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_816015CAFD8353F7_METHOD_3_F0088C88851A7DFB_3_OFFSET))(this);
	}

	::System::Void Method_3_A9805CA46D68009E(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_816015CAFD8353F7_METHOD_3_A9805CA46D68009E_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_1808E1CF7A125519_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_816015CAFD8353F7_METHOD_3_1808E1CF7A125519_2_OFFSET))(this);
	}
};
