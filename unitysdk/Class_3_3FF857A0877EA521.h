#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_945F852A8B481F54_Enum_3_A5191D6218CE9E26.h"
#include "unitysdk/Class_3_3FF857A0877EA521_Struct_2_2D3CDD19DC92B612.h"
#include "unitysdk/Class_3_3FF857A0877EA521_Struct_2_73414B039196A599.h"
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

class Class_1_28F0414D4F296993;
class Class_3_E9FF194CA9EF9D04;
namespace Foundation::ViewObject::Structures { class FEntityHPChangeAction; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_3FF857A0877EA521_METHOD_3_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x10D29DA0)
#define CLASS_3_3FF857A0877EA521_METHOD_3_062776F7BCEE71D6_OFFSET UNITYSDK_OFFSET(0x10D2B140)
#define CLASS_3_3FF857A0877EA521_METHOD_3_19560DC92EB9157B_OFFSET UNITYSDK_OFFSET(0x10D2AA70)
#define CLASS_3_3FF857A0877EA521_METHOD_3_23560DAA97F122DA_OFFSET UNITYSDK_OFFSET(0x10D2AB50)
#define CLASS_3_3FF857A0877EA521_METHOD_3_268EFBBDB0702083_OFFSET UNITYSDK_OFFSET(0x10D26050)
#define CLASS_3_3FF857A0877EA521_METHOD_3_2ADCFCC0F615D9EE_OFFSET UNITYSDK_OFFSET(0x10D29B10)
#define CLASS_3_3FF857A0877EA521_METHOD_3_2F7E7A0CBFFDFF0D_OFFSET UNITYSDK_OFFSET(0x10D2A580)
#define CLASS_3_3FF857A0877EA521_METHOD_3_3557F75ED858BAD2_OFFSET UNITYSDK_OFFSET(0x10D27940)
#define CLASS_3_3FF857A0877EA521_METHOD_3_369F47CCB61A607A_OFFSET UNITYSDK_OFFSET(0x10D29840)
#define CLASS_3_3FF857A0877EA521_METHOD_3_3C470A1D50B2BBB4_OFFSET UNITYSDK_OFFSET(0x10D29DC0)
#define CLASS_3_3FF857A0877EA521_METHOD_3_401CDFF85DCB5396_OFFSET UNITYSDK_OFFSET(0x10D2A700)
#define CLASS_3_3FF857A0877EA521_METHOD_3_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x10D27B40)
#define CLASS_3_3FF857A0877EA521_METHOD_3_4CFA30FA85BD5218_OFFSET UNITYSDK_OFFSET(0x10D2A8C0)
#define CLASS_3_3FF857A0877EA521_METHOD_3_5780411EFE947D94_OFFSET UNITYSDK_OFFSET(0x10D29D80)
#define CLASS_3_3FF857A0877EA521_METHOD_3_6055A93732CC885D_OFFSET UNITYSDK_OFFSET(0x10D2A210)
#define CLASS_3_3FF857A0877EA521_METHOD_3_7646FFE662147970_OFFSET UNITYSDK_OFFSET(0x10D29990)
#define CLASS_3_3FF857A0877EA521_METHOD_3_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x10D2A560)
#define CLASS_3_3FF857A0877EA521_METHOD_3_7C42A91BA0AD64F0_OFFSET UNITYSDK_OFFSET(0x10D29050)
#define CLASS_3_3FF857A0877EA521_METHOD_3_7E0D3A7A149A57B6_OFFSET UNITYSDK_OFFSET(0x10D2A8B0)
#define CLASS_3_3FF857A0877EA521_METHOD_3_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x10D29340)
#define CLASS_3_3FF857A0877EA521_METHOD_3_832295EC279E5994_2_OFFSET UNITYSDK_OFFSET(0x10D2AA50)
#define CLASS_3_3FF857A0877EA521_METHOD_3_832295EC279E5994_3_OFFSET UNITYSDK_OFFSET(0x10D2ACB0)
#define CLASS_3_3FF857A0877EA521_METHOD_3_832295EC279E5994_4_OFFSET UNITYSDK_OFFSET(0x10D2ACC0)
#define CLASS_3_3FF857A0877EA521_METHOD_3_832295EC279E5994_5_OFFSET UNITYSDK_OFFSET(0x10D2B0A0)
#define CLASS_3_3FF857A0877EA521_METHOD_3_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x10D28930)
#define CLASS_3_3FF857A0877EA521_METHOD_3_858E6A9A1178E7B1_OFFSET UNITYSDK_OFFSET(0x10D2ACD0)
#define CLASS_3_3FF857A0877EA521_METHOD_3_8F7AD00CE70D0A7B_OFFSET UNITYSDK_OFFSET(0x10D25F60)
#define CLASS_3_3FF857A0877EA521_METHOD_3_97119193EB22A3D0_OFFSET UNITYSDK_OFFSET(0x10D28940)
#define CLASS_3_3FF857A0877EA521_METHOD_3_99BCDBABF1684B50_OFFSET UNITYSDK_OFFSET(0x10D28B20)
#define CLASS_3_3FF857A0877EA521_METHOD_3_A286C0902593282D_OFFSET UNITYSDK_OFFSET(0x10D28CC0)
#define CLASS_3_3FF857A0877EA521_METHOD_3_A40475C44AA8CEAB_1_OFFSET UNITYSDK_OFFSET(0x10D28070)
#define CLASS_3_3FF857A0877EA521_METHOD_3_A40475C44AA8CEAB_OFFSET UNITYSDK_OFFSET(0x10D282C0)
#define CLASS_3_3FF857A0877EA521_METHOD_3_A9F82A83DF5851C9_OFFSET UNITYSDK_OFFSET(0x10D2A570)
#define CLASS_3_3FF857A0877EA521_METHOD_3_ADF4AD3331B4D7AD_1_OFFSET UNITYSDK_OFFSET(0x10D29D10)
#define CLASS_3_3FF857A0877EA521_METHOD_3_ADF4AD3331B4D7AD_OFFSET UNITYSDK_OFFSET(0x10D288E0)
#define CLASS_3_3FF857A0877EA521_METHOD_3_B0E650A716C67C67_OFFSET UNITYSDK_OFFSET(0x10D2A3A0)
#define CLASS_3_3FF857A0877EA521_METHOD_3_B2C0ADBFEA309440_OFFSET UNITYSDK_OFFSET(0x10D29350)
#define CLASS_3_3FF857A0877EA521_METHOD_3_B3F352584D32F9FD_OFFSET UNITYSDK_OFFSET(0x10D2A550)
#define CLASS_3_3FF857A0877EA521_METHOD_3_B52D729126889377_OFFSET UNITYSDK_OFFSET(0x10D2B0C0)
#define CLASS_3_3FF857A0877EA521_METHOD_3_B57E77AC0AD64DD8_OFFSET UNITYSDK_OFFSET(0x10D28F30)
#define CLASS_3_3FF857A0877EA521_METHOD_3_BB51309AA50989B0_OFFSET UNITYSDK_OFFSET(0x10D29700)
#define CLASS_3_3FF857A0877EA521_METHOD_3_C114A1F8E08B6F92_1_OFFSET UNITYSDK_OFFSET(0x10D2AA60)
#define CLASS_3_3FF857A0877EA521_METHOD_3_C114A1F8E08B6F92_2_OFFSET UNITYSDK_OFFSET(0x10D2B0B0)
#define CLASS_3_3FF857A0877EA521_METHOD_3_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x10D2A390)
#define CLASS_3_3FF857A0877EA521_METHOD_3_C71FCD05F293E510_OFFSET UNITYSDK_OFFSET(0x10D27750)
#define CLASS_3_3FF857A0877EA521_METHOD_3_C74CF020AA42ED85_1_OFFSET UNITYSDK_OFFSET(0x10D29980)
#define CLASS_3_3FF857A0877EA521_METHOD_3_C74CF020AA42ED85_2_OFFSET UNITYSDK_OFFSET(0x10D29D70)
#define CLASS_3_3FF857A0877EA521_METHOD_3_C74CF020AA42ED85_3_OFFSET UNITYSDK_OFFSET(0x10D2A540)
#define CLASS_3_3FF857A0877EA521_METHOD_3_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x10D26040)
#define CLASS_3_3FF857A0877EA521_METHOD_3_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x10D2B130)
#define CLASS_3_3FF857A0877EA521_METHOD_3_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x10D29DB0)
#define CLASS_3_3FF857A0877EA521_METHOD_3_CB18FE11FAF729BE_OFFSET UNITYSDK_OFFSET(0x10D28D60)
#define CLASS_3_3FF857A0877EA521_METHOD_3_CCFD131833AE484B_OFFSET UNITYSDK_OFFSET(0x10D284F0)
#define CLASS_3_3FF857A0877EA521_METHOD_3_D1EED6D7D28E9E12_OFFSET UNITYSDK_OFFSET(0x10D2B550)
#define CLASS_3_3FF857A0877EA521_METHOD_3_D346DD860C6F8AEA_OFFSET UNITYSDK_OFFSET(0x10D29210)
#define CLASS_3_3FF857A0877EA521_METHOD_3_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x10D29B00)
#define CLASS_3_3FF857A0877EA521_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x10D29330)
#define CLASS_3_3FF857A0877EA521_ONATTACH_OFFSET UNITYSDK_OFFSET(0x10D262B0)
#define CLASS_3_3FF857A0877EA521_ONDETACH_OFFSET UNITYSDK_OFFSET(0x10D26410)
#define CLASS_3_3FF857A0877EA521_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x10D279F0)
#define CLASS_3_3FF857A0877EA521_ONENABLE_OFFSET UNITYSDK_OFFSET(0x10D266C0)
#define CLASS_3_3FF857A0877EA521_ONREADY_OFFSET UNITYSDK_OFFSET(0x10D27A60)
#define CLASS_3_3FF857A0877EA521_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x10D27D10)
#define CLASS_3_3FF857A0877EA521__CTOR_OFFSET UNITYSDK_OFFSET(0x10D28670)

