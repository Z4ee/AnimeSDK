#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EA7A8485E71D41E6___c__DisplayClass4_0.h"
#include "unitysdk/RPG/GameCore/EAnimStateTransitionType.h"
#include "unitysdk/RPG/GameCore/WaitAnimStateResult.h"
#include "unitysdk/Struct_2_AECA2D14AC7B49F5.h"
#include "unitysdk/Struct_2_BE9205D119086684.h"
#include "unitysdk/Struct_2_F780BA94AF5E7E37_1.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_551;
class Class_0_16E4307DCC419505_653;
class Class_0_16E4307DCC419505_694;
class Class_1_0AAA58A4268D383F;
class Class_1_0D172BCC3F0CDFD0;
class Class_1_4DC0F7F7ECA1595A;
class Class_1_5469D397DAE62876;
class Class_1_5F51D4049EA87B7B;
class Class_1_8782291C3798D494;
class Class_1_9BBDDCB5359C308C;
class Class_1_EA7A8485E71D41E6_Class_1_297FAF7E56DDEC67;
class Class_1_EA7A8485E71D41E6_Class_1_D24BA05D84C362BE;
class Class_2_A48F3719AA1CF200_7;
namespace RPG { template <typename T> class RingBuffer_1; }
namespace RPG::GameCore { class AnimGroupEventConfig; }
namespace RPG::GameCore { class AnimParamRangeEntry; }
namespace RPG::GameCore { class EffectDurationConfig; }
namespace RPG::GameCore { class LogicAnimEventEntry; }
namespace RPG::GameCore { class SingleAnimBehaviourEvent; }
namespace RPG::GameCore { class SingleAnimEventConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class RuntimeAnimatorController; }

