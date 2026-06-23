#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_0CCE48347EBD6D5F_Enum_3_A5191D6218CE9E26.h"
#include "unitysdk/Class_3_A292D09112D1EC5F_Struct_2_4AEDF399FA0A1C26.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Foundation/Unreal/FGameplayTag.h"
#include "unitysdk/Foundation/Unreal/FGameplayTagContainer.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"
#include "unitysdk/Foundation/ViewObject/CombineTriggerListenParam.h"
#include "unitysdk/Foundation/ViewObject/Structures/FMemberAliveStateCheckAction.h"
#include "unitysdk/Foundation/ViewObject/Structures/FMonsterMemberLeftCheckAction.h"
#include "unitysdk/Foundation/ViewObject/SuiteInfo.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/GameplayTag.h"

class Class_3_30235BB967CBDA73_1;
namespace Foundation::ViewObject::Structures { class FEntityHPChangeAction; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_A292D09112D1EC5F_METHOD_3_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x11E97160)
#define CLASS_3_A292D09112D1EC5F_METHOD_3_062776F7BCEE71D6_OFFSET UNITYSDK_OFFSET(0x11E96900)
#define CLASS_3_A292D09112D1EC5F_METHOD_3_221473846B2776FA_OFFSET UNITYSDK_OFFSET(0x11E92F90)
#define CLASS_3_A292D09112D1EC5F_METHOD_3_25816B4AD877021C_OFFSET UNITYSDK_OFFSET(0x11E96D50)
#define CLASS_3_A292D09112D1EC5F_METHOD_3_2ADCFCC0F615D9EE_OFFSET UNITYSDK_OFFSET(0x11E97F80)
#define CLASS_3_A292D09112D1EC5F_METHOD_3_3557F75ED858BAD2_OFFSET UNITYSDK_OFFSET(0x11E94790)
#define CLASS_3_A292D09112D1EC5F_METHOD_3_3559476C7C86165D_OFFSET UNITYSDK_OFFSET(0x11E95E10)
#define CLASS_3_A292D09112D1EC5F_METHOD_3_3C470A1D50B2BBB4_OFFSET UNITYSDK_OFFSET(0x11E97170)
#define CLASS_3_A292D09112D1EC5F_METHOD_3_401CDFF85DCB5396_OFFSET UNITYSDK_OFFSET(0x11E983A0)
#define CLASS_3_A292D09112D1EC5F_METHOD_3_43F6E39EEC4DF33F_OFFSET UNITYSDK_OFFSET(0x11E97EB0)
#define CLASS_3_A292D09112D1EC5F_METHOD_3_51BBA01F511E6107_OFFSET UNITYSDK_OFFSET(0x11E964D0)
#define CLASS_3_A292D09112D1EC5F_METHOD_3_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x11E94980)
#define CLASS_3_A292D09112D1EC5F_METHOD_3_6055A93732CC885D_OFFSET UNITYSDK_OFFSET(0x11E959D0)
#define CLASS_3_A292D09112D1EC5F_METHOD_3_6CDE81592793C86C_OFFSET UNITYSDK_OFFSET(0x11E96080)
#define CLASS_3_A292D09112D1EC5F_METHOD_3_6E15AF54D4AE4D55_OFFSET UNITYSDK_OFFSET(0x11E94600)
#define CLASS_3_A292D09112D1EC5F_METHOD_3_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x11E95E00)
#define CLASS_3_A292D09112D1EC5F_METHOD_3_7E0D3A7A149A57B6_OFFSET UNITYSDK_OFFSET(0x11E985B0)
#define CLASS_3_A292D09112D1EC5F_METHOD_3_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x11E95F50)
#define CLASS_3_A292D09112D1EC5F_METHOD_3_832295EC279E5994_2_OFFSET UNITYSDK_OFFSET(0x11E98570)
#define CLASS_3_A292D09112D1EC5F_METHOD_3_832295EC279E5994_3_OFFSET UNITYSDK_OFFSET(0x11E98580)
#define CLASS_3_A292D09112D1EC5F_METHOD_3_832295EC279E5994_4_OFFSET UNITYSDK_OFFSET(0x11E98590)
#define CLASS_3_A292D09112D1EC5F_METHOD_3_832295EC279E5994_5_OFFSET UNITYSDK_OFFSET(0x11E985A0)
#define CLASS_3_A292D09112D1EC5F_METHOD_3_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x11E95B50)
#define CLASS_3_A292D09112D1EC5F_METHOD_3_8B6462DEF26C363D_OFFSET UNITYSDK_OFFSET(0x11E985C0)
#define CLASS_3_A292D09112D1EC5F_METHOD_3_8F7AD00CE70D0A7B_OFFSET UNITYSDK_OFFSET(0x11E92EA0)
#define CLASS_3_A292D09112D1EC5F_METHOD_3_98B25803044D202F_OFFSET UNITYSDK_OFFSET(0x11E96F30)
#define CLASS_3_A292D09112D1EC5F_METHOD_3_99BCDBABF1684B50_OFFSET UNITYSDK_OFFSET(0x11E98780)
#define CLASS_3_A292D09112D1EC5F_METHOD_3_A286C0902593282D_OFFSET UNITYSDK_OFFSET(0x11E95B80)
#define CLASS_3_A292D09112D1EC5F_METHOD_3_A40475C44AA8CEAB_1_OFFSET UNITYSDK_OFFSET(0x11E95360)
#define CLASS_3_A292D09112D1EC5F_METHOD_3_A40475C44AA8CEAB_OFFSET UNITYSDK_OFFSET(0x11E95120)
#define CLASS_3_A292D09112D1EC5F_METHOD_3_A9F82A83DF5851C9_OFFSET UNITYSDK_OFFSET(0x11E95DF0)
#define CLASS_3_A292D09112D1EC5F_METHOD_3_ADF4AD3331B4D7AD_OFFSET UNITYSDK_OFFSET(0x11E97600)
#define CLASS_3_A292D09112D1EC5F_METHOD_3_C114A1F8E08B6F92_1_OFFSET UNITYSDK_OFFSET(0x11E98550)
#define CLASS_3_A292D09112D1EC5F_METHOD_3_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x11E96D40)
#define CLASS_3_A292D09112D1EC5F_METHOD_3_C74CF020AA42ED85_1_OFFSET UNITYSDK_OFFSET(0x11E95B60)
#define CLASS_3_A292D09112D1EC5F_METHOD_3_C74CF020AA42ED85_2_OFFSET UNITYSDK_OFFSET(0x11E98910)
#define CLASS_3_A292D09112D1EC5F_METHOD_3_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x11E92F80)
#define CLASS_3_A292D09112D1EC5F_METHOD_3_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x11E98560)
#define CLASS_3_A292D09112D1EC5F_METHOD_3_CB18FE11FAF729BE_OFFSET UNITYSDK_OFFSET(0x11E95C20)
#define CLASS_3_A292D09112D1EC5F_METHOD_3_CCFD131833AE484B_OFFSET UNITYSDK_OFFSET(0x11E95590)
#define CLASS_3_A292D09112D1EC5F_METHOD_3_D1EED6D7D28E9E12_OFFSET UNITYSDK_OFFSET(0x11E97650)
#define CLASS_3_A292D09112D1EC5F_METHOD_3_D346DD860C6F8AEA_OFFSET UNITYSDK_OFFSET(0x11E95F60)
#define CLASS_3_A292D09112D1EC5F_METHOD_3_E28A93D0A78CA95B_OFFSET UNITYSDK_OFFSET(0x11E98280)
#define CLASS_3_A292D09112D1EC5F_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x11E95B70)
#define CLASS_3_A292D09112D1EC5F_METHOD_3_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0x11E98180)
#define CLASS_3_A292D09112D1EC5F_ONATTACH_OFFSET UNITYSDK_OFFSET(0x11E93160)
#define CLASS_3_A292D09112D1EC5F_ONDETACH_OFFSET UNITYSDK_OFFSET(0x11E932C0)
#define CLASS_3_A292D09112D1EC5F_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x11E94840)
#define CLASS_3_A292D09112D1EC5F_ONENABLE_OFFSET UNITYSDK_OFFSET(0x11E93570)
#define CLASS_3_A292D09112D1EC5F_ONREADY_OFFSET UNITYSDK_OFFSET(0x11E948A0)
#define CLASS_3_A292D09112D1EC5F_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x11E94B50)
#define CLASS_3_A292D09112D1EC5F__CTOR_OFFSET UNITYSDK_OFFSET(0x11E95710)

