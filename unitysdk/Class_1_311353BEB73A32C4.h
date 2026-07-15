#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_311353BEB73A32C4_EventKind.h"
#include "unitysdk/Class_1_311353BEB73A32C4_IssueKind.h"
#include "unitysdk/Class_1_311353BEB73A32C4_Struct_2_52AD02145F5FCE3A_3.h"
#include "unitysdk/Class_1_311353BEB73A32C4_Struct_2_52AD02145F5FCE3A_4.h"
#include "unitysdk/Class_1_311353BEB73A32C4_Struct_2_52AD02145F5FCE3A_5.h"
#include "unitysdk/Class_1_311353BEB73A32C4_Struct_2_983A9E004BAA0B42.h"
#include "unitysdk/Class_1_311353BEB73A32C4_Struct_2_BD49EB90D21427BE.h"
#include "unitysdk/RPG/Client/OpenWorld/SwitchBattleAreaReason.h"
#include "unitysdk/RPG/GameCore/BattleAreaSwitchStatus.h"
#include "unitysdk/Struct_2_BD1A98EFEDD35816.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_311353BEB73A32C4_Class_1_1A9F4846CC90F8BD;
class Class_1_83ABAC4FF8C00500;
class Class_1_D70A30D666F20D90;
namespace RPG::Client { class Stage; }
namespace RPG::GameCore { class SwitchBattleArea; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Exception; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_311353BEB73A32C4_METHOD_1_042F07AA900DE205_OFFSET UNITYSDK_OFFSET(0x149A8D20)
#define CLASS_1_311353BEB73A32C4_METHOD_1_079234A97425D58B_OFFSET UNITYSDK_OFFSET(0x149AF660)
#define CLASS_1_311353BEB73A32C4_METHOD_1_0CE73EAD1A8B5282_OFFSET UNITYSDK_OFFSET(0x149AF040)
#define CLASS_1_311353BEB73A32C4_METHOD_1_0F30679B05E70FC1_OFFSET UNITYSDK_OFFSET(0x13A7C5E0)
#define CLASS_1_311353BEB73A32C4_METHOD_1_1042FA582518693A_OFFSET UNITYSDK_OFFSET(0x13A7CA60)
#define CLASS_1_311353BEB73A32C4_METHOD_1_14C93B9444837029_OFFSET UNITYSDK_OFFSET(0x149A9250)
#define CLASS_1_311353BEB73A32C4_METHOD_1_238FD79BA86A24A8_OFFSET UNITYSDK_OFFSET(0x13A7C8D0)
#define CLASS_1_311353BEB73A32C4_METHOD_1_251C3A19B9E2817F_OFFSET UNITYSDK_OFFSET(0x149AF6F0)
#define CLASS_1_311353BEB73A32C4_METHOD_1_2531A4E4B18DDB1C_OFFSET UNITYSDK_OFFSET(0x149AFDB0)
#define CLASS_1_311353BEB73A32C4_METHOD_1_2917549262AA5FFC_OFFSET UNITYSDK_OFFSET(0x13A7DA20)
#define CLASS_1_311353BEB73A32C4_METHOD_1_2A8ECEF2BB751473_OFFSET UNITYSDK_OFFSET(0x149AF1B0)
#define CLASS_1_311353BEB73A32C4_METHOD_1_348674E9BAD074BA_1_OFFSET UNITYSDK_OFFSET(0x149ADAF0)
#define CLASS_1_311353BEB73A32C4_METHOD_1_348674E9BAD074BA_OFFSET UNITYSDK_OFFSET(0x149AD950)
#define CLASS_1_311353BEB73A32C4_METHOD_1_395D10A135DD9377_OFFSET UNITYSDK_OFFSET(0x149AB2E0)
#define CLASS_1_311353BEB73A32C4_METHOD_1_3A7BC1986DBC0C6D_OFFSET UNITYSDK_OFFSET(0x149AEEF0)
#define CLASS_1_311353BEB73A32C4_METHOD_1_420C3B5A4BD5F998_OFFSET UNITYSDK_OFFSET(0x149A78B0)
#define CLASS_1_311353BEB73A32C4_METHOD_1_4732B4D459E0B8F4_OFFSET UNITYSDK_OFFSET(0x149AD830)
#define CLASS_1_311353BEB73A32C4_METHOD_1_53B766FA15AA1F3D_OFFSET UNITYSDK_OFFSET(0x13A3CBB0)
#define CLASS_1_311353BEB73A32C4_METHOD_1_553E4B89AD86412F_OFFSET UNITYSDK_OFFSET(0x149B09F0)
#define CLASS_1_311353BEB73A32C4_METHOD_1_5B812E663A5C40FD_OFFSET UNITYSDK_OFFSET(0x149AE7A0)
#define CLASS_1_311353BEB73A32C4_METHOD_1_5ED192CF10327F45_OFFSET UNITYSDK_OFFSET(0x149A7440)
#define CLASS_1_311353BEB73A32C4_METHOD_1_5F8FEE2B4FC42F09_OFFSET UNITYSDK_OFFSET(0x149AB400)
#define CLASS_1_311353BEB73A32C4_METHOD_1_66A173C99113D470_OFFSET UNITYSDK_OFFSET(0x13A7C730)
#define CLASS_1_311353BEB73A32C4_METHOD_1_67BB941C8CCF39D6_OFFSET UNITYSDK_OFFSET(0x149AC650)
#define CLASS_1_311353BEB73A32C4_METHOD_1_6FF49E98B9A15200_OFFSET UNITYSDK_OFFSET(0x149A6FE0)
#define CLASS_1_311353BEB73A32C4_METHOD_1_722E1524F560C8AF_1_OFFSET UNITYSDK_OFFSET(0x149B0F90)
#define CLASS_1_311353BEB73A32C4_METHOD_1_722E1524F560C8AF_OFFSET UNITYSDK_OFFSET(0x149AFBD0)
#define CLASS_1_311353BEB73A32C4_METHOD_1_73569AD89B2179CE_OFFSET UNITYSDK_OFFSET(0x149AB590)
#define CLASS_1_311353BEB73A32C4_METHOD_1_751E89BFB29D4FCF_OFFSET UNITYSDK_OFFSET(0x149AEFB0)
#define CLASS_1_311353BEB73A32C4_METHOD_1_78C6F2411123A67F_OFFSET UNITYSDK_OFFSET(0x149B0160)
#define CLASS_1_311353BEB73A32C4_METHOD_1_7A25D01AF9AC590C_OFFSET UNITYSDK_OFFSET(0x13A7D410)
#define CLASS_1_311353BEB73A32C4_METHOD_1_7E8812EC7CD3355E_OFFSET UNITYSDK_OFFSET(0x149AEAD0)
#define CLASS_1_311353BEB73A32C4_METHOD_1_80353D3A74846E23_OFFSET UNITYSDK_OFFSET(0x149A72C0)
#define CLASS_1_311353BEB73A32C4_METHOD_1_9C66B07446448FC6_OFFSET UNITYSDK_OFFSET(0x149AD640)
#define CLASS_1_311353BEB73A32C4_METHOD_1_A871253BFD471C99_OFFSET UNITYSDK_OFFSET(0x13A7C460)
#define CLASS_1_311353BEB73A32C4_METHOD_1_AAE8F70DD184301E_OFFSET UNITYSDK_OFFSET(0x149AF470)
#define CLASS_1_311353BEB73A32C4_METHOD_1_AFDA3839BE42D59F_1_OFFSET UNITYSDK_OFFSET(0x149ABA70)
#define CLASS_1_311353BEB73A32C4_METHOD_1_AFDA3839BE42D59F_2_OFFSET UNITYSDK_OFFSET(0x149ABBF0)
#define CLASS_1_311353BEB73A32C4_METHOD_1_AFDA3839BE42D59F_OFFSET UNITYSDK_OFFSET(0x149AB860)
#define CLASS_1_311353BEB73A32C4_METHOD_1_B03F6D31318CC2B8_1_OFFSET UNITYSDK_OFFSET(0x149AD430)
#define CLASS_1_311353BEB73A32C4_METHOD_1_B03F6D31318CC2B8_2_OFFSET UNITYSDK_OFFSET(0x149AD4E0)
#define CLASS_1_311353BEB73A32C4_METHOD_1_B03F6D31318CC2B8_3_OFFSET UNITYSDK_OFFSET(0x149AD590)
#define CLASS_1_311353BEB73A32C4_METHOD_1_B03F6D31318CC2B8_4_OFFSET UNITYSDK_OFFSET(0x149B0EE0)
#define CLASS_1_311353BEB73A32C4_METHOD_1_B03F6D31318CC2B8_OFFSET UNITYSDK_OFFSET(0x149AD380)
#define CLASS_1_311353BEB73A32C4_METHOD_1_B382522CC13B676F_OFFSET UNITYSDK_OFFSET(0x149A7C20)
#define CLASS_1_311353BEB73A32C4_METHOD_1_B774096704F3B609_OFFSET UNITYSDK_OFFSET(0x149ADC90)
#define CLASS_1_311353BEB73A32C4_METHOD_1_CABC6E824A891AA1_OFFSET UNITYSDK_OFFSET(0x13A7CF60)
#define CLASS_1_311353BEB73A32C4_METHOD_1_D272F840505A89FB_OFFSET UNITYSDK_OFFSET(0x149AC820)
#define CLASS_1_311353BEB73A32C4_METHOD_1_D8C9AB41D9A066F7_OFFSET UNITYSDK_OFFSET(0x149A67D0)
#define CLASS_1_311353BEB73A32C4_METHOD_1_E1C60FB09D82AA24_OFFSET UNITYSDK_OFFSET(0x149AD010)
#define CLASS_1_311353BEB73A32C4_METHOD_1_E2482579863641B1_1_OFFSET UNITYSDK_OFFSET(0x149AC4E0)
#define CLASS_1_311353BEB73A32C4_METHOD_1_E2482579863641B1_2_OFFSET UNITYSDK_OFFSET(0x149AC9A0)
#define CLASS_1_311353BEB73A32C4_METHOD_1_E2482579863641B1_3_OFFSET UNITYSDK_OFFSET(0x149B05A0)
#define CLASS_1_311353BEB73A32C4_METHOD_1_E2482579863641B1_4_OFFSET UNITYSDK_OFFSET(0x149B0710)
#define CLASS_1_311353BEB73A32C4_METHOD_1_E2482579863641B1_5_OFFSET UNITYSDK_OFFSET(0x149B0880)
#define CLASS_1_311353BEB73A32C4_METHOD_1_E2482579863641B1_OFFSET UNITYSDK_OFFSET(0x149AC370)
#define CLASS_1_311353BEB73A32C4_METHOD_1_E877D0B6DC62E7CC_OFFSET UNITYSDK_OFFSET(0x149ACB10)
#define CLASS_1_311353BEB73A32C4_METHOD_1_EBCA8E5D8C47FF73_OFFSET UNITYSDK_OFFSET(0x13A7D3B0)
#define CLASS_1_311353BEB73A32C4_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x13A3CBA0)
#define CLASS_1_311353BEB73A32C4_METHOD_1_F206EFE9F2EC1D79_OFFSET UNITYSDK_OFFSET(0x149AD1E0)
#define CLASS_1_311353BEB73A32C4_METHOD_1_F3CFAE2E96E4D896_OFFSET UNITYSDK_OFFSET(0x13A7D100)
#define CLASS_1_311353BEB73A32C4_METHOD_1_F4E99F3AE4247638_OFFSET UNITYSDK_OFFSET(0x149A7060)
#define CLASS_1_311353BEB73A32C4_METHOD_1_F5DC179AA33CF57E_OFFSET UNITYSDK_OFFSET(0x149ADEC0)
#define CLASS_1_311353BEB73A32C4_METHOD_1_FB2D01FD9816A1AA_1_OFFSET UNITYSDK_OFFSET(0x149B0D70)
#define CLASS_1_311353BEB73A32C4_METHOD_1_FB2D01FD9816A1AA_OFFSET UNITYSDK_OFFSET(0x149B0C00)
#define CLASS_1_311353BEB73A32C4_METHOD_1_FEE566E75F83649A_OFFSET UNITYSDK_OFFSET(0x149ABE00)
#define CLASS_1_311353BEB73A32C4__CCTOR_OFFSET UNITYSDK_OFFSET(0x149B1170)

inline static constexpr unsigned int Class_1_311353BEB73A32C4_TypeDefinitionIndex = 70369;

class Class_1_311353BEB73A32C4 : public ::System::Object
{
public:
	static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::HashSet_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_311353BEB73A32C4_TypeDefinitionIndex)->GetStaticField(0x62BF0);
	}
	static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::HashSet_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_311353BEB73A32C4_TypeDefinitionIndex)->GetStaticField(0x62BF8);
	}
	static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::HashSet_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_311353BEB73A32C4_TypeDefinitionIndex)->GetStaticField(0x62C00);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::UInt64, ::Class_1_311353BEB73A32C4_Class_1_1A9F4846CC90F8BD*>** StaticGet_Field_1_3()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt64, ::Class_1_311353BEB73A32C4_Class_1_1A9F4846CC90F8BD*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_311353BEB73A32C4_TypeDefinitionIndex)->GetStaticField(0x62C08);
	}
	static ::System::Collections::Generic::HashSet_1<::Class_1_311353BEB73A32C4_IssueKind>** StaticGet_Field_1_4()
	{
		return (::System::Collections::Generic::HashSet_1<::Class_1_311353BEB73A32C4_IssueKind>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_311353BEB73A32C4_TypeDefinitionIndex)->GetStaticField(0x62C10);
	}
	static ::Il2CppArray<::Class_1_311353BEB73A32C4_Struct_2_983A9E004BAA0B42>** StaticGet_Field_1_5()
	{
		return (::Il2CppArray<::Class_1_311353BEB73A32C4_Struct_2_983A9E004BAA0B42>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_311353BEB73A32C4_TypeDefinitionIndex)->GetStaticField(0x62C18);
	}
	static ::Il2CppArray<::Class_1_311353BEB73A32C4_Struct_2_52AD02145F5FCE3A_3>** StaticGet_Field_1_6()
	{
		return (::Il2CppArray<::Class_1_311353BEB73A32C4_Struct_2_52AD02145F5FCE3A_3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_311353BEB73A32C4_TypeDefinitionIndex)->GetStaticField(0x62C20);
	}
	static ::System::Boolean* StaticGet_Field_1_7()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_311353BEB73A32C4_TypeDefinitionIndex)->GetStaticField(0x12EF0);
	}
	static ::System::Boolean* StaticGet_Field_1_8()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_311353BEB73A32C4_TypeDefinitionIndex)->GetStaticField(0x12EF1);
	}
	static ::System::Boolean* StaticGet_Field_1_9()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_311353BEB73A32C4_TypeDefinitionIndex)->GetStaticField(0x12EF2);
	}
	static ::System::Boolean* StaticGet_Field_1_10()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_311353BEB73A32C4_TypeDefinitionIndex)->GetStaticField(0x12EF3);
	}
	static ::System::Int32* StaticGet_Field_1_11()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_311353BEB73A32C4_TypeDefinitionIndex)->GetStaticField(0x12EF4);
	}
	static ::System::Int32* StaticGet_Field_1_12()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_311353BEB73A32C4_TypeDefinitionIndex)->GetStaticField(0x12EF8);
	}
	static ::System::Int32* StaticGet_Field_1_13()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_311353BEB73A32C4_TypeDefinitionIndex)->GetStaticField(0x12EFC);
	}
	static ::System::Int32* StaticGet_Field_1_14()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_311353BEB73A32C4_TypeDefinitionIndex)->GetStaticField(0x12F00);
	}
	static ::System::Int32* StaticGet_Field_1_15()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_311353BEB73A32C4_TypeDefinitionIndex)->GetStaticField(0x12F04);
	}
	static ::System::Int32* StaticGet_Field_1_16()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_311353BEB73A32C4_TypeDefinitionIndex)->GetStaticField(0x12F08);
	}
	static ::System::Int32* StaticGet_Field_1_17()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_311353BEB73A32C4_TypeDefinitionIndex)->GetStaticField(0x12F0C);
	}
	static ::System::Int32* StaticGet_Field_1_18()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_311353BEB73A32C4_TypeDefinitionIndex)->GetStaticField(0x12F10);
	}
	static ::System::Int32* StaticGet_Field_1_19()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_311353BEB73A32C4_TypeDefinitionIndex)->GetStaticField(0x12F14);
	}
	static ::Il2CppArray<::Class_1_311353BEB73A32C4_Struct_2_52AD02145F5FCE3A_4>** StaticGet_Field_1_20()
	{
		return (::Il2CppArray<::Class_1_311353BEB73A32C4_Struct_2_52AD02145F5FCE3A_4>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_311353BEB73A32C4_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Int32* StaticGet_Field_1_21()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_311353BEB73A32C4_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	// static const ::System::String* Field_1_22; // 0x0
	// static const ::System::String* Field_1_23; // 0x0
	// static const ::System::Int32 Field_1_24 = 0x100; // 0x0
	// static const ::System::Int32 Field_1_25 = 0x708; // 0x0
	// static const ::System::Int32 Field_1_26 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_27 = 0x1E; // 0x0
	// static const ::System::Int32 Field_1_28 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_29 = 0x12C; // 0x0
	// static const ::System::Int32 Field_1_30 = 0x258; // 0x0
	// static const ::System::Int32 Field_1_31 = 0xC; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_311353BEB73A32C4__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_A871253BFD471C99()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_311353BEB73A32C4_METHOD_1_A871253BFD471C99_OFFSET))();
	}

	static ::System::Boolean Method_1_0F30679B05E70FC1()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_311353BEB73A32C4_METHOD_1_0F30679B05E70FC1_OFFSET))();
	}

	static ::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_311353BEB73A32C4_METHOD_1_F0088C88851A7DFB_OFFSET))();
	}

	static ::System::Void Method_1_53B766FA15AA1F3D(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_311353BEB73A32C4_METHOD_1_53B766FA15AA1F3D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_66A173C99113D470(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_311353BEB73A32C4_METHOD_1_66A173C99113D470_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_238FD79BA86A24A8(::Class_1_311353BEB73A32C4_EventKind a1)
	{
		return ((::System::Void(*)(::Class_1_311353BEB73A32C4_EventKind))((::PBYTE)hIl2Cpp + CLASS_1_311353BEB73A32C4_METHOD_1_238FD79BA86A24A8_OFFSET))(a1);
	}

	static ::System::Void Method_1_CABC6E824A891AA1(::Class_1_311353BEB73A32C4_EventKind a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::Class_1_311353BEB73A32C4_EventKind, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_311353BEB73A32C4_METHOD_1_CABC6E824A891AA1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F3CFAE2E96E4D896(::Class_1_311353BEB73A32C4_EventKind a1, ::Struct_2_BD1A98EFEDD35816 a2, ::RPG::Client::OpenWorld::SwitchBattleAreaReason a3, ::System::Int32 a4, ::System::Nullable_1<::Struct_2_BD1A98EFEDD35816> a5, ::System::Nullable_1<::Struct_2_BD1A98EFEDD35816> a6, ::System::String* a7)
	{
		return ((::System::Void(*)(::Class_1_311353BEB73A32C4_EventKind, ::Struct_2_BD1A98EFEDD35816, ::RPG::Client::OpenWorld::SwitchBattleAreaReason, ::System::Int32, ::System::Nullable_1<::Struct_2_BD1A98EFEDD35816>, ::System::Nullable_1<::Struct_2_BD1A98EFEDD35816>, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_311353BEB73A32C4_METHOD_1_F3CFAE2E96E4D896_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::System::Void Method_1_1042FA582518693A(::Class_1_311353BEB73A32C4_EventKind a1, ::Struct_2_BD1A98EFEDD35816 a2, ::System::Boolean a3, ::System::Nullable_1<::Struct_2_BD1A98EFEDD35816> a4, ::System::Boolean a5, ::System::Nullable_1<::Struct_2_BD1A98EFEDD35816> a6, ::System::Boolean a7, ::RPG::Client::OpenWorld::SwitchBattleAreaReason a8, ::System::Int32 a9, ::System::Boolean a10, ::RPG::GameCore::BattleAreaSwitchStatus a11, ::System::UInt32 a12, ::System::String* a13, ::System::String* a14, ::System::Int32 a15, ::System::Int32 a16, ::System::Int32 a17, ::System::Boolean a18, ::System::Boolean a19, ::System::String* a20)
	{
		return ((::System::Void(*)(::Class_1_311353BEB73A32C4_EventKind, ::Struct_2_BD1A98EFEDD35816, ::System::Boolean, ::System::Nullable_1<::Struct_2_BD1A98EFEDD35816>, ::System::Boolean, ::System::Nullable_1<::Struct_2_BD1A98EFEDD35816>, ::System::Boolean, ::RPG::Client::OpenWorld::SwitchBattleAreaReason, ::System::Int32, ::System::Boolean, ::RPG::GameCore::BattleAreaSwitchStatus, ::System::UInt32, ::System::String*, ::System::String*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_311353BEB73A32C4_METHOD_1_1042FA582518693A_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20);
	}

	static ::System::Int32 Method_1_EBCA8E5D8C47FF73()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_311353BEB73A32C4_METHOD_1_EBCA8E5D8C47FF73_OFFSET))();
	}

	static ::Class_1_311353BEB73A32C4_Struct_2_BD49EB90D21427BE Method_1_7A25D01AF9AC590C(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TaskConfig* a2, ::System::String* a3, ::System::Int32 a4)
	{
		return ((::Class_1_311353BEB73A32C4_Struct_2_BD49EB90D21427BE(*)(::RPG::GameCore::TaskContext*, ::RPG::GameCore::TaskConfig*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_311353BEB73A32C4_METHOD_1_7A25D01AF9AC590C_OFFSET))(a1, a2, a3, a4);
	}

	static ::Class_1_311353BEB73A32C4_Struct_2_BD49EB90D21427BE Method_1_2917549262AA5FFC(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchBattleArea* a2, ::System::UInt32 a3, ::System::String* a4, ::System::String* a5, ::System::Int32 a6)
	{
		return ((::Class_1_311353BEB73A32C4_Struct_2_BD49EB90D21427BE(*)(::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchBattleArea*, ::System::UInt32, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_311353BEB73A32C4_METHOD_1_2917549262AA5FFC_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_1_D8C9AB41D9A066F7(::Class_1_D70A30D666F20D90* a1, ::Struct_2_BD1A98EFEDD35816 a2, ::RPG::Client::OpenWorld::SwitchBattleAreaReason a3, ::System::Int32 a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::Class_1_D70A30D666F20D90*, ::Struct_2_BD1A98EFEDD35816, ::RPG::Client::OpenWorld::SwitchBattleAreaReason, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_311353BEB73A32C4_METHOD_1_D8C9AB41D9A066F7_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::UInt64 Method_1_6FF49E98B9A15200(::Struct_2_BD1A98EFEDD35816 a1, ::RPG::Client::OpenWorld::SwitchBattleAreaReason a2)
	{
		return ((::System::UInt64(*)(::Struct_2_BD1A98EFEDD35816, ::RPG::Client::OpenWorld::SwitchBattleAreaReason))((::PBYTE)hIl2Cpp + CLASS_1_311353BEB73A32C4_METHOD_1_6FF49E98B9A15200_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F4E99F3AE4247638(::Struct_2_BD1A98EFEDD35816 a1, ::RPG::Client::OpenWorld::SwitchBattleAreaReason a2)
	{
		return ((::System::Boolean(*)(::Struct_2_BD1A98EFEDD35816, ::RPG::Client::OpenWorld::SwitchBattleAreaReason))((::PBYTE)hIl2Cpp + CLASS_1_311353BEB73A32C4_METHOD_1_F4E99F3AE4247638_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_80353D3A74846E23(::Struct_2_BD1A98EFEDD35816 a1, ::RPG::Client::OpenWorld::SwitchBattleAreaReason a2)
	{
		return ((::System::Void(*)(::Struct_2_BD1A98EFEDD35816, ::RPG::Client::OpenWorld::SwitchBattleAreaReason))((::PBYTE)hIl2Cpp + CLASS_1_311353BEB73A32C4_METHOD_1_80353D3A74846E23_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5ED192CF10327F45(::Class_1_D70A30D666F20D90* a1, ::Class_1_83ABAC4FF8C00500* a2, ::Class_1_83ABAC4FF8C00500* a3)
	{
		return ((::System::Void(*)(::Class_1_D70A30D666F20D90*, ::Class_1_83ABAC4FF8C00500*, ::Class_1_83ABAC4FF8C00500*))((::PBYTE)hIl2Cpp + CLASS_1_311353BEB73A32C4_METHOD_1_5ED192CF10327F45_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_420C3B5A4BD5F998(::Class_1_D70A30D666F20D90* a1, ::Class_1_83ABAC4FF8C00500* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::Class_1_D70A30D666F20D90*, ::Class_1_83ABAC4FF8C00500*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_311353BEB73A32C4_METHOD_1_420C3B5A4BD5F998_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_B382522CC13B676F(::Class_1_D70A30D666F20D90* a1)
	{
		return ((::System::Void(*)(::Class_1_D70A30D666F20D90*))((::PBYTE)hIl2Cpp + CLASS_1_311353BEB73A32C4_METHOD_1_B382522CC13B676F_OFFSET))(a1);
	}

	static ::Class_1_311353BEB73A32C4_Struct_2_52AD02145F5FCE3A_5 Method_1_042F07AA900DE205(::Class_1_D70A30D666F20D90* a1)
	{
		return ((::Class_1_311353BEB73A32C4_Struct_2_52AD02145F5FCE3A_5(*)(::Class_1_D70A30D666F20D90*))((::PBYTE)hIl2Cpp + CLASS_1_311353BEB73A32C4_METHOD_1_042F07AA900DE205_OFFSET))(a1);
	}

	static ::System::Void Method_1_395D10A135DD9377(::Class_1_311353BEB73A32C4_IssueKind a1, ::Class_1_D70A30D666F20D90* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::Class_1_311353BEB73A32C4_IssueKind, ::Class_1_D70A30D666F20D90*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_311353BEB73A32C4_METHOD_1_395D10A135DD9377_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_14C93B9444837029(::Class_1_311353BEB73A32C4_IssueKind a1, ::Class_1_D70A30D666F20D90* a2, ::Class_1_311353BEB73A32C4_Struct_2_52AD02145F5FCE3A_5 a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::Class_1_311353BEB73A32C4_IssueKind, ::Class_1_D70A30D666F20D90*, ::Class_1_311353BEB73A32C4_Struct_2_52AD02145F5FCE3A_5, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_311353BEB73A32C4_METHOD_1_14C93B9444837029_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_5F8FEE2B4FC42F09(::Class_1_D70A30D666F20D90* a1, ::Struct_2_BD1A98EFEDD35816 a2, ::RPG::Client::OpenWorld::SwitchBattleAreaReason a3, ::System::Int32 a4, ::System::String* a5)
	{
		return ((::System::Void(*)(::Class_1_D70A30D666F20D90*, ::Struct_2_BD1A98EFEDD35816, ::RPG::Client::OpenWorld::SwitchBattleAreaReason, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_311353BEB73A32C4_METHOD_1_5F8FEE2B4FC42F09_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_73569AD89B2179CE(::Class_1_D70A30D666F20D90* a1, ::Struct_2_BD1A98EFEDD35816 a2, ::Class_1_83ABAC4FF8C00500* a3, ::Class_1_83ABAC4FF8C00500* a4, ::RPG::Client::OpenWorld::SwitchBattleAreaReason a5, ::System::Int32 a6)
	{
		return ((::System::Void(*)(::Class_1_D70A30D666F20D90*, ::Struct_2_BD1A98EFEDD35816, ::Class_1_83ABAC4FF8C00500*, ::Class_1_83ABAC4FF8C00500*, ::RPG::Client::OpenWorld::SwitchBattleAreaReason, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_311353BEB73A32C4_METHOD_1_73569AD89B2179CE_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_1_AFDA3839BE42D59F(::Class_1_D70A30D666F20D90* a1, ::Struct_2_BD1A98EFEDD35816 a2, ::RPG::Client::OpenWorld::SwitchBattleAreaReason a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::Class_1_D70A30D666F20D90*, ::Struct_2_BD1A98EFEDD35816, ::RPG::Client::OpenWorld::SwitchBattleAreaReason, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_311353BEB73A32C4_METHOD_1_AFDA3839BE42D59F_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_AFDA3839BE42D59F_1(::Class_1_D70A30D666F20D90* a1, ::Struct_2_BD1A98EFEDD35816 a2, ::RPG::Client::OpenWorld::SwitchBattleAreaReason a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::Class_1_D70A30D666F20D90*, ::Struct_2_BD1A98EFEDD35816, ::RPG::Client::OpenWorld::SwitchBattleAreaReason, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_311353BEB73A32C4_METHOD_1_AFDA3839BE42D59F_1_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_AFDA3839BE42D59F_2(::Class_1_D70A30D666F20D90* a1, ::Struct_2_BD1A98EFEDD35816 a2, ::RPG::Client::OpenWorld::SwitchBattleAreaReason a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::Class_1_D70A30D666F20D90*, ::Struct_2_BD1A98EFEDD35816, ::RPG::Client::OpenWorld::SwitchBattleAreaReason, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_311353BEB73A32C4_METHOD_1_AFDA3839BE42D59F_2_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_FEE566E75F83649A(::Class_1_D70A30D666F20D90* a1, ::Struct_2_BD1A98EFEDD35816 a2, ::Class_1_83ABAC4FF8C00500* a3, ::Class_1_83ABAC4FF8C00500* a4, ::RPG::Client::OpenWorld::SwitchBattleAreaReason a5, ::System::Int32 a6)
	{
		return ((::System::Void(*)(::Class_1_D70A30D666F20D90*, ::Struct_2_BD1A98EFEDD35816, ::Class_1_83ABAC4FF8C00500*, ::Class_1_83ABAC4FF8C00500*, ::RPG::Client::OpenWorld::SwitchBattleAreaReason, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_311353BEB73A32C4_METHOD_1_FEE566E75F83649A_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_1_E2482579863641B1(::Class_1_D70A30D666F20D90* a1, ::Struct_2_BD1A98EFEDD35816 a2)
	{
		return ((::System::Void(*)(::Class_1_D70A30D666F20D90*, ::Struct_2_BD1A98EFEDD35816))((::PBYTE)hIl2Cpp + CLASS_1_311353BEB73A32C4_METHOD_1_E2482579863641B1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E2482579863641B1_1(::Class_1_D70A30D666F20D90* a1, ::Struct_2_BD1A98EFEDD35816 a2)
	{
		return ((::System::Void(*)(::Class_1_D70A30D666F20D90*, ::Struct_2_BD1A98EFEDD35816))((::PBYTE)hIl2Cpp + CLASS_1_311353BEB73A32C4_METHOD_1_E2482579863641B1_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_67BB941C8CCF39D6(::Class_1_D70A30D666F20D90* a1, ::Struct_2_BD1A98EFEDD35816 a2, ::System::String* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::Class_1_D70A30D666F20D90*, ::Struct_2_BD1A98EFEDD35816, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_311353BEB73A32C4_METHOD_1_67BB941C8CCF39D6_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_D272F840505A89FB(::Class_1_D70A30D666F20D90* a1, ::Struct_2_BD1A98EFEDD35816 a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::Class_1_D70A30D666F20D90*, ::Struct_2_BD1A98EFEDD35816, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_311353BEB73A32C4_METHOD_1_D272F840505A89FB_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_E2482579863641B1_2(::Class_1_D70A30D666F20D90* a1, ::Struct_2_BD1A98EFEDD35816 a2)
	{
		return ((::System::Void(*)(::Class_1_D70A30D666F20D90*, ::Struct_2_BD1A98EFEDD35816))((::PBYTE)hIl2Cpp + CLASS_1_311353BEB73A32C4_METHOD_1_E2482579863641B1_2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E877D0B6DC62E7CC(::Class_1_D70A30D666F20D90* a1, ::Struct_2_BD1A98EFEDD35816 a2, ::System::String* a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Boolean a6, ::System::Boolean a7)
	{
		return ((::System::Void(*)(::Class_1_D70A30D666F20D90*, ::Struct_2_BD1A98EFEDD35816, ::System::String*, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_311353BEB73A32C4_METHOD_1_E877D0B6DC62E7CC_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::System::Void Method_1_E1C60FB09D82AA24(::Class_1_D70A30D666F20D90* a1, ::Struct_2_BD1A98EFEDD35816 a2, ::System::String* a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::Class_1_D70A30D666F20D90*, ::Struct_2_BD1A98EFEDD35816, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_311353BEB73A32C4_METHOD_1_E1C60FB09D82AA24_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_F206EFE9F2EC1D79(::Class_1_D70A30D666F20D90* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::Class_1_D70A30D666F20D90*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_311353BEB73A32C4_METHOD_1_F206EFE9F2EC1D79_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B03F6D31318CC2B8(::Class_1_D70A30D666F20D90* a1)
	{
		return ((::System::Void(*)(::Class_1_D70A30D666F20D90*))((::PBYTE)hIl2Cpp + CLASS_1_311353BEB73A32C4_METHOD_1_B03F6D31318CC2B8_OFFSET))(a1);
	}

	static ::System::Void Method_1_B03F6D31318CC2B8_1(::Class_1_D70A30D666F20D90* a1)
	{
		return ((::System::Void(*)(::Class_1_D70A30D666F20D90*))((::PBYTE)hIl2Cpp + CLASS_1_311353BEB73A32C4_METHOD_1_B03F6D31318CC2B8_1_OFFSET))(a1);
	}

	static ::System::Void Method_1_B03F6D31318CC2B8_2(::Class_1_D70A30D666F20D90* a1)
	{
		return ((::System::Void(*)(::Class_1_D70A30D666F20D90*))((::PBYTE)hIl2Cpp + CLASS_1_311353BEB73A32C4_METHOD_1_B03F6D31318CC2B8_2_OFFSET))(a1);
	}

	static ::System::Void Method_1_B03F6D31318CC2B8_3(::Class_1_D70A30D666F20D90* a1)
	{
		return ((::System::Void(*)(::Class_1_D70A30D666F20D90*))((::PBYTE)hIl2Cpp + CLASS_1_311353BEB73A32C4_METHOD_1_B03F6D31318CC2B8_3_OFFSET))(a1);
	}

	static ::System::Void Method_1_9C66B07446448FC6(::Class_1_D70A30D666F20D90* a1)
	{
		return ((::System::Void(*)(::Class_1_D70A30D666F20D90*))((::PBYTE)hIl2Cpp + CLASS_1_311353BEB73A32C4_METHOD_1_9C66B07446448FC6_OFFSET))(a1);
	}

	static ::System::Void Method_1_4732B4D459E0B8F4(::RPG::GameCore::TaskConfig* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::TaskConfig*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_311353BEB73A32C4_METHOD_1_4732B4D459E0B8F4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_348674E9BAD074BA(::Class_1_D70A30D666F20D90* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::Class_1_D70A30D666F20D90*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_311353BEB73A32C4_METHOD_1_348674E9BAD074BA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_348674E9BAD074BA_1(::Class_1_D70A30D666F20D90* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::Class_1_D70A30D666F20D90*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_311353BEB73A32C4_METHOD_1_348674E9BAD074BA_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B774096704F3B609(::RPG::Client::Stage* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::RPG::Client::Stage*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_311353BEB73A32C4_METHOD_1_B774096704F3B609_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F5DC179AA33CF57E(::RPG::Client::Stage* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::RPG::Client::Stage*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_311353BEB73A32C4_METHOD_1_F5DC179AA33CF57E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7E8812EC7CD3355E(::RPG::Client::Stage* a1, ::System::Exception* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::RPG::Client::Stage*, ::System::Exception*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_311353BEB73A32C4_METHOD_1_7E8812EC7CD3355E_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_5B812E663A5C40FD(::Class_1_D70A30D666F20D90* a1, ::Class_1_311353BEB73A32C4_Struct_2_52AD02145F5FCE3A_5 a2)
	{
		return ((::System::Void(*)(::Class_1_D70A30D666F20D90*, ::Class_1_311353BEB73A32C4_Struct_2_52AD02145F5FCE3A_5))((::PBYTE)hIl2Cpp + CLASS_1_311353BEB73A32C4_METHOD_1_5B812E663A5C40FD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3A7BC1986DBC0C6D(::Class_1_D70A30D666F20D90* a1, ::Class_1_83ABAC4FF8C00500* a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Int32 a5, ::System::String* a6)
	{
		return ((::System::Void(*)(::Class_1_D70A30D666F20D90*, ::Class_1_83ABAC4FF8C00500*, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_311353BEB73A32C4_METHOD_1_3A7BC1986DBC0C6D_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_1_751E89BFB29D4FCF(::Class_1_D70A30D666F20D90* a1)
	{
		return ((::System::Void(*)(::Class_1_D70A30D666F20D90*))((::PBYTE)hIl2Cpp + CLASS_1_311353BEB73A32C4_METHOD_1_751E89BFB29D4FCF_OFFSET))(a1);
	}

	static ::System::Void Method_1_0CE73EAD1A8B5282(::Class_1_D70A30D666F20D90* a1, ::Struct_2_BD1A98EFEDD35816 a2, ::RPG::Client::OpenWorld::SwitchBattleAreaReason a3)
	{
		return ((::System::Void(*)(::Class_1_D70A30D666F20D90*, ::Struct_2_BD1A98EFEDD35816, ::RPG::Client::OpenWorld::SwitchBattleAreaReason))((::PBYTE)hIl2Cpp + CLASS_1_311353BEB73A32C4_METHOD_1_0CE73EAD1A8B5282_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_2A8ECEF2BB751473(::Class_1_D70A30D666F20D90* a1, ::Struct_2_BD1A98EFEDD35816 a2, ::RPG::Client::OpenWorld::SwitchBattleAreaReason a3, ::Class_1_83ABAC4FF8C00500* a4, ::Class_1_83ABAC4FF8C00500* a5)
	{
		return ((::System::Void(*)(::Class_1_D70A30D666F20D90*, ::Struct_2_BD1A98EFEDD35816, ::RPG::Client::OpenWorld::SwitchBattleAreaReason, ::Class_1_83ABAC4FF8C00500*, ::Class_1_83ABAC4FF8C00500*))((::PBYTE)hIl2Cpp + CLASS_1_311353BEB73A32C4_METHOD_1_2A8ECEF2BB751473_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_AAE8F70DD184301E(::Class_1_D70A30D666F20D90* a1, ::Struct_2_BD1A98EFEDD35816 a2, ::RPG::Client::OpenWorld::SwitchBattleAreaReason a3, ::System::Int32 a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::Class_1_D70A30D666F20D90*, ::Struct_2_BD1A98EFEDD35816, ::RPG::Client::OpenWorld::SwitchBattleAreaReason, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_311353BEB73A32C4_METHOD_1_AAE8F70DD184301E_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_079234A97425D58B(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_311353BEB73A32C4_METHOD_1_079234A97425D58B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_251C3A19B9E2817F(::Class_1_D70A30D666F20D90* a1, ::System::String* a2, ::System::Boolean a3, ::System::Single a4, ::System::UInt32 a5, ::System::String* a6, ::System::String* a7, ::System::String* a8, ::System::Int32 a9)
	{
		return ((::System::Void(*)(::Class_1_D70A30D666F20D90*, ::System::String*, ::System::Boolean, ::System::Single, ::System::UInt32, ::System::String*, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_311353BEB73A32C4_METHOD_1_251C3A19B9E2817F_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	static ::System::Void Method_1_722E1524F560C8AF(::Class_1_D70A30D666F20D90* a1)
	{
		return ((::System::Void(*)(::Class_1_D70A30D666F20D90*))((::PBYTE)hIl2Cpp + CLASS_1_311353BEB73A32C4_METHOD_1_722E1524F560C8AF_OFFSET))(a1);
	}

	static ::System::Void Method_1_2531A4E4B18DDB1C(::Class_1_D70A30D666F20D90* a1, ::System::String* a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Int32 a5, ::System::Int32 a6)
	{
		return ((::System::Void(*)(::Class_1_D70A30D666F20D90*, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_311353BEB73A32C4_METHOD_1_2531A4E4B18DDB1C_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_1_78C6F2411123A67F(::Class_1_D70A30D666F20D90* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::Class_1_D70A30D666F20D90*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_311353BEB73A32C4_METHOD_1_78C6F2411123A67F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E2482579863641B1_3(::Class_1_D70A30D666F20D90* a1, ::Struct_2_BD1A98EFEDD35816 a2)
	{
		return ((::System::Void(*)(::Class_1_D70A30D666F20D90*, ::Struct_2_BD1A98EFEDD35816))((::PBYTE)hIl2Cpp + CLASS_1_311353BEB73A32C4_METHOD_1_E2482579863641B1_3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E2482579863641B1_4(::Class_1_D70A30D666F20D90* a1, ::Struct_2_BD1A98EFEDD35816 a2)
	{
		return ((::System::Void(*)(::Class_1_D70A30D666F20D90*, ::Struct_2_BD1A98EFEDD35816))((::PBYTE)hIl2Cpp + CLASS_1_311353BEB73A32C4_METHOD_1_E2482579863641B1_4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E2482579863641B1_5(::Class_1_D70A30D666F20D90* a1, ::Struct_2_BD1A98EFEDD35816 a2)
	{
		return ((::System::Void(*)(::Class_1_D70A30D666F20D90*, ::Struct_2_BD1A98EFEDD35816))((::PBYTE)hIl2Cpp + CLASS_1_311353BEB73A32C4_METHOD_1_E2482579863641B1_5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_553E4B89AD86412F(::Class_1_D70A30D666F20D90* a1, ::Struct_2_BD1A98EFEDD35816 a2)
	{
		return ((::System::Void(*)(::Class_1_D70A30D666F20D90*, ::Struct_2_BD1A98EFEDD35816))((::PBYTE)hIl2Cpp + CLASS_1_311353BEB73A32C4_METHOD_1_553E4B89AD86412F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FB2D01FD9816A1AA(::Class_1_D70A30D666F20D90* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::Class_1_D70A30D666F20D90*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_311353BEB73A32C4_METHOD_1_FB2D01FD9816A1AA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FB2D01FD9816A1AA_1(::Class_1_D70A30D666F20D90* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::Class_1_D70A30D666F20D90*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_311353BEB73A32C4_METHOD_1_FB2D01FD9816A1AA_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B03F6D31318CC2B8_4(::Class_1_D70A30D666F20D90* a1)
	{
		return ((::System::Void(*)(::Class_1_D70A30D666F20D90*))((::PBYTE)hIl2Cpp + CLASS_1_311353BEB73A32C4_METHOD_1_B03F6D31318CC2B8_4_OFFSET))(a1);
	}

	static ::System::Void Method_1_722E1524F560C8AF_1(::Class_1_D70A30D666F20D90* a1)
	{
		return ((::System::Void(*)(::Class_1_D70A30D666F20D90*))((::PBYTE)hIl2Cpp + CLASS_1_311353BEB73A32C4_METHOD_1_722E1524F560C8AF_1_OFFSET))(a1);
	}
};
