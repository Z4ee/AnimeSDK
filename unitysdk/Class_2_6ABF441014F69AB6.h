#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_0CCE48347EBD6D5F_Enum_3_A5191D6218CE9E26_3.h"
#include "unitysdk/Class_2_6ABF441014F69AB6_Struct_2_4AEDF399FA0A1C26.h"
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

class Class_3_30235BB967CBDA73_2;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_6ABF441014F69AB6_METHOD_2_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0xBE11BB0)
#define CLASS_2_6ABF441014F69AB6_METHOD_2_03EC1F2EB9F6BD24_OFFSET UNITYSDK_OFFSET(0xBE11CB0)
#define CLASS_2_6ABF441014F69AB6_METHOD_2_062776F7BCEE71D6_OFFSET UNITYSDK_OFFSET(0xBE10880)
#define CLASS_2_6ABF441014F69AB6_METHOD_2_1A3088F8EE1739F2_OFFSET UNITYSDK_OFFSET(0xBE11BC0)
#define CLASS_2_6ABF441014F69AB6_METHOD_2_25816B4AD877021C_OFFSET UNITYSDK_OFFSET(0xBE11180)
#define CLASS_2_6ABF441014F69AB6_METHOD_2_2CBE0B79DD36047E_OFFSET UNITYSDK_OFFSET(0xBE11640)
#define CLASS_2_6ABF441014F69AB6_METHOD_2_3557F75ED858BAD2_OFFSET UNITYSDK_OFFSET(0xBE0F360)
#define CLASS_2_6ABF441014F69AB6_METHOD_2_369F47CCB61A607A_OFFSET UNITYSDK_OFFSET(0xBE11A60)
#define CLASS_2_6ABF441014F69AB6_METHOD_2_3C470A1D50B2BBB4_OFFSET UNITYSDK_OFFSET(0xBE103D0)
#define CLASS_2_6ABF441014F69AB6_METHOD_2_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0xBE0F4F0)
#define CLASS_2_6ABF441014F69AB6_METHOD_2_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0xBE10870)
#define CLASS_2_6ABF441014F69AB6_METHOD_2_7E0D3A7A149A57B6_OFFSET UNITYSDK_OFFSET(0xBE11C90)
#define CLASS_2_6ABF441014F69AB6_METHOD_2_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0xBE10DF0)
#define CLASS_2_6ABF441014F69AB6_METHOD_2_832295EC279E5994_2_OFFSET UNITYSDK_OFFSET(0xBE11360)
#define CLASS_2_6ABF441014F69AB6_METHOD_2_832295EC279E5994_3_OFFSET UNITYSDK_OFFSET(0xBE11B90)
#define CLASS_2_6ABF441014F69AB6_METHOD_2_832295EC279E5994_4_OFFSET UNITYSDK_OFFSET(0xBE11CA0)
#define CLASS_2_6ABF441014F69AB6_METHOD_2_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0xBE10CC0)
#define CLASS_2_6ABF441014F69AB6_METHOD_2_8F7AD00CE70D0A7B_OFFSET UNITYSDK_OFFSET(0xBE0DB90)
#define CLASS_2_6ABF441014F69AB6_METHOD_2_929D66F905478343_OFFSET UNITYSDK_OFFSET(0xBE0F1E0)
#define CLASS_2_6ABF441014F69AB6_METHOD_2_99BCDBABF1684B50_OFFSET UNITYSDK_OFFSET(0xBE10FD0)
#define CLASS_2_6ABF441014F69AB6_METHOD_2_A286C0902593282D_OFFSET UNITYSDK_OFFSET(0xBE124F0)
#define CLASS_2_6ABF441014F69AB6_METHOD_2_A40475C44AA8CEAB_1_OFFSET UNITYSDK_OFFSET(0xBE0FA10)
#define CLASS_2_6ABF441014F69AB6_METHOD_2_A40475C44AA8CEAB_OFFSET UNITYSDK_OFFSET(0xBE0FC50)
#define CLASS_2_6ABF441014F69AB6_METHOD_2_A9F82A83DF5851C9_OFFSET UNITYSDK_OFFSET(0xBE11BA0)
#define CLASS_2_6ABF441014F69AB6_METHOD_2_ABDEF63187CDF2E8_OFFSET UNITYSDK_OFFSET(0xBE11370)
#define CLASS_2_6ABF441014F69AB6_METHOD_2_ADF4AD3331B4D7AD_OFFSET UNITYSDK_OFFSET(0xBE11C40)
#define CLASS_2_6ABF441014F69AB6_METHOD_2_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0xBE124E0)
#define CLASS_2_6ABF441014F69AB6_METHOD_2_C2EAF3525530E746_OFFSET UNITYSDK_OFFSET(0xBE101C0)
#define CLASS_2_6ABF441014F69AB6_METHOD_2_C74CF020AA42ED85_1_OFFSET UNITYSDK_OFFSET(0xBE10860)
#define CLASS_2_6ABF441014F69AB6_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0xBE0DC70)
#define CLASS_2_6ABF441014F69AB6_METHOD_2_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0xBE11170)
#define CLASS_2_6ABF441014F69AB6_METHOD_2_CB18FE11FAF729BE_OFFSET UNITYSDK_OFFSET(0xBE10E00)
#define CLASS_2_6ABF441014F69AB6_METHOD_2_CD572381EBE7CC80_OFFSET UNITYSDK_OFFSET(0xBE0DC80)
#define CLASS_2_6ABF441014F69AB6_METHOD_2_D346DD860C6F8AEA_OFFSET UNITYSDK_OFFSET(0xBE10CD0)
#define CLASS_2_6ABF441014F69AB6_METHOD_2_E28A93D0A78CA95B_OFFSET UNITYSDK_OFFSET(0xBE100A0)
#define CLASS_2_6ABF441014F69AB6_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xBE11160)
#define CLASS_2_6ABF441014F69AB6_METHOD_2_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0xBE11540)
#define CLASS_2_6ABF441014F69AB6_ONATTACH_OFFSET UNITYSDK_OFFSET(0xBE0DD60)
#define CLASS_2_6ABF441014F69AB6_ONDETACH_OFFSET UNITYSDK_OFFSET(0xBE0DEC0)
#define CLASS_2_6ABF441014F69AB6_ONENABLE_OFFSET UNITYSDK_OFFSET(0xBE0E160)
#define CLASS_2_6ABF441014F69AB6_ONREADY_OFFSET UNITYSDK_OFFSET(0xBE0F410)
#define CLASS_2_6ABF441014F69AB6_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0xBE0F6C0)
#define CLASS_2_6ABF441014F69AB6__CTOR_OFFSET UNITYSDK_OFFSET(0xBE0FE80)