#define CLASS_1_EA7A8485E71D41E6_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15CBE280)
#define CLASS_1_EA7A8485E71D41E6_METHOD_1_0788CEA47A24ADAA_OFFSET UNITYSDK_OFFSET(0x15CC6150)
#define CLASS_1_EA7A8485E71D41E6_METHOD_1_090AA33A05FCE850_OFFSET UNITYSDK_OFFSET(0x15CC9020)
#define CLASS_1_EA7A8485E71D41E6_METHOD_1_09ADA625BB4E0352_OFFSET UNITYSDK_OFFSET(0x15CC3680)
#define CLASS_1_EA7A8485E71D41E6_METHOD_1_0BA348EDFCC2AAFB_OFFSET UNITYSDK_OFFSET(0x15CC8B80)
#define CLASS_1_EA7A8485E71D41E6_METHOD_1_0D7638DBC93E5002_OFFSET UNITYSDK_OFFSET(0x15CC3220)
#define CLASS_1_EA7A8485E71D41E6_METHOD_1_0E0F3D0B099105F8_OFFSET UNITYSDK_OFFSET(0x15CC79E0)
#define CLASS_1_EA7A8485E71D41E6_METHOD_1_0F6D57706C3C3A51_OFFSET UNITYSDK_OFFSET(0x15CC6CD0)
#define CLASS_1_EA7A8485E71D41E6_METHOD_1_13F4188E2EBDA6D5_OFFSET UNITYSDK_OFFSET(0x15CC7970)
#define CLASS_1_EA7A8485E71D41E6_METHOD_1_1D91188537B52E3A_OFFSET UNITYSDK_OFFSET(0x15CC2960)
#define CLASS_1_EA7A8485E71D41E6_METHOD_1_273170E558872E4E_OFFSET UNITYSDK_OFFSET(0x15CC6770)
#define CLASS_1_EA7A8485E71D41E6_METHOD_1_31251F5EE7D26177_OFFSET UNITYSDK_OFFSET(0x15CC6A50)
#define CLASS_1_EA7A8485E71D41E6_METHOD_1_3269DFD1109C6FE2_OFFSET UNITYSDK_OFFSET(0x15CC63E0)
#define CLASS_1_EA7A8485E71D41E6_METHOD_1_3D3B7DDE460ADF37_OFFSET UNITYSDK_OFFSET(0x15CC7A90)
#define CLASS_1_EA7A8485E71D41E6_METHOD_1_423A6F569C0230E1_OFFSET UNITYSDK_OFFSET(0x15CC8420)
#define CLASS_1_EA7A8485E71D41E6_METHOD_1_42D496AA68C04778_OFFSET UNITYSDK_OFFSET(0x15CBE0B0)
#define CLASS_1_EA7A8485E71D41E6_METHOD_1_4389275F4099DE36_OFFSET UNITYSDK_OFFSET(0x15CC39F0)
#define CLASS_1_EA7A8485E71D41E6_METHOD_1_45872D1C931761E1_OFFSET UNITYSDK_OFFSET(0x15CC2D70)
#define CLASS_1_EA7A8485E71D41E6_METHOD_1_47CBF24DB9257B45_OFFSET UNITYSDK_OFFSET(0x15CC42E0)
#define CLASS_1_EA7A8485E71D41E6_METHOD_1_4B7F9EEB5830338E_OFFSET UNITYSDK_OFFSET(0x15CC2FC0)
#define CLASS_1_EA7A8485E71D41E6_METHOD_1_5018BD30246D16FE_OFFSET UNITYSDK_OFFSET(0x15CC3E60)
#define CLASS_1_EA7A8485E71D41E6_METHOD_1_596C0081305B769E_OFFSET UNITYSDK_OFFSET(0x15CC9500)
#define CLASS_1_EA7A8485E71D41E6_METHOD_1_597B3B9AB4D14BB6_OFFSET UNITYSDK_OFFSET(0x15CC21F0)
#define CLASS_1_EA7A8485E71D41E6_METHOD_1_5C00C2EE4FCF347E_OFFSET UNITYSDK_OFFSET(0x15CC9610)
#define CLASS_1_EA7A8485E71D41E6_METHOD_1_84B25D291E77579A_OFFSET UNITYSDK_OFFSET(0x15CC5640)
#define CLASS_1_EA7A8485E71D41E6_METHOD_1_87FD4AB33149442D_OFFSET UNITYSDK_OFFSET(0x15CBDF20)
#define CLASS_1_EA7A8485E71D41E6_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x15CC7E00)
#define CLASS_1_EA7A8485E71D41E6_METHOD_1_9902C6A7D989A89B_OFFSET UNITYSDK_OFFSET(0x15CC6B70)
#define CLASS_1_EA7A8485E71D41E6_METHOD_1_A5822C919A4EEE9E_OFFSET UNITYSDK_OFFSET(0x15CC7750)
#define CLASS_1_EA7A8485E71D41E6_METHOD_1_A997ECDA6693DCBD_OFFSET UNITYSDK_OFFSET(0x15CC7490)
#define CLASS_1_EA7A8485E71D41E6_METHOD_1_AC3A727D581997B8_OFFSET UNITYSDK_OFFSET(0x15CC33C0)
#define CLASS_1_EA7A8485E71D41E6_METHOD_1_BB8EA5908FA659E7_OFFSET UNITYSDK_OFFSET(0x15CC88B0)
#define CLASS_1_EA7A8485E71D41E6_METHOD_1_BF5E2DCAE0BF038A_OFFSET UNITYSDK_OFFSET(0x15CC1310)
#define CLASS_1_EA7A8485E71D41E6_METHOD_1_C47D865C6BA2F7A9_OFFSET UNITYSDK_OFFSET(0x15CC5170)
#define CLASS_1_EA7A8485E71D41E6_METHOD_1_CB70950D3F135CC6_OFFSET UNITYSDK_OFFSET(0x15CC7EB0)
#define CLASS_1_EA7A8485E71D41E6_METHOD_1_CC7876E777853818_OFFSET UNITYSDK_OFFSET(0x15CBF9B0)
#define CLASS_1_EA7A8485E71D41E6_METHOD_1_DAB3C36617620944_OFFSET UNITYSDK_OFFSET(0x15CC9340)
#define CLASS_1_EA7A8485E71D41E6_METHOD_1_E30D5EE4AF80B361_OFFSET UNITYSDK_OFFSET(0x15CC6C40)
#define CLASS_1_EA7A8485E71D41E6_METHOD_1_EAD10B3E55E2C4C5_OFFSET UNITYSDK_OFFSET(0x15CBEC20)
#define CLASS_1_EA7A8485E71D41E6_METHOD_1_F0AA6FD14F20A508_OFFSET UNITYSDK_OFFSET(0x15CC30B0)
#define CLASS_1_EA7A8485E71D41E6_METHOD_1_F10FFC333DC3F67B_OFFSET UNITYSDK_OFFSET(0x15CC71D0)
#define CLASS_1_EA7A8485E71D41E6_METHOD_1_F2EEC5E8503D3622_OFFSET UNITYSDK_OFFSET(0x15CC2EA0)
#define CLASS_1_EA7A8485E71D41E6_METHOD_1_F4BFBCDF3925D932_OFFSET UNITYSDK_OFFSET(0x15CC2B40)
#define CLASS_1_EA7A8485E71D41E6_METHOD_1_F4C8B018D655630D_OFFSET UNITYSDK_OFFSET(0x15CC1950)
#define CLASS_1_EA7A8485E71D41E6__CTOR_OFFSET UNITYSDK_OFFSET(0x15CC9620)
#define CLASS_1_EA7A8485E71D41E6__PREAPPLYTEAMSTANDBYPARTSVISIBILITY_G__APPLYCONFIG_4_0_OFFSET UNITYSDK_OFFSET(0x15CC16B0)
#define CLASS_1_EA7A8485E71D41E6___SETUPANIMEVENTCONFIGFILE_B__28_0_OFFSET UNITYSDK_OFFSET(0x15CC97E0)

