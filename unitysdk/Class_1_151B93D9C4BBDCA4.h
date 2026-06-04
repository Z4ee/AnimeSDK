#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameState.h"
#include "unitysdk/RPG/Client/LockSource.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_401;
class Class_1_47EE63CB5C4DC8FC_5;
class Class_1_4CD8A1ACD565F336;
class Class_2_0A142DC5409043BE;
class Class_2_7D53347CD75A5D8B;
class Class_2_E2910CE9CBBA0DE5;
class Class_3_07C3C4D2990C49EE;
namespace Entitas { class IEntity; }
namespace RPG::Client { class LittleGameManager; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelGraphValueSource; }
namespace RPG::GameCore { class LittleGameFireEffectParams; }
namespace RPG::GameCore { class LittleGameKillEffectParams; }
namespace RPG::GameCore { class LittleGameLevelConfig; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_1_151B93D9C4BBDCA4_ADDLEVELVARIABLELISTENER_OFFSET UNITYSDK_OFFSET(0x13AB01C0)
#define CLASS_1_151B93D9C4BBDCA4_ADDLITTLEGAMECUSTOMEVENTLISTENER_1_OFFSET UNITYSDK_OFFSET(0x13AAFCC0)
#define CLASS_1_151B93D9C4BBDCA4_ADDLITTLEGAMECUSTOMEVENTLISTENER_OFFSET UNITYSDK_OFFSET(0x13AAFA60)
#define CLASS_1_151B93D9C4BBDCA4_CANCLEAR_OFFSET UNITYSDK_OFFSET(0x13AB0840)
#define CLASS_1_151B93D9C4BBDCA4_CANSTART_OFFSET UNITYSDK_OFFSET(0x13AB0770)
#define CLASS_1_151B93D9C4BBDCA4_EVALUATELEVELVARNUMBER_OFFSET UNITYSDK_OFFSET(0x13AB0130)
#define CLASS_1_151B93D9C4BBDCA4_EVALUATELEVELVARSHORT_OFFSET UNITYSDK_OFFSET(0x13AB00A0)
#define CLASS_1_151B93D9C4BBDCA4_FIREEFFECT_OFFSET UNITYSDK_OFFSET(0x13AB02E0)
#define CLASS_1_151B93D9C4BBDCA4_GETENTITYNAME_OFFSET UNITYSDK_OFFSET(0x13AB04A0)
#define CLASS_1_151B93D9C4BBDCA4_GETLEVELCONFIG_OFFSET UNITYSDK_OFFSET(0x13AB06E0)
#define CLASS_1_151B93D9C4BBDCA4_GETLEVELGRAPHPATH_OFFSET UNITYSDK_OFFSET(0x13AB0590)
#define CLASS_1_151B93D9C4BBDCA4_GETSERVICES_OFFSET UNITYSDK_OFFSET(0x13AB0510)
#define CLASS_1_151B93D9C4BBDCA4_GETSTATETREEROOT_OFFSET UNITYSDK_OFFSET(0x13AB08D0)
#define CLASS_1_151B93D9C4BBDCA4_GETTICKLODEXTRASAMPLEPOSITIONS_OFFSET UNITYSDK_OFFSET(0x13AB0720)
#define CLASS_1_151B93D9C4BBDCA4_GETVIEWROOT_OFFSET UNITYSDK_OFFSET(0x13AB05F0)
#define CLASS_1_151B93D9C4BBDCA4_GET_GAMEINSTANCEENTITY_OFFSET UNITYSDK_OFFSET(0x13AB1390)
#define CLASS_1_151B93D9C4BBDCA4_GET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0x13AB13B0)
#define CLASS_1_151B93D9C4BBDCA4_GET_STATE_OFFSET UNITYSDK_OFFSET(0x13AB1370)
#define CLASS_1_151B93D9C4BBDCA4_KILLEFFECT_OFFSET UNITYSDK_OFFSET(0x13AB0370)
#define CLASS_1_151B93D9C4BBDCA4_METHOD_1_042161E3ACC3627B_OFFSET UNITYSDK_OFFSET(0x13AB0920)
#define CLASS_1_151B93D9C4BBDCA4_METHOD_1_0EF345F8F1CF4181_OFFSET UNITYSDK_OFFSET(0x13AB1250)
#define CLASS_1_151B93D9C4BBDCA4_METHOD_1_33ACA6CB2ABC73F7_1_OFFSET UNITYSDK_OFFSET(0x13AAE8C0)
#define CLASS_1_151B93D9C4BBDCA4_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x13AAE810)
#define CLASS_1_151B93D9C4BBDCA4_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x13AB0800)
#define CLASS_1_151B93D9C4BBDCA4_METHOD_1_45AA2F5085C2C40D_OFFSET UNITYSDK_OFFSET(0x13AAE1A0)
#define CLASS_1_151B93D9C4BBDCA4_METHOD_1_4EA6B1791DACA9CC_OFFSET UNITYSDK_OFFSET(0x13AAEEA0)
#define CLASS_1_151B93D9C4BBDCA4_METHOD_1_50E8D69C1DC7F05E_OFFSET UNITYSDK_OFFSET(0x13AAF320)
#define CLASS_1_151B93D9C4BBDCA4_METHOD_1_614288621F812149_OFFSET UNITYSDK_OFFSET(0x13AB0550)
#define CLASS_1_151B93D9C4BBDCA4_METHOD_1_6617E33D0A2EDC18_OFFSET UNITYSDK_OFFSET(0x13AAF0E0)
#define CLASS_1_151B93D9C4BBDCA4_METHOD_1_687D729E0EE2E034_OFFSET UNITYSDK_OFFSET(0x13AAF7F0)
#define CLASS_1_151B93D9C4BBDCA4_METHOD_1_6D0836608BC79A1C_OFFSET UNITYSDK_OFFSET(0x13AAF750)
#define CLASS_1_151B93D9C4BBDCA4_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x13AAEDC0)
#define CLASS_1_151B93D9C4BBDCA4_METHOD_1_ABE7CF9FA1B8CCA3_OFFSET UNITYSDK_OFFSET(0x13AAE320)
#define CLASS_1_151B93D9C4BBDCA4_METHOD_1_AF4EC9334D7AC033_OFFSET UNITYSDK_OFFSET(0x13AB1310)
#define CLASS_1_151B93D9C4BBDCA4_METHOD_1_B917C58B4E14AC1B_OFFSET UNITYSDK_OFFSET(0x13AB1120)
#define CLASS_1_151B93D9C4BBDCA4_METHOD_1_BBA49FAB086F388D_1_OFFSET UNITYSDK_OFFSET(0x13AAEA10)
#define CLASS_1_151B93D9C4BBDCA4_METHOD_1_BBA49FAB086F388D_OFFSET UNITYSDK_OFFSET(0x13AAE460)
#define CLASS_1_151B93D9C4BBDCA4_METHOD_1_C7FBC58B0791AA44_OFFSET UNITYSDK_OFFSET(0x13AAF850)
#define CLASS_1_151B93D9C4BBDCA4_METHOD_1_CA20A96113B135EC_OFFSET UNITYSDK_OFFSET(0x13AB0C10)
#define CLASS_1_151B93D9C4BBDCA4_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x13AAE970)
#define CLASS_1_151B93D9C4BBDCA4_METHOD_1_CA6BDDCC5F7CE11E_1_OFFSET UNITYSDK_OFFSET(0x13AAF1F0)
#define CLASS_1_151B93D9C4BBDCA4_METHOD_1_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0x13AAF050)
#define CLASS_1_151B93D9C4BBDCA4_METHOD_1_EBBBED89F4A42AC6_OFFSET UNITYSDK_OFFSET(0x13AADFA0)
#define CLASS_1_151B93D9C4BBDCA4_METHOD_1_F9351172E32410BD_OFFSET UNITYSDK_OFFSET(0x13AB0680)
#define CLASS_1_151B93D9C4BBDCA4_REGISTERTASKSEQUENCES_OFFSET UNITYSDK_OFFSET(0x13AAF280)
#define CLASS_1_151B93D9C4BBDCA4_REMOVELEVELVARIABLELISTENER_OFFSET UNITYSDK_OFFSET(0x13AB0250)
#define CLASS_1_151B93D9C4BBDCA4_REMOVELITTLEGAMECUSTOMEVENTLISTENER_1_OFFSET UNITYSDK_OFFSET(0x13AAFF70)
#define CLASS_1_151B93D9C4BBDCA4_REMOVELITTLEGAMECUSTOMEVENTLISTENER_OFFSET UNITYSDK_OFFSET(0x13AAFD60)
#define CLASS_1_151B93D9C4BBDCA4_SETLEVELVARSHORT_OFFSET UNITYSDK_OFFSET(0x13AB0010)
#define CLASS_1_151B93D9C4BBDCA4_SETRENDERVISIBLE_OFFSET UNITYSDK_OFFSET(0x13AB0400)
#define CLASS_1_151B93D9C4BBDCA4_SET_GAMEINSTANCEENTITY_OFFSET UNITYSDK_OFFSET(0x13AB13A0)
#define CLASS_1_151B93D9C4BBDCA4_SET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0x13AB13C0)
#define CLASS_1_151B93D9C4BBDCA4_SET_STATE_OFFSET UNITYSDK_OFFSET(0x13AB1380)
#define CLASS_1_151B93D9C4BBDCA4_TRIGGERLITTLEGAMECUSTOMEVENT_1_OFFSET UNITYSDK_OFFSET(0x13AAF9D0)
#define CLASS_1_151B93D9C4BBDCA4_TRIGGERLITTLEGAMECUSTOMEVENT_OFFSET UNITYSDK_OFFSET(0x13AAF8F0)
#define CLASS_1_151B93D9C4BBDCA4__CANLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x13AB09C0)
#define CLASS_1_151B93D9C4BBDCA4__CANTICK_OFFSET UNITYSDK_OFFSET(0x13AB0970)
#define CLASS_1_151B93D9C4BBDCA4__CTOR_OFFSET UNITYSDK_OFFSET(0x13AB13D0)
#define CLASS_1_151B93D9C4BBDCA4__FINISHINIT_OFFSET UNITYSDK_OFFSET(0x13AB0B10)
#define CLASS_1_151B93D9C4BBDCA4__NEEDWAITSTREAMING_OFFSET UNITYSDK_OFFSET(0x13AB11F0)
#define CLASS_1_151B93D9C4BBDCA4__ONCLEAR_OFFSET UNITYSDK_OFFSET(0x13AB0BD0)
#define CLASS_1_151B93D9C4BBDCA4__ONINIT_OFFSET UNITYSDK_OFFSET(0x13AB0AC0)
#define CLASS_1_151B93D9C4BBDCA4__ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x13AB0A60)
#define CLASS_1_151B93D9C4BBDCA4__ONSTART_OFFSET UNITYSDK_OFFSET(0x13AB0B50)
#define CLASS_1_151B93D9C4BBDCA4__ONSTOP_OFFSET UNITYSDK_OFFSET(0x13AB0B90)
#define CLASS_1_151B93D9C4BBDCA4__ONTICK_OFFSET UNITYSDK_OFFSET(0x13AB0A00)
#define CLASS_1_151B93D9C4BBDCA4__SETPOSTPROCESSONCLEAR_OFFSET UNITYSDK_OFFSET(0x13AB0EF0)
#define CLASS_1_151B93D9C4BBDCA4__SETPOSTPROCESSONINIT_OFFSET UNITYSDK_OFFSET(0x13AB0CE0)
#define CLASS_1_151B93D9C4BBDCA4__STARTLEVELGRAPH_OFFSET UNITYSDK_OFFSET(0x13AB1090)

inline static constexpr unsigned int Class_1_151B93D9C4BBDCA4_TypeDefinitionIndex = 56600;

class Class_1_151B93D9C4BBDCA4 : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action*>* Field_1_1; // 0x10
	::RPG::Client::LittleGameManager* Field_1_2; // 0x18
	::Class_3_07C3C4D2990C49EE* Field_1_3; // 0x20
	::RPG::GameCore::TaskContext* Field_1_4; // 0x28
	::System::String* Field_1_5; // 0x30
	::Class_2_7D53347CD75A5D8B* Field_1_6; // 0x38
	::RPG::GameCore::LittleGameLevelConfig* Field_1_7; // 0x40
	::Class_3_07C3C4D2990C49EE* Field_1_8; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::GameEntity*>* Field_1_9; // 0x50
	::RPG::GameCore::GameEntity* _GameInstanceEntity_k__BackingField; // 0x58
	::Class_3_07C3C4D2990C49EE* Field_1_11; // 0x60
	::RPG::GameCore::GameEntity* _OwnerEntity_k__BackingField; // 0x68
	::RPG::Client::LittleGameState _State_k__BackingField; // 0x70
	::System::Boolean Field_1_14; // 0x74
	::System::Boolean Field_1_15; // 0x75

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_151B93D9C4BBDCA4__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_EBBBED89F4A42AC6(::Class_1_4CD8A1ACD565F336* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4CD8A1ACD565F336*))((::PBYTE)hIl2Cpp + CLASS_1_151B93D9C4BBDCA4_METHOD_1_EBBBED89F4A42AC6_OFFSET))(this, a1);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_151B93D9C4BBDCA4_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_151B93D9C4BBDCA4_METHOD_1_33ACA6CB2ABC73F7_1_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_151B93D9C4BBDCA4_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA6BDDCC5F7CE11E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_151B93D9C4BBDCA4_METHOD_1_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA6BDDCC5F7CE11E_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_151B93D9C4BBDCA4_METHOD_1_CA6BDDCC5F7CE11E_1_OFFSET))(this, a1);
	}

	::System::Void RegisterTaskSequences(::Il2CppArray<::RPG::GameCore::TaskConfig*>* a1, ::Il2CppArray<::RPG::GameCore::TaskConfig*>* a2, ::Il2CppArray<::RPG::GameCore::TaskConfig*>* a3, ::RPG::GameCore::TaskContext* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_151B93D9C4BBDCA4_REGISTERTASKSEQUENCES_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_6D0836608BC79A1C(::System::UInt32 a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_151B93D9C4BBDCA4_METHOD_1_6D0836608BC79A1C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_687D729E0EE2E034(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_151B93D9C4BBDCA4_METHOD_1_687D729E0EE2E034_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_C7FBC58B0791AA44(::System::UInt32 a1, ::RPG::GameCore::GameEntity*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::GameEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_151B93D9C4BBDCA4_METHOD_1_C7FBC58B0791AA44_OFFSET))(this, a1, a2);
	}

	::System::Void TriggerLittleGameCustomEvent(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_151B93D9C4BBDCA4_TRIGGERLITTLEGAMECUSTOMEVENT_OFFSET))(this, a1);
	}

	::System::Void TriggerLittleGameCustomEvent_1(::System::String* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_151B93D9C4BBDCA4_TRIGGERLITTLEGAMECUSTOMEVENT_1_OFFSET))(this, a1, a2);
	}

	::System::Void AddLittleGameCustomEventListener(::System::String* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_151B93D9C4BBDCA4_ADDLITTLEGAMECUSTOMEVENTLISTENER_OFFSET))(this, a1, a2);
	}

	::System::Void AddLittleGameCustomEventListener_1(::System::String* a1, ::System::UInt32 a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_151B93D9C4BBDCA4_ADDLITTLEGAMECUSTOMEVENTLISTENER_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void RemoveLittleGameCustomEventListener(::System::String* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_151B93D9C4BBDCA4_REMOVELITTLEGAMECUSTOMEVENTLISTENER_OFFSET))(this, a1, a2);
	}

	::System::Void RemoveLittleGameCustomEventListener_1(::System::String* a1, ::System::UInt32 a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_151B93D9C4BBDCA4_REMOVELITTLEGAMECUSTOMEVENTLISTENER_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void SetLevelVarShort(::System::String* a1, ::RPG::GameCore::DynamicFloat* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::DynamicFloat*))((::PBYTE)hIl2Cpp + CLASS_1_151B93D9C4BBDCA4_SETLEVELVARSHORT_OFFSET))(this, a1, a2);
	}

	::System::Int16 EvaluateLevelVarShort(::RPG::GameCore::DynamicFloat* a1)
	{
		return ((::System::Int16(*)(::PVOID, ::RPG::GameCore::DynamicFloat*))((::PBYTE)hIl2Cpp + CLASS_1_151B93D9C4BBDCA4_EVALUATELEVELVARSHORT_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint EvaluateLevelVarNumber(::RPG::GameCore::DynamicFloat* a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::DynamicFloat*))((::PBYTE)hIl2Cpp + CLASS_1_151B93D9C4BBDCA4_EVALUATELEVELVARNUMBER_OFFSET))(this, a1);
	}

	::System::Void AddLevelVariableListener(::System::String* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_151B93D9C4BBDCA4_ADDLEVELVARIABLELISTENER_OFFSET))(this, a1, a2);
	}

	::System::Void RemoveLevelVariableListener(::System::String* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_151B93D9C4BBDCA4_REMOVELEVELVARIABLELISTENER_OFFSET))(this, a1, a2);
	}

	::System::Void FireEffect(::Entitas::IEntity* a1, ::RPG::GameCore::LittleGameFireEffectParams* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::RPG::GameCore::LittleGameFireEffectParams*))((::PBYTE)hIl2Cpp + CLASS_1_151B93D9C4BBDCA4_FIREEFFECT_OFFSET))(this, a1, a2);
	}

	::System::Void KillEffect(::Entitas::IEntity* a1, ::RPG::GameCore::LittleGameKillEffectParams* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::RPG::GameCore::LittleGameKillEffectParams*))((::PBYTE)hIl2Cpp + CLASS_1_151B93D9C4BBDCA4_KILLEFFECT_OFFSET))(this, a1, a2);
	}

	::System::Void SetRenderVisible(::Entitas::IEntity* a1, ::System::Boolean a2, ::Il2CppArray<::System::String*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::System::Boolean, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_151B93D9C4BBDCA4_SETRENDERVISIBLE_OFFSET))(this, a1, a2, a3);
	}

	::System::String* GetEntityName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_151B93D9C4BBDCA4_GETENTITYNAME_OFFSET))(this);
	}

	::Class_1_47EE63CB5C4DC8FC_5* GetServices()
	{
		return ((::Class_1_47EE63CB5C4DC8FC_5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_151B93D9C4BBDCA4_GETSERVICES_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_1_614288621F812149()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_151B93D9C4BBDCA4_METHOD_1_614288621F812149_OFFSET))(this);
	}

	::System::String* GetLevelGraphPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_151B93D9C4BBDCA4_GETLEVELGRAPHPATH_OFFSET))(this);
	}

	::UnityEngine::Transform* GetViewRoot()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_151B93D9C4BBDCA4_GETVIEWROOT_OFFSET))(this);
	}

	::RPG::GameCore::LevelGraphValueSource* Method_1_F9351172E32410BD()
	{
		return ((::RPG::GameCore::LevelGraphValueSource*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_151B93D9C4BBDCA4_METHOD_1_F9351172E32410BD_OFFSET))(this);
	}

	::RPG::GameCore::LittleGameLevelConfig* GetLevelConfig()
	{
		return ((::RPG::GameCore::LittleGameLevelConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_151B93D9C4BBDCA4_GETLEVELCONFIG_OFFSET))(this);
	}

	::System::Void GetTickLodExtraSamplePositions(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + CLASS_1_151B93D9C4BBDCA4_GETTICKLODEXTRASAMPLEPOSITIONS_OFFSET))(this, a1);
	}

	::System::Boolean CanStart()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_151B93D9C4BBDCA4_CANSTART_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_151B93D9C4BBDCA4_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Boolean CanClear()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_151B93D9C4BBDCA4_CANCLEAR_OFFSET))(this);
	}

	::Class_2_E2910CE9CBBA0DE5* GetStateTreeRoot(::System::Int32 a1)
	{
		return ((::Class_2_E2910CE9CBBA0DE5*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_151B93D9C4BBDCA4_GETSTATETREEROOT_OFFSET))(this, a1);
	}

	::Class_2_0A142DC5409043BE* Method_1_042161E3ACC3627B(::System::Int32 a1)
	{
		return ((::Class_2_0A142DC5409043BE*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_151B93D9C4BBDCA4_METHOD_1_042161E3ACC3627B_OFFSET))(this, a1);
	}

	::System::Boolean _CanTick()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_151B93D9C4BBDCA4__CANTICK_OFFSET))(this);
	}

	::System::Boolean _CanLateUpdate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_151B93D9C4BBDCA4__CANLATEUPDATE_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_151B93D9C4BBDCA4__ONTICK_OFFSET))(this, a1);
	}

	::System::Void _OnLateUpdate(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_151B93D9C4BBDCA4__ONLATEUPDATE_OFFSET))(this, a1);
	}

	::System::Void _OnInit(::Class_1_4CD8A1ACD565F336* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4CD8A1ACD565F336*))((::PBYTE)hIl2Cpp + CLASS_1_151B93D9C4BBDCA4__ONINIT_OFFSET))(this, a1);
	}

	::System::Void _FinishInit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_151B93D9C4BBDCA4__FINISHINIT_OFFSET))(this);
	}

	::System::Void _OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_151B93D9C4BBDCA4__ONSTART_OFFSET))(this);
	}

	::System::Void _OnStop()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_151B93D9C4BBDCA4__ONSTOP_OFFSET))(this);
	}

	::System::Void _OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_151B93D9C4BBDCA4__ONCLEAR_OFFSET))(this);
	}

	::System::Void Method_1_CA20A96113B135EC(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_151B93D9C4BBDCA4_METHOD_1_CA20A96113B135EC_OFFSET))(this, a1);
	}

	::System::Void _SetPostProcessOnInit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_151B93D9C4BBDCA4__SETPOSTPROCESSONINIT_OFFSET))(this);
	}

	::System::Void _SetPostProcessOnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_151B93D9C4BBDCA4__SETPOSTPROCESSONCLEAR_OFFSET))(this);
	}

	::System::Void Method_1_45AA2F5085C2C40D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_151B93D9C4BBDCA4_METHOD_1_45AA2F5085C2C40D_OFFSET))(this);
	}

	::System::Void _StartLevelGraph()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_151B93D9C4BBDCA4__STARTLEVELGRAPH_OFFSET))(this);
	}

	::System::Void Method_1_B917C58B4E14AC1B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_151B93D9C4BBDCA4_METHOD_1_B917C58B4E14AC1B_OFFSET))(this);
	}

	::System::Boolean _NeedWaitStreaming()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_151B93D9C4BBDCA4__NEEDWAITSTREAMING_OFFSET))(this);
	}

	::System::Void Method_1_4EA6B1791DACA9CC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_151B93D9C4BBDCA4_METHOD_1_4EA6B1791DACA9CC_OFFSET))(this);
	}

	::System::Void Method_1_0EF345F8F1CF4181(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_1_151B93D9C4BBDCA4_METHOD_1_0EF345F8F1CF4181_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::RPG::Client::LockSource>* Method_1_AF4EC9334D7AC033()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::LockSource>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_151B93D9C4BBDCA4_METHOD_1_AF4EC9334D7AC033_OFFSET))(this);
	}

	::System::Void Method_1_BBA49FAB086F388D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_151B93D9C4BBDCA4_METHOD_1_BBA49FAB086F388D_OFFSET))(this);
	}

	::System::Void Method_1_BBA49FAB086F388D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_151B93D9C4BBDCA4_METHOD_1_BBA49FAB086F388D_1_OFFSET))(this);
	}

	::System::Void Method_1_50E8D69C1DC7F05E(::Il2CppArray<::RPG::GameCore::TaskConfig*>* a1, ::Il2CppArray<::RPG::GameCore::TaskConfig*>* a2, ::Il2CppArray<::RPG::GameCore::TaskConfig*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*))((::PBYTE)hIl2Cpp + CLASS_1_151B93D9C4BBDCA4_METHOD_1_50E8D69C1DC7F05E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_ABE7CF9FA1B8CCA3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_151B93D9C4BBDCA4_METHOD_1_ABE7CF9FA1B8CCA3_OFFSET))(this);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_151B93D9C4BBDCA4_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_1_6617E33D0A2EDC18(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_151B93D9C4BBDCA4_METHOD_1_6617E33D0A2EDC18_OFFSET))(this, a1);
	}

	::RPG::Client::LittleGameState get_State()
	{
		return ((::RPG::Client::LittleGameState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_151B93D9C4BBDCA4_GET_STATE_OFFSET))(this);
	}

	::System::Void set_State(::RPG::Client::LittleGameState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGameState))((::PBYTE)hIl2Cpp + CLASS_1_151B93D9C4BBDCA4_SET_STATE_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* get_GameInstanceEntity()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_151B93D9C4BBDCA4_GET_GAMEINSTANCEENTITY_OFFSET))(this);
	}

	::System::Void set_GameInstanceEntity(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_151B93D9C4BBDCA4_SET_GAMEINSTANCEENTITY_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* get_OwnerEntity()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_151B93D9C4BBDCA4_GET_OWNERENTITY_OFFSET))(this);
	}

	::System::Void set_OwnerEntity(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_151B93D9C4BBDCA4_SET_OWNERENTITY_OFFSET))(this, a1);
	}
};