inline static constexpr unsigned int Class_3_3FF857A0877EA521_TypeDefinitionIndex = 85498;

class Class_3_3FF857A0877EA521 : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_3_3FF857A0877EA521*>
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_3_9; // 0x20
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_3_1; // 0x28
	::System::Collections::Generic::List_1<::Foundation::ViewObject::Structures::FEntityHPChangeAction*>* Field_3_5; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_3_3FF857A0877EA521_Struct_2_2D3CDD19DC92B612>* Field_3_7; // 0x38
	::System::Collections::Generic::List_1<::Foundation::ViewObject::Structures::FMonsterMemberLeftCheckAction>* Field_3_4; // 0x40
	::System::Collections::Generic::List_1<::System::Int32>* Field_3_11; // 0x48
	::System::Collections::Generic::List_1<::Foundation::ViewObject::Structures::FMemberAliveStateCheckAction>* Field_3_6; // 0x50
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_3_0; // 0x58
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Foundation::Unreal::FGameplayTagContainer>* Field_3_10; // 0x60
	::System::Int32 Field_3_17; // 0x68
	::Class_3_3FF857A0877EA521_Struct_2_73414B039196A599 Field_3_19; // 0x6C
	::System::Int32 Field_3_12; // 0x78
	::System::Int32 Field_3_14; // 0x7C
	::System::Boolean Field_3_13; // 0x80
	::System::Boolean Field_3_15; // 0x81
	::System::UInt32 Field_3_2; // 0x84
	::System::Int32 Field_3_8; // 0x88
	::Foundation::ViewObject::SuiteInfo Field_3_18; // 0x8C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3FF857A0877EA521__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_3_8F7AD00CE70D0A7B(::System::Int32 a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_3FF857A0877EA521_METHOD_3_8F7AD00CE70D0A7B_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_3_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3FF857A0877EA521_METHOD_3_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Boolean Method_3_268EFBBDB0702083(::MoleMole::EntityHandle a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_3_3FF857A0877EA521_METHOD_3_268EFBBDB0702083_OFFSET))(this, a1);
	}

	::System::Void OnAttach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3FF857A0877EA521_ONATTACH_OFFSET))(this);
	}

	::System::Void OnDetach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3FF857A0877EA521_ONDETACH_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3FF857A0877EA521_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3FF857A0877EA521_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnReady()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3FF857A0877EA521_ONREADY_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3FF857A0877EA521_ONRECYCLE_OFFSET))(this);
	}

	::System::Void Method_3_ADF4AD3331B4D7AD(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_3FF857A0877EA521_METHOD_3_ADF4AD3331B4D7AD_OFFSET))(this, a1);
	}

	::System::Void Method_3_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3FF857A0877EA521_METHOD_3_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_3_97119193EB22A3D0(::Foundation::ViewObject::Structures::FMemberAliveStateCheckAction a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::Structures::FMemberAliveStateCheckAction))((::PBYTE)hIl2Cpp + CLASS_3_3FF857A0877EA521_METHOD_3_97119193EB22A3D0_OFFSET))(this, a1);
	}

	::System::Void Method_3_99BCDBABF1684B50(::Class_3_E9FF194CA9EF9D04* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_E9FF194CA9EF9D04*))((::PBYTE)hIl2Cpp + CLASS_3_3FF857A0877EA521_METHOD_3_99BCDBABF1684B50_OFFSET))(this, a1);
	}

	::System::Void Method_3_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3FF857A0877EA521_METHOD_3_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_3_A286C0902593282D(::MoleMole::EntityHandle a1, ::Class_2_945F852A8B481F54_Enum_3_A5191D6218CE9E26 a2, ::MoleMole::GameplayTag a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::Class_2_945F852A8B481F54_Enum_3_A5191D6218CE9E26, ::MoleMole::GameplayTag))((::PBYTE)hIl2Cpp + CLASS_3_3FF857A0877EA521_METHOD_3_A286C0902593282D_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_B57E77AC0AD64DD8(::Foundation::ViewObject::Structures::FMonsterMemberLeftCheckAction a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::Structures::FMonsterMemberLeftCheckAction, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_3FF857A0877EA521_METHOD_3_B57E77AC0AD64DD8_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_7C42A91BA0AD64F0(::Foundation::ViewObject::Structures::FEntityHPChangeAction* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::Structures::FEntityHPChangeAction*))((::PBYTE)hIl2Cpp + CLASS_3_3FF857A0877EA521_METHOD_3_7C42A91BA0AD64F0_OFFSET))(this, a1);
	}

	::System::Void Method_3_D346DD860C6F8AEA(::System::UInt32 a1, ::Foundation::ViewObject::ViewObjectHandle a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + CLASS_3_3FF857A0877EA521_METHOD_3_D346DD860C6F8AEA_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3FF857A0877EA521_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3FF857A0877EA521_METHOD_3_832295EC279E5994_1_OFFSET))(this);
	}

	::System::Void Method_3_B2C0ADBFEA309440()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3FF857A0877EA521_METHOD_3_B2C0ADBFEA309440_OFFSET))(this);
	}

	::System::Int32 Method_3_C74CF020AA42ED85_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3FF857A0877EA521_METHOD_3_C74CF020AA42ED85_1_OFFSET))(this);
	}

	::System::Void Method_3_7646FFE662147970()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3FF857A0877EA521_METHOD_3_7646FFE662147970_OFFSET))(this);
	}

	::System::Boolean Method_3_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3FF857A0877EA521_METHOD_3_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_3_3557F75ED858BAD2(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_3_3FF857A0877EA521_METHOD_3_3557F75ED858BAD2_OFFSET))(this, a1);
	}

	::System::Void Method_3_2ADCFCC0F615D9EE(::System::Boolean a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_3FF857A0877EA521_METHOD_3_2ADCFCC0F615D9EE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_ADF4AD3331B4D7AD_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_3FF857A0877EA521_METHOD_3_ADF4AD3331B4D7AD_1_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_C74CF020AA42ED85_2()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3FF857A0877EA521_METHOD_3_C74CF020AA42ED85_2_OFFSET))(this);
	}

	::Class_3_3FF857A0877EA521_Struct_2_73414B039196A599 Method_3_5780411EFE947D94()
	{
		return ((::Class_3_3FF857A0877EA521_Struct_2_73414B039196A599(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3FF857A0877EA521_METHOD_3_5780411EFE947D94_OFFSET))(this);
	}

	::System::Void Method_3_C71FCD05F293E510(::System::Collections::Generic::HashSet_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_3_3FF857A0877EA521_METHOD_3_C71FCD05F293E510_OFFSET))(this, a1);
	}

	::System::Void Method_3_CB18FE11FAF729BE(::MoleMole::EntityHandle a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_3_3FF857A0877EA521_METHOD_3_CB18FE11FAF729BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_3_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3FF857A0877EA521_METHOD_3_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_3_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_3FF857A0877EA521_METHOD_3_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_3C470A1D50B2BBB4(::Foundation::Unreal::FGameplayTag a1, ::System::Collections::Generic::List_1<::System::Int32>* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::Unreal::FGameplayTag, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_3_3FF857A0877EA521_METHOD_3_3C470A1D50B2BBB4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_6055A93732CC885D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3FF857A0877EA521_METHOD_3_6055A93732CC885D_OFFSET))(this);
	}

	::System::Void Method_3_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_3FF857A0877EA521_METHOD_3_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Void Method_3_B0E650A716C67C67(::System::String* a1, ::Foundation::ViewObject::SuiteInfo a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Foundation::ViewObject::SuiteInfo))((::PBYTE)hIl2Cpp + CLASS_3_3FF857A0877EA521_METHOD_3_B0E650A716C67C67_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_3_C74CF020AA42ED85_3()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3FF857A0877EA521_METHOD_3_C74CF020AA42ED85_3_OFFSET))(this);
	}

	::System::Void Method_3_B3F352584D32F9FD(::Class_3_3FF857A0877EA521_Struct_2_73414B039196A599 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_3FF857A0877EA521_Struct_2_73414B039196A599))((::PBYTE)hIl2Cpp + CLASS_3_3FF857A0877EA521_METHOD_3_B3F352584D32F9FD_OFFSET))(this, a1);
	}

	::System::Void Method_3_A40475C44AA8CEAB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3FF857A0877EA521_METHOD_3_A40475C44AA8CEAB_OFFSET))(this);
	}

	::System::Void Method_3_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_3FF857A0877EA521_METHOD_3_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Foundation::ViewObject::SuiteInfo Method_3_A9F82A83DF5851C9()
	{
		return ((::Foundation::ViewObject::SuiteInfo(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3FF857A0877EA521_METHOD_3_A9F82A83DF5851C9_OFFSET))(this);
	}

	::System::Void Method_3_2F7E7A0CBFFDFF0D(::Class_1_28F0414D4F296993* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_28F0414D4F296993*))((::PBYTE)hIl2Cpp + CLASS_3_3FF857A0877EA521_METHOD_3_2F7E7A0CBFFDFF0D_OFFSET))(this, a1);
	}

	::System::Void Method_3_401CDFF85DCB5396(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_3FF857A0877EA521_METHOD_3_401CDFF85DCB5396_OFFSET))(this, a1);
	}

	::System::Void Method_3_7E0D3A7A149A57B6(::Foundation::ViewObject::SuiteInfo a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::SuiteInfo))((::PBYTE)hIl2Cpp + CLASS_3_3FF857A0877EA521_METHOD_3_7E0D3A7A149A57B6_OFFSET))(this, a1);
	}

	::System::Void Method_3_4CFA30FA85BD5218(::Class_1_28F0414D4F296993* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_28F0414D4F296993*))((::PBYTE)hIl2Cpp + CLASS_3_3FF857A0877EA521_METHOD_3_4CFA30FA85BD5218_OFFSET))(this, a1);
	}

	::System::Void Method_3_832295EC279E5994_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3FF857A0877EA521_METHOD_3_832295EC279E5994_2_OFFSET))(this);
	}

	::System::Void Method_3_C114A1F8E08B6F92_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_3FF857A0877EA521_METHOD_3_C114A1F8E08B6F92_1_OFFSET))(this, a1);
	}

	::System::Void Method_3_19560DC92EB9157B(::Foundation::ViewObject::SuiteInfo a1, ::System::Collections::Generic::HashSet_1<::System::Int32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::SuiteInfo, ::System::Collections::Generic::HashSet_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_3_3FF857A0877EA521_METHOD_3_19560DC92EB9157B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_23560DAA97F122DA(::System::String* a1, ::System::Boolean& a2, ::System::Boolean& a3, ::Foundation::ViewObject::SuiteInfo& a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean&, ::System::Boolean&, ::Foundation::ViewObject::SuiteInfo&))((::PBYTE)hIl2Cpp + CLASS_3_3FF857A0877EA521_METHOD_3_23560DAA97F122DA_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_832295EC279E5994_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3FF857A0877EA521_METHOD_3_832295EC279E5994_3_OFFSET))(this);
	}

	static ::System::Void Method_3_BB51309AA50989B0(::Class_3_3FF857A0877EA521_Struct_2_2D3CDD19DC92B612 a1, ::System::Boolean& a2, ::System::Boolean& a3, ::Foundation::ViewObject::SuiteInfo& a4)
	{
		return ((::System::Void(*)(::Class_3_3FF857A0877EA521_Struct_2_2D3CDD19DC92B612, ::System::Boolean&, ::System::Boolean&, ::Foundation::ViewObject::SuiteInfo&))((::PBYTE)hIl2Cpp + CLASS_3_3FF857A0877EA521_METHOD_3_BB51309AA50989B0_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Method_3_A40475C44AA8CEAB_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3FF857A0877EA521_METHOD_3_A40475C44AA8CEAB_1_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994_4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3FF857A0877EA521_METHOD_3_832295EC279E5994_4_OFFSET))(this);
	}

	::System::Void Method_3_858E6A9A1178E7B1(::Foundation::ViewObject::SuiteInfo a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::SuiteInfo))((::PBYTE)hIl2Cpp + CLASS_3_3FF857A0877EA521_METHOD_3_858E6A9A1178E7B1_OFFSET))(this, a1);
	}

	::System::Void Method_3_CCFD131833AE484B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3FF857A0877EA521_METHOD_3_CCFD131833AE484B_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994_5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3FF857A0877EA521_METHOD_3_832295EC279E5994_5_OFFSET))(this);
	}

	::System::Void Method_3_369F47CCB61A607A(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_3FF857A0877EA521_METHOD_3_369F47CCB61A607A_OFFSET))(this, a1);
	}

	::System::Void Method_3_C114A1F8E08B6F92_2(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_3FF857A0877EA521_METHOD_3_C114A1F8E08B6F92_2_OFFSET))(this, a1);
	}

	::System::Void Method_3_B52D729126889377(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_3FF857A0877EA521_METHOD_3_B52D729126889377_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_3FF857A0877EA521_METHOD_3_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_062776F7BCEE71D6(::Foundation::Unreal::FGameplayTag a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + CLASS_3_3FF857A0877EA521_METHOD_3_062776F7BCEE71D6_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_D1EED6D7D28E9E12(::Foundation::ViewObject::CombineTriggerListenParam a1, ::Foundation::ViewObject::ViewObjectHandle a2, ::Foundation::ViewObject::SuiteInfo a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::CombineTriggerListenParam, ::Foundation::ViewObject::ViewObjectHandle, ::Foundation::ViewObject::SuiteInfo))((::PBYTE)hIl2Cpp + CLASS_3_3FF857A0877EA521_METHOD_3_D1EED6D7D28E9E12_OFFSET))(this, a1, a2, a3);
	}
};