inline static constexpr unsigned int Class_1_EA7A8485E71D41E6_TypeDefinitionIndex = 57139;

class Class_1_EA7A8485E71D41E6 : public ::System::Object
{
public:
	::Il2CppArray<::System::String*>* NBNJJDIMDKE; // 0x10
	::Il2CppArray<::Class_1_EA7A8485E71D41E6_Class_1_297FAF7E56DDEC67*>* DNFOPHCPHGP; // 0x18
	::Class_1_0D172BCC3F0CDFD0* EMEABIJBCKC; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_1_8782291C3798D494*>*>* EOAHDHNFBGD; // 0x28
	::Il2CppArray<::Class_1_0AAA58A4268D383F*>* DGFHOBJCLFE; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Struct_2_F780BA94AF5E7E37_1>* NALJJNGFPPK; // 0x38
	::UnityEngine::RuntimeAnimatorController* OLEPCLAPPCM; // 0x40
	::Il2CppArray<::System::Int32>* GGCBHIHBJIA; // 0x48
	::Il2CppArray<::Struct_2_AECA2D14AC7B49F5>* CMHAKHFAMGB; // 0x50
	::Il2CppArray<::RPG::GameCore::AnimGroupEventConfig*>* NNPDHKELNFK; // 0x58
	::Il2CppArray<::Class_1_EA7A8485E71D41E6_Class_1_D24BA05D84C362BE*>* DPKNCMHIBBL; // 0x60
	::Class_0_16E4307DCC419505_653* CPIIOIPAAKK; // 0x68
	::System::Collections::Generic::List_1<::System::Int32>* GHDJHHLKAPF; // 0x70
	::Il2CppArray<::Class_1_EA7A8485E71D41E6_Class_1_D24BA05D84C362BE*>* AFGFHKIKCBP; // 0x78
	::Il2CppArray<::Class_1_EA7A8485E71D41E6_Class_1_297FAF7E56DDEC67*>* NBLEHOHBMHE; // 0x80
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_1_9BBDDCB5359C308C*>*>* IIIINOJFCJK; // 0x88
	::Il2CppArray<::RPG::GameCore::SingleAnimBehaviourEvent*>* FONBGNBOPGJ; // 0x90
	::Il2CppArray<::System::String*>* KGGGDHNMDMK; // 0x98
	::RPG::RingBuffer_1<::Struct_2_BE9205D119086684>* EDAFMMJDLHB; // 0xA0
	::Class_0_16E4307DCC419505_694* NKFIENBEADD; // 0xA8
	::Il2CppArray<::RPG::GameCore::SingleAnimEventConfig*>* BBIDLNDCKNB; // 0xB0
	::System::String* IMCNOPHMHLE; // 0xB8
	::Class_0_16E4307DCC419505_551* CFKHNPGEAJA; // 0xC0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*>* JAIKKMAMHJN; // 0xC8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA7A8485E71D41E6__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_87FD4AB33149442D(::Class_0_16E4307DCC419505_551* a1, ::Il2CppArray<::System::String*>* a2, ::Il2CppArray<::System::String*>* a3, ::Class_0_16E4307DCC419505_653* a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_551*, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*, ::Class_0_16E4307DCC419505_653*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EA7A8485E71D41E6_METHOD_1_87FD4AB33149442D_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_42D496AA68C04778(::Class_0_16E4307DCC419505_551* a1, ::Il2CppArray<::System::String*>* a2, ::Il2CppArray<::RPG::GameCore::SingleAnimEventConfig*>* a3, ::Il2CppArray<::RPG::GameCore::SingleAnimBehaviourEvent*>* a4, ::Il2CppArray<::RPG::GameCore::AnimGroupEventConfig*>* a5, ::Il2CppArray<::System::String*>* a6, ::Class_0_16E4307DCC419505_653* a7, ::System::Boolean a8)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_551*, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::RPG::GameCore::SingleAnimEventConfig*>*, ::Il2CppArray<::RPG::GameCore::SingleAnimBehaviourEvent*>*, ::Il2CppArray<::RPG::GameCore::AnimGroupEventConfig*>*, ::Il2CppArray<::System::String*>*, ::Class_0_16E4307DCC419505_653*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EA7A8485E71D41E6_METHOD_1_42D496AA68C04778_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA7A8485E71D41E6_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_EAD10B3E55E2C4C5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA7A8485E71D41E6_METHOD_1_EAD10B3E55E2C4C5_OFFSET))(this);
	}

	::System::Void Method_1_BF5E2DCAE0BF038A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA7A8485E71D41E6_METHOD_1_BF5E2DCAE0BF038A_OFFSET))(this);
	}

	::System::Void Method_1_CC7876E777853818(::UnityEngine::Animator* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + CLASS_1_EA7A8485E71D41E6_METHOD_1_CC7876E777853818_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_AC3A727D581997B8(::Class_1_9BBDDCB5359C308C* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_9BBDDCB5359C308C*))((::PBYTE)hIl2Cpp + CLASS_1_EA7A8485E71D41E6_METHOD_1_AC3A727D581997B8_OFFSET))(this, a1);
	}

	::System::Void Method_1_09ADA625BB4E0352(::Class_1_9BBDDCB5359C308C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9BBDDCB5359C308C*))((::PBYTE)hIl2Cpp + CLASS_1_EA7A8485E71D41E6_METHOD_1_09ADA625BB4E0352_OFFSET))(this, a1);
	}

	::System::Void Method_1_F4C8B018D655630D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA7A8485E71D41E6_METHOD_1_F4C8B018D655630D_OFFSET))(this);
	}

	::System::Void Method_1_84B25D291E77579A(::Il2CppArray<::System::String*>* a1, ::Il2CppArray<::System::String*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_EA7A8485E71D41E6_METHOD_1_84B25D291E77579A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0788CEA47A24ADAA(::Il2CppArray<::System::String*>* a1, ::Il2CppArray<::System::String*>* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EA7A8485E71D41E6_METHOD_1_0788CEA47A24ADAA_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_3269DFD1109C6FE2(::Il2CppArray<::System::Int32>* a1, ::Il2CppArray<::System::Int32>* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EA7A8485E71D41E6_METHOD_1_3269DFD1109C6FE2_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_C47D865C6BA2F7A9(::System::Collections::Generic::List_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_EA7A8485E71D41E6_METHOD_1_C47D865C6BA2F7A9_OFFSET))(this, a1);
	}

	::Class_1_4DC0F7F7ECA1595A* Method_1_E30D5EE4AF80B361(::RPG::GameCore::TaskContext* a1, ::Il2CppArray<::RPG::GameCore::SingleAnimEventConfig*>* a2, ::Il2CppArray<::RPG::GameCore::SingleAnimBehaviourEvent*>* a3, ::Il2CppArray<::RPG::GameCore::AnimGroupEventConfig*>* a4)
	{
		return ((::Class_1_4DC0F7F7ECA1595A*(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Il2CppArray<::RPG::GameCore::SingleAnimEventConfig*>*, ::Il2CppArray<::RPG::GameCore::SingleAnimBehaviourEvent*>*, ::Il2CppArray<::RPG::GameCore::AnimGroupEventConfig*>*))((::PBYTE)hIl2Cpp + CLASS_1_EA7A8485E71D41E6_METHOD_1_E30D5EE4AF80B361_OFFSET))(this, a1, a2, a3, a4);
	}

	::Class_1_4DC0F7F7ECA1595A* Method_1_0F6D57706C3C3A51(::RPG::GameCore::TaskContext* a1, ::System::String* a2, ::Il2CppArray<::RPG::GameCore::SingleAnimEventConfig*>* a3, ::Il2CppArray<::RPG::GameCore::SingleAnimBehaviourEvent*>* a4, ::Il2CppArray<::RPG::GameCore::AnimGroupEventConfig*>* a5)
	{
		return ((::Class_1_4DC0F7F7ECA1595A*(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::String*, ::Il2CppArray<::RPG::GameCore::SingleAnimEventConfig*>*, ::Il2CppArray<::RPG::GameCore::SingleAnimBehaviourEvent*>*, ::Il2CppArray<::RPG::GameCore::AnimGroupEventConfig*>*))((::PBYTE)hIl2Cpp + CLASS_1_EA7A8485E71D41E6_METHOD_1_0F6D57706C3C3A51_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_F10FFC333DC3F67B(::Class_1_4DC0F7F7ECA1595A* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4DC0F7F7ECA1595A*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EA7A8485E71D41E6_METHOD_1_F10FFC333DC3F67B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A5822C919A4EEE9E(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EA7A8485E71D41E6_METHOD_1_A5822C919A4EEE9E_OFFSET))(this, a1);
	}

	::System::Void Method_1_13F4188E2EBDA6D5(::Il2CppArray<::System::String*>* a1, ::Class_0_16E4307DCC419505_653* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::Class_0_16E4307DCC419505_653*))((::PBYTE)hIl2Cpp + CLASS_1_EA7A8485E71D41E6_METHOD_1_13F4188E2EBDA6D5_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_0E0F3D0B099105F8(::System::Int32 a1, ::System::Int32& a2, ::System::Single& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_EA7A8485E71D41E6_METHOD_1_0E0F3D0B099105F8_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::WaitAnimStateResult Method_1_3D3B7DDE460ADF37(::System::Int32 a1, ::System::Single a2, ::System::Int32 a3, ::System::UInt32 a4, ::System::Int32 a5, ::System::Int32 a6)
	{
		return ((::RPG::GameCore::WaitAnimStateResult(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Int32, ::System::UInt32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EA7A8485E71D41E6_METHOD_1_3D3B7DDE460ADF37_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA7A8485E71D41E6_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_CB70950D3F135CC6(::System::String* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Boolean a5, ::System::Single a6, ::Il2CppArray<::RPG::GameCore::EffectDurationConfig*>* a7)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean, ::System::Single, ::Il2CppArray<::RPG::GameCore::EffectDurationConfig*>*))((::PBYTE)hIl2Cpp + CLASS_1_EA7A8485E71D41E6_METHOD_1_CB70950D3F135CC6_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_1_BB8EA5908FA659E7(::System::String* a1, ::System::Single a2, ::System::Single a3, ::System::Action_2<::Class_1_5F51D4049EA87B7B*, ::System::Object*>* a4, ::System::Object* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::Single, ::System::Action_2<::Class_1_5F51D4049EA87B7B*, ::System::Object*>*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_EA7A8485E71D41E6_METHOD_1_BB8EA5908FA659E7_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_4389275F4099DE36()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA7A8485E71D41E6_METHOD_1_4389275F4099DE36_OFFSET))(this);
	}

	::System::Void Method_1_5018BD30246D16FE(::Il2CppArray<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_EA7A8485E71D41E6_METHOD_1_5018BD30246D16FE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_273170E558872E4E(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EA7A8485E71D41E6_METHOD_1_273170E558872E4E_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_31251F5EE7D26177(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EA7A8485E71D41E6_METHOD_1_31251F5EE7D26177_OFFSET))(this, a1, a2);
	}

	static ::System::Boolean Method_1_9902C6A7D989A89B(::System::Collections::Generic::List_1<::System::Int32>* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EA7A8485E71D41E6_METHOD_1_9902C6A7D989A89B_OFFSET))(a1, a2);
	}

	::System::Void Method_1_47CBF24DB9257B45(::Il2CppArray<::RPG::GameCore::SingleAnimEventConfig*>* a1, ::Il2CppArray<::RPG::GameCore::SingleAnimBehaviourEvent*>* a2, ::Il2CppArray<::RPG::GameCore::AnimGroupEventConfig*>* a3, ::Il2CppArray<::RPG::GameCore::LogicAnimEventEntry*>* a4, ::RPG::GameCore::TaskContext* a5, ::Class_1_4DC0F7F7ECA1595A* a6, ::System::String* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::SingleAnimEventConfig*>*, ::Il2CppArray<::RPG::GameCore::SingleAnimBehaviourEvent*>*, ::Il2CppArray<::RPG::GameCore::AnimGroupEventConfig*>*, ::Il2CppArray<::RPG::GameCore::LogicAnimEventEntry*>*, ::RPG::GameCore::TaskContext*, ::Class_1_4DC0F7F7ECA1595A*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EA7A8485E71D41E6_METHOD_1_47CBF24DB9257B45_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_1_A997ECDA6693DCBD(::Class_1_4DC0F7F7ECA1595A* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4DC0F7F7ECA1595A*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EA7A8485E71D41E6_METHOD_1_A997ECDA6693DCBD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4B7F9EEB5830338E(::Class_1_EA7A8485E71D41E6_Class_1_297FAF7E56DDEC67* a1, ::System::Single a2, ::System::Boolean a3, ::RPG::GameCore::EAnimStateTransitionType a4, ::Class_1_EA7A8485E71D41E6_Class_1_D24BA05D84C362BE* a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EA7A8485E71D41E6_Class_1_297FAF7E56DDEC67*, ::System::Single, ::System::Boolean, ::RPG::GameCore::EAnimStateTransitionType, ::Class_1_EA7A8485E71D41E6_Class_1_D24BA05D84C362BE*))((::PBYTE)hIl2Cpp + CLASS_1_EA7A8485E71D41E6_METHOD_1_4B7F9EEB5830338E_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::Class_1_5469D397DAE62876* Method_1_597B3B9AB4D14BB6()
	{
		return ((::Class_1_5469D397DAE62876*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA7A8485E71D41E6_METHOD_1_597B3B9AB4D14BB6_OFFSET))(this);
	}

	::System::Void Method_1_1D91188537B52E3A(::System::Boolean a1, ::Struct_2_AECA2D14AC7B49F5& a2, ::Struct_2_AECA2D14AC7B49F5& a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Struct_2_AECA2D14AC7B49F5&, ::Struct_2_AECA2D14AC7B49F5&))((::PBYTE)hIl2Cpp + CLASS_1_EA7A8485E71D41E6_METHOD_1_1D91188537B52E3A_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_0D7638DBC93E5002()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA7A8485E71D41E6_METHOD_1_0D7638DBC93E5002_OFFSET))(this);
	}

	::System::Void Method_1_F4BFBCDF3925D932(::System::Single a1, ::System::Single a2, ::System::Boolean a3, ::System::Int32 a4, ::RPG::GameCore::EAnimStateTransitionType a5, ::Class_1_EA7A8485E71D41E6_Class_1_D24BA05D84C362BE* a6, ::System::Boolean a7)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean, ::System::Int32, ::RPG::GameCore::EAnimStateTransitionType, ::Class_1_EA7A8485E71D41E6_Class_1_D24BA05D84C362BE*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EA7A8485E71D41E6_METHOD_1_F4BFBCDF3925D932_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_1_423A6F569C0230E1(::System::Single a1, ::System::Single a2, ::System::Int32 a3, ::System::Single a4, ::RPG::GameCore::EAnimStateTransitionType a5, ::Class_1_EA7A8485E71D41E6_Class_1_D24BA05D84C362BE* a6, ::System::Boolean a7)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Int32, ::System::Single, ::RPG::GameCore::EAnimStateTransitionType, ::Class_1_EA7A8485E71D41E6_Class_1_D24BA05D84C362BE*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EA7A8485E71D41E6_METHOD_1_423A6F569C0230E1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_1_DAB3C36617620944(::Class_1_9BBDDCB5359C308C* a1, ::System::String* a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9BBDDCB5359C308C*, ::System::String*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_EA7A8485E71D41E6_METHOD_1_DAB3C36617620944_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_090AA33A05FCE850(::System::Int32 a1, ::System::Single a2, ::System::Int32 a3, ::Class_1_EA7A8485E71D41E6_Class_1_D24BA05D84C362BE* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Int32, ::Class_1_EA7A8485E71D41E6_Class_1_D24BA05D84C362BE*))((::PBYTE)hIl2Cpp + CLASS_1_EA7A8485E71D41E6_METHOD_1_090AA33A05FCE850_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_596C0081305B769E(::UnityEngine::Animator* a1, ::RPG::GameCore::AnimParamRangeEntry* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Animator*, ::RPG::GameCore::AnimParamRangeEntry*))((::PBYTE)hIl2Cpp + CLASS_1_EA7A8485E71D41E6_METHOD_1_596C0081305B769E_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_45872D1C931761E1(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_EA7A8485E71D41E6_METHOD_1_45872D1C931761E1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F2EEC5E8503D3622(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EA7A8485E71D41E6_METHOD_1_F2EEC5E8503D3622_OFFSET))(this, a1);
	}

	::System::Void Method_1_F0AA6FD14F20A508(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EA7A8485E71D41E6_METHOD_1_F0AA6FD14F20A508_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_0BA348EDFCC2AAFB(::Class_2_A48F3719AA1CF200_7* a1, ::System::Action_2<::Class_1_5F51D4049EA87B7B*, ::System::Object*>* a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A48F3719AA1CF200_7*, ::System::Action_2<::Class_1_5F51D4049EA87B7B*, ::System::Object*>*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_EA7A8485E71D41E6_METHOD_1_0BA348EDFCC2AAFB_OFFSET))(this, a1, a2, a3);
	}

	::Class_0_16E4307DCC419505_694* Method_1_5C00C2EE4FCF347E()
	{
		return ((::Class_0_16E4307DCC419505_694*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA7A8485E71D41E6_METHOD_1_5C00C2EE4FCF347E_OFFSET))(this);
	}

	static ::System::Void _PreapplyTeamStandByPartsVisibility_g__ApplyConfig_4_0(::System::String* a1, ::Class_1_EA7A8485E71D41E6___c__DisplayClass4_0& a2)
	{
		return ((::System::Void(*)(::System::String*, ::Class_1_EA7A8485E71D41E6___c__DisplayClass4_0&))((::PBYTE)hIl2Cpp + CLASS_1_EA7A8485E71D41E6__PREAPPLYTEAMSTANDBYPARTSVISIBILITY_G__APPLYCONFIG_4_0_OFFSET))(a1, a2);
	}

	::System::String* __SetupAnimEventConfigFile_b__28_0(::System::String* a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EA7A8485E71D41E6___SETUPANIMEVENTCONFIGFILE_B__28_0_OFFSET))(this, a1);
	}
};
