#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/WaitAnimStateResult.h"
#include "unitysdk/Struct_2_2B16FFFF87B43037.h"

class Class_0_16E4307DCC419505_551_Class_3_363670394F299996;
class Class_0_16E4307DCC419505_551_Class_3_410EEB4A0F592FBB;
class Class_0_16E4307DCC419505_653;
class Class_0_16E4307DCC419505_694;
class Class_1_4DC0F7F7ECA1595A;
class Class_1_5F51D4049EA87B7B;
class Class_1_9BBDDCB5359C308C;
class Class_1_EA7A8485E71D41E6;
namespace RPG::GameCore { class AnimGroupEventConfig; }
namespace RPG::GameCore { class EffectDurationConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class SingleAnimBehaviourEvent; }
namespace RPG::GameCore { class SingleAnimEventConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_49901C9FEC775635_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB68CE80)
#define CLASS_2_49901C9FEC775635_GET_ANIMATORMOVECALLBACKORDER_OFFSET UNITYSDK_OFFSET(0xB68CCE0)
#define CLASS_2_49901C9FEC775635_GET_ANIMATORNOTINIT_OFFSET UNITYSDK_OFFSET(0xB68E9B0)
#define CLASS_2_49901C9FEC775635_GET_DYNAMICANIMEVENTDATALIST_OFFSET UNITYSDK_OFFSET(0xB68EA10)
#define CLASS_2_49901C9FEC775635_GET_ENABLEANIMATORMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xB68CCF0)
#define CLASS_2_49901C9FEC775635_GET_NEEDRESETEVENT_OFFSET UNITYSDK_OFFSET(0xB68E9D0)
#define CLASS_2_49901C9FEC775635_GET_ONANIMATIONSTATECHANGE_OFFSET UNITYSDK_OFFSET(0xB68E9F0)
#define CLASS_2_49901C9FEC775635_GET_ONANIMATORMOVECALLBACKMAP_OFFSET UNITYSDK_OFFSET(0xB68EA30)
#define CLASS_2_49901C9FEC775635_GET_REENTRYCOUNTER_OFFSET UNITYSDK_OFFSET(0xB68E990)
#define CLASS_2_49901C9FEC775635_GET_TASKCONTEXT_OFFSET UNITYSDK_OFFSET(0xB68E960)
#define CLASS_2_49901C9FEC775635_GET_WORLDREF_OFFSET UNITYSDK_OFFSET(0xB68E930)
#define CLASS_2_49901C9FEC775635_METHOD_2_054B8F7AF60506D5_OFFSET UNITYSDK_OFFSET(0xB68E130)
#define CLASS_2_49901C9FEC775635_METHOD_2_0C15F99EE3634774_OFFSET UNITYSDK_OFFSET(0xB68D810)
#define CLASS_2_49901C9FEC775635_METHOD_2_0C23E87E29F8936D_OFFSET UNITYSDK_OFFSET(0xB68EA40)
#define CLASS_2_49901C9FEC775635_METHOD_2_128774387667156B_OFFSET UNITYSDK_OFFSET(0xB68E970)
#define CLASS_2_49901C9FEC775635_METHOD_2_21A9AD654A1AED5E_OFFSET UNITYSDK_OFFSET(0xB68E270)
#define CLASS_2_49901C9FEC775635_METHOD_2_26C10505EC7B83BF_OFFSET UNITYSDK_OFFSET(0xB68D9A0)
#define CLASS_2_49901C9FEC775635_METHOD_2_315B8B669D3ED55F_OFFSET UNITYSDK_OFFSET(0xB68DFB0)
#define CLASS_2_49901C9FEC775635_METHOD_2_34DE533C673575D5_OFFSET UNITYSDK_OFFSET(0xB68E700)
#define CLASS_2_49901C9FEC775635_METHOD_2_387BD0325F56DCC3_OFFSET UNITYSDK_OFFSET(0xB68E890)
#define CLASS_2_49901C9FEC775635_METHOD_2_3B258437A86233AC_OFFSET UNITYSDK_OFFSET(0xB68D510)
#define CLASS_2_49901C9FEC775635_METHOD_2_4320AAE8473CA0C4_OFFSET UNITYSDK_OFFSET(0xB68DEE0)
#define CLASS_2_49901C9FEC775635_METHOD_2_4D048E895C608EDE_OFFSET UNITYSDK_OFFSET(0xB68E650)
#define CLASS_2_49901C9FEC775635_METHOD_2_54522C5ACBF383F8_OFFSET UNITYSDK_OFFSET(0xB68E0D0)
#define CLASS_2_49901C9FEC775635_METHOD_2_61929A3103595552_1_OFFSET UNITYSDK_OFFSET(0xB68D590)
#define CLASS_2_49901C9FEC775635_METHOD_2_61929A3103595552_OFFSET UNITYSDK_OFFSET(0xB68D1B0)
#define CLASS_2_49901C9FEC775635_METHOD_2_633BD41FEBF1F191_OFFSET UNITYSDK_OFFSET(0xB68E450)
#define CLASS_2_49901C9FEC775635_METHOD_2_63C88B2CABF0B27F_1_OFFSET UNITYSDK_OFFSET(0xB68E200)
#define CLASS_2_49901C9FEC775635_METHOD_2_63C88B2CABF0B27F_OFFSET UNITYSDK_OFFSET(0xB68E190)
#define CLASS_2_49901C9FEC775635_METHOD_2_7051780D9CC9E4B9_OFFSET UNITYSDK_OFFSET(0xB68E780)
#define CLASS_2_49901C9FEC775635_METHOD_2_7744894CEC41BF06_OFFSET UNITYSDK_OFFSET(0xB68E840)
#define CLASS_2_49901C9FEC775635_METHOD_2_8CE5B241A0263BC9_OFFSET UNITYSDK_OFFSET(0xB68D730)
#define CLASS_2_49901C9FEC775635_METHOD_2_8FD360E1784D2D63_OFFSET UNITYSDK_OFFSET(0xB68DB10)
#define CLASS_2_49901C9FEC775635_METHOD_2_A79B8ACFFBAFFFB1_OFFSET UNITYSDK_OFFSET(0xB68DB80)
#define CLASS_2_49901C9FEC775635_METHOD_2_AC111D9A52AD3311_OFFSET UNITYSDK_OFFSET(0xB68DC00)
#define CLASS_2_49901C9FEC775635_METHOD_2_B1445E8504415D4D_OFFSET UNITYSDK_OFFSET(0xB68E950)
#define CLASS_2_49901C9FEC775635_METHOD_2_BD1B036B48B34B43_OFFSET UNITYSDK_OFFSET(0xB68E5C0)
#define CLASS_2_49901C9FEC775635_METHOD_2_C69F3CFF442210F0_OFFSET UNITYSDK_OFFSET(0xB68CC20)
#define CLASS_2_49901C9FEC775635_METHOD_2_D41F2EAAA87E2BFD_OFFSET UNITYSDK_OFFSET(0xB68D940)
#define CLASS_2_49901C9FEC775635_METHOD_2_D56B7802D9F0C01D_OFFSET UNITYSDK_OFFSET(0xB68E060)
#define CLASS_2_49901C9FEC775635_METHOD_2_E5B4932D0B2F5A1D_OFFSET UNITYSDK_OFFSET(0xB68E4B0)
#define CLASS_2_49901C9FEC775635_METHOD_2_E9A7A364EF941996_OFFSET UNITYSDK_OFFSET(0xB68EA00)
#define CLASS_2_49901C9FEC775635_METHOD_2_F79D5EC57FBF426E_OFFSET UNITYSDK_OFFSET(0xB68DC80)
#define CLASS_2_49901C9FEC775635_METHOD_2_F9555880FBE027D5_OFFSET UNITYSDK_OFFSET(0xB68D270)
#define CLASS_2_49901C9FEC775635_METHOD_2_FA3D6E45984D6807_OFFSET UNITYSDK_OFFSET(0xB68E3C0)
#define CLASS_2_49901C9FEC775635_ONANIMATORMOVE_OFFSET UNITYSDK_OFFSET(0xB68DE50)
#define CLASS_2_49901C9FEC775635_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0xB68D200)
#define CLASS_2_49901C9FEC775635_ONMODELARTUNLOADED_OFFSET UNITYSDK_OFFSET(0xB68D630)
#define CLASS_2_49901C9FEC775635_ONMODELROOTLOADED_OFFSET UNITYSDK_OFFSET(0xB68D000)
#define CLASS_2_49901C9FEC775635_ONMODELROOTUNLOADED_OFFSET UNITYSDK_OFFSET(0xB68D090)
#define CLASS_2_49901C9FEC775635_RESETTODEFAULT_OFFSET UNITYSDK_OFFSET(0xB68EA50)
#define CLASS_2_49901C9FEC775635_SET_ANIMATORNOTINIT_OFFSET UNITYSDK_OFFSET(0xB68E9C0)
#define CLASS_2_49901C9FEC775635_SET_DYNAMICANIMEVENTDATALIST_OFFSET UNITYSDK_OFFSET(0xB68EA20)
#define CLASS_2_49901C9FEC775635_SET_NEEDRESETEVENT_OFFSET UNITYSDK_OFFSET(0xB68E9E0)
#define CLASS_2_49901C9FEC775635_SET_REENTRYCOUNTER_OFFSET UNITYSDK_OFFSET(0xB68E9A0)
#define CLASS_2_49901C9FEC775635__CTOR_OFFSET UNITYSDK_OFFSET(0xB68CD00)
#define CLASS_2_49901C9FEC775635__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0xB68CD30)

