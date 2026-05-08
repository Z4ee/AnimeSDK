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
#include "unitysdk/Struct_2_5887222B9AE38D34_1.h"
#include "unitysdk/Struct_2_A80C7074D9B7D776.h"
#include "unitysdk/Struct_2_D18F1D061EEF5E67.h"
#include "unitysdk/Struct_2_F2A7939F5DFF18C1_4.h"
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

#define CLASS_3_816015CAFD8353F7_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x13B027D0)
#define CLASS_3_816015CAFD8353F7_METHOD_3_1808E1CF7A125519_1_OFFSET UNITYSDK_OFFSET(0x13B03940)
#define CLASS_3_816015CAFD8353F7_METHOD_3_1808E1CF7A125519_2_OFFSET UNITYSDK_OFFSET(0x13B03BE0)
#define CLASS_3_816015CAFD8353F7_METHOD_3_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x13B03090)
#define CLASS_3_816015CAFD8353F7_METHOD_3_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0x13B03AF0)
#define CLASS_3_816015CAFD8353F7_METHOD_3_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x13B03770)
#define CLASS_3_816015CAFD8353F7_METHOD_3_2E47F09A457E7E05_OFFSET UNITYSDK_OFFSET(0x13B03C60)
#define CLASS_3_816015CAFD8353F7_METHOD_3_3150507749BCEAEC_OFFSET UNITYSDK_OFFSET(0x13B037F0)
#define CLASS_3_816015CAFD8353F7_METHOD_3_52FB29FB5E593F19_OFFSET UNITYSDK_OFFSET(0x13B03C50)
#define CLASS_3_816015CAFD8353F7_METHOD_3_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x13B04430)
#define CLASS_3_816015CAFD8353F7_METHOD_3_7ED98D5A80383780_OFFSET UNITYSDK_OFFSET(0x13B03DE0)
#define CLASS_3_816015CAFD8353F7_METHOD_3_83F9AA70898125AA_OFFSET UNITYSDK_OFFSET(0x13B03B50)
#define CLASS_3_816015CAFD8353F7_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x13B039B0)
#define CLASS_3_816015CAFD8353F7_METHOD_3_A9805CA46D68009E_OFFSET UNITYSDK_OFFSET(0x13B03100)
#define CLASS_3_816015CAFD8353F7_METHOD_3_BA9D72D2E98D603C_OFFSET UNITYSDK_OFFSET(0x13B032E0)
#define CLASS_3_816015CAFD8353F7_METHOD_3_C74CF020AA42ED85_1_OFFSET UNITYSDK_OFFSET(0x13B03A40)
#define CLASS_3_816015CAFD8353F7_METHOD_3_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x13B03930)
#define CLASS_3_816015CAFD8353F7_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x13B036E0)
#define CLASS_3_816015CAFD8353F7_METHOD_3_EBCA8E5D8C47FF73_OFFSET UNITYSDK_OFFSET(0x13B03240)
#define CLASS_3_816015CAFD8353F7_METHOD_3_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x13B037D0)
#define CLASS_3_816015CAFD8353F7_METHOD_3_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0x13B03420)
#define CLASS_3_816015CAFD8353F7_METHOD_3_F0088C88851A7DFB_3_OFFSET UNITYSDK_OFFSET(0x13B037E0)
#define CLASS_3_816015CAFD8353F7_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x13B03760)
#define CLASS_3_816015CAFD8353F7_METHOD_3_F026F9F94BAA5E1F_OFFSET UNITYSDK_OFFSET(0x13B03D70)
#define CLASS_3_816015CAFD8353F7_METHOD_3_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x13B03430)
#define CLASS_3_816015CAFD8353F7_METHOD_3_FC21B103930CA6DE_OFFSET UNITYSDK_OFFSET(0x13B03460)
#define CLASS_3_816015CAFD8353F7_METHOD_3_FE3C2A09ADE8A2F8_OFFSET UNITYSDK_OFFSET(0x13B03A50)
#define CLASS_3_816015CAFD8353F7_METHOD_3_FF7B2911BBACA4A9_1_OFFSET UNITYSDK_OFFSET(0x13B03CD0)
#define CLASS_3_816015CAFD8353F7_METHOD_3_FF7B2911BBACA4A9_2_OFFSET UNITYSDK_OFFSET(0x13B04440)
#define CLASS_3_816015CAFD8353F7_METHOD_3_FF7B2911BBACA4A9_3_OFFSET UNITYSDK_OFFSET(0x13B044E0)
#define CLASS_3_816015CAFD8353F7_METHOD_3_FF7B2911BBACA4A9_4_OFFSET UNITYSDK_OFFSET(0x13B04580)
#define CLASS_3_816015CAFD8353F7_METHOD_3_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0x13B03890)
#define CLASS_3_816015CAFD8353F7_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x13B01F00)
#define CLASS_3_816015CAFD8353F7__CCTOR_OFFSET UNITYSDK_OFFSET(0x13B02820)
#define CLASS_3_816015CAFD8353F7__CTOR_OFFSET UNITYSDK_OFFSET(0x13B028F0)

