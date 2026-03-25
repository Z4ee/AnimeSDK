#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/WaitAnimStateResult.h"
#include "unitysdk/Struct_2_2B16FFFF87B43037.h"

class Class_0_16E4307DCC419505_379_Class_3_363670394F299996;
class Class_0_16E4307DCC419505_379_Class_3_410EEB4A0F592FBB;
class Class_0_16E4307DCC419505_402;
class Class_0_16E4307DCC419505_442;
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

#define CLASS_2_705B862E649BF345_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8BB9A90)
#define CLASS_2_705B862E649BF345_GET_ANIMATORMOVECALLBACKORDER_OFFSET UNITYSDK_OFFSET(0x8BB9960)
#define CLASS_2_705B862E649BF345_GET_ANIMATORNOTINIT_OFFSET UNITYSDK_OFFSET(0x8BBB0C0)
#define CLASS_2_705B862E649BF345_GET_DYNAMICANIMEVENTDATALIST_OFFSET UNITYSDK_OFFSET(0x8BBB120)
#define CLASS_2_705B862E649BF345_GET_ENABLEANIMATORMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x8BB9970)
#define CLASS_2_705B862E649BF345_GET_NEEDRESETEVENT_OFFSET UNITYSDK_OFFSET(0x8BBB0E0)
#define CLASS_2_705B862E649BF345_GET_ONANIMATIONSTATECHANGE_OFFSET UNITYSDK_OFFSET(0x8BBB100)
#define CLASS_2_705B862E649BF345_GET_ONANIMATORMOVECALLBACKMAP_OFFSET UNITYSDK_OFFSET(0x8BBB140)
#define CLASS_2_705B862E649BF345_GET_REENTRYCOUNTER_OFFSET UNITYSDK_OFFSET(0x8BBB0A0)
#define CLASS_2_705B862E649BF345_GET_TASKCONTEXT_OFFSET UNITYSDK_OFFSET(0x8BBB070)
#define CLASS_2_705B862E649BF345_GET_WORLDREF_OFFSET UNITYSDK_OFFSET(0x8BBB040)
#define CLASS_2_705B862E649BF345_METHOD_2_0C23E87E29F8936D_OFFSET UNITYSDK_OFFSET(0x8BBB150)
#define CLASS_2_705B862E649BF345_METHOD_2_128774387667156B_OFFSET UNITYSDK_OFFSET(0x8BBB080)
#define CLASS_2_705B862E649BF345_METHOD_2_26C10505EC7B83BF_OFFSET UNITYSDK_OFFSET(0x8BBA370)
#define CLASS_2_705B862E649BF345_METHOD_2_30C4AAF639F2724D_OFFSET UNITYSDK_OFFSET(0x8BBAB20)
#define CLASS_2_705B862E649BF345_METHOD_2_34DE533C673575D5_OFFSET UNITYSDK_OFFSET(0x8BBAE10)
#define CLASS_2_705B862E649BF345_METHOD_2_387BD0325F56DCC3_OFFSET UNITYSDK_OFFSET(0x8BBAFA0)
#define CLASS_2_705B862E649BF345_METHOD_2_49085A3FC0F13F5E_OFFSET UNITYSDK_OFFSET(0x8BBAAC0)
#define CLASS_2_705B862E649BF345_METHOD_2_4C2ACACD89F4EF1A_OFFSET UNITYSDK_OFFSET(0x8BBAA50)
#define CLASS_2_705B862E649BF345_METHOD_2_4D048E895C608EDE_OFFSET UNITYSDK_OFFSET(0x8BBAD50)
#define CLASS_2_705B862E649BF345_METHOD_2_62593EE2FE331D20_OFFSET UNITYSDK_OFFSET(0x8BB9D10)
#define CLASS_2_705B862E649BF345_METHOD_2_62D1AEE67422180F_OFFSET UNITYSDK_OFFSET(0x8BBA550)
#define CLASS_2_705B862E649BF345_METHOD_2_63C88B2CABF0B27F_1_OFFSET UNITYSDK_OFFSET(0x8BBA8B0)
#define CLASS_2_705B862E649BF345_METHOD_2_63C88B2CABF0B27F_OFFSET UNITYSDK_OFFSET(0x8BBA840)
#define CLASS_2_705B862E649BF345_METHOD_2_63D701A0482E1BB9_OFFSET UNITYSDK_OFFSET(0x8BBA680)
#define CLASS_2_705B862E649BF345_METHOD_2_7051780D9CC9E4B9_OFFSET UNITYSDK_OFFSET(0x8BBAE90)
#define CLASS_2_705B862E649BF345_METHOD_2_72F52C4CD2BD27B9_OFFSET UNITYSDK_OFFSET(0x8BB98A0)
#define CLASS_2_705B862E649BF345_METHOD_2_7744894CEC41BF06_OFFSET UNITYSDK_OFFSET(0x8BBAF50)
#define CLASS_2_705B862E649BF345_METHOD_2_778C10BAE482CBEA_OFFSET UNITYSDK_OFFSET(0x8BBA920)
#define CLASS_2_705B862E649BF345_METHOD_2_8FD360E1784D2D63_OFFSET UNITYSDK_OFFSET(0x8BBA4E0)
#define CLASS_2_705B862E649BF345_METHOD_2_952453844D88CADD_OFFSET UNITYSDK_OFFSET(0x8BBA7E0)
#define CLASS_2_705B862E649BF345_METHOD_2_A1B83E3E8D860C1E_OFFSET UNITYSDK_OFFSET(0x8BBA1F0)
#define CLASS_2_705B862E649BF345_METHOD_2_B1445E8504415D4D_OFFSET UNITYSDK_OFFSET(0x8BBB060)
#define CLASS_2_705B862E649BF345_METHOD_2_B7C85BF58D51F4EC_OFFSET UNITYSDK_OFFSET(0x8BBA780)
#define CLASS_2_705B862E649BF345_METHOD_2_C2F2CA6086D7009B_OFFSET UNITYSDK_OFFSET(0x8BBA110)
#define CLASS_2_705B862E649BF345_METHOD_2_D41F2EAAA87E2BFD_OFFSET UNITYSDK_OFFSET(0x8BBA320)
#define CLASS_2_705B862E649BF345_METHOD_2_D56B7802D9F0C01D_OFFSET UNITYSDK_OFFSET(0x8BBA710)
#define CLASS_2_705B862E649BF345_METHOD_2_E968CB1D462997C6_OFFSET UNITYSDK_OFFSET(0x8BBACE0)
#define CLASS_2_705B862E649BF345_METHOD_2_E9A7A364EF941996_OFFSET UNITYSDK_OFFSET(0x8BBB110)
#define CLASS_2_705B862E649BF345_METHOD_2_F9555880FBE027D5_OFFSET UNITYSDK_OFFSET(0x8BB9DC0)
#define CLASS_2_705B862E649BF345_ONANIMATORMOVE_OFFSET UNITYSDK_OFFSET(0x8BBAC10)
#define CLASS_2_705B862E649BF345_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0x8BB9D60)
#define CLASS_2_705B862E649BF345_ONMODELARTUNLOADED_OFFSET UNITYSDK_OFFSET(0x8BBA010)
#define CLASS_2_705B862E649BF345_ONMODELROOTLOADED_OFFSET UNITYSDK_OFFSET(0x8BB9B50)
#define CLASS_2_705B862E649BF345_ONMODELROOTUNLOADED_OFFSET UNITYSDK_OFFSET(0x8BB9BE0)
#define CLASS_2_705B862E649BF345_SET_ANIMATORNOTINIT_OFFSET UNITYSDK_OFFSET(0x8BBB0D0)
#define CLASS_2_705B862E649BF345_SET_DYNAMICANIMEVENTDATALIST_OFFSET UNITYSDK_OFFSET(0x8BBB130)
#define CLASS_2_705B862E649BF345_SET_NEEDRESETEVENT_OFFSET UNITYSDK_OFFSET(0x8BBB0F0)
#define CLASS_2_705B862E649BF345_SET_REENTRYCOUNTER_OFFSET UNITYSDK_OFFSET(0x8BBB0B0)
#define CLASS_2_705B862E649BF345__CTOR_OFFSET UNITYSDK_OFFSET(0x8BB9980)
#define CLASS_2_705B862E649BF345__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0x8BB99B0)
#define CLASS_2_705B862E649BF345___IFIXBASEPROXY__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0x8BBB160)

