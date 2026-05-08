#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_AA9239F66AD90F88_7.h"
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

#define CLASS_3_2138DB6150D0CA1A_METHOD_3_09A6AFB3D3E5FD45_OFFSET UNITYSDK_OFFSET(0xFF13370)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0xFF16170)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_18982EFD3B740683_OFFSET UNITYSDK_OFFSET(0xFF1EC80)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_1E1FFD875CA8014A_OFFSET UNITYSDK_OFFSET(0xFF1AA40)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_209E4250CA87B30E_OFFSET UNITYSDK_OFFSET(0xFF17FB0)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_24B05D2E15A5C3C8_OFFSET UNITYSDK_OFFSET(0xFF1B330)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_261DF843E298B71B_1_OFFSET UNITYSDK_OFFSET(0xFF17AF0)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_261DF843E298B71B_OFFSET UNITYSDK_OFFSET(0xFF1A890)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_2B3BCCEC133C77C0_OFFSET UNITYSDK_OFFSET(0xFF14F70)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_2FA8AE0519AC7829_OFFSET UNITYSDK_OFFSET(0xFF1AC30)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_30D1209326FA87FC_1_OFFSET UNITYSDK_OFFSET(0xFF13F00)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xFF1ACE0)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_3CAB3F134E5CEF52_OFFSET UNITYSDK_OFFSET(0xFF15200)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0xFF13010)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0xFF13B80)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xFF1CF00)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_45B5CA713DA5A736_OFFSET UNITYSDK_OFFSET(0xFF18500)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_47CDDACA9A031BCE_OFFSET UNITYSDK_OFFSET(0xFF168B0)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_508D4DD02D3DB74E_1_OFFSET UNITYSDK_OFFSET(0xFF13CF0)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0xFF131C0)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_563C72DBCFDF062D_OFFSET UNITYSDK_OFFSET(0xFF14F20)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_5BCE9210F4ACDD0B_OFFSET UNITYSDK_OFFSET(0xFF169F0)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_60EC288144D67CFB_OFFSET UNITYSDK_OFFSET(0xFF1C990)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_66CC9828DB1F478F_OFFSET UNITYSDK_OFFSET(0xFF1CFC0)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_66F42CE2EDA79734_OFFSET UNITYSDK_OFFSET(0xFF1ADB0)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_67D41ACFEF39E84E_OFFSET UNITYSDK_OFFSET(0xFF1A340)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_6D93101E4CE10A96_OFFSET UNITYSDK_OFFSET(0xFF17B70)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_6E520D7D4D494BBE_OFFSET UNITYSDK_OFFSET(0xFF1BE70)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_6E96687770230420_OFFSET UNITYSDK_OFFSET(0xFF17470)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_71170E420FCC0F61_OFFSET UNITYSDK_OFFSET(0xFF1BBD0)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_757C87517AD92B08_OFFSET UNITYSDK_OFFSET(0xFF162C0)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_777C630B90A28EF1_OFFSET UNITYSDK_OFFSET(0xFF1AC90)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_8049B22E1B5C85D4_OFFSET UNITYSDK_OFFSET(0xFF1DF40)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_82E992240300FB30_OFFSET UNITYSDK_OFFSET(0xFF1EAA0)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0xFF1F1C0)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_85377D41FEE05B66_OFFSET UNITYSDK_OFFSET(0xFF1C550)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_8594010D6A57C9BB_OFFSET UNITYSDK_OFFSET(0xFF1D0B0)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_866242D8F6C828B4_OFFSET UNITYSDK_OFFSET(0xFF14410)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_8714CF4AE9195CA2_OFFSET UNITYSDK_OFFSET(0xFF1B630)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0xFF179A0)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_89E0F6701617D19F_OFFSET UNITYSDK_OFFSET(0xFF1A260)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_8AD611CFAB04661D_OFFSET UNITYSDK_OFFSET(0xFF182B0)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_8CA88D55ECEFAD59_OFFSET UNITYSDK_OFFSET(0xFF1B860)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_8F537CE539CF0103_OFFSET UNITYSDK_OFFSET(0xFF13FC0)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0xFF15190)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xFF1A910)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0xFF1BCA0)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_98C061072167BC0A_OFFSET UNITYSDK_OFFSET(0xFF1DE50)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_A27DC2C5A103933A_OFFSET UNITYSDK_OFFSET(0xFF17140)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_A5E19EDC6E372FB1_OFFSET UNITYSDK_OFFSET(0xFF15130)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_A818AC56BCD88BDE_OFFSET UNITYSDK_OFFSET(0xFF1E560)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0xFF1C190)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_AE0B725AB77F7E6F_OFFSET UNITYSDK_OFFSET(0xFF14110)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0xFF1F260)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_C72B925A491E9859_OFFSET UNITYSDK_OFFSET(0xFF15AE0)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0xFF1F4E0)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_C98BE03E33C2975D_OFFSET UNITYSDK_OFFSET(0xFF18C50)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xFF1D020)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0xFF1DEB0)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_CA373AA1C7054598_3_OFFSET UNITYSDK_OFFSET(0xFF1EBE0)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_CA373AA1C7054598_4_OFFSET UNITYSDK_OFFSET(0xFF1F110)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_CA373AA1C7054598_5_OFFSET UNITYSDK_OFFSET(0xFF1F1D0)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_CA373AA1C7054598_6_OFFSET UNITYSDK_OFFSET(0xFF1F450)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_CA373AA1C7054598_7_OFFSET UNITYSDK_OFFSET(0xFF1F4F0)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xFF13B30)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_D3109C64AA0A5F3C_OFFSET UNITYSDK_OFFSET(0xFF18150)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_D56C1A4C75B97C47_OFFSET UNITYSDK_OFFSET(0xFF192F0)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_D78B51BFDA4B8B32_OFFSET UNITYSDK_OFFSET(0xFF14D60)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_E7AD711897F156CD_OFFSET UNITYSDK_OFFSET(0xFF1D9C0)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_EAD10B3E55E2C4C5_OFFSET UNITYSDK_OFFSET(0xFF184A0)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0xFF1F1B0)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xFF131B0)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_F775BA447C292087_OFFSET UNITYSDK_OFFSET(0xFF1D140)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_F80B623B6234A292_OFFSET UNITYSDK_OFFSET(0xFF18D00)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_FBF2CB29FD3B55E6_OFFSET UNITYSDK_OFFSET(0xFF1F1A0)
#define CLASS_3_2138DB6150D0CA1A_METHOD_3_FF03F8A57CA024D5_OFFSET UNITYSDK_OFFSET(0xFF17650)
#define CLASS_3_2138DB6150D0CA1A__CCTOR_OFFSET UNITYSDK_OFFSET(0xFF1C4D0)
#define CLASS_3_2138DB6150D0CA1A__CTOR_OFFSET UNITYSDK_OFFSET(0xFF1C350)

