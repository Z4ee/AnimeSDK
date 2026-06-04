#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/WaitAnimStateResult.h"
#include "unitysdk/Struct_2_2B16FFFF87B43037.h"

class Class_0_16E4307DCC419505_405_Class_3_363670394F299996;
class Class_0_16E4307DCC419505_405_Class_3_410EEB4A0F592FBB;
class Class_0_16E4307DCC419505_504;
class Class_0_16E4307DCC419505_534;
class Class_1_38A5D85D4AE9F24D;
class Class_1_5F51D4049EA87B7B;
class Class_1_FB0847DAACA4F413;
class Class_1_FD7BA687A1A99180;
namespace RPG::GameCore { class AnimGroupEventConfig; }
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

#define CLASS_2_CB25D7A6FABF07EF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA525550)
#define CLASS_2_CB25D7A6FABF07EF_GET_ANIMATORMOVECALLBACKORDER_OFFSET UNITYSDK_OFFSET(0xA525420)
#define CLASS_2_CB25D7A6FABF07EF_GET_ANIMATORNOTINIT_OFFSET UNITYSDK_OFFSET(0xA526C60)
#define CLASS_2_CB25D7A6FABF07EF_GET_DYNAMICANIMEVENTDATALIST_OFFSET UNITYSDK_OFFSET(0xA526CC0)
#define CLASS_2_CB25D7A6FABF07EF_GET_ENABLEANIMATORMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xA525430)
#define CLASS_2_CB25D7A6FABF07EF_GET_NEEDRESETEVENT_OFFSET UNITYSDK_OFFSET(0xA526C80)
#define CLASS_2_CB25D7A6FABF07EF_GET_ONANIMATIONSTATECHANGE_OFFSET UNITYSDK_OFFSET(0xA526CA0)
#define CLASS_2_CB25D7A6FABF07EF_GET_ONANIMATORMOVECALLBACKMAP_OFFSET UNITYSDK_OFFSET(0xA526CE0)
#define CLASS_2_CB25D7A6FABF07EF_GET_REENTRYCOUNTER_OFFSET UNITYSDK_OFFSET(0xA526C40)
#define CLASS_2_CB25D7A6FABF07EF_GET_TASKCONTEXT_OFFSET UNITYSDK_OFFSET(0xA526C10)
#define CLASS_2_CB25D7A6FABF07EF_GET_WORLDREF_OFFSET UNITYSDK_OFFSET(0xA526BE0)
#define CLASS_2_CB25D7A6FABF07EF_METHOD_2_0C15F99EE3634774_OFFSET UNITYSDK_OFFSET(0xA525D60)
#define CLASS_2_CB25D7A6FABF07EF_METHOD_2_0C23E87E29F8936D_OFFSET UNITYSDK_OFFSET(0xA526CF0)
#define CLASS_2_CB25D7A6FABF07EF_METHOD_2_128774387667156B_OFFSET UNITYSDK_OFFSET(0xA526C20)
#define CLASS_2_CB25D7A6FABF07EF_METHOD_2_21A9AD654A1AED5E_OFFSET UNITYSDK_OFFSET(0xA526490)
#define CLASS_2_CB25D7A6FABF07EF_METHOD_2_26C10505EC7B83BF_OFFSET UNITYSDK_OFFSET(0xA525EE0)
#define CLASS_2_CB25D7A6FABF07EF_METHOD_2_34DE533C673575D5_OFFSET UNITYSDK_OFFSET(0xA5269B0)
#define CLASS_2_CB25D7A6FABF07EF_METHOD_2_387BD0325F56DCC3_OFFSET UNITYSDK_OFFSET(0xA526B40)
#define CLASS_2_CB25D7A6FABF07EF_METHOD_2_46688F780E37E771_OFFSET UNITYSDK_OFFSET(0xA526050)
#define CLASS_2_CB25D7A6FABF07EF_METHOD_2_4D048E895C608EDE_OFFSET UNITYSDK_OFFSET(0xA526900)
#define CLASS_2_CB25D7A6FABF07EF_METHOD_2_54522C5ACBF383F8_OFFSET UNITYSDK_OFFSET(0xA5262F0)
#define CLASS_2_CB25D7A6FABF07EF_METHOD_2_62593EE2FE331D20_OFFSET UNITYSDK_OFFSET(0xA525880)
#define CLASS_2_CB25D7A6FABF07EF_METHOD_2_62D1AEE67422180F_OFFSET UNITYSDK_OFFSET(0xA5260C0)
#define CLASS_2_CB25D7A6FABF07EF_METHOD_2_633BD41FEBF1F191_OFFSET UNITYSDK_OFFSET(0xA526670)
#define CLASS_2_CB25D7A6FABF07EF_METHOD_2_63C88B2CABF0B27F_1_OFFSET UNITYSDK_OFFSET(0xA526420)
#define CLASS_2_CB25D7A6FABF07EF_METHOD_2_63C88B2CABF0B27F_OFFSET UNITYSDK_OFFSET(0xA5263B0)
#define CLASS_2_CB25D7A6FABF07EF_METHOD_2_63D701A0482E1BB9_OFFSET UNITYSDK_OFFSET(0xA5261F0)
#define CLASS_2_CB25D7A6FABF07EF_METHOD_2_7051780D9CC9E4B9_OFFSET UNITYSDK_OFFSET(0xA526A30)
#define CLASS_2_CB25D7A6FABF07EF_METHOD_2_7744894CEC41BF06_OFFSET UNITYSDK_OFFSET(0xA526AF0)
#define CLASS_2_CB25D7A6FABF07EF_METHOD_2_8718F77D90797FC4_OFFSET UNITYSDK_OFFSET(0xA5266D0)
#define CLASS_2_CB25D7A6FABF07EF_METHOD_2_8CE5B241A0263BC9_OFFSET UNITYSDK_OFFSET(0xA525C80)
#define CLASS_2_CB25D7A6FABF07EF_METHOD_2_9D44CA0820FE38B7_OFFSET UNITYSDK_OFFSET(0xA526350)
#define CLASS_2_CB25D7A6FABF07EF_METHOD_2_B1445E8504415D4D_OFFSET UNITYSDK_OFFSET(0xA526C00)
#define CLASS_2_CB25D7A6FABF07EF_METHOD_2_C69F3CFF442210F0_OFFSET UNITYSDK_OFFSET(0xA525360)
#define CLASS_2_CB25D7A6FABF07EF_METHOD_2_D41F2EAAA87E2BFD_OFFSET UNITYSDK_OFFSET(0xA525E90)
#define CLASS_2_CB25D7A6FABF07EF_METHOD_2_D56B7802D9F0C01D_OFFSET UNITYSDK_OFFSET(0xA526280)
#define CLASS_2_CB25D7A6FABF07EF_METHOD_2_E968CB1D462997C6_OFFSET UNITYSDK_OFFSET(0xA526890)
#define CLASS_2_CB25D7A6FABF07EF_METHOD_2_E9A7A364EF941996_OFFSET UNITYSDK_OFFSET(0xA526CB0)
#define CLASS_2_CB25D7A6FABF07EF_METHOD_2_F9555880FBE027D5_OFFSET UNITYSDK_OFFSET(0xA525930)
#define CLASS_2_CB25D7A6FABF07EF_METHOD_2_FA3D6E45984D6807_OFFSET UNITYSDK_OFFSET(0xA5265E0)
#define CLASS_2_CB25D7A6FABF07EF_ONANIMATORMOVE_OFFSET UNITYSDK_OFFSET(0xA5267C0)
#define CLASS_2_CB25D7A6FABF07EF_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0xA5258D0)
#define CLASS_2_CB25D7A6FABF07EF_ONMODELARTUNLOADED_OFFSET UNITYSDK_OFFSET(0xA525B80)
#define CLASS_2_CB25D7A6FABF07EF_ONMODELROOTLOADED_OFFSET UNITYSDK_OFFSET(0xA5256C0)
#define CLASS_2_CB25D7A6FABF07EF_ONMODELROOTUNLOADED_OFFSET UNITYSDK_OFFSET(0xA525750)
#define CLASS_2_CB25D7A6FABF07EF_RESETTODEFAULT_OFFSET UNITYSDK_OFFSET(0xA526D00)
#define CLASS_2_CB25D7A6FABF07EF_SET_ANIMATORNOTINIT_OFFSET UNITYSDK_OFFSET(0xA526C70)
#define CLASS_2_CB25D7A6FABF07EF_SET_DYNAMICANIMEVENTDATALIST_OFFSET UNITYSDK_OFFSET(0xA526CD0)
#define CLASS_2_CB25D7A6FABF07EF_SET_NEEDRESETEVENT_OFFSET UNITYSDK_OFFSET(0xA526C90)
#define CLASS_2_CB25D7A6FABF07EF_SET_REENTRYCOUNTER_OFFSET UNITYSDK_OFFSET(0xA526C50)
#define CLASS_2_CB25D7A6FABF07EF__CTOR_OFFSET UNITYSDK_OFFSET(0xA525440)
#define CLASS_2_CB25D7A6FABF07EF__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0xA525470)
#define CLASS_2_CB25D7A6FABF07EF___IFIXBASEPROXY__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0xA526D80)

