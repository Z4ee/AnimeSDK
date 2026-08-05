#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_627DF5C40DDAA45B.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_10.h"
#include "unitysdk/Enum_3_2C704E2262533CBD.h"
#include "unitysdk/Enum_3_3A3DB9885CDD5378.h"
#include "unitysdk/Enum_3_A3FBC5531243F38B.h"
#include "unitysdk/Enum_3_C02E4B53BC5CBE80.h"
#include "unitysdk/Enum_3_D29916242A61A1C4.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/Unreal/FGameplayTag.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_B679E4D914A10080_1.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_504;
class Class_1_7807B2B04302CD7B_22;
class Class_1_A2ED188EF3FB65E1;
class Class_1_BE29B49AC03370B6;
class Class_1_C4AD88BFF83D12C6;
class Class_1_E49B99468FA26AB2_1;
class Class_3_AE02BC8285203464_28;
class Class_4_C340F837C7E5CD22_Class_1_0670EACFA00BDC7C_1;
namespace MoleMole { class UISummerTideTreasureSellingPageController; }
namespace MoleMole { class UISummerTideTreasureSellingResultDialogPopWindowController; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Threading { class CancellationTokenSource; }
namespace UnityEngine { class Transform; }
template <typename T> class Class_1_A3B30DADDE0BB256;
template <typename T> class Class_1_BBE667D4A3124D9B;
template <typename T> class Class_2_000597E145D7A42A;

#define CLASS_4_C340F837C7E5CD22_METHOD_4_0093A5ECFBA2E2F0_1_OFFSET UNITYSDK_OFFSET(0x14B88E80)
#define CLASS_4_C340F837C7E5CD22_METHOD_4_0093A5ECFBA2E2F0_OFFSET UNITYSDK_OFFSET(0x14B88A60)
#define CLASS_4_C340F837C7E5CD22_METHOD_4_1861CD0A04EF6250_OFFSET UNITYSDK_OFFSET(0x14B80220)
#define CLASS_4_C340F837C7E5CD22_METHOD_4_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0x14B8D410)
#define CLASS_4_C340F837C7E5CD22_METHOD_4_19D4DA75BC98CC8F_OFFSET UNITYSDK_OFFSET(0x14B8FC80)
#define CLASS_4_C340F837C7E5CD22_METHOD_4_230E4ECF40B59202_OFFSET UNITYSDK_OFFSET(0x14B90250)
#define CLASS_4_C340F837C7E5CD22_METHOD_4_2578FF31E80957C9_OFFSET UNITYSDK_OFFSET(0x14B908F0)
#define CLASS_4_C340F837C7E5CD22_METHOD_4_2FA8AE0519AC7829_1_OFFSET UNITYSDK_OFFSET(0x14B88660)
#define CLASS_4_C340F837C7E5CD22_METHOD_4_2FA8AE0519AC7829_2_OFFSET UNITYSDK_OFFSET(0x14B7DA70)
#define CLASS_4_C340F837C7E5CD22_METHOD_4_2FA8AE0519AC7829_OFFSET UNITYSDK_OFFSET(0x14B8D3A0)
#define CLASS_4_C340F837C7E5CD22_METHOD_4_3478DBFA21397B5A_OFFSET UNITYSDK_OFFSET(0x14B8EB30)
#define CLASS_4_C340F837C7E5CD22_METHOD_4_353DAAE369AAEE14_OFFSET UNITYSDK_OFFSET(0x14B879E0)
#define CLASS_4_C340F837C7E5CD22_METHOD_4_41743F58F378862F_OFFSET UNITYSDK_OFFSET(0x14B827E0)
#define CLASS_4_C340F837C7E5CD22_METHOD_4_4A88F847BC9EF9CC_OFFSET UNITYSDK_OFFSET(0x14B8D470)
#define CLASS_4_C340F837C7E5CD22_METHOD_4_4AD40A385BC29831_OFFSET UNITYSDK_OFFSET(0x14B8D100)
#define CLASS_4_C340F837C7E5CD22_METHOD_4_4B14D4A5152C402B_OFFSET UNITYSDK_OFFSET(0x14B8C270)
#define CLASS_4_C340F837C7E5CD22_METHOD_4_4E661369F8650534_OFFSET UNITYSDK_OFFSET(0x14B82310)
#define CLASS_4_C340F837C7E5CD22_METHOD_4_5152B89287402FD0_OFFSET UNITYSDK_OFFSET(0x14B886D0)
#define CLASS_4_C340F837C7E5CD22_METHOD_4_51652EAB9A014635_OFFSET UNITYSDK_OFFSET(0x14B88CF0)
#define CLASS_4_C340F837C7E5CD22_METHOD_4_52607DE4C357D269_OFFSET UNITYSDK_OFFSET(0x14B84720)
#define CLASS_4_C340F837C7E5CD22_METHOD_4_577E8F7BA319A072_1_OFFSET UNITYSDK_OFFSET(0x14B84DB0)
#define CLASS_4_C340F837C7E5CD22_METHOD_4_577E8F7BA319A072_OFFSET UNITYSDK_OFFSET(0x14B846A0)
#define CLASS_4_C340F837C7E5CD22_METHOD_4_5DE0B3B3509170AA_OFFSET UNITYSDK_OFFSET(0x14B7E3E0)
#define CLASS_4_C340F837C7E5CD22_METHOD_4_67712405C5229EC2_OFFSET UNITYSDK_OFFSET(0x14B8D810)
#define CLASS_4_C340F837C7E5CD22_METHOD_4_6E6682ED9FD6F719_OFFSET UNITYSDK_OFFSET(0x14B83B90)
#define CLASS_4_C340F837C7E5CD22_METHOD_4_7081274DFECEAFB5_OFFSET UNITYSDK_OFFSET(0x14B8D060)
#define CLASS_4_C340F837C7E5CD22_METHOD_4_7BD014949181F856_OFFSET UNITYSDK_OFFSET(0x14B8CBD0)
#define CLASS_4_C340F837C7E5CD22_METHOD_4_7DA2ED92F805BFFB_OFFSET UNITYSDK_OFFSET(0x14B80120)
#define CLASS_4_C340F837C7E5CD22_METHOD_4_7E31F6B1CAC48625_OFFSET UNITYSDK_OFFSET(0x14B89110)
#define CLASS_4_C340F837C7E5CD22_METHOD_4_819D28686C3186D9_OFFSET UNITYSDK_OFFSET(0x14B8CB50)
#define CLASS_4_C340F837C7E5CD22_METHOD_4_82E9EBEA9DC2A831_OFFSET UNITYSDK_OFFSET(0x14B8E6C0)
#define CLASS_4_C340F837C7E5CD22_METHOD_4_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x14B8D800)
#define CLASS_4_C340F837C7E5CD22_METHOD_4_832295EC279E5994_2_OFFSET UNITYSDK_OFFSET(0x14B8EB20)
#define CLASS_4_C340F837C7E5CD22_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x14B80DD0)
#define CLASS_4_C340F837C7E5CD22_METHOD_4_87484CB0EA108148_OFFSET UNITYSDK_OFFSET(0x14B86E40)
#define CLASS_4_C340F837C7E5CD22_METHOD_4_8DC652D916C182B2_OFFSET UNITYSDK_OFFSET(0x14B7D600)
#define CLASS_4_C340F837C7E5CD22_METHOD_4_954D3DA395A70135_OFFSET UNITYSDK_OFFSET(0x14B87380)
#define CLASS_4_C340F837C7E5CD22_METHOD_4_9954EB12B009C18B_OFFSET UNITYSDK_OFFSET(0x14B8D640)
#define CLASS_4_C340F837C7E5CD22_METHOD_4_A3875C629FA52BC5_OFFSET UNITYSDK_OFFSET(0x14B90AA0)
#define CLASS_4_C340F837C7E5CD22_METHOD_4_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x14B8D5B0)
#define CLASS_4_C340F837C7E5CD22_METHOD_4_A40280C77A37E96E_OFFSET UNITYSDK_OFFSET(0x14B89CC0)
#define CLASS_4_C340F837C7E5CD22_METHOD_4_A984848EA3E436DA_OFFSET UNITYSDK_OFFSET(0x14B8D110)
#define CLASS_4_C340F837C7E5CD22_METHOD_4_B37D38A2E5777BEC_OFFSET UNITYSDK_OFFSET(0x14B89B40)
#define CLASS_4_C340F837C7E5CD22_METHOD_4_BCB087DFB7399B96_OFFSET UNITYSDK_OFFSET(0x14B8CFA0)
#define CLASS_4_C340F837C7E5CD22_METHOD_4_C26384F92B6F1C1A_OFFSET UNITYSDK_OFFSET(0x14B83CB0)
#define CLASS_4_C340F837C7E5CD22_METHOD_4_C83B2479936B63C3_OFFSET UNITYSDK_OFFSET(0x14B84780)
#define CLASS_4_C340F837C7E5CD22_METHOD_4_CED0A90A9829D514_OFFSET UNITYSDK_OFFSET(0x14B81D10)
#define CLASS_4_C340F837C7E5CD22_METHOD_4_DA0AE8EF2117E4F0_OFFSET UNITYSDK_OFFSET(0x14B80AC0)
#define CLASS_4_C340F837C7E5CD22_METHOD_4_DFC8F8AF2A9BFB40_OFFSET UNITYSDK_OFFSET(0x14B90490)
#define CLASS_4_C340F837C7E5CD22_METHOD_4_E57E68BA59929DC8_OFFSET UNITYSDK_OFFSET(0x14B84E30)
#define CLASS_4_C340F837C7E5CD22_METHOD_4_E6C44D598D81E7FB_OFFSET UNITYSDK_OFFSET(0x14B82080)
#define CLASS_4_C340F837C7E5CD22_METHOD_4_E7AB99EDC5373156_OFFSET UNITYSDK_OFFSET(0x14B888A0)
#define CLASS_4_C340F837C7E5CD22_METHOD_4_E88C43AB30548154_OFFSET UNITYSDK_OFFSET(0x14B80DE0)
#define CLASS_4_C340F837C7E5CD22_METHOD_4_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x14B8CF90)
#define CLASS_4_C340F837C7E5CD22_METHOD_4_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0x14B8EB10)
#define CLASS_4_C340F837C7E5CD22_METHOD_4_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x14B83CA0)
#define CLASS_4_C340F837C7E5CD22_METHOD_4_F18B0D15CB26C4E0_OFFSET UNITYSDK_OFFSET(0x14B8C540)
#define CLASS_4_C340F837C7E5CD22_METHOD_4_F4EF32F1EEE137D0_OFFSET UNITYSDK_OFFSET(0x14B7DAE0)
#define CLASS_4_C340F837C7E5CD22_METHOD_4_F5599B7DA8E7E53C_1_OFFSET UNITYSDK_OFFSET(0x14B8C250)
#define CLASS_4_C340F837C7E5CD22_METHOD_4_F5599B7DA8E7E53C_OFFSET UNITYSDK_OFFSET(0x14B7DA50)
#define CLASS_4_C340F837C7E5CD22_METHOD_4_FAF981AF376B3097_OFFSET UNITYSDK_OFFSET(0x14B819C0)
#define CLASS_4_C340F837C7E5CD22_METHOD_4_FBCB870B65118423_OFFSET UNITYSDK_OFFSET(0x14B8EDD0)
#define CLASS_4_C340F837C7E5CD22_METHOD_4_FC3098C82FA8FE63_OFFSET UNITYSDK_OFFSET(0x14B81840)
#define CLASS_4_C340F837C7E5CD22_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x14B7E6D0)
#define CLASS_4_C340F837C7E5CD22_ONREADY_OFFSET UNITYSDK_OFFSET(0x14B7C900)
#define CLASS_4_C340F837C7E5CD22_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x14B7C590)
#define CLASS_4_C340F837C7E5CD22__CCTOR_OFFSET UNITYSDK_OFFSET(0x14B7ECB0)
#define CLASS_4_C340F837C7E5CD22__CTOR_OFFSET UNITYSDK_OFFSET(0x14B7E9E0)

inline static constexpr unsigned int Class_4_C340F837C7E5CD22_TypeDefinitionIndex = 52922;

class Class_4_C340F837C7E5CD22 : public ::Class_3_627DF5C40DDAA45B<::Class_4_C340F837C7E5CD22*>
{
public:
	static ::Foundation::Unreal::FGameplayTag* StaticGet_Field_4_4()
	{
		return (::Foundation::Unreal::FGameplayTag*)Il2CppClass::FromTypeDefinitionIndex(Class_4_C340F837C7E5CD22_TypeDefinitionIndex)->GetStaticField(0xA440);
	}
	static ::Foundation::Unreal::FGameplayTag* StaticGet_Field_4_1()
	{
		return (::Foundation::Unreal::FGameplayTag*)Il2CppClass::FromTypeDefinitionIndex(Class_4_C340F837C7E5CD22_TypeDefinitionIndex)->GetStaticField(0xA448);
	}
	static ::Foundation::Unreal::FGameplayTag* StaticGet_Field_4_6()
	{
		return (::Foundation::Unreal::FGameplayTag*)Il2CppClass::FromTypeDefinitionIndex(Class_4_C340F837C7E5CD22_TypeDefinitionIndex)->GetStaticField(0xA450);
	}
	static ::Foundation::Unreal::FGameplayTag* StaticGet_Field_4_14()
	{
		return (::Foundation::Unreal::FGameplayTag*)Il2CppClass::FromTypeDefinitionIndex(Class_4_C340F837C7E5CD22_TypeDefinitionIndex)->GetStaticField(0xA458);
	}
	static ::Foundation::Unreal::FGameplayTag* StaticGet_Field_4_15()
	{
		return (::Foundation::Unreal::FGameplayTag*)Il2CppClass::FromTypeDefinitionIndex(Class_4_C340F837C7E5CD22_TypeDefinitionIndex)->GetStaticField(0xA460);
	}
	static ::Foundation::Unreal::FGameplayTag* StaticGet_Field_4_7()
	{
		return (::Foundation::Unreal::FGameplayTag*)Il2CppClass::FromTypeDefinitionIndex(Class_4_C340F837C7E5CD22_TypeDefinitionIndex)->GetStaticField(0xA468);
	}
	static ::Foundation::Unreal::FGameplayTag* StaticGet_Field_4_13()
	{
		return (::Foundation::Unreal::FGameplayTag*)Il2CppClass::FromTypeDefinitionIndex(Class_4_C340F837C7E5CD22_TypeDefinitionIndex)->GetStaticField(0xA470);
	}
	static ::Foundation::Unreal::FGameplayTag* StaticGet_Field_4_10()
	{
		return (::Foundation::Unreal::FGameplayTag*)Il2CppClass::FromTypeDefinitionIndex(Class_4_C340F837C7E5CD22_TypeDefinitionIndex)->GetStaticField(0xA478);
	}
	static ::Foundation::Unreal::FGameplayTag* StaticGet_Field_4_0()
	{
		return (::Foundation::Unreal::FGameplayTag*)Il2CppClass::FromTypeDefinitionIndex(Class_4_C340F837C7E5CD22_TypeDefinitionIndex)->GetStaticField(0xA480);
	}
	static ::Foundation::Unreal::FGameplayTag* StaticGet_Field_4_9()
	{
		return (::Foundation::Unreal::FGameplayTag*)Il2CppClass::FromTypeDefinitionIndex(Class_4_C340F837C7E5CD22_TypeDefinitionIndex)->GetStaticField(0xA488);
	}
	static ::Foundation::Unreal::FGameplayTag* StaticGet_Field_4_11()
	{
		return (::Foundation::Unreal::FGameplayTag*)Il2CppClass::FromTypeDefinitionIndex(Class_4_C340F837C7E5CD22_TypeDefinitionIndex)->GetStaticField(0xA490);
	}
	static ::Foundation::Unreal::FGameplayTag* StaticGet_Field_4_5()
	{
		return (::Foundation::Unreal::FGameplayTag*)Il2CppClass::FromTypeDefinitionIndex(Class_4_C340F837C7E5CD22_TypeDefinitionIndex)->GetStaticField(0xA498);
	}
	static ::Foundation::Unreal::FGameplayTag* StaticGet_Field_4_8()
	{
		return (::Foundation::Unreal::FGameplayTag*)Il2CppClass::FromTypeDefinitionIndex(Class_4_C340F837C7E5CD22_TypeDefinitionIndex)->GetStaticField(0xA4A0);
	}
	::Class_3_AE02BC8285203464_28* Field_4_33; // 0x30
	::Foundation::ViewObject::ViewObjectHandle Field_4_43; // 0x38
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_4_41; // 0x48
	::Class_1_A2ED188EF3FB65E1* Field_4_17; // 0x50
	::System::Threading::CancellationTokenSource* Field_4_30; // 0x58
	::Il2CppArray<::System::String*>* Field_4_46; // 0x60
	::MoleMole::UISummerTideTreasureSellingResultDialogPopWindowController* Field_4_27; // 0x68
	::Class_1_BBE667D4A3124D9B<::Class_0_16E4307DCC419505_504*>* Field_4_31; // 0x70
	::Class_2_000597E145D7A42A<::Foundation::ViewObject::ViewObjectHandle>* Field_4_35; // 0x78
	::System::Collections::Generic::List_1<::Class_1_E49B99468FA26AB2_1*>* Field_4_22; // 0x80
	::Class_1_BBE667D4A3124D9B<::Class_1_C4AD88BFF83D12C6*>* Field_4_16; // 0x88
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*>* Field_4_24; // 0x90
	::Class_4_C340F837C7E5CD22_Class_1_0670EACFA00BDC7C_1* Field_4_12; // 0x98
	::System::Collections::Generic::List_1<::System::Int32>* Field_4_29; // 0xA0
	::MoleMole::UISummerTideTreasureSellingPageController* Field_4_20; // 0xA8
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_4_36; // 0xB0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*>* Field_4_25; // 0xB8
	::System::Int32 Field_4_23; // 0xC0
	::System::Int32 Field_4_26; // 0xC4
	::System::Single Field_4_42; // 0xC8
	::System::Boolean Field_4_47; // 0xCC
	::System::Boolean Field_4_40; // 0xCD
	::System::Boolean Field_4_28; // 0xCE
	::System::Boolean Field_4_34; // 0xCF
	::System::Int32 Field_4_19; // 0xD0
	::System::Int32 Field_4_21; // 0xD4
	::System::Int32 Field_4_37; // 0xD8
	::System::Int32 Field_4_38; // 0xDC
	::System::Single Field_4_39; // 0xE0
	::System::Single Field_4_32; // 0xE4
	::System::Int32 Field_4_18; // 0xE8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C340F837C7E5CD22__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_C340F837C7E5CD22__CCTOR_OFFSET))();
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C340F837C7E5CD22_ONRECYCLE_OFFSET))(this);
	}

	::System::Void OnReady()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C340F837C7E5CD22_ONREADY_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C340F837C7E5CD22_ONDISABLE_OFFSET))(this);
	}

	::System::Int32 Method_4_7DA2ED92F805BFFB(::Foundation::ViewObject::ViewObjectHandle a1, ::Enum_3_2C704E2262533CBD a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle, ::Enum_3_2C704E2262533CBD))((::PBYTE)hIl2Cpp + CLASS_4_C340F837C7E5CD22_METHOD_4_7DA2ED92F805BFFB_OFFSET))(this, a1, a2);
	}

	::Class_0_16E4307DCC419505_504* Method_4_1861CD0A04EF6250(::Enum_3_3A3DB9885CDD5378 a1, ::Enum_3_D29916242A61A1C4 a2, ::Foundation::AssetPath a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6)
	{
		return ((::Class_0_16E4307DCC419505_504*(*)(::PVOID, ::Enum_3_3A3DB9885CDD5378, ::Enum_3_D29916242A61A1C4, ::Foundation::AssetPath, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_4_C340F837C7E5CD22_METHOD_4_1861CD0A04EF6250_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C340F837C7E5CD22_METHOD_4_832295EC279E5994_OFFSET))(this);
	}

	::System::Boolean Method_4_E88C43AB30548154()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C340F837C7E5CD22_METHOD_4_E88C43AB30548154_OFFSET))(this);
	}

	::System::Void Method_4_CED0A90A9829D514(::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*))((::PBYTE)hIl2Cpp + CLASS_4_C340F837C7E5CD22_METHOD_4_CED0A90A9829D514_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_504* Method_4_DA0AE8EF2117E4F0(::Enum_3_D29916242A61A1C4 a1)
	{
		return ((::Class_0_16E4307DCC419505_504*(*)(::PVOID, ::Enum_3_D29916242A61A1C4))((::PBYTE)hIl2Cpp + CLASS_4_C340F837C7E5CD22_METHOD_4_DA0AE8EF2117E4F0_OFFSET))(this, a1);
	}

	::System::Int32 Method_4_F5599B7DA8E7E53C()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C340F837C7E5CD22_METHOD_4_F5599B7DA8E7E53C_OFFSET))(this);
	}

	::System::Boolean Method_4_E6C44D598D81E7FB(::System::Int64 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_4_C340F837C7E5CD22_METHOD_4_E6C44D598D81E7FB_OFFSET))(this, a1);
	}

	::System::Void Method_4_4E661369F8650534(::Struct_2_B679E4D914A10080_1 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_B679E4D914A10080_1, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_4_C340F837C7E5CD22_METHOD_4_4E661369F8650534_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_5DE0B3B3509170AA(::Foundation::Unreal::FGameplayTag a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + CLASS_4_C340F837C7E5CD22_METHOD_4_5DE0B3B3509170AA_OFFSET))(this, a1);
	}

	::System::Void Method_4_6E6682ED9FD6F719()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C340F837C7E5CD22_METHOD_4_6E6682ED9FD6F719_OFFSET))(this);
	}

	::System::Boolean Method_4_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C340F837C7E5CD22_METHOD_4_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_4_C26384F92B6F1C1A(::System::Boolean a1, ::System::Boolean a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_4_C340F837C7E5CD22_METHOD_4_C26384F92B6F1C1A_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_52607DE4C357D269()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C340F837C7E5CD22_METHOD_4_52607DE4C357D269_OFFSET))(this);
	}

	::System::Void Method_4_C83B2479936B63C3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C340F837C7E5CD22_METHOD_4_C83B2479936B63C3_OFFSET))(this);
	}

	::Enum_3_C02E4B53BC5CBE80 Method_4_E57E68BA59929DC8(::Foundation::ViewObject::ViewObjectHandle a1)
	{
		return ((::Enum_3_C02E4B53BC5CBE80(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + CLASS_4_C340F837C7E5CD22_METHOD_4_E57E68BA59929DC8_OFFSET))(this, a1);
	}

	::System::Void Method_4_5152B89287402FD0(::Foundation::ViewObject::ViewObjectHandle a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + CLASS_4_C340F837C7E5CD22_METHOD_4_5152B89287402FD0_OFFSET))(this, a1);
	}

	::System::Void Method_4_E7AB99EDC5373156(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_C340F837C7E5CD22_METHOD_4_E7AB99EDC5373156_OFFSET))(this, a1);
	}

	::Enum_3_C02E4B53BC5CBE80 Method_4_87484CB0EA108148(::Foundation::ViewObject::ViewObjectHandle a1)
	{
		return ((::Enum_3_C02E4B53BC5CBE80(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + CLASS_4_C340F837C7E5CD22_METHOD_4_87484CB0EA108148_OFFSET))(this, a1);
	}

	::System::Void Method_4_7E31F6B1CAC48625(::System::Collections::Generic::List_1<::System::Int32>* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_C340F837C7E5CD22_METHOD_4_7E31F6B1CAC48625_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_8DC652D916C182B2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C340F837C7E5CD22_METHOD_4_8DC652D916C182B2_OFFSET))(this);
	}

	::System::Void Method_4_4B14D4A5152C402B(::Class_1_C4AD88BFF83D12C6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C4AD88BFF83D12C6*))((::PBYTE)hIl2Cpp + CLASS_4_C340F837C7E5CD22_METHOD_4_4B14D4A5152C402B_OFFSET))(this, a1);
	}

	::System::Void Method_4_F18B0D15CB26C4E0(::Foundation::ViewObject::ViewObjectHandle a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + CLASS_4_C340F837C7E5CD22_METHOD_4_F18B0D15CB26C4E0_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid Method_4_577E8F7BA319A072(::System::Int32 a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_4_C340F837C7E5CD22_METHOD_4_577E8F7BA319A072_OFFSET))(this, a1);
	}

	::Foundation::Unreal::FGameplayTag Method_4_FAF981AF376B3097()
	{
		return ((::Foundation::Unreal::FGameplayTag(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C340F837C7E5CD22_METHOD_4_FAF981AF376B3097_OFFSET))(this);
	}

	::System::Void Method_4_7BD014949181F856(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_4_C340F837C7E5CD22_METHOD_4_7BD014949181F856_OFFSET))(this, a1);
	}

	::System::Boolean Method_4_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C340F837C7E5CD22_METHOD_4_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_4_BCB087DFB7399B96(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_C340F837C7E5CD22_METHOD_4_BCB087DFB7399B96_OFFSET))(this, a1);
	}

	::System::Void Method_4_A40280C77A37E96E(::Class_1_E49B99468FA26AB2_1* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2, ::System::Collections::Generic::List_1<::System::Int32>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E49B99468FA26AB2_1*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_4_C340F837C7E5CD22_METHOD_4_A40280C77A37E96E_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_4_7081274DFECEAFB5(::Foundation::ViewObject::ViewObjectHandle a1, ::Class_1_C4AD88BFF83D12C6* a2, ::Enum_3_A3FBC5531243F38B& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle, ::Class_1_C4AD88BFF83D12C6*, ::Enum_3_A3FBC5531243F38B&))((::PBYTE)hIl2Cpp + CLASS_4_C340F837C7E5CD22_METHOD_4_7081274DFECEAFB5_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_1_C4AD88BFF83D12C6*>* Method_4_4AD40A385BC29831()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_1_C4AD88BFF83D12C6*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C340F837C7E5CD22_METHOD_4_4AD40A385BC29831_OFFSET))(this);
	}

	::System::Int32 Method_4_0093A5ECFBA2E2F0(::Foundation::ViewObject::ViewObjectHandle a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + CLASS_4_C340F837C7E5CD22_METHOD_4_0093A5ECFBA2E2F0_OFFSET))(this, a1);
	}

	::System::Void Method_4_A984848EA3E436DA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C340F837C7E5CD22_METHOD_4_A984848EA3E436DA_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid Method_4_819D28686C3186D9(::Foundation::ViewObject::ViewObjectHandle a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + CLASS_4_C340F837C7E5CD22_METHOD_4_819D28686C3186D9_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid Method_4_2FA8AE0519AC7829()
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C340F837C7E5CD22_METHOD_4_2FA8AE0519AC7829_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid Method_4_2FA8AE0519AC7829_1()
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C340F837C7E5CD22_METHOD_4_2FA8AE0519AC7829_1_OFFSET))(this);
	}

	::System::Boolean Method_4_F4EF32F1EEE137D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C340F837C7E5CD22_METHOD_4_F4EF32F1EEE137D0_OFFSET))(this);
	}

	::System::Void Method_4_19CCC07C980409E4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_C340F837C7E5CD22_METHOD_4_19CCC07C980409E4_OFFSET))(this, a1);
	}

	::System::Int32 Method_4_F5599B7DA8E7E53C_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C340F837C7E5CD22_METHOD_4_F5599B7DA8E7E53C_1_OFFSET))(this);
	}

	::System::Void Method_4_4A88F847BC9EF9CC(::Class_1_BE29B49AC03370B6* a1, ::Class_1_7807B2B04302CD7B_22* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BE29B49AC03370B6*, ::Class_1_7807B2B04302CD7B_22*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_C340F837C7E5CD22_METHOD_4_4A88F847BC9EF9CC_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_4_FC3098C82FA8FE63()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C340F837C7E5CD22_METHOD_4_FC3098C82FA8FE63_OFFSET))(this);
	}

	::System::Boolean Method_4_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C340F837C7E5CD22_METHOD_4_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::System::Int32 Method_4_954D3DA395A70135(::Enum_3_2C704E2262533CBD a1, ::Foundation::ViewObject::ViewObjectHandle a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Enum_3_2C704E2262533CBD, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + CLASS_4_C340F837C7E5CD22_METHOD_4_954D3DA395A70135_OFFSET))(this, a1, a2);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid Method_4_577E8F7BA319A072_1(::System::Int32 a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_4_C340F837C7E5CD22_METHOD_4_577E8F7BA319A072_1_OFFSET))(this, a1);
	}

	::System::Void Method_4_353DAAE369AAEE14(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_4_C340F837C7E5CD22_METHOD_4_353DAAE369AAEE14_OFFSET))(this, a1);
	}

	::System::Void Method_4_9954EB12B009C18B(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_4_C340F837C7E5CD22_METHOD_4_9954EB12B009C18B_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_4_B37D38A2E5777BEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C340F837C7E5CD22_METHOD_4_B37D38A2E5777BEC_OFFSET))(this);
	}

	::System::Void Method_4_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C340F837C7E5CD22_METHOD_4_832295EC279E5994_1_OFFSET))(this);
	}

	::System::Void Method_4_41743F58F378862F(::Foundation::Unreal::FGameplayTag a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + CLASS_4_C340F837C7E5CD22_METHOD_4_41743F58F378862F_OFFSET))(this, a1);
	}

	::System::Void Method_4_67712405C5229EC2(::Enum_3_0A3761FE34514D6C_10 a1, ::System::Boolean a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_10, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_4_C340F837C7E5CD22_METHOD_4_67712405C5229EC2_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_82E9EBEA9DC2A831(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_4_C340F837C7E5CD22_METHOD_4_82E9EBEA9DC2A831_OFFSET))(this, a1);
	}

	::System::Boolean Method_4_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C340F837C7E5CD22_METHOD_4_F0088C88851A7DFB_2_OFFSET))(this);
	}

	::System::Int32 Method_4_0093A5ECFBA2E2F0_1(::Foundation::ViewObject::ViewObjectHandle a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + CLASS_4_C340F837C7E5CD22_METHOD_4_0093A5ECFBA2E2F0_1_OFFSET))(this, a1);
	}

	::System::Void Method_4_832295EC279E5994_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C340F837C7E5CD22_METHOD_4_832295EC279E5994_2_OFFSET))(this);
	}

	::System::Void Method_4_3478DBFA21397B5A(::Class_0_16E4307DCC419505_504* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_504*))((::PBYTE)hIl2Cpp + CLASS_4_C340F837C7E5CD22_METHOD_4_3478DBFA21397B5A_OFFSET))(this, a1);
	}

	::System::Void Method_4_FBCB870B65118423(::Foundation::ViewObject::ViewObjectHandle a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + CLASS_4_C340F837C7E5CD22_METHOD_4_FBCB870B65118423_OFFSET))(this, a1);
	}

	::System::Void Method_4_19D4DA75BC98CC8F(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_4_C340F837C7E5CD22_METHOD_4_19D4DA75BC98CC8F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_230E4ECF40B59202(::Class_1_C4AD88BFF83D12C6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C4AD88BFF83D12C6*))((::PBYTE)hIl2Cpp + CLASS_4_C340F837C7E5CD22_METHOD_4_230E4ECF40B59202_OFFSET))(this, a1);
	}

	::System::Void Method_4_DFC8F8AF2A9BFB40(::Class_1_BE29B49AC03370B6* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::Int32, ::System::Int32>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BE29B49AC03370B6*, ::System::Int32, ::System::Int32, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_4_C340F837C7E5CD22_METHOD_4_DFC8F8AF2A9BFB40_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Int32 Method_4_51652EAB9A014635()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C340F837C7E5CD22_METHOD_4_51652EAB9A014635_OFFSET))(this);
	}

	::System::Void Method_4_2578FF31E80957C9(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_4_C340F837C7E5CD22_METHOD_4_2578FF31E80957C9_OFFSET))(this, a1, a2);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid Method_4_2FA8AE0519AC7829_2()
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C340F837C7E5CD22_METHOD_4_2FA8AE0519AC7829_2_OFFSET))(this);
	}

	::System::Void Method_4_A3875C629FA52BC5(::System::Int32 a1, ::Struct_2_B679E4D914A10080_1 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Struct_2_B679E4D914A10080_1))((::PBYTE)hIl2Cpp + CLASS_4_C340F837C7E5CD22_METHOD_4_A3875C629FA52BC5_OFFSET))(this, a1, a2);
	}
};