inline static constexpr unsigned int Class_3_2138DB6150D0CA1A_TypeDefinitionIndex = 61863;

class Class_3_2138DB6150D0CA1A : public ::Class_2_AA9239F66AD90F88_7<::Class_3_2138DB6150D0CA1A*>
{
public:
	static ::Foundation::Unreal::FName* StaticGet_Field_3_3()
	{
		return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(Class_3_2138DB6150D0CA1A_TypeDefinitionIndex)->GetStaticField(0xE8C0);
	}
	static ::Foundation::Unreal::FName* StaticGet_Field_3_2()
	{
		return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(Class_3_2138DB6150D0CA1A_TypeDefinitionIndex)->GetStaticField(0xE8C8);
	}
	// static const ::System::String* Field_3_0; // 0x0
	// static const ::System::String* Field_3_22; // 0x0
	// static const ::System::String* Field_3_23; // 0x0
	// static const ::System::String* Field_3_24; // 0x0
	// static const ::System::String* Field_3_25; // 0x0
	// static const ::System::String* Field_3_26; // 0x0
	// static const ::System::String* Field_3_27; // 0x0
	// static const ::System::String* Field_3_28; // 0x0
	::Foundation::FunctionalObject* Field_3_33; // 0x20
	::MoleMole::UILevelGeneralFailedResultDialogPopWindowController* Field_3_10; // 0x28
	::Class_1_8289F2785D9AA990* Field_3_5; // 0x30
	::MoleMole::EntityHandle Field_3_7; // 0x38
	::System::Collections::Generic::List_1<::MoleMole::Config::ConfigLevelResultPerforms_ConfigLevelResultPerformEffect>* Field_3_18; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*>* Field_3_19; // 0x50
	::System::Action* Field_3_31; // 0x58
	::MoleMole::UILevelResultPageContext* Field_3_9; // 0x60
	::MoleMole::MonoUIGameObjectNumber* Field_3_8; // 0x68
	::PipelineCamera::SubModule::CameraSequenceCollectionPlayer_1<::PipelineCamera::WorldBasicCameraData>* Field_3_32; // 0x70
	::MoleMole::Config::ConfigLevelResultPerforms_LoseButtonTrigger Field_3_34; // 0x78
	::Foundation::Coroutine::CoroutineHandle Field_3_13; // 0x7C
	::System::Single Field_3_20; // 0x80
	::System::Single Field_3_30; // 0x84
	::System::Int32 Field_3_14; // 0x88
	::System::Boolean Field_3_17; // 0x8C
	::System::Boolean Field_3_12; // 0x8D
	::System::Boolean Field_3_21; // 0x8E
	::System::Boolean Field_3_1; // 0x8F
	::System::Boolean Field_3_16; // 0x90
	::System::Boolean Field_3_4; // 0x91
	::System::Boolean Field_3_11; // 0x92
	::System::Single Field_3_29; // 0x94
	::System::Int32 Field_3_6; // 0x98
	::System::Single Field_3_15; // 0x9C

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