inline static constexpr unsigned int Class_2_49901C9FEC775635_TypeDefinitionIndex = 57162;

class Class_2_49901C9FEC775635 : public ::RPG::GameCore::GameComponentBase
{
public:
	::UnityEngine::GameObject* AAPEMMDGOJO; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_0_16E4307DCC419505_551_Class_3_410EEB4A0F592FBB*>* HBKJKEAKHDE; // 0x20
	::Class_1_EA7A8485E71D41E6* EGKMMHCBAEM; // 0x28
	::Class_0_16E4307DCC419505_653* CPIIOIPAAKK; // 0x30
	::Class_0_16E4307DCC419505_551_Class_3_363670394F299996* NELPNMHEBCC; // 0x38
	::Struct_2_2B16FFFF87B43037 DFDBKKKCDFM; // 0x40
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x50
	::System::Collections::Generic::List_1<::Class_1_4DC0F7F7ECA1595A*>* KDIIFBLAFMH; // 0x58
	::System::Boolean PCHMPNFGDKF; // 0x60
	::System::Boolean IBJHPPNLHGM; // 0x61
	::System::Boolean OMLHPJFCFBP; // 0x62
	::System::Boolean IKADHHKDFJK; // 0x63
	::System::Boolean _EnableAnimatorMoveCallback_k__BackingField; // 0x64
	::System::Boolean LELOAIIDMNI; // 0x65
	::System::Int32 NLEPNINNIPD; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_49901C9FEC775635__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_C69F3CFF442210F0(::System::String* a1, ::System::Single a2, ::System::Single a3, ::System::Action_2<::Class_1_5F51D4049EA87B7B*, ::System::Object*>* a4, ::System::Object* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::Single, ::System::Action_2<::Class_1_5F51D4049EA87B7B*, ::System::Object*>*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_49901C9FEC775635_METHOD_2_C69F3CFF442210F0_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Int32 get_AnimatorMoveCallbackOrder()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_49901C9FEC775635_GET_ANIMATORMOVECALLBACKORDER_OFFSET))(this);
	}

	::System::Boolean get_EnableAnimatorMoveCallback()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_49901C9FEC775635_GET_ENABLEANIMATORMOVECALLBACK_OFFSET))(this);
	}

	::System::Void _OnInitOwnerRef()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_49901C9FEC775635__ONINITOWNERREF_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_49901C9FEC775635_DISPOSE_OFFSET))(this);
	}

	::System::Void OnModelRootLoaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_49901C9FEC775635_ONMODELROOTLOADED_OFFSET))(this);
	}

	::System::Void OnModelRootUnloaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_49901C9FEC775635_ONMODELROOTUNLOADED_OFFSET))(this);
	}

	::System::Void OnModelArtLoaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_49901C9FEC775635_ONMODELARTLOADED_OFFSET))(this);
	}

	::System::Void OnModelArtUnloaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_49901C9FEC775635_ONMODELARTUNLOADED_OFFSET))(this);
	}

	::System::Void Method_2_8CE5B241A0263BC9(::Il2CppArray<::System::String*>* a1, ::Il2CppArray<::System::String*>* a2, ::Class_0_16E4307DCC419505_653* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*, ::Class_0_16E4307DCC419505_653*))((::PBYTE)hIl2Cpp + CLASS_2_49901C9FEC775635_METHOD_2_8CE5B241A0263BC9_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_0C15F99EE3634774(::Il2CppArray<::System::String*>* a1, ::Il2CppArray<::RPG::GameCore::SingleAnimEventConfig*>* a2, ::Il2CppArray<::RPG::GameCore::SingleAnimBehaviourEvent*>* a3, ::Il2CppArray<::RPG::GameCore::AnimGroupEventConfig*>* a4, ::Il2CppArray<::System::String*>* a5, ::Class_0_16E4307DCC419505_653* a6)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::RPG::GameCore::SingleAnimEventConfig*>*, ::Il2CppArray<::RPG::GameCore::SingleAnimBehaviourEvent*>*, ::Il2CppArray<::RPG::GameCore::AnimGroupEventConfig*>*, ::Il2CppArray<::System::String*>*, ::Class_0_16E4307DCC419505_653*))((::PBYTE)hIl2Cpp + CLASS_2_49901C9FEC775635_METHOD_2_0C15F99EE3634774_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::Class_0_16E4307DCC419505_694* Method_2_D41F2EAAA87E2BFD()
	{
		return ((::Class_0_16E4307DCC419505_694*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_49901C9FEC775635_METHOD_2_D41F2EAAA87E2BFD_OFFSET))(this);
	}

	::System::Void Method_2_26C10505EC7B83BF(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_49901C9FEC775635_METHOD_2_26C10505EC7B83BF_OFFSET))(this, a1);
	}

	::System::Void Method_2_8FD360E1784D2D63(::Il2CppArray<::System::String*>* a1, ::Il2CppArray<::System::String*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_49901C9FEC775635_METHOD_2_8FD360E1784D2D63_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A79B8ACFFBAFFFB1(::Il2CppArray<::System::String*>* a1, ::Il2CppArray<::System::String*>* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_49901C9FEC775635_METHOD_2_A79B8ACFFBAFFFB1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_AC111D9A52AD3311(::Il2CppArray<::System::Int32>* a1, ::Il2CppArray<::System::Int32>* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_49901C9FEC775635_METHOD_2_AC111D9A52AD3311_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_61929A3103595552()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_49901C9FEC775635_METHOD_2_61929A3103595552_OFFSET))(this);
	}

	::System::Void Method_2_F79D5EC57FBF426E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_49901C9FEC775635_METHOD_2_F79D5EC57FBF426E_OFFSET))(this);
	}

	::Class_1_4DC0F7F7ECA1595A* Method_2_4320AAE8473CA0C4(::RPG::GameCore::TaskContext* a1, ::System::String* a2)
	{
		return ((::Class_1_4DC0F7F7ECA1595A*(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_49901C9FEC775635_METHOD_2_4320AAE8473CA0C4_OFFSET))(this, a1, a2);
	}

	::Class_1_4DC0F7F7ECA1595A* Method_2_315B8B669D3ED55F(::RPG::GameCore::TaskContext* a1, ::Il2CppArray<::RPG::GameCore::SingleAnimEventConfig*>* a2, ::Il2CppArray<::RPG::GameCore::SingleAnimBehaviourEvent*>* a3, ::Il2CppArray<::RPG::GameCore::AnimGroupEventConfig*>* a4)
	{
		return ((::Class_1_4DC0F7F7ECA1595A*(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Il2CppArray<::RPG::GameCore::SingleAnimEventConfig*>*, ::Il2CppArray<::RPG::GameCore::SingleAnimBehaviourEvent*>*, ::Il2CppArray<::RPG::GameCore::AnimGroupEventConfig*>*))((::PBYTE)hIl2Cpp + CLASS_2_49901C9FEC775635_METHOD_2_315B8B669D3ED55F_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_D56B7802D9F0C01D(::Class_1_4DC0F7F7ECA1595A* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4DC0F7F7ECA1595A*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_49901C9FEC775635_METHOD_2_D56B7802D9F0C01D_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_54522C5ACBF383F8(::Class_1_9BBDDCB5359C308C* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_9BBDDCB5359C308C*))((::PBYTE)hIl2Cpp + CLASS_2_49901C9FEC775635_METHOD_2_54522C5ACBF383F8_OFFSET))(this, a1);
	}

	::System::Void Method_2_054B8F7AF60506D5(::Class_1_9BBDDCB5359C308C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9BBDDCB5359C308C*))((::PBYTE)hIl2Cpp + CLASS_2_49901C9FEC775635_METHOD_2_054B8F7AF60506D5_OFFSET))(this, a1);
	}

	::System::Void Method_2_63C88B2CABF0B27F(::Class_0_16E4307DCC419505_551_Class_3_363670394F299996* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_551_Class_3_363670394F299996*))((::PBYTE)hIl2Cpp + CLASS_2_49901C9FEC775635_METHOD_2_63C88B2CABF0B27F_OFFSET))(this, a1);
	}

	::System::Void Method_2_63C88B2CABF0B27F_1(::Class_0_16E4307DCC419505_551_Class_3_363670394F299996* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_551_Class_3_363670394F299996*))((::PBYTE)hIl2Cpp + CLASS_2_49901C9FEC775635_METHOD_2_63C88B2CABF0B27F_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_21A9AD654A1AED5E(::System::String* a1, ::Class_0_16E4307DCC419505_551_Class_3_410EEB4A0F592FBB* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_0_16E4307DCC419505_551_Class_3_410EEB4A0F592FBB*))((::PBYTE)hIl2Cpp + CLASS_2_49901C9FEC775635_METHOD_2_21A9AD654A1AED5E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_FA3D6E45984D6807(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_49901C9FEC775635_METHOD_2_FA3D6E45984D6807_OFFSET))(this, a1);
	}

	::System::Void Method_2_633BD41FEBF1F191(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_49901C9FEC775635_METHOD_2_633BD41FEBF1F191_OFFSET))(this, a1);
	}

	::System::Void Method_2_E5B4932D0B2F5A1D(::System::String* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Boolean a5, ::System::Single a6, ::Il2CppArray<::RPG::GameCore::EffectDurationConfig*>* a7)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean, ::System::Single, ::Il2CppArray<::RPG::GameCore::EffectDurationConfig*>*))((::PBYTE)hIl2Cpp + CLASS_2_49901C9FEC775635_METHOD_2_E5B4932D0B2F5A1D_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void OnAnimatorMove(::UnityEngine::Animator* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + CLASS_2_49901C9FEC775635_ONANIMATORMOVE_OFFSET))(this, a1);
	}

	::System::Void Method_2_4D048E895C608EDE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_49901C9FEC775635_METHOD_2_4D048E895C608EDE_OFFSET))(this);
	}

	::System::Void Method_2_BD1B036B48B34B43(::UnityEngine::Animator* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + CLASS_2_49901C9FEC775635_METHOD_2_BD1B036B48B34B43_OFFSET))(this, a1);
	}

	::System::Void Method_2_61929A3103595552_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_49901C9FEC775635_METHOD_2_61929A3103595552_1_OFFSET))(this);
	}

	::System::Void Method_2_3B258437A86233AC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_49901C9FEC775635_METHOD_2_3B258437A86233AC_OFFSET))(this);
	}

	::System::Boolean Method_2_34DE533C673575D5(::System::Int32 a1, ::System::Int32& a2, ::System::Single& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_49901C9FEC775635_METHOD_2_34DE533C673575D5_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::WaitAnimStateResult Method_2_7051780D9CC9E4B9(::System::Int32 a1, ::System::Single a2, ::System::Int32 a3, ::System::UInt32 a4, ::System::Int32 a5, ::System::Int32 a6)
	{
		return ((::RPG::GameCore::WaitAnimStateResult(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Int32, ::System::UInt32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_49901C9FEC775635_METHOD_2_7051780D9CC9E4B9_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_7744894CEC41BF06()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_49901C9FEC775635_METHOD_2_7744894CEC41BF06_OFFSET))(this);
	}

	::System::Void Method_2_F9555880FBE027D5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_49901C9FEC775635_METHOD_2_F9555880FBE027D5_OFFSET))(this);
	}

	::System::Void Method_2_387BD0325F56DCC3(::Il2CppArray<::System::String*>* a1, ::Class_0_16E4307DCC419505_653* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::Class_0_16E4307DCC419505_653*))((::PBYTE)hIl2Cpp + CLASS_2_49901C9FEC775635_METHOD_2_387BD0325F56DCC3_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::GameWorld* get_WorldRef()
	{
		return ((::RPG::GameCore::GameWorld*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_49901C9FEC775635_GET_WORLDREF_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_2_B1445E8504415D4D()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_49901C9FEC775635_METHOD_2_B1445E8504415D4D_OFFSET))(this);
	}

	::RPG::GameCore::TaskContext* get_TaskContext()
	{
		return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_49901C9FEC775635_GET_TASKCONTEXT_OFFSET))(this);
	}

	::System::String* Method_2_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_49901C9FEC775635_METHOD_2_128774387667156B_OFFSET))(this);
	}

	::System::Int32 get_ReEntryCounter()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_49901C9FEC775635_GET_REENTRYCOUNTER_OFFSET))(this);
	}

	::System::Void set_ReEntryCounter(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_49901C9FEC775635_SET_REENTRYCOUNTER_OFFSET))(this, a1);
	}

	::System::Boolean get_AnimatorNotInit()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_49901C9FEC775635_GET_ANIMATORNOTINIT_OFFSET))(this);
	}

	::System::Void set_AnimatorNotInit(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_49901C9FEC775635_SET_ANIMATORNOTINIT_OFFSET))(this, a1);
	}

	::System::Boolean get_NeedResetEvent()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_49901C9FEC775635_GET_NEEDRESETEVENT_OFFSET))(this);
	}

	::System::Void set_NeedResetEvent(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_49901C9FEC775635_SET_NEEDRESETEVENT_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_551_Class_3_363670394F299996* get_OnAnimationStateChange()
	{
		return ((::Class_0_16E4307DCC419505_551_Class_3_363670394F299996*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_49901C9FEC775635_GET_ONANIMATIONSTATECHANGE_OFFSET))(this);
	}

	::System::Void Method_2_E9A7A364EF941996(::Class_0_16E4307DCC419505_551_Class_3_363670394F299996* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_551_Class_3_363670394F299996*))((::PBYTE)hIl2Cpp + CLASS_2_49901C9FEC775635_METHOD_2_E9A7A364EF941996_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_4DC0F7F7ECA1595A*>* get_DynamicAnimEventDataList()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_4DC0F7F7ECA1595A*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_49901C9FEC775635_GET_DYNAMICANIMEVENTDATALIST_OFFSET))(this);
	}

	::System::Void set_DynamicAnimEventDataList(::System::Collections::Generic::List_1<::Class_1_4DC0F7F7ECA1595A*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_4DC0F7F7ECA1595A*>*))((::PBYTE)hIl2Cpp + CLASS_2_49901C9FEC775635_SET_DYNAMICANIMEVENTDATALIST_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_0_16E4307DCC419505_551_Class_3_410EEB4A0F592FBB*>* get_OnAnimatorMoveCallbackMap()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_0_16E4307DCC419505_551_Class_3_410EEB4A0F592FBB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_49901C9FEC775635_GET_ONANIMATORMOVECALLBACKMAP_OFFSET))(this);
	}

	::System::Void Method_2_0C23E87E29F8936D(::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_0_16E4307DCC419505_551_Class_3_410EEB4A0F592FBB*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_0_16E4307DCC419505_551_Class_3_410EEB4A0F592FBB*>*))((::PBYTE)hIl2Cpp + CLASS_2_49901C9FEC775635_METHOD_2_0C23E87E29F8936D_OFFSET))(this, a1);
	}

	::System::Void ResetToDefault()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_49901C9FEC775635_RESETTODEFAULT_OFFSET))(this);
	}
};
