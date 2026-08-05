#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_AA9239F66AD90F88_11.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/Foundation/Unreal/Interval_1.h"
#include "unitysdk/MoleMole/Config/ConfigLevelResultPerforms_ConfigLevelResultPerformEffect.h"
#include "unitysdk/MoleMole/Config/ConfigLevelResultPerforms_LevelFailedCameraSequenceConfig.h"
#include "unitysdk/MoleMole/Config/ConfigLevelResultPerforms_LoseButtonTrigger.h"
#include "unitysdk/MoleMole/Config/ConfigLevelResultPerforms_RatingFogEffect.h"
#include "unitysdk/MoleMole/Config/ConfigLevelResultPerforms_RatingScreenEffect.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"

class Class_1_8289F2785D9AA990;
class Class_1_FA793AB1D49D0132;
namespace Foundation { class FunctionalObject; }
namespace MoleMole { class MonoUIGameObjectNumber; }
namespace MoleMole { class UILevelGeneralFailedResultDialogPopWindowController; }
namespace MoleMole { class UILevelResultPageContext; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigLevelResultPerforms; }
namespace PipelineCamera { class CameraCommandSpawnSubModules; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }
namespace PipelineCamera::CameraSequence { class CoreDataBindingResolver; }
namespace PipelineCamera::CameraSequence { class CoreDataCollection; }
namespace PipelineCamera::SubModule { template <typename T> class CameraSequenceCollectionPlayer_1; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_2138DB6150D0CA1A_METHOD_3_070E78F7BE10761C_OFFSET UNITYSDK_OFFSET(0x12732090)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_0981138094D4B13B_OFFSET UNITYSDK_OFFSET(0x127344D0)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x1272C7B0)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_18982EFD3B740683_OFFSET UNITYSDK_OFFSET(0x12732A10)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_209E4250CA87B30E_OFFSET UNITYSDK_OFFSET(0x1272E450)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_24B05D2E15A5C3C8_OFFSET UNITYSDK_OFFSET(0x12731800)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_261DF843E298B71B_1_OFFSET UNITYSDK_OFFSET(0x12730D40)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_261DF843E298B71B_OFFSET UNITYSDK_OFFSET(0x1272E020)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_2B3BCCEC133C77C0_OFFSET UNITYSDK_OFFSET(0x1272B6C0)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_2FA8AE0519AC7829_OFFSET UNITYSDK_OFFSET(0x127310F0)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_30D1209326FA87FC_1_OFFSET UNITYSDK_OFFSET(0x1272A650)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x127311B0)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_3A599F23178B2776_OFFSET UNITYSDK_OFFSET(0x1272A860)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_3CAB3F134E5CEF52_OFFSET UNITYSDK_OFFSET(0x1272B950)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_40A6DDB78491ADAF_OFFSET UNITYSDK_OFFSET(0x1272C900)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_41A074549EF25F63_1_OFFSET UNITYSDK_OFFSET(0x12729920)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x12729770)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x1272A2D0)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x12734900)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_460F8AE6EF9687FD_OFFSET UNITYSDK_OFFSET(0x1272E0A0)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_47CDDACA9A031BCE_OFFSET UNITYSDK_OFFSET(0x1272CEE0)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x1272A440)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_563C72DBCFDF062D_OFFSET UNITYSDK_OFFSET(0x1272B670)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_5EA8EBEF8573FC0B_OFFSET UNITYSDK_OFFSET(0x12729AD0)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_60EC288144D67CFB_OFFSET UNITYSDK_OFFSET(0x12733F60)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_66F42CE2EDA79734_OFFSET UNITYSDK_OFFSET(0x12731280)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_67D41ACFEF39E84E_OFFSET UNITYSDK_OFFSET(0x127307F0)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_6E520D7D4D494BBE_OFFSET UNITYSDK_OFFSET(0x12732330)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_6E96687770230420_OFFSET UNITYSDK_OFFSET(0x1272D9A0)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_777C630B90A28EF1_OFFSET UNITYSDK_OFFSET(0x12731160)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_8049B22E1B5C85D4_OFFSET UNITYSDK_OFFSET(0x12733370)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_82E992240300FB30_OFFSET UNITYSDK_OFFSET(0x127349C0)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x12735530)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_85377D41FEE05B66_OFFSET UNITYSDK_OFFSET(0x12732F30)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_8714CF4AE9195CA2_OFFSET UNITYSDK_OFFSET(0x12731AF0)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1272DED0)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_89E0F6701617D19F_OFFSET UNITYSDK_OFFSET(0x12730710)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_8AD611CFAB04661D_OFFSET UNITYSDK_OFFSET(0x1272E750)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_8CA88D55ECEFAD59_OFFSET UNITYSDK_OFFSET(0x12731D20)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_8F537CE539CF0103_OFFSET UNITYSDK_OFFSET(0x1272A710)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0x1272B8E0)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x12730DC0)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x12732160)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_A27DC2C5A103933A_OFFSET UNITYSDK_OFFSET(0x1272D670)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_A3C36642AA77866E_OFFSET UNITYSDK_OFFSET(0x1272C220)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_A5E19EDC6E372FB1_OFFSET UNITYSDK_OFFSET(0x1272B880)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_A818AC56BCD88BDE_OFFSET UNITYSDK_OFFSET(0x12733990)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x12732650)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_AB0E32D900C7A89E_OFFSET UNITYSDK_OFFSET(0x1272F7A0)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_B2C52ACF9D9B435B_OFFSET UNITYSDK_OFFSET(0x1272D020)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_B7F8E0B4AF22DEA3_OFFSET UNITYSDK_OFFSET(0x12730F00)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0x127355E0)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x127344C0)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_C98BE03E33C2975D_OFFSET UNITYSDK_OFFSET(0x1272F0F0)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x12733ED0)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x12735320)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_CA373AA1C7054598_3_OFFSET UNITYSDK_OFFSET(0x127353B0)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_CA373AA1C7054598_4_OFFSET UNITYSDK_OFFSET(0x12735440)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_CA373AA1C7054598_5_OFFSET UNITYSDK_OFFSET(0x12735540)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_CA373AA1C7054598_6_OFFSET UNITYSDK_OFFSET(0x12735840)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_CA373AA1C7054598_7_OFFSET UNITYSDK_OFFSET(0x127358D0)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1272A280)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_CD85AC536294A84F_OFFSET UNITYSDK_OFFSET(0x127357E0)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_D000AFCB3190F6D3_OFFSET UNITYSDK_OFFSET(0x1272AB60)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_D3109C64AA0A5F3C_OFFSET UNITYSDK_OFFSET(0x1272E5F0)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_D35B60AE823B8CC1_OFFSET UNITYSDK_OFFSET(0x1272E9A0)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_D78B51BFDA4B8B32_OFFSET UNITYSDK_OFFSET(0x1272B4B0)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_DB67EEFB041425EC_OFFSET UNITYSDK_OFFSET(0x12732EA0)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_EAD10B3E55E2C4C5_OFFSET UNITYSDK_OFFSET(0x1272E940)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x127355D0)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x12729910)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_F775BA447C292087_OFFSET UNITYSDK_OFFSET(0x12734B00)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_F80B623B6234A292_OFFSET UNITYSDK_OFFSET(0x1272F1A0)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_FBF2CB29FD3B55E6_OFFSET UNITYSDK_OFFSET(0x127357D0)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_FD151205C7B46BA4_OFFSET UNITYSDK_OFFSET(0x127354D0)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_FF03F8A57CA024D5_OFFSET UNITYSDK_OFFSET(0x1272DB80)
#define CLASS_3_2138DB6150D0CA1A__CCTOR_OFFSET UNITYSDK_OFFSET(0x12732990)
#define CLASS_3_2138DB6150D0CA1A__CTOR_OFFSET UNITYSDK_OFFSET(0x12732810)