	::System::Void Method_3_508D4DD02D3DB74E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_508D4DD02D3DB74E_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_3_508D4DD02D3DB74E_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_508D4DD02D3DB74E_1_OFFSET))(this);
	}

	::System::Void Method_3_D78B51BFDA4B8B32()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_D78B51BFDA4B8B32_OFFSET))(this);
	}

	::System::Void Method_3_C72B925A491E9859()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_C72B925A491E9859_OFFSET))(this);
	}

	::System::Void Method_3_5BCE9210F4ACDD0B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_5BCE9210F4ACDD0B_OFFSET))(this);
	}

	::System::Void Method_3_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_3_6D93101E4CE10A96()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_6D93101E4CE10A96_OFFSET))(this);
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

	::System::Void Method_3_45B5CA713DA5A736()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_45B5CA713DA5A736_OFFSET))(this);
	}

	::System::Void Method_3_D56C1A4C75B97C47()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_D56C1A4C75B97C47_OFFSET))(this);
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

	::System::Void Method_3_85377D41FEE05B66()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_85377D41FEE05B66_OFFSET))(this);
	}

	::System::Void Method_3_66CC9828DB1F478F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_66CC9828DB1F478F_OFFSET))(this);
	}

	::System::Void Method_3_1E1FFD875CA8014A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_1E1FFD875CA8014A_OFFSET))(this);
	}

	::System::Void Method_3_FF03F8A57CA024D5(::Il2CppArray<::MoleMole::Config::ConfigLevelResultPerforms_RatingScreenEffect>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::MoleMole::Config::ConfigLevelResultPerforms_RatingScreenEffect>*))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_FF03F8A57CA024D5_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* Method_3_261DF843E298B71B()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_261DF843E298B71B_OFFSET))(this);
	}

	::System::Void Method_3_8594010D6A57C9BB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_8594010D6A57C9BB_OFFSET))(this);
	}

	static ::PipelineCamera::WorldBasicCameraData Method_3_F775BA447C292087(::PipelineCamera::WorldBasicCameraData& a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PipelineCamera::WorldBasicCameraData&, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_F775BA447C292087_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_A27DC2C5A103933A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_A27DC2C5A103933A_OFFSET))(this);
	}

	::System::Void Method_3_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_3_98C061072167BC0A(::Il2CppArray<::MoleMole::Config::ConfigLevelResultPerforms_RatingFogEffect>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::MoleMole::Config::ConfigLevelResultPerforms_RatingFogEffect>*))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_98C061072167BC0A_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_8049B22E1B5C85D4(::MoleMole::Config::ConfigLevelResultPerforms_ConfigLevelResultPerformEffect a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigLevelResultPerforms_ConfigLevelResultPerformEffect))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_8049B22E1B5C85D4_OFFSET))(this, a1);
	}

	::System::Void Method_3_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_3_9681042564541CD6_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_9681042564541CD6_1_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* Method_3_261DF843E298B71B_1()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_261DF843E298B71B_1_OFFSET))(this);
	}

	::System::Void Method_3_3CAB3F134E5CEF52()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_3CAB3F134E5CEF52_OFFSET))(this);
	}

	::System::Void Method_3_82E992240300FB30()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_82E992240300FB30_OFFSET))(this);
	}

	::System::Void Method_3_866242D8F6C828B4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_866242D8F6C828B4_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_CA373AA1C7054598_3_OFFSET))(this);
	}

	static ::System::Boolean Method_3_E7AD711897F156CD(::PipelineCamera::WorldBasicCameraData& a1)
	{
		return ((::System::Boolean(*)(::PipelineCamera::WorldBasicCameraData&))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_E7AD711897F156CD_OFFSET))(a1);
	}

	::System::Void Method_3_60EC288144D67CFB(::System::String* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_60EC288144D67CFB_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_3_18982EFD3B740683()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_18982EFD3B740683_OFFSET))();
	}

	::System::Void Method_3_2B3BCCEC133C77C0(::Il2CppArray<::MoleMole::Config::ConfigLevelResultPerforms_RatingScreenEffect>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::MoleMole::Config::ConfigLevelResultPerforms_RatingScreenEffect>*))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_2B3BCCEC133C77C0_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598_4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_CA373AA1C7054598_4_OFFSET))(this);
	}

	::System::Void Method_3_6E96687770230420(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigLevelResultPerforms_ConfigLevelResultPerformEffect>* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigLevelResultPerforms_ConfigLevelResultPerformEffect>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_6E96687770230420_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_FBF2CB29FD3B55E6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_FBF2CB29FD3B55E6_OFFSET))(this);
	}

	::MoleMole::Config::ConfigLevelResultPerforms* Method_3_563C72DBCFDF062D()
	{
		return ((::MoleMole::Config::ConfigLevelResultPerforms*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_563C72DBCFDF062D_OFFSET))(this);
	}

	::System::Void Method_3_30D1209326FA87FC_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_30D1209326FA87FC_1_OFFSET))(this);
	}

	::System::Boolean Method_3_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_3_24B05D2E15A5C3C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_24B05D2E15A5C3C8_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598_5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_CA373AA1C7054598_5_OFFSET))(this);
	}

	::System::Void Method_3_C638E91FC0D3A13A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_C638E91FC0D3A13A_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid Method_3_2FA8AE0519AC7829()
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_2FA8AE0519AC7829_OFFSET))(this);
	}

	::System::Void Method_3_AE0B725AB77F7E6F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_AE0B725AB77F7E6F_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598_6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_CA373AA1C7054598_6_OFFSET))(this);
	}

	::System::Void Method_3_71170E420FCC0F61(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_71170E420FCC0F61_OFFSET))(this, a1);
	}

	::MoleMole::Config::ConfigLevelResultPerforms_LevelFailedCameraSequenceConfig Method_3_C98BE03E33C2975D()
	{
		return ((::MoleMole::Config::ConfigLevelResultPerforms_LevelFailedCameraSequenceConfig(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_C98BE03E33C2975D_OFFSET))(this);
	}

	::System::Void Method_3_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Void Method_3_F80B623B6234A292(::PipelineCamera::CameraSequence::CoreDataCollection* a1, ::PipelineCamera::CameraSequence::CoreDataBindingResolver* a2, ::MoleMole::Config::ConfigLevelResultPerforms_LevelFailedCameraSequenceConfig a3, ::PipelineCamera::CameraCommandSpawnSubModules*& a4, ::PipelineCamera::CameraCommandUnSpawnSubModules*& a5)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CoreDataCollection*, ::PipelineCamera::CameraSequence::CoreDataBindingResolver*, ::MoleMole::Config::ConfigLevelResultPerforms_LevelFailedCameraSequenceConfig, ::PipelineCamera::CameraCommandSpawnSubModules*&, ::PipelineCamera::CameraCommandUnSpawnSubModules*&))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_F80B623B6234A292_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_09A6AFB3D3E5FD45(::MoleMole::Config::ConfigLevelResultPerforms_LoseButtonTrigger a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigLevelResultPerforms_LoseButtonTrigger, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_09A6AFB3D3E5FD45_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_47CDDACA9A031BCE(::MoleMole::Battle::Entity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_47CDDACA9A031BCE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_A818AC56BCD88BDE(::MoleMole::EntityHandle a1, ::MoleMole::Config::ConfigLevelResultPerforms_LoseButtonTrigger a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::MoleMole::Config::ConfigLevelResultPerforms_LoseButtonTrigger))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_A818AC56BCD88BDE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_A5E19EDC6E372FB1(::Il2CppArray<::MoleMole::Config::ConfigLevelResultPerforms_RatingFogEffect>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::MoleMole::Config::ConfigLevelResultPerforms_RatingFogEffect>*))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_A5E19EDC6E372FB1_OFFSET))(this, a1);
	}

	::System::Void Method_3_757C87517AD92B08(::MoleMole::Battle::Entity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_757C87517AD92B08_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_8F537CE539CF0103()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_8F537CE539CF0103_OFFSET))(this);
	}

	::System::Boolean Method_3_209E4250CA87B30E()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_209E4250CA87B30E_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598_7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_METHOD_3_CA373AA1C7054598_7_OFFSET))(this);
	}
};