inline static constexpr unsigned int Class_2_705B862E649BF345_TypeDefinitionIndex = 46028;

class Class_2_705B862E649BF345 : public ::RPG::GameCore::GameComponentBase
{
public:
	::UnityEngine::GameObject* Field_2_8; // 0x18
	::Class_0_16E4307DCC419505_379_Class_3_363670394F299996* Field_2_1; // 0x20
	::RPG::GameCore::TaskContext* Field_2_7; // 0x28
	::Struct_2_2B16FFFF87B43037 Field_2_11; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_0_16E4307DCC419505_379_Class_3_410EEB4A0F592FBB*>* Field_2_2; // 0x40
	::Class_1_FD7BA687A1A99180* Field_2_6; // 0x48
	::System::Collections::Generic::List_1<::Class_1_38A5D85D4AE9F24D*>* Field_2_14; // 0x50
	::Class_0_16E4307DCC419505_402* Field_2_9; // 0x58
	::System::Boolean Field_2_4; // 0x60
	::System::Boolean Field_2_10; // 0x61
	::System::Boolean Field_2_13; // 0x62
	::System::Boolean _EnableAnimatorMoveCallback_k__BackingField; // 0x63
	::System::Int32 Field_2_3; // 0x64
	::System::Boolean Field_2_5; // 0x68
	::System::Boolean Field_2_12; // 0x69

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_705B862E649BF345__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_72F52C4CD2BD27B9(::System::String* a1, ::System::Single a2, ::System::Single a3, ::System::Action_2<::Class_1_5F51D4049EA87B7B*, ::System::Object*>* a4, ::System::Object* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::Single, ::System::Action_2<::Class_1_5F51D4049EA87B7B*, ::System::Object*>*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_705B862E649BF345_METHOD_2_72F52C4CD2BD27B9_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Int32 get_AnimatorMoveCallbackOrder()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_705B862E649BF345_GET_ANIMATORMOVECALLBACKORDER_OFFSET))(this);
	}

	::System::Boolean get_EnableAnimatorMoveCallback()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_705B862E649BF345_GET_ENABLEANIMATORMOVECALLBACK_OFFSET))(this);
	}

	::System::Void _OnInitOwnerRef()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_705B862E649BF345__ONINITOWNERREF_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_705B862E649BF345_DISPOSE_OFFSET))(this);
	}

	::System::Void OnModelRootLoaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_705B862E649BF345_ONMODELROOTLOADED_OFFSET))(this);
	}

	::System::Void OnModelRootUnloaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_705B862E649BF345_ONMODELROOTUNLOADED_OFFSET))(this);
	}

	::System::Void OnModelArtLoaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_705B862E649BF345_ONMODELARTLOADED_OFFSET))(this);
	}

	::System::Void OnModelArtUnloaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_705B862E649BF345_ONMODELARTUNLOADED_OFFSET))(this);
	}

	::System::Void Method_2_C2F2CA6086D7009B(::Il2CppArray<::System::String*>* a1, ::Il2CppArray<::System::String*>* a2, ::Class_0_16E4307DCC419505_402* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*, ::Class_0_16E4307DCC419505_402*))((::PBYTE)hIl2Cpp + CLASS_2_705B862E649BF345_METHOD_2_C2F2CA6086D7009B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_A1B83E3E8D860C1E(::Il2CppArray<::System::String*>* a1, ::Il2CppArray<::RPG::GameCore::SingleAnimEventConfig*>* a2, ::Il2CppArray<::RPG::GameCore::SingleAnimBehaviourEvent*>* a3, ::Il2CppArray<::RPG::GameCore::AnimGroupEventConfig*>* a4, ::Il2CppArray<::System::String*>* a5, ::Class_0_16E4307DCC419505_402* a6)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::RPG::GameCore::SingleAnimEventConfig*>*, ::Il2CppArray<::RPG::GameCore::SingleAnimBehaviourEvent*>*, ::Il2CppArray<::RPG::GameCore::AnimGroupEventConfig*>*, ::Il2CppArray<::System::String*>*, ::Class_0_16E4307DCC419505_402*))((::PBYTE)hIl2Cpp + CLASS_2_705B862E649BF345_METHOD_2_A1B83E3E8D860C1E_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::Class_0_16E4307DCC419505_442* Method_2_D41F2EAAA87E2BFD()
	{
		return ((::Class_0_16E4307DCC419505_442*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_705B862E649BF345_METHOD_2_D41F2EAAA87E2BFD_OFFSET))(this);
	}

	::System::Void Method_2_26C10505EC7B83BF(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_705B862E649BF345_METHOD_2_26C10505EC7B83BF_OFFSET))(this, a1);
	}

	::System::Void Method_2_8FD360E1784D2D63(::Il2CppArray<::System::String*>* a1, ::Il2CppArray<::System::String*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_705B862E649BF345_METHOD_2_8FD360E1784D2D63_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_62593EE2FE331D20()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_705B862E649BF345_METHOD_2_62593EE2FE331D20_OFFSET))(this);
	}

	::Class_1_38A5D85D4AE9F24D* Method_2_62D1AEE67422180F(::RPG::GameCore::TaskContext* a1, ::System::String* a2)
	{
		return ((::Class_1_38A5D85D4AE9F24D*(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_705B862E649BF345_METHOD_2_62D1AEE67422180F_OFFSET))(this, a1, a2);
	}

	::Class_1_38A5D85D4AE9F24D* Method_2_63D701A0482E1BB9(::RPG::GameCore::TaskContext* a1, ::Il2CppArray<::RPG::GameCore::SingleAnimEventConfig*>* a2, ::Il2CppArray<::RPG::GameCore::SingleAnimBehaviourEvent*>* a3, ::Il2CppArray<::RPG::GameCore::AnimGroupEventConfig*>* a4)
	{
		return ((::Class_1_38A5D85D4AE9F24D*(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Il2CppArray<::RPG::GameCore::SingleAnimEventConfig*>*, ::Il2CppArray<::RPG::GameCore::SingleAnimBehaviourEvent*>*, ::Il2CppArray<::RPG::GameCore::AnimGroupEventConfig*>*))((::PBYTE)hIl2Cpp + CLASS_2_705B862E649BF345_METHOD_2_63D701A0482E1BB9_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_D56B7802D9F0C01D(::Class_1_38A5D85D4AE9F24D* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_38A5D85D4AE9F24D*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_705B862E649BF345_METHOD_2_D56B7802D9F0C01D_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_B7C85BF58D51F4EC(::Class_1_FB0847DAACA4F413* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FB0847DAACA4F413*))((::PBYTE)hIl2Cpp + CLASS_2_705B862E649BF345_METHOD_2_B7C85BF58D51F4EC_OFFSET))(this, a1);
	}

	::System::Void Method_2_952453844D88CADD(::Class_1_FB0847DAACA4F413* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FB0847DAACA4F413*))((::PBYTE)hIl2Cpp + CLASS_2_705B862E649BF345_METHOD_2_952453844D88CADD_OFFSET))(this, a1);
	}

	::System::Void Method_2_63C88B2CABF0B27F(::Class_0_16E4307DCC419505_379_Class_3_363670394F299996* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_379_Class_3_363670394F299996*))((::PBYTE)hIl2Cpp + CLASS_2_705B862E649BF345_METHOD_2_63C88B2CABF0B27F_OFFSET))(this, a1);
	}

	::System::Void Method_2_63C88B2CABF0B27F_1(::Class_0_16E4307DCC419505_379_Class_3_363670394F299996* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_379_Class_3_363670394F299996*))((::PBYTE)hIl2Cpp + CLASS_2_705B862E649BF345_METHOD_2_63C88B2CABF0B27F_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_778C10BAE482CBEA(::System::String* a1, ::Class_0_16E4307DCC419505_379_Class_3_410EEB4A0F592FBB* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_0_16E4307DCC419505_379_Class_3_410EEB4A0F592FBB*))((::PBYTE)hIl2Cpp + CLASS_2_705B862E649BF345_METHOD_2_778C10BAE482CBEA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4C2ACACD89F4EF1A(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_705B862E649BF345_METHOD_2_4C2ACACD89F4EF1A_OFFSET))(this, a1);
	}

	::System::Void Method_2_49085A3FC0F13F5E(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_705B862E649BF345_METHOD_2_49085A3FC0F13F5E_OFFSET))(this, a1);
	}

	::System::Void Method_2_30C4AAF639F2724D(::System::String* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Boolean a5, ::System::Single a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_705B862E649BF345_METHOD_2_30C4AAF639F2724D_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void OnAnimatorMove(::UnityEngine::Animator* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + CLASS_2_705B862E649BF345_ONANIMATORMOVE_OFFSET))(this, a1);
	}

	::System::Void Method_2_4D048E895C608EDE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_705B862E649BF345_METHOD_2_4D048E895C608EDE_OFFSET))(this);
	}

	::System::Void Method_2_E968CB1D462997C6(::UnityEngine::Animator* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + CLASS_2_705B862E649BF345_METHOD_2_E968CB1D462997C6_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_34DE533C673575D5(::System::Int32 a1, ::System::Int32& a2, ::System::Single& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_705B862E649BF345_METHOD_2_34DE533C673575D5_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::WaitAnimStateResult Method_2_7051780D9CC9E4B9(::System::Int32 a1, ::System::Single a2, ::System::Int32 a3, ::System::UInt32 a4, ::System::Int32 a5, ::System::Int32 a6)
	{
		return ((::RPG::GameCore::WaitAnimStateResult(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Int32, ::System::UInt32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_705B862E649BF345_METHOD_2_7051780D9CC9E4B9_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_7744894CEC41BF06()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_705B862E649BF345_METHOD_2_7744894CEC41BF06_OFFSET))(this);
	}

	::System::Void Method_2_F9555880FBE027D5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_705B862E649BF345_METHOD_2_F9555880FBE027D5_OFFSET))(this);
	}

	::System::Void Method_2_387BD0325F56DCC3(::Il2CppArray<::System::String*>* a1, ::Class_0_16E4307DCC419505_402* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::Class_0_16E4307DCC419505_402*))((::PBYTE)hIl2Cpp + CLASS_2_705B862E649BF345_METHOD_2_387BD0325F56DCC3_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::GameWorld* get_WorldRef()
	{
		return ((::RPG::GameCore::GameWorld*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_705B862E649BF345_GET_WORLDREF_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_2_B1445E8504415D4D()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_705B862E649BF345_METHOD_2_B1445E8504415D4D_OFFSET))(this);
	}

	::RPG::GameCore::TaskContext* get_TaskContext()
	{
		return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_705B862E649BF345_GET_TASKCONTEXT_OFFSET))(this);
	}

	::System::String* Method_2_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_705B862E649BF345_METHOD_2_128774387667156B_OFFSET))(this);
	}

	::System::Int32 get_ReEntryCounter()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_705B862E649BF345_GET_REENTRYCOUNTER_OFFSET))(this);
	}

	::System::Void set_ReEntryCounter(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_705B862E649BF345_SET_REENTRYCOUNTER_OFFSET))(this, a1);
	}

	::System::Boolean get_AnimatorNotInit()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_705B862E649BF345_GET_ANIMATORNOTINIT_OFFSET))(this);
	}

	::System::Void set_AnimatorNotInit(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_705B862E649BF345_SET_ANIMATORNOTINIT_OFFSET))(this, a1);
	}

	::System::Boolean get_NeedResetEvent()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_705B862E649BF345_GET_NEEDRESETEVENT_OFFSET))(this);
	}

	::System::Void set_NeedResetEvent(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_705B862E649BF345_SET_NEEDRESETEVENT_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_379_Class_3_363670394F299996* get_OnAnimationStateChange()
	{
		return ((::Class_0_16E4307DCC419505_379_Class_3_363670394F299996*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_705B862E649BF345_GET_ONANIMATIONSTATECHANGE_OFFSET))(this);
	}

	::System::Void Method_2_E9A7A364EF941996(::Class_0_16E4307DCC419505_379_Class_3_363670394F299996* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_379_Class_3_363670394F299996*))((::PBYTE)hIl2Cpp + CLASS_2_705B862E649BF345_METHOD_2_E9A7A364EF941996_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_38A5D85D4AE9F24D*>* get_DynamicAnimEventDataList()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_38A5D85D4AE9F24D*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_705B862E649BF345_GET_DYNAMICANIMEVENTDATALIST_OFFSET))(this);
	}

	::System::Void set_DynamicAnimEventDataList(::System::Collections::Generic::List_1<::Class_1_38A5D85D4AE9F24D*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_38A5D85D4AE9F24D*>*))((::PBYTE)hIl2Cpp + CLASS_2_705B862E649BF345_SET_DYNAMICANIMEVENTDATALIST_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_0_16E4307DCC419505_379_Class_3_410EEB4A0F592FBB*>* get_OnAnimatorMoveCallbackMap()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_0_16E4307DCC419505_379_Class_3_410EEB4A0F592FBB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_705B862E649BF345_GET_ONANIMATORMOVECALLBACKMAP_OFFSET))(this);
	}

	::System::Void Method_2_0C23E87E29F8936D(::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_0_16E4307DCC419505_379_Class_3_410EEB4A0F592FBB*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_0_16E4307DCC419505_379_Class_3_410EEB4A0F592FBB*>*))((::PBYTE)hIl2Cpp + CLASS_2_705B862E649BF345_METHOD_2_0C23E87E29F8936D_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__OnInitOwnerRef()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_705B862E649BF345___IFIXBASEPROXY__ONINITOWNERREF_OFFSET))(this);
	}
};