inline static constexpr unsigned int Class_2_6ABF441014F69AB6_TypeDefinitionIndex = 64751;

class Class_2_6ABF441014F69AB6 : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_2_6ABF441014F69AB6*>
{
public:
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_2_1; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_6; // 0x28
	::System::Collections::Generic::List_1<::Foundation::ViewObject::Structures::FMonsterMemberLeftCheckAction>* Field_2_5; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_2_6ABF441014F69AB6_Struct_2_4AEDF399FA0A1C26>* Field_2_3; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Foundation::Unreal::FGameplayTagContainer>* Field_2_7; // 0x40
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_2_8; // 0x48
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_2_2; // 0x50
	::System::Collections::Generic::List_1<::Foundation::ViewObject::Structures::FMemberAliveStateCheckAction>* Field_2_4; // 0x58
	::System::Boolean Field_2_10; // 0x60
	::System::Int32 Field_2_9; // 0x64
	::Foundation::ViewObject::SuiteInfo Field_2_11; // 0x68
	::System::UInt32 Field_2_0; // 0x70
	::System::Int32 Field_2_12; // 0x74

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6ABF441014F69AB6__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_8F7AD00CE70D0A7B(::System::Int32 a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_6ABF441014F69AB6_METHOD_2_8F7AD00CE70D0A7B_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6ABF441014F69AB6_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Boolean Method_2_CD572381EBE7CC80(::MoleMole::EntityHandle a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_2_6ABF441014F69AB6_METHOD_2_CD572381EBE7CC80_OFFSET))(this, a1);
	}

	::System::Void OnAttach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6ABF441014F69AB6_ONATTACH_OFFSET))(this);
	}

	::System::Void OnDetach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6ABF441014F69AB6_ONDETACH_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6ABF441014F69AB6_ONENABLE_OFFSET))(this);
	}

	::System::Void OnReady()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6ABF441014F69AB6_ONREADY_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6ABF441014F69AB6_ONRECYCLE_OFFSET))(this);
	}

	::System::Void Method_2_E28A93D0A78CA95B(::Foundation::ViewObject::Structures::FMonsterMemberLeftCheckAction a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::Structures::FMonsterMemberLeftCheckAction, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6ABF441014F69AB6_METHOD_2_E28A93D0A78CA95B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C2EAF3525530E746(::System::String* a1, ::Foundation::ViewObject::SuiteInfo a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Foundation::ViewObject::SuiteInfo))((::PBYTE)hIl2Cpp + CLASS_2_6ABF441014F69AB6_METHOD_2_C2EAF3525530E746_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_3C470A1D50B2BBB4(::Foundation::Unreal::FGameplayTag a1, ::System::Collections::Generic::List_1<::System::Int32>* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::Unreal::FGameplayTag, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_6ABF441014F69AB6_METHOD_2_3C470A1D50B2BBB4_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_C74CF020AA42ED85_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6ABF441014F69AB6_METHOD_2_C74CF020AA42ED85_1_OFFSET))(this);
	}

	::System::Void Method_2_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_6ABF441014F69AB6_METHOD_2_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_062776F7BCEE71D6(::Foundation::Unreal::FGameplayTag a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + CLASS_2_6ABF441014F69AB6_METHOD_2_062776F7BCEE71D6_OFFSET))(this, a1);
	}

	::System::Void Method_2_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6ABF441014F69AB6_METHOD_2_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_2_D346DD860C6F8AEA(::System::UInt32 a1, ::Foundation::ViewObject::ViewObjectHandle a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + CLASS_2_6ABF441014F69AB6_METHOD_2_D346DD860C6F8AEA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A40475C44AA8CEAB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6ABF441014F69AB6_METHOD_2_A40475C44AA8CEAB_OFFSET))(this);
	}

	::System::Void Method_2_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6ABF441014F69AB6_METHOD_2_832295EC279E5994_1_OFFSET))(this);
	}

	::System::Void Method_2_CB18FE11FAF729BE(::MoleMole::EntityHandle a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_2_6ABF441014F69AB6_METHOD_2_CB18FE11FAF729BE_OFFSET))(this, a1);
	}

	::System::Void Method_2_99BCDBABF1684B50(::Class_3_30235BB967CBDA73_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_30235BB967CBDA73_2*))((::PBYTE)hIl2Cpp + CLASS_2_6ABF441014F69AB6_METHOD_2_99BCDBABF1684B50_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6ABF441014F69AB6_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_2_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6ABF441014F69AB6_METHOD_2_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Void Method_2_A40475C44AA8CEAB_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6ABF441014F69AB6_METHOD_2_A40475C44AA8CEAB_1_OFFSET))(this);
	}

	::System::Void Method_2_25816B4AD877021C(::Foundation::ViewObject::Structures::FMemberAliveStateCheckAction a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::Structures::FMemberAliveStateCheckAction))((::PBYTE)hIl2Cpp + CLASS_2_6ABF441014F69AB6_METHOD_2_25816B4AD877021C_OFFSET))(this, a1);
	}

	::System::Void Method_2_832295EC279E5994_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6ABF441014F69AB6_METHOD_2_832295EC279E5994_2_OFFSET))(this);
	}

	::System::Void Method_2_ABDEF63187CDF2E8(::System::Boolean a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_6ABF441014F69AB6_METHOD_2_ABDEF63187CDF2E8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F5447CD65612575D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6ABF441014F69AB6_METHOD_2_F5447CD65612575D_OFFSET))(this);
	}

	::System::Void Method_2_2CBE0B79DD36047E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6ABF441014F69AB6_METHOD_2_2CBE0B79DD36047E_OFFSET))(this);
	}

	::System::Void Method_2_832295EC279E5994_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6ABF441014F69AB6_METHOD_2_832295EC279E5994_3_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_3557F75ED858BAD2(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_6ABF441014F69AB6_METHOD_2_3557F75ED858BAD2_OFFSET))(this, a1);
	}

	::Foundation::ViewObject::SuiteInfo Method_2_A9F82A83DF5851C9()
	{
		return ((::Foundation::ViewObject::SuiteInfo(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6ABF441014F69AB6_METHOD_2_A9F82A83DF5851C9_OFFSET))(this);
	}

	::System::UInt32 Method_2_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6ABF441014F69AB6_METHOD_2_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_2_1A3088F8EE1739F2(::Foundation::ViewObject::SuiteInfo a1, ::System::Collections::Generic::HashSet_1<::System::Int32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::SuiteInfo, ::System::Collections::Generic::HashSet_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_6ABF441014F69AB6_METHOD_2_1A3088F8EE1739F2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_ADF4AD3331B4D7AD(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_6ABF441014F69AB6_METHOD_2_ADF4AD3331B4D7AD_OFFSET))(this, a1);
	}

	::System::Void Method_2_929D66F905478343(::System::Collections::Generic::HashSet_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_6ABF441014F69AB6_METHOD_2_929D66F905478343_OFFSET))(this, a1);
	}

	::System::Void Method_2_7E0D3A7A149A57B6(::Foundation::ViewObject::SuiteInfo a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::SuiteInfo))((::PBYTE)hIl2Cpp + CLASS_2_6ABF441014F69AB6_METHOD_2_7E0D3A7A149A57B6_OFFSET))(this, a1);
	}

	::System::Void Method_2_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6ABF441014F69AB6_METHOD_2_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::System::Void Method_2_832295EC279E5994_4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6ABF441014F69AB6_METHOD_2_832295EC279E5994_4_OFFSET))(this);
	}

	::System::Void Method_2_369F47CCB61A607A(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_6ABF441014F69AB6_METHOD_2_369F47CCB61A607A_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_03EC1F2EB9F6BD24(::Foundation::ViewObject::CombineTriggerListenParam a1, ::Foundation::ViewObject::ViewObjectHandle a2, ::Foundation::ViewObject::SuiteInfo a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::CombineTriggerListenParam, ::Foundation::ViewObject::ViewObjectHandle, ::Foundation::ViewObject::SuiteInfo))((::PBYTE)hIl2Cpp + CLASS_2_6ABF441014F69AB6_METHOD_2_03EC1F2EB9F6BD24_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_6ABF441014F69AB6_METHOD_2_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Void Method_2_A286C0902593282D(::MoleMole::EntityHandle a1, ::Class_2_0CCE48347EBD6D5F_Enum_3_A5191D6218CE9E26_3 a2, ::MoleMole::GameplayTag a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::Class_2_0CCE48347EBD6D5F_Enum_3_A5191D6218CE9E26_3, ::MoleMole::GameplayTag))((::PBYTE)hIl2Cpp + CLASS_2_6ABF441014F69AB6_METHOD_2_A286C0902593282D_OFFSET))(this, a1, a2, a3);
	}
};