inline static constexpr unsigned int Class_3_2138DB6150D0CA1A_TypeDefinitionIndex = 81501;

class Class_3_2138DB6150D0CA1A : public ::Class_2_AA9239F66AD90F88_11<::Class_3_2138DB6150D0CA1A*>
{
public:
	static ::Foundation::Unreal::FName* StaticGet_Field_3_6()
	{
		return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(Class_3_2138DB6150D0CA1A_TypeDefinitionIndex)->GetStaticField(0x12440);
	}
	static ::Foundation::Unreal::FName* StaticGet_Field_3_7()
	{
		return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(Class_3_2138DB6150D0CA1A_TypeDefinitionIndex)->GetStaticField(0x12448);
	}
	// static const ::System::String* Field_3_1; // 0x0
	// static const ::System::String* Field_3_27; // 0x0
	// static const ::System::String* Field_3_26; // 0x0
	// static const ::System::String* Field_3_25; // 0x0
	// static const ::System::String* Field_3_24; // 0x0
	// static const ::System::String* Field_3_31; // 0x0
	// static const ::System::String* Field_3_30; // 0x0
	// static const ::System::String* Field_3_29; // 0x0
	::MoleMole::UILevelGeneralFailedResultDialogPopWindowController* Field_3_15; // 0x20
	::PipelineCamera::SubModule::CameraSequenceCollectionPlayer_1<::PipelineCamera::WorldBasicCameraData>* Field_3_33; // 0x28
	::Class_1_8289F2785D9AA990* Field_3_4; // 0x30
	::Foundation::FunctionalObject* Field_3_32; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*>* Field_3_22; // 0x40
	::System::Collections::Generic::List_1<::MoleMole::Config::ConfigLevelResultPerforms_ConfigLevelResultPerformEffect>* Field_3_23; // 0x48
	::System::Action* Field_3_34; // 0x50
	::MoleMole::UILevelResultPageContext* Field_3_8; // 0x58
	::MoleMole::EntityHandle Field_3_10; // 0x60
	::MoleMole::MonoUIGameObjectNumber* Field_3_9; // 0x70
	::System::Single Field_3_28; // 0x78
	::Foundation::Coroutine::CoroutineHandle Field_3_12; // 0x7C
	::System::Single Field_3_35; // 0x80
	::System::Boolean Field_3_0; // 0x84
	::System::Boolean Field_3_17; // 0x85
	::System::Boolean Field_3_13; // 0x86
	::System::Boolean Field_3_14; // 0x87
	::System::Single Field_3_21; // 0x88
	::MoleMole::Config::ConfigLevelResultPerforms_LoseButtonTrigger Field_3_39; // 0x8C
	::System::Single Field_3_18; // 0x90
	::System::Int32 Field_3_19; // 0x94
	::System::Int32 Field_3_11; // 0x98
	::System::Boolean Field_3_16; // 0x9C
	::System::Boolean Field_3_20; // 0x9D
	::System::Boolean Field_3_5; // 0x9E

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A__CCTOR_OFFSET))();
	}

	::System::Void Method_3_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_41A074549EF25F63_OFFSET))(this);
	}

	::System::Boolean Method_3_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_3_41A074549EF25F63_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_41A074549EF25F63_1_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_3_508D4DD02D3DB74E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_508D4DD02D3DB74E_OFFSET))(this);
	}

	::System::Void Method_3_D78B51BFDA4B8B32()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_D78B51BFDA4B8B32_OFFSET))(this);
	}

	::System::Void Method_3_A3C36642AA77866E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_A3C36642AA77866E_OFFSET))(this);
	}

	::System::Void Method_3_B2C52ACF9D9B435B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_B2C52ACF9D9B435B_OFFSET))(this);
	}

	::System::Void Method_3_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_3_460F8AE6EF9687FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_460F8AE6EF9687FD_OFFSET))(this);
	}

	::MoleMole::UILevelGeneralFailedResultDialogPopWindowController* Method_3_D3109C64AA0A5F3C(::MoleMole::UILevelResultPageContext* a1, ::Class_1_FA793AB1D49D0132* a2)
	{
		return ((::MoleMole::UILevelGeneralFailedResultDialogPopWindowController*(*)(::PVOID, ::MoleMole::UILevelResultPageContext*, ::Class_1_FA793AB1D49D0132*))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_D3109C64AA0A5F3C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_8AD611CFAB04661D(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_8AD611CFAB04661D_OFFSET))(this, a1);
	}

	::System::Void Method_3_EAD10B3E55E2C4C5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_EAD10B3E55E2C4C5_OFFSET))(this);
	}

	::System::Void Method_3_D35B60AE823B8CC1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_D35B60AE823B8CC1_OFFSET))(this);
	}

	::System::Void Method_3_AB0E32D900C7A89E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_AB0E32D900C7A89E_OFFSET))(this);
	}

	::Foundation::Unreal::Interval_1<::System::Single> Method_3_89E0F6701617D19F()
	{
		return ((::Foundation::Unreal::Interval_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_89E0F6701617D19F_OFFSET))(this);
	}

	::System::Void Method_3_67D41ACFEF39E84E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_67D41ACFEF39E84E_OFFSET))(this);
	}

	::System::Void Method_3_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_3_777C630B90A28EF1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_777C630B90A28EF1_OFFSET))(this);
	}

	::System::Void Method_3_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_3_66F42CE2EDA79734()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_66F42CE2EDA79734_OFFSET))(this);
	}

	::System::Void Method_3_8714CF4AE9195CA2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_8714CF4AE9195CA2_OFFSET))(this);
	}

	::System::Void Method_3_8CA88D55ECEFAD59()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_8CA88D55ECEFAD59_OFFSET))(this);
	}

	::System::Void Method_3_97D83E4CB3B11935()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_97D83E4CB3B11935_OFFSET))(this);
	}

	::System::Void Method_3_6E520D7D4D494BBE(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_6E520D7D4D494BBE_OFFSET))(this, a1);
	}

	::System::Void Method_3_AA169839CB93802A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_AA169839CB93802A_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* Method_3_261DF843E298B71B()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_261DF843E298B71B_OFFSET))(this);
	}

	static ::System::Void Method_3_18982EFD3B740683()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_18982EFD3B740683_OFFSET))();
	}

	::System::Void Method_3_3CAB3F134E5CEF52()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_3CAB3F134E5CEF52_OFFSET))(this);
	}

	::System::Void Method_3_DB67EEFB041425EC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_DB67EEFB041425EC_OFFSET))(this);
	}

	::System::Boolean Method_3_8049B22E1B5C85D4(::MoleMole::Config::ConfigLevelResultPerforms_ConfigLevelResultPerformEffect a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigLevelResultPerforms_ConfigLevelResultPerformEffect))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_8049B22E1B5C85D4_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_3_6E96687770230420(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigLevelResultPerforms_ConfigLevelResultPerformEffect>* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigLevelResultPerforms_ConfigLevelResultPerformEffect>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_6E96687770230420_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_60EC288144D67CFB(::System::String* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_60EC288144D67CFB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Void Method_3_30D1209326FA87FC_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_30D1209326FA87FC_1_OFFSET))(this);
	}

	::System::Void Method_3_3A599F23178B2776()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_3A599F23178B2776_OFFSET))(this);
	}

	::System::Boolean Method_3_209E4250CA87B30E()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_209E4250CA87B30E_OFFSET))(this);
	}

	::System::Void Method_3_9681042564541CD6_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_9681042564541CD6_1_OFFSET))(this);
	}

	static ::System::Boolean Method_3_0981138094D4B13B(::PipelineCamera::WorldBasicCameraData& a1)
	{
		return ((::System::Boolean(*)(::PipelineCamera::WorldBasicCameraData&))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_0981138094D4B13B_OFFSET))(a1);
	}

	::System::Void Method_3_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_3_82E992240300FB30()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_82E992240300FB30_OFFSET))(this);
	}

	::System::Void Method_3_070E78F7BE10761C(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_070E78F7BE10761C_OFFSET))(this, a1);
	}

	::System::Void Method_3_5EA8EBEF8573FC0B(::MoleMole::Config::ConfigLevelResultPerforms_LoseButtonTrigger a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigLevelResultPerforms_LoseButtonTrigger, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_5EA8EBEF8573FC0B_OFFSET))(this, a1, a2);
	}

	static ::PipelineCamera::WorldBasicCameraData Method_3_F775BA447C292087(::PipelineCamera::WorldBasicCameraData& a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PipelineCamera::WorldBasicCameraData&, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_F775BA447C292087_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_40A6DDB78491ADAF(::MoleMole::Battle::Entity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_40A6DDB78491ADAF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_A5E19EDC6E372FB1(::Il2CppArray<::MoleMole::Config::ConfigLevelResultPerforms_RatingFogEffect>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::MoleMole::Config::ConfigLevelResultPerforms_RatingFogEffect>*))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_A5E19EDC6E372FB1_OFFSET))(this, a1);
	}

	::System::Void Method_3_B7F8E0B4AF22DEA3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_B7F8E0B4AF22DEA3_OFFSET))(this);
	}

	::System::Void Method_3_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_3_D000AFCB3190F6D3(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_D000AFCB3190F6D3_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_CA373AA1C7054598_3_OFFSET))(this);
	}

	::MoleMole::Config::ConfigLevelResultPerforms* Method_3_563C72DBCFDF062D()
	{
		return ((::MoleMole::Config::ConfigLevelResultPerforms*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_563C72DBCFDF062D_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* Method_3_261DF843E298B71B_1()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_261DF843E298B71B_1_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid Method_3_2FA8AE0519AC7829()
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_2FA8AE0519AC7829_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598_4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_CA373AA1C7054598_4_OFFSET))(this);
	}

	::System::Void Method_3_85377D41FEE05B66()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_85377D41FEE05B66_OFFSET))(this);
	}

	::System::Void Method_3_FD151205C7B46BA4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_FD151205C7B46BA4_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_3_FF03F8A57CA024D5(::Il2CppArray<::MoleMole::Config::ConfigLevelResultPerforms_RatingScreenEffect>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::MoleMole::Config::ConfigLevelResultPerforms_RatingScreenEffect>*))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_FF03F8A57CA024D5_OFFSET))(this, a1);
	}

	::System::Void Method_3_8F537CE539CF0103()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_8F537CE539CF0103_OFFSET))(this);
	}

	::System::Void Method_3_A818AC56BCD88BDE(::MoleMole::EntityHandle a1, ::MoleMole::Config::ConfigLevelResultPerforms_LoseButtonTrigger a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::MoleMole::Config::ConfigLevelResultPerforms_LoseButtonTrigger))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_A818AC56BCD88BDE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_CA373AA1C7054598_5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_CA373AA1C7054598_5_OFFSET))(this);
	}

	::System::Boolean Method_3_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_3_C638E91FC0D3A13A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_C638E91FC0D3A13A_OFFSET))(this);
	}

	::System::Void Method_3_FBF2CB29FD3B55E6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_FBF2CB29FD3B55E6_OFFSET))(this);
	}

	::MoleMole::Config::ConfigLevelResultPerforms_LevelFailedCameraSequenceConfig Method_3_C98BE03E33C2975D()
	{
		return ((::MoleMole::Config::ConfigLevelResultPerforms_LevelFailedCameraSequenceConfig(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_C98BE03E33C2975D_OFFSET))(this);
	}

	::System::Void Method_3_CD85AC536294A84F(::Il2CppArray<::MoleMole::Config::ConfigLevelResultPerforms_RatingFogEffect>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::MoleMole::Config::ConfigLevelResultPerforms_RatingFogEffect>*))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_CD85AC536294A84F_OFFSET))(this, a1);
	}

	::System::Void Method_3_47CDDACA9A031BCE(::MoleMole::Battle::Entity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_47CDDACA9A031BCE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_F80B623B6234A292(::PipelineCamera::CameraSequence::CoreDataCollection* a1, ::PipelineCamera::CameraSequence::CoreDataBindingResolver* a2, ::MoleMole::Config::ConfigLevelResultPerforms_LevelFailedCameraSequenceConfig a3, ::PipelineCamera::CameraCommandSpawnSubModules*& a4, ::PipelineCamera::CameraCommandUnSpawnSubModules*& a5)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CoreDataCollection*, ::PipelineCamera::CameraSequence::CoreDataBindingResolver*, ::MoleMole::Config::ConfigLevelResultPerforms_LevelFailedCameraSequenceConfig, ::PipelineCamera::CameraCommandSpawnSubModules*&, ::PipelineCamera::CameraCommandUnSpawnSubModules*&))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_F80B623B6234A292_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_CA373AA1C7054598_6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_CA373AA1C7054598_6_OFFSET))(this);
	}

	::System::Void Method_3_2B3BCCEC133C77C0(::Il2CppArray<::MoleMole::Config::ConfigLevelResultPerforms_RatingScreenEffect>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::MoleMole::Config::ConfigLevelResultPerforms_RatingScreenEffect>*))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_2B3BCCEC133C77C0_OFFSET))(this, a1);
	}

	::System::Void Method_3_24B05D2E15A5C3C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_24B05D2E15A5C3C8_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598_7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_CA373AA1C7054598_7_OFFSET))(this);
	}

	::System::Void Method_3_A27DC2C5A103933A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_A27DC2C5A103933A_OFFSET))(this);
	}
};