inline static constexpr unsigned int Class_2_CB25D7A6FABF07EF_TypeDefinitionIndex = 53389;

class Class_2_CB25D7A6FABF07EF : public ::RPG::GameCore::GameComponentBase
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_0_16E4307DCC419505_405_Class_3_410EEB4A0F592FBB*>* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::Class_0_16E4307DCC419505_504* Field_2_2; // 0x28
	::Class_1_FD7BA687A1A99180* Field_2_3; // 0x30
	::UnityEngine::GameObject* Field_2_4; // 0x38
	::System::Collections::Generic::List_1<::Class_1_38A5D85D4AE9F24D*>* Field_2_5; // 0x40
	::Struct_2_2B16FFFF87B43037 Field_2_6; // 0x48
	::Class_0_16E4307DCC419505_405_Class_3_363670394F299996* Field_2_7; // 0x58
	::System::Boolean Field_2_8; // 0x60
	::System::Boolean Field_2_9; // 0x61
	::System::Boolean Field_2_10; // 0x62
	::System::Boolean Field_2_11; // 0x63
	::System::Int32 Field_2_12; // 0x64
	::System::Boolean Field_2_13; // 0x68
	::System::Boolean _EnableAnimatorMoveCallback_k__BackingField; // 0x69

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB25D7A6FABF07EF__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_C69F3CFF442210F0(::System::String* a1, ::System::Single a2, ::System::Single a3, ::System::Action_2<::Class_1_5F51D4049EA87B7B*, ::System::Object*>* a4, ::System::Object* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::Single, ::System::Action_2<::Class_1_5F51D4049EA87B7B*, ::System::Object*>*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_CB25D7A6FABF07EF_METHOD_2_C69F3CFF442210F0_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Int32 get_AnimatorMoveCallbackOrder()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB25D7A6FABF07EF_GET_ANIMATORMOVECALLBACKORDER_OFFSET))(this);
	}

	::System::Boolean get_EnableAnimatorMoveCallback()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB25D7A6FABF07EF_GET_ENABLEANIMATORMOVECALLBACK_OFFSET))(this);
	}

	::System::Void _OnInitOwnerRef()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB25D7A6FABF07EF__ONINITOWNERREF_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB25D7A6FABF07EF_DISPOSE_OFFSET))(this);
	}

	::System::Void OnModelRootLoaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB25D7A6FABF07EF_ONMODELROOTLOADED_OFFSET))(this);
	}

	::System::Void OnModelRootUnloaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB25D7A6FABF07EF_ONMODELROOTUNLOADED_OFFSET))(this);
	}

	::System::Void OnModelArtLoaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB25D7A6FABF07EF_ONMODELARTLOADED_OFFSET))(this);
	}

	::System::Void OnModelArtUnloaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB25D7A6FABF07EF_ONMODELARTUNLOADED_OFFSET))(this);
	}

	::System::Void Method_2_8CE5B241A0263BC9(::Il2CppArray<::System::String*>* a1, ::Il2CppArray<::System::String*>* a2, ::Class_0_16E4307DCC419505_504* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*, ::Class_0_16E4307DCC419505_504*))((::PBYTE)hIl2Cpp + CLASS_2_CB25D7A6FABF07EF_METHOD_2_8CE5B241A0263BC9_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_0C15F99EE3634774(::Il2CppArray<::System::String*>* a1, ::Il2CppArray<::RPG::GameCore::SingleAnimEventConfig*>* a2, ::Il2CppArray<::RPG::GameCore::SingleAnimBehaviourEvent*>* a3, ::Il2CppArray<::RPG::GameCore::AnimGroupEventConfig*>* a4, ::Il2CppArray<::System::String*>* a5, ::Class_0_16E4307DCC419505_504* a6)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::RPG::GameCore::SingleAnimEventConfig*>*, ::Il2CppArray<::RPG::GameCore::SingleAnimBehaviourEvent*>*, ::Il2CppArray<::RPG::GameCore::AnimGroupEventConfig*>*, ::Il2CppArray<::System::String*>*, ::Class_0_16E4307DCC419505_504*))((::PBYTE)hIl2Cpp + CLASS_2_CB25D7A6FABF07EF_METHOD_2_0C15F99EE3634774_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::Class_0_16E4307DCC419505_534* Method_2_D41F2EAAA87E2BFD()
	{
		return ((::Class_0_16E4307DCC419505_534*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB25D7A6FABF07EF_METHOD_2_D41F2EAAA87E2BFD_OFFSET))(this);
	}

	::System::Void Method_2_26C10505EC7B83BF(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_CB25D7A6FABF07EF_METHOD_2_26C10505EC7B83BF_OFFSET))(this, a1);
	}

	::System::Void Method_2_46688F780E37E771(::Il2CppArray<::System::String*>* a1, ::Il2CppArray<::System::String*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_CB25D7A6FABF07EF_METHOD_2_46688F780E37E771_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_62593EE2FE331D20()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB25D7A6FABF07EF_METHOD_2_62593EE2FE331D20_OFFSET))(this);
	}

	::Class_1_38A5D85D4AE9F24D* Method_2_62D1AEE67422180F(::RPG::GameCore::TaskContext* a1, ::System::String* a2)
	{
		return ((::Class_1_38A5D85D4AE9F24D*(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_CB25D7A6FABF07EF_METHOD_2_62D1AEE67422180F_OFFSET))(this, a1, a2);
	}

	::Class_1_38A5D85D4AE9F24D* Method_2_63D701A0482E1BB9(::RPG::GameCore::TaskContext* a1, ::Il2CppArray<::RPG::GameCore::SingleAnimEventConfig*>* a2, ::Il2CppArray<::RPG::GameCore::SingleAnimBehaviourEvent*>* a3, ::Il2CppArray<::RPG::GameCore::AnimGroupEventConfig*>* a4)
	{
		return ((::Class_1_38A5D85D4AE9F24D*(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Il2CppArray<::RPG::GameCore::SingleAnimEventConfig*>*, ::Il2CppArray<::RPG::GameCore::SingleAnimBehaviourEvent*>*, ::Il2CppArray<::RPG::GameCore::AnimGroupEventConfig*>*))((::PBYTE)hIl2Cpp + CLASS_2_CB25D7A6FABF07EF_METHOD_2_63D701A0482E1BB9_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_D56B7802D9F0C01D(::Class_1_38A5D85D4AE9F24D* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_38A5D85D4AE9F24D*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CB25D7A6FABF07EF_METHOD_2_D56B7802D9F0C01D_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_54522C5ACBF383F8(::Class_1_FB0847DAACA4F413* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FB0847DAACA4F413*))((::PBYTE)hIl2Cpp + CLASS_2_CB25D7A6FABF07EF_METHOD_2_54522C5ACBF383F8_OFFSET))(this, a1);
	}

	::System::Void Method_2_9D44CA0820FE38B7(::Class_1_FB0847DAACA4F413* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FB0847DAACA4F413*))((::PBYTE)hIl2Cpp + CLASS_2_CB25D7A6FABF07EF_METHOD_2_9D44CA0820FE38B7_OFFSET))(this, a1);
	}

	::System::Void Method_2_63C88B2CABF0B27F(::Class_0_16E4307DCC419505_405_Class_3_363670394F299996* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_405_Class_3_363670394F299996*))((::PBYTE)hIl2Cpp + CLASS_2_CB25D7A6FABF07EF_METHOD_2_63C88B2CABF0B27F_OFFSET))(this, a1);
	}

	::System::Void Method_2_63C88B2CABF0B27F_1(::Class_0_16E4307DCC419505_405_Class_3_363670394F299996* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_405_Class_3_363670394F299996*))((::PBYTE)hIl2Cpp + CLASS_2_CB25D7A6FABF07EF_METHOD_2_63C88B2CABF0B27F_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_21A9AD654A1AED5E(::System::String* a1, ::Class_0_16E4307DCC419505_405_Class_3_410EEB4A0F592FBB* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_0_16E4307DCC419505_405_Class_3_410EEB4A0F592FBB*))((::PBYTE)hIl2Cpp + CLASS_2_CB25D7A6FABF07EF_METHOD_2_21A9AD654A1AED5E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_FA3D6E45984D6807(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_CB25D7A6FABF07EF_METHOD_2_FA3D6E45984D6807_OFFSET))(this, a1);
	}

	::System::Void Method_2_633BD41FEBF1F191(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_CB25D7A6FABF07EF_METHOD_2_633BD41FEBF1F191_OFFSET))(this, a1);
	}

	::System::Void Method_2_8718F77D90797FC4(::System::String* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Boolean a5, ::System::Single a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CB25D7A6FABF07EF_METHOD_2_8718F77D90797FC4_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void OnAnimatorMove(::UnityEngine::Animator* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + CLASS_2_CB25D7A6FABF07EF_ONANIMATORMOVE_OFFSET))(this, a1);
	}

	::System::Void Method_2_4D048E895C608EDE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB25D7A6FABF07EF_METHOD_2_4D048E895C608EDE_OFFSET))(this);
	}

	::System::Void Method_2_E968CB1D462997C6(::UnityEngine::Animator* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + CLASS_2_CB25D7A6FABF07EF_METHOD_2_E968CB1D462997C6_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_34DE533C673575D5(::System::Int32 a1, ::System::Int32& a2, ::System::Single& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_CB25D7A6FABF07EF_METHOD_2_34DE533C673575D5_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::WaitAnimStateResult Method_2_7051780D9CC9E4B9(::System::Int32 a1, ::System::Single a2, ::System::Int32 a3, ::System::UInt32 a4, ::System::Int32 a5, ::System::Int32 a6)
	{
		return ((::RPG::GameCore::WaitAnimStateResult(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Int32, ::System::UInt32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_CB25D7A6FABF07EF_METHOD_2_7051780D9CC9E4B9_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_7744894CEC41BF06()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB25D7A6FABF07EF_METHOD_2_7744894CEC41BF06_OFFSET))(this);
	}

	::System::Void Method_2_F9555880FBE027D5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB25D7A6FABF07EF_METHOD_2_F9555880FBE027D5_OFFSET))(this);
	}

	::System::Void Method_2_387BD0325F56DCC3(::Il2CppArray<::System::String*>* a1, ::Class_0_16E4307DCC419505_504* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::Class_0_16E4307DCC419505_504*))((::PBYTE)hIl2Cpp + CLASS_2_CB25D7A6FABF07EF_METHOD_2_387BD0325F56DCC3_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::GameWorld* get_WorldRef()
	{
		return ((::RPG::GameCore::GameWorld*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB25D7A6FABF07EF_GET_WORLDREF_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_2_B1445E8504415D4D()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB25D7A6FABF07EF_METHOD_2_B1445E8504415D4D_OFFSET))(this);
	}

	::RPG::GameCore::TaskContext* get_TaskContext()
	{
		return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB25D7A6FABF07EF_GET_TASKCONTEXT_OFFSET))(this);
	}

	::System::String* Method_2_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB25D7A6FABF07EF_METHOD_2_128774387667156B_OFFSET))(this);
	}

	::System::Int32 get_ReEntryCounter()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB25D7A6FABF07EF_GET_REENTRYCOUNTER_OFFSET))(this);
	}

	::System::Void set_ReEntryCounter(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_CB25D7A6FABF07EF_SET_REENTRYCOUNTER_OFFSET))(this, a1);
	}

	::System::Boolean get_AnimatorNotInit()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB25D7A6FABF07EF_GET_ANIMATORNOTINIT_OFFSET))(this);
	}

	::System::Void set_AnimatorNotInit(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CB25D7A6FABF07EF_SET_ANIMATORNOTINIT_OFFSET))(this, a1);
	}

	::System::Boolean get_NeedResetEvent()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB25D7A6FABF07EF_GET_NEEDRESETEVENT_OFFSET))(this);
	}

	::System::Void set_NeedResetEvent(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CB25D7A6FABF07EF_SET_NEEDRESETEVENT_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_405_Class_3_363670394F299996* get_OnAnimationStateChange()
	{
		return ((::Class_0_16E4307DCC419505_405_Class_3_363670394F299996*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB25D7A6FABF07EF_GET_ONANIMATIONSTATECHANGE_OFFSET))(this);
	}

	::System::Void Method_2_E9A7A364EF941996(::Class_0_16E4307DCC419505_405_Class_3_363670394F299996* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_405_Class_3_363670394F299996*))((::PBYTE)hIl2Cpp + CLASS_2_CB25D7A6FABF07EF_METHOD_2_E9A7A364EF941996_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_38A5D85D4AE9F24D*>* get_DynamicAnimEventDataList()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_38A5D85D4AE9F24D*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB25D7A6FABF07EF_GET_DYNAMICANIMEVENTDATALIST_OFFSET))(this);
	}

	::System::Void set_DynamicAnimEventDataList(::System::Collections::Generic::List_1<::Class_1_38A5D85D4AE9F24D*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_38A5D85D4AE9F24D*>*))((::PBYTE)hIl2Cpp + CLASS_2_CB25D7A6FABF07EF_SET_DYNAMICANIMEVENTDATALIST_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_0_16E4307DCC419505_405_Class_3_410EEB4A0F592FBB*>* get_OnAnimatorMoveCallbackMap()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_0_16E4307DCC419505_405_Class_3_410EEB4A0F592FBB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB25D7A6FABF07EF_GET_ONANIMATORMOVECALLBACKMAP_OFFSET))(this);
	}

	::System::Void Method_2_0C23E87E29F8936D(::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_0_16E4307DCC419505_405_Class_3_410EEB4A0F592FBB*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_0_16E4307DCC419505_405_Class_3_410EEB4A0F592FBB*>*))((::PBYTE)hIl2Cpp + CLASS_2_CB25D7A6FABF07EF_METHOD_2_0C23E87E29F8936D_OFFSET))(this, a1);
	}

	::System::Void ResetToDefault()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB25D7A6FABF07EF_RESETTODEFAULT_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnInitOwnerRef()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB25D7A6FABF07EF___IFIXBASEPROXY__ONINITOWNERREF_OFFSET))(this);
	}
};