inline static constexpr unsigned int Class_3_A292D09112D1EC5F_TypeDefinitionIndex = 42952;

class Class_3_A292D09112D1EC5F : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_3_A292D09112D1EC5F*>
{
public:
	::System::Collections::Generic::List_1<::Foundation::ViewObject::Structures::FMonsterMemberLeftCheckAction>* Field_3_6; // 0x20
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_3_2; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Foundation::Unreal::FGameplayTagContainer>* Field_3_8; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_3_A292D09112D1EC5F_Struct_2_4AEDF399FA0A1C26>* Field_3_3; // 0x38
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_3_1; // 0x40
	::System::Collections::Generic::List_1<::System::Int32>* Field_3_7; // 0x48
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_3_9; // 0x50
	::System::Collections::Generic::List_1<::Foundation::ViewObject::Structures::FEntityHPChangeAction*>* Field_3_5; // 0x58
	::System::Collections::Generic::List_1<::Foundation::ViewObject::Structures::FMemberAliveStateCheckAction>* Field_3_4; // 0x60
	::System::Int32 Field_3_10; // 0x68
	::System::Int32 Field_3_12; // 0x6C
	::System::Boolean Field_3_11; // 0x70
	::System::UInt32 Field_3_0; // 0x74
	::System::Int32 Field_3_14; // 0x78
	::Foundation::ViewObject::SuiteInfo Field_3_13; // 0x7C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A292D09112D1EC5F__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_3_8F7AD00CE70D0A7B(::System::Int32 a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_A292D09112D1EC5F_METHOD_3_8F7AD00CE70D0A7B_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_3_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A292D09112D1EC5F_METHOD_3_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Boolean Method_3_221473846B2776FA(::MoleMole::EntityHandle a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_3_A292D09112D1EC5F_METHOD_3_221473846B2776FA_OFFSET))(this, a1);
	}

	::System::Void OnAttach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A292D09112D1EC5F_ONATTACH_OFFSET))(this);
	}

	::System::Void OnDetach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A292D09112D1EC5F_ONDETACH_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A292D09112D1EC5F_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A292D09112D1EC5F_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnReady()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A292D09112D1EC5F_ONREADY_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A292D09112D1EC5F_ONRECYCLE_OFFSET))(this);
	}

	::System::Void Method_3_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A292D09112D1EC5F_METHOD_3_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::System::Void Method_3_6055A93732CC885D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A292D09112D1EC5F_METHOD_3_6055A93732CC885D_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A292D09112D1EC5F_METHOD_3_832295EC279E5994_OFFSET))(this);
	}

	::System::Int32 Method_3_C74CF020AA42ED85_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A292D09112D1EC5F_METHOD_3_C74CF020AA42ED85_1_OFFSET))(this);
	}

	::System::Boolean Method_3_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A292D09112D1EC5F_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_3_A286C0902593282D(::MoleMole::EntityHandle a1, ::Class_2_0CCE48347EBD6D5F_Enum_3_A5191D6218CE9E26 a2, ::MoleMole::GameplayTag a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::Class_2_0CCE48347EBD6D5F_Enum_3_A5191D6218CE9E26, ::MoleMole::GameplayTag))((::PBYTE)hIl2Cpp + CLASS_3_A292D09112D1EC5F_METHOD_3_A286C0902593282D_OFFSET))(this, a1, a2, a3);
	}

	::Foundation::ViewObject::SuiteInfo Method_3_A9F82A83DF5851C9()
	{
		return ((::Foundation::ViewObject::SuiteInfo(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A292D09112D1EC5F_METHOD_3_A9F82A83DF5851C9_OFFSET))(this);
	}

	::System::Void Method_3_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_A292D09112D1EC5F_METHOD_3_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Void Method_3_A40475C44AA8CEAB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A292D09112D1EC5F_METHOD_3_A40475C44AA8CEAB_OFFSET))(this);
	}

	::System::Void Method_3_6E15AF54D4AE4D55(::System::Collections::Generic::HashSet_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_3_A292D09112D1EC5F_METHOD_3_6E15AF54D4AE4D55_OFFSET))(this, a1);
	}

	::System::Void Method_3_CB18FE11FAF729BE(::MoleMole::EntityHandle a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_3_A292D09112D1EC5F_METHOD_3_CB18FE11FAF729BE_OFFSET))(this, a1);
	}

	::System::Void Method_3_3559476C7C86165D(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_A292D09112D1EC5F_METHOD_3_3559476C7C86165D_OFFSET))(this, a1);
	}

	::System::Void Method_3_CCFD131833AE484B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A292D09112D1EC5F_METHOD_3_CCFD131833AE484B_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A292D09112D1EC5F_METHOD_3_832295EC279E5994_1_OFFSET))(this);
	}

	::System::Void Method_3_D346DD860C6F8AEA(::System::UInt32 a1, ::Foundation::ViewObject::ViewObjectHandle a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + CLASS_3_A292D09112D1EC5F_METHOD_3_D346DD860C6F8AEA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_6CDE81592793C86C(::Foundation::ViewObject::SuiteInfo a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::SuiteInfo))((::PBYTE)hIl2Cpp + CLASS_3_A292D09112D1EC5F_METHOD_3_6CDE81592793C86C_OFFSET))(this, a1);
	}

	::System::Void Method_3_51BBA01F511E6107()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A292D09112D1EC5F_METHOD_3_51BBA01F511E6107_OFFSET))(this);
	}

	::System::Int32 Method_3_062776F7BCEE71D6(::Foundation::Unreal::FGameplayTag a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + CLASS_3_A292D09112D1EC5F_METHOD_3_062776F7BCEE71D6_OFFSET))(this, a1);
	}

	::System::Void Method_3_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_A292D09112D1EC5F_METHOD_3_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Void Method_3_25816B4AD877021C(::Foundation::ViewObject::Structures::FMemberAliveStateCheckAction a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::Structures::FMemberAliveStateCheckAction))((::PBYTE)hIl2Cpp + CLASS_3_A292D09112D1EC5F_METHOD_3_25816B4AD877021C_OFFSET))(this, a1);
	}

	::System::Void Method_3_98B25803044D202F(::System::String* a1, ::Foundation::ViewObject::SuiteInfo a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Foundation::ViewObject::SuiteInfo))((::PBYTE)hIl2Cpp + CLASS_3_A292D09112D1EC5F_METHOD_3_98B25803044D202F_OFFSET))(this, a1, a2);
	}

	::System::UInt32 Method_3_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A292D09112D1EC5F_METHOD_3_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Boolean Method_3_3C470A1D50B2BBB4(::Foundation::Unreal::FGameplayTag a1, ::System::Collections::Generic::List_1<::System::Int32>* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::Unreal::FGameplayTag, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_3_A292D09112D1EC5F_METHOD_3_3C470A1D50B2BBB4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_ADF4AD3331B4D7AD(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_A292D09112D1EC5F_METHOD_3_ADF4AD3331B4D7AD_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_D1EED6D7D28E9E12(::Foundation::ViewObject::CombineTriggerListenParam a1, ::Foundation::ViewObject::ViewObjectHandle a2, ::Foundation::ViewObject::SuiteInfo a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::CombineTriggerListenParam, ::Foundation::ViewObject::ViewObjectHandle, ::Foundation::ViewObject::SuiteInfo))((::PBYTE)hIl2Cpp + CLASS_3_A292D09112D1EC5F_METHOD_3_D1EED6D7D28E9E12_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_43F6E39EEC4DF33F(::Foundation::ViewObject::SuiteInfo a1, ::System::Collections::Generic::HashSet_1<::System::Int32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::SuiteInfo, ::System::Collections::Generic::HashSet_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_3_A292D09112D1EC5F_METHOD_3_43F6E39EEC4DF33F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_2ADCFCC0F615D9EE(::System::Boolean a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_A292D09112D1EC5F_METHOD_3_2ADCFCC0F615D9EE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_E28A93D0A78CA95B(::Foundation::ViewObject::Structures::FMonsterMemberLeftCheckAction a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::Structures::FMonsterMemberLeftCheckAction, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_A292D09112D1EC5F_METHOD_3_E28A93D0A78CA95B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_401CDFF85DCB5396(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_A292D09112D1EC5F_METHOD_3_401CDFF85DCB5396_OFFSET))(this, a1);
	}

	::System::Void Method_3_C114A1F8E08B6F92_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_A292D09112D1EC5F_METHOD_3_C114A1F8E08B6F92_1_OFFSET))(this, a1);
	}

	::System::Void Method_3_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_A292D09112D1EC5F_METHOD_3_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Void Method_3_832295EC279E5994_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A292D09112D1EC5F_METHOD_3_832295EC279E5994_2_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A292D09112D1EC5F_METHOD_3_832295EC279E5994_3_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994_4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A292D09112D1EC5F_METHOD_3_832295EC279E5994_4_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_3_3557F75ED858BAD2(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_3_A292D09112D1EC5F_METHOD_3_3557F75ED858BAD2_OFFSET))(this, a1);
	}

	::System::Void Method_3_832295EC279E5994_5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A292D09112D1EC5F_METHOD_3_832295EC279E5994_5_OFFSET))(this);
	}

	::System::Void Method_3_7E0D3A7A149A57B6(::Foundation::ViewObject::SuiteInfo a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::SuiteInfo))((::PBYTE)hIl2Cpp + CLASS_3_A292D09112D1EC5F_METHOD_3_7E0D3A7A149A57B6_OFFSET))(this, a1);
	}

	::System::Void Method_3_F5447CD65612575D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A292D09112D1EC5F_METHOD_3_F5447CD65612575D_OFFSET))(this);
	}

	::System::Boolean Method_3_8B6462DEF26C363D(::Foundation::ViewObject::Structures::FEntityHPChangeAction* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::Structures::FEntityHPChangeAction*))((::PBYTE)hIl2Cpp + CLASS_3_A292D09112D1EC5F_METHOD_3_8B6462DEF26C363D_OFFSET))(this, a1);
	}

	::System::Void Method_3_99BCDBABF1684B50(::Class_3_30235BB967CBDA73_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_30235BB967CBDA73_1*))((::PBYTE)hIl2Cpp + CLASS_3_A292D09112D1EC5F_METHOD_3_99BCDBABF1684B50_OFFSET))(this, a1);
	}

	::System::Void Method_3_A40475C44AA8CEAB_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A292D09112D1EC5F_METHOD_3_A40475C44AA8CEAB_1_OFFSET))(this);
	}

	::System::Int32 Method_3_C74CF020AA42ED85_2()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A292D09112D1EC5F_METHOD_3_C74CF020AA42ED85_2_OFFSET))(this);
	}
};