inline static constexpr unsigned int Class_3_816015CAFD8353F7_TypeDefinitionIndex = 76163;

class Class_3_816015CAFD8353F7 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	static ::System::String** StaticGet_Field_3_66()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_3_816015CAFD8353F7_TypeDefinitionIndex)->GetStaticField(0x36610);
	}
	static ::Il2CppArray<::UnityEngine::BoxCollider*>** StaticGet_Field_3_3()
	{
		return (::Il2CppArray<::UnityEngine::BoxCollider*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_816015CAFD8353F7_TypeDefinitionIndex)->GetStaticField(0x36618);
	}
	static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet_Field_3_2()
	{
		return (::Il2CppArray<::UnityEngine::RaycastHit>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_816015CAFD8353F7_TypeDefinitionIndex)->GetStaticField(0x36620);
	}
	static ::UnityEngine::RaycastHit* StaticGet_Field_3_1()
	{
		return (::UnityEngine::RaycastHit*)Il2CppClass::FromTypeDefinitionIndex(Class_3_816015CAFD8353F7_TypeDefinitionIndex)->GetStaticField(0xD7A0);
	}
	// static const ::System::String* Field_3_0; // 0x0
	// static const ::System::Int32 Field_3_89 = 0x71; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Single>* Field_3_26; // 0x48
	::System::String* Field_3_78; // 0x50
	::MoleMole::Battle::AnimatorParamControl* Field_3_22; // 0x58
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_3_38; // 0x60
	::MoleMole::Config::ConfigPosRot* Field_3_15; // 0x68
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_3_39; // 0x70
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_3_40; // 0x78
	::MoleMole::EntityHandle Field_3_42; // 0x80
	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* Field_3_61; // 0x90
	::System::Collections::Generic::List_1<::Class_1_BBDCDD7F93208E26*>* Field_3_57; // 0x98
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Struct_2_A80C7074D9B7D776>* Field_3_63; // 0xA0
	::System::Collections::Generic::List_1<::Class_2_96512999D77B8CB1*>* Field_3_88; // 0xA8
	::System::Collections::Generic::List_1<::Struct_2_5887222B9AE38D34_1>* Field_3_55; // 0xB0
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Single>* Field_3_27; // 0xB8
	::MoleMole::Battle::AnimatorParamControl* Field_3_23; // 0xC0
	::System::Action_2<::System::Int32, ::System::Int32>* Field_3_44; // 0xC8
	::Class_1_8289F2785D9AA990* Field_3_81; // 0xD0
	::System::Action_1<::Class_3_816015CAFD8353F7_Enum_3_1A21FE4EAFEF3879>* Field_3_77; // 0xD8
	::Class_1_8289F2785D9AA990* Field_3_46; // 0xE0
	::Class_1_8289F2785D9AA990* Field_3_45; // 0xE8
	::System::String* Field_3_21; // 0xF0
	::System::Collections::Generic::List_1<::System::String*>* Field_3_79; // 0xF8
	::MoleMole::Config::ConfigPosRot* Field_3_19; // 0x100
	::System::Collections::Generic::Dictionary_2<::Enum_3_D2BFB44AC6DE1FD1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>*>* Field_3_9; // 0x108
	::Class_1_8289F2785D9AA990* Field_3_47; // 0x110
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Single>* Field_3_69; // 0x118
	::System::String* Field_3_16; // 0x120
	::Class_1_8289F2785D9AA990* Field_3_4; // 0x128
	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* Field_3_60; // 0x130
	::System::Collections::Generic::List_1<::Class_1_BBDCDD7F93208E26*>* Field_3_58; // 0x138
	::System::Collections::Generic::List_1<::Struct_2_F2A7939F5DFF18C1_4>* Field_3_67; // 0x140
	::System::Collections::Generic::List_1<::Class_1_BBDCDD7F93208E26*>* Field_3_59; // 0x148
	::Class_1_BBDCDD7F93208E26* Field_3_56; // 0x150
	::System::Collections::Generic::List_1<::Struct_2_D18F1D061EEF5E67>* Field_3_68; // 0x158
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Field_3_62; // 0x160
	::Class_1_8289F2785D9AA990* Field_3_48; // 0x168
	::System::Collections::Generic::List_1<::System::String*>* Field_3_65; // 0x170
	::System::Collections::Generic::List_1<::System::String*>* Field_3_41; // 0x178
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* Field_3_70; // 0x180
	::System::UInt32 Field_3_83; // 0x188
	::System::Boolean Field_3_74; // 0x18C
	::System::Boolean Field_3_51; // 0x18D
	::System::Boolean Field_3_11; // 0x18E
	::System::Boolean Field_3_33; // 0x18F
	::System::UInt32 Field_3_85; // 0x190
	::System::Single Field_3_31; // 0x194
	::System::Int32 Field_3_28; // 0x198
	::System::Single Field_3_5; // 0x19C
	::System::Int32 Field_3_72; // 0x1A0
	::System::Single Field_3_7; // 0x1A4
	::System::Int32 Field_3_29; // 0x1A8
	::System::Int32 Field_3_43; // 0x1AC
	::Enum_3_C6C58EFCBBBAFDFC Field_3_82; // 0x1B0
	::System::Boolean Field_3_18; // 0x1B4
	::System::Boolean Field_3_87; // 0x1B5
	::System::Single Field_3_54; // 0x1B8
	::Class_3_816015CAFD8353F7_Enum_3_1A21FE4EAFEF3879 Field_3_76; // 0x1BC
	::System::Single Field_3_14; // 0x1C0
	::System::Single Field_3_30; // 0x1C4
	::System::Single Field_3_52; // 0x1C8
	::System::Boolean Field_3_37; // 0x1CC
	::System::Boolean Field_3_36; // 0x1CD
	::System::Boolean Field_3_84; // 0x1CE
	::System::Boolean Field_3_53; // 0x1CF
	::System::Single Field_3_73; // 0x1D0
	::System::Boolean Field_3_86; // 0x1D4
	::System::Boolean Field_3_49; // 0x1D5
	::System::Boolean Field_3_64; // 0x1D6
	::System::Boolean Field_3_13; // 0x1D7
	::System::Single Field_3_75; // 0x1D8
	::System::Single Field_3_17; // 0x1DC
	::System::Int32 Field_3_71; // 0x1E0
	::System::Int32 Field_3_25; // 0x1E4
	::Enum_3_C2761E57EE0B71AF Field_3_32; // 0x1E8
	::System::Int32 Field_3_6; // 0x1EC
	::System::UInt32 Field_3_80; // 0x1F0
	::System::Int32 Field_3_10; // 0x1F4
	::System::Int32 Field_3_24; // 0x1F8
	::System::Single Field_3_8; // 0x1FC
	::UnityEngine::Vector3 Field_3_20; // 0x200
	::Enum_3_B7E66D8760FABD1A Field_3_35; // 0x20C
	::MoleMole::Config::AidAttackType Field_3_34; // 0x210
	::System::Single Field_3_50; // 0x214
	::System::Single Field_3_12; // 0x218

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

	::System::Boolean Method_3_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_816015CAFD8353F7_METHOD_3_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_3_A9805CA46D68009E(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_816015CAFD8353F7_METHOD_3_A9805CA46D68009E_OFFSET))(this, a1);
	}

	::System::Void Method_3_BA9D72D2E98D603C(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_816015CAFD8353F7_METHOD_3_BA9D72D2E98D603C_OFFSET))(this, a1);
	}

	static ::Class_3_816015CAFD8353F7* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_816015CAFD8353F7*(*)())((::PBYTE)hIl2Cpp + CLASS_3_816015CAFD8353F7_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Int32 Method_3_EBCA8E5D8C47FF73()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_816015CAFD8353F7_METHOD_3_EBCA8E5D8C47FF73_OFFSET))(this);
	}

	::System::Boolean Method_3_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_816015CAFD8353F7_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_3_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_816015CAFD8353F7_METHOD_3_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Single Method_3_3150507749BCEAEC()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_816015CAFD8353F7_METHOD_3_3150507749BCEAEC_OFFSET))(this);
	}

	::System::Single Method_3_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_816015CAFD8353F7_METHOD_3_FF7B2911BBACA4A9_OFFSET))(this);
	}

	::System::Int32 Method_3_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_816015CAFD8353F7_METHOD_3_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Boolean Method_3_1808E1CF7A125519_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_816015CAFD8353F7_METHOD_3_1808E1CF7A125519_1_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_816015CAFD8353F7_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Int32 Method_3_C74CF020AA42ED85_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_816015CAFD8353F7_METHOD_3_C74CF020AA42ED85_1_OFFSET))(this);
	}

	::System::Void Method_3_FC21B103930CA6DE(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_816015CAFD8353F7_METHOD_3_FC21B103930CA6DE_OFFSET))(this, a1);
	}

	::MoleMole::Config::ConfigPosRot* Method_3_FE3C2A09ADE8A2F8()
	{
		return ((::MoleMole::Config::ConfigPosRot*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_816015CAFD8353F7_METHOD_3_FE3C2A09ADE8A2F8_OFFSET))(this);
	}

	::System::Boolean Method_3_1D4018D4200358D0_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_816015CAFD8353F7_METHOD_3_1D4018D4200358D0_1_OFFSET))(this);
	}

	::System::Void Method_3_83F9AA70898125AA(::Class_3_816015CAFD8353F7_Enum_3_1A21FE4EAFEF3879 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_816015CAFD8353F7_Enum_3_1A21FE4EAFEF3879))((::PBYTE)hIl2Cpp + CLASS_3_816015CAFD8353F7_METHOD_3_83F9AA70898125AA_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_816015CAFD8353F7_METHOD_3_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Boolean Method_3_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_816015CAFD8353F7_METHOD_3_F0088C88851A7DFB_2_OFFSET))(this);
	}

	::System::Boolean Method_3_1808E1CF7A125519_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_816015CAFD8353F7_METHOD_3_1808E1CF7A125519_2_OFFSET))(this);
	}

	::Class_3_816015CAFD8353F7_Enum_3_1A21FE4EAFEF3879 Method_3_52FB29FB5E593F19()
	{
		return ((::Class_3_816015CAFD8353F7_Enum_3_1A21FE4EAFEF3879(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_816015CAFD8353F7_METHOD_3_52FB29FB5E593F19_OFFSET))(this);
	}

	::System::Void Method_3_2E47F09A457E7E05(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_816015CAFD8353F7_METHOD_3_2E47F09A457E7E05_OFFSET))(this, a1);
	}

	::System::Single Method_3_FF7B2911BBACA4A9_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_816015CAFD8353F7_METHOD_3_FF7B2911BBACA4A9_1_OFFSET))(this);
	}

	::System::Boolean Method_3_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_816015CAFD8353F7_METHOD_3_F0E307B84478A272_OFFSET))(this);
	}

	::System::Int32 Method_3_F026F9F94BAA5E1F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_816015CAFD8353F7_METHOD_3_F026F9F94BAA5E1F_OFFSET))(this);
	}

	::Class_3_816015CAFD8353F7* Method_3_7ED98D5A80383780()
	{
		return ((::Class_3_816015CAFD8353F7*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_816015CAFD8353F7_METHOD_3_7ED98D5A80383780_OFFSET))(this);
	}

	::System::Boolean Method_3_F0088C88851A7DFB_3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_816015CAFD8353F7_METHOD_3_F0088C88851A7DFB_3_OFFSET))(this);
	}

	::System::Single Method_3_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_816015CAFD8353F7_METHOD_3_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Single Method_3_FF7B2911BBACA4A9_2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_816015CAFD8353F7_METHOD_3_FF7B2911BBACA4A9_2_OFFSET))(this);
	}

	::System::Single Method_3_FF7B2911BBACA4A9_3()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_816015CAFD8353F7_METHOD_3_FF7B2911BBACA4A9_3_OFFSET))(this);
	}

	::System::Single Method_3_FF7B2911BBACA4A9_4()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_816015CAFD8353F7_METHOD_3_FF7B2911BBACA4A9_4_OFFSET))(this);
	}
};
