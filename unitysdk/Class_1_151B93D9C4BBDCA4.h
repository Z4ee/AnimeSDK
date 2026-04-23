#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameState.h"
#include "unitysdk/RPG/Client/LockSource.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_382;
class Class_1_47EE63CB5C4DC8FC_5;
class Class_1_75C90E178B164D38;
class Class_2_0A142DC5409043BE;
class Class_2_3547B9D7F2C7CCA9;
class Class_2_E2910CE9CBBA0DE5;
class Class_3_E21F6DE9B7FA4D05;
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

#define CLASS_1_151B93D9C4BBDCA4_ADDLEVELVARIABLELISTENER_OFFSET UNITYSDK_OFFSET(0x11AFE9C0)
#define CLASS_1_151B93D9C4BBDCA4_ADDLITTLEGAMECUSTOMEVENTLISTENER_1_OFFSET UNITYSDK_OFFSET(0x11AFE520)
#define CLASS_1_151B93D9C4BBDCA4_ADDLITTLEGAMECUSTOMEVENTLISTENER_OFFSET UNITYSDK_OFFSET(0x11AFE320)
#define CLASS_1_151B93D9C4BBDCA4_CANSTART_OFFSET UNITYSDK_OFFSET(0x11AFEF70)
#define CLASS_1_151B93D9C4BBDCA4_EVALUATELEVELVARNUMBER_OFFSET UNITYSDK_OFFSET(0x11AFE930)
#define CLASS_1_151B93D9C4BBDCA4_EVALUATELEVELVARSHORT_OFFSET UNITYSDK_OFFSET(0x11AFE8A0)
#define CLASS_1_151B93D9C4BBDCA4_FIREEFFECT_OFFSET UNITYSDK_OFFSET(0x11AFEAE0)
#define CLASS_1_151B93D9C4BBDCA4_GETENTITYNAME_OFFSET UNITYSDK_OFFSET(0x11AFECA0)
#define CLASS_1_151B93D9C4BBDCA4_GETLEVELCONFIG_OFFSET UNITYSDK_OFFSET(0x11AFEEE0)
#define CLASS_1_151B93D9C4BBDCA4_GETLEVELGRAPHPATH_OFFSET UNITYSDK_OFFSET(0x11AFED90)
#define CLASS_1_151B93D9C4BBDCA4_GETSERVICES_OFFSET UNITYSDK_OFFSET(0x11AFED10)
#define CLASS_1_151B93D9C4BBDCA4_GETSTATETREEROOT_OFFSET UNITYSDK_OFFSET(0x11AFF0D0)
#define CLASS_1_151B93D9C4BBDCA4_GETTICKLODEXTRASAMPLEPOSITIONS_OFFSET UNITYSDK_OFFSET(0x11AFEF20)
#define CLASS_1_151B93D9C4BBDCA4_GET_GAMEINSTANCEENTITY_OFFSET UNITYSDK_OFFSET(0x11AFFBC0)
#define CLASS_1_151B93D9C4BBDCA4_GET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0x11AFFBE0)
#define CLASS_1_151B93D9C4BBDCA4_GET_STATE_OFFSET UNITYSDK_OFFSET(0x11AFFBA0)
#define CLASS_1_151B93D9C4BBDCA4_KILLEFFECT_OFFSET UNITYSDK_OFFSET(0x11AFEB70)
#define CLASS_1_151B93D9C4BBDCA4_METHOD_1_042161E3ACC3627B_OFFSET UNITYSDK_OFFSET(0x11AFF120)
#define CLASS_1_151B93D9C4BBDCA4_METHOD_1_096B8CF2749EE7F7_OFFSET UNITYSDK_OFFSET(0x11AFF410)
#define CLASS_1_151B93D9C4BBDCA4_METHOD_1_2DC4E067BF1CB662_OFFSET UNITYSDK_OFFSET(0x11AFEDF0)
#define CLASS_1_151B93D9C4BBDCA4_METHOD_1_33ACA6CB2ABC73F7_1_OFFSET UNITYSDK_OFFSET(0x11AFD220)
#define CLASS_1_151B93D9C4BBDCA4_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x11AFD170)
#define CLASS_1_151B93D9C4BBDCA4_METHOD_1_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x11AFF170)
#define CLASS_1_151B93D9C4BBDCA4_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x11AFF000)
#define CLASS_1_151B93D9C4BBDCA4_METHOD_1_4EA6B1791DACA9CC_OFFSET UNITYSDK_OFFSET(0x11AFD7F0)
#define CLASS_1_151B93D9C4BBDCA4_METHOD_1_5B0531D5B96D6B96_OFFSET UNITYSDK_OFFSET(0x11AFFA90)
#define CLASS_1_151B93D9C4BBDCA4_METHOD_1_5C28A8AFAFD92C5B_OFFSET UNITYSDK_OFFSET(0x11AFE080)
#define CLASS_1_151B93D9C4BBDCA4_METHOD_1_614288621F812149_OFFSET UNITYSDK_OFFSET(0x11AFED50)
#define CLASS_1_151B93D9C4BBDCA4_METHOD_1_6617E33D0A2EDC18_OFFSET UNITYSDK_OFFSET(0x11AFDA20)
#define CLASS_1_151B93D9C4BBDCA4_METHOD_1_6D0836608BC79A1C_OFFSET UNITYSDK_OFFSET(0x11AFDFE0)
#define CLASS_1_151B93D9C4BBDCA4_METHOD_1_937B1B6BADEDF73B_OFFSET UNITYSDK_OFFSET(0x11AFE0E0)
#define CLASS_1_151B93D9C4BBDCA4_METHOD_1_9BAB385F8658C2AD_OFFSET UNITYSDK_OFFSET(0x11AFF960)
#define CLASS_1_151B93D9C4BBDCA4_METHOD_1_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x11AFF040)
#define CLASS_1_151B93D9C4BBDCA4_METHOD_1_ABE7CF9FA1B8CCA3_OFFSET UNITYSDK_OFFSET(0x11AFCC80)
#define CLASS_1_151B93D9C4BBDCA4_METHOD_1_AF4EC9334D7AC033_OFFSET UNITYSDK_OFFSET(0x11AFFB40)
#define CLASS_1_151B93D9C4BBDCA4_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x11AFD710)
#define CLASS_1_151B93D9C4BBDCA4_METHOD_1_BBA49FAB086F388D_1_OFFSET UNITYSDK_OFFSET(0x11AFD360)
#define CLASS_1_151B93D9C4BBDCA4_METHOD_1_BBA49FAB086F388D_OFFSET UNITYSDK_OFFSET(0x11AFCDC0)
#define CLASS_1_151B93D9C4BBDCA4_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11AFD2D0)
#define CLASS_1_151B93D9C4BBDCA4_METHOD_1_CA6BDDCC5F7CE11E_1_OFFSET UNITYSDK_OFFSET(0x11AFDB30)
#define CLASS_1_151B93D9C4BBDCA4_METHOD_1_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0x11AFD990)
#define CLASS_1_151B93D9C4BBDCA4_METHOD_1_E876C8B6D3B840A6_OFFSET UNITYSDK_OFFSET(0x11AFCB10)
#define CLASS_1_151B93D9C4BBDCA4_METHOD_1_EBBBED89F4A42AC6_OFFSET UNITYSDK_OFFSET(0x11AFC910)
#define CLASS_1_151B93D9C4BBDCA4_METHOD_1_F3E5C9969C015809_OFFSET UNITYSDK_OFFSET(0x11AFDC60)
#define CLASS_1_151B93D9C4BBDCA4_METHOD_1_F9351172E32410BD_OFFSET UNITYSDK_OFFSET(0x11AFEE80)
#define CLASS_1_151B93D9C4BBDCA4_REGISTERTASKSEQUENCES_OFFSET UNITYSDK_OFFSET(0x11AFDBC0)
#define CLASS_1_151B93D9C4BBDCA4_REMOVELEVELVARIABLELISTENER_OFFSET UNITYSDK_OFFSET(0x11AFEA50)
#define CLASS_1_151B93D9C4BBDCA4_REMOVELITTLEGAMECUSTOMEVENTLISTENER_1_OFFSET UNITYSDK_OFFSET(0x11AFE770)
#define CLASS_1_151B93D9C4BBDCA4_REMOVELITTLEGAMECUSTOMEVENTLISTENER_OFFSET UNITYSDK_OFFSET(0x11AFE5C0)
#define CLASS_1_151B93D9C4BBDCA4_SETLEVELVARSHORT_OFFSET UNITYSDK_OFFSET(0x11AFE810)
#define CLASS_1_151B93D9C4BBDCA4_SETRENDERVISIBLE_OFFSET UNITYSDK_OFFSET(0x11AFEC00)
#define CLASS_1_151B93D9C4BBDCA4_SET_GAMEINSTANCEENTITY_OFFSET UNITYSDK_OFFSET(0x11AFFBD0)
#define CLASS_1_151B93D9C4BBDCA4_SET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0x11AFFBF0)
#define CLASS_1_151B93D9C4BBDCA4_SET_STATE_OFFSET UNITYSDK_OFFSET(0x11AFFBB0)
#define CLASS_1_151B93D9C4BBDCA4_TRIGGERLITTLEGAMECUSTOMEVENT_1_OFFSET UNITYSDK_OFFSET(0x11AFE290)
#define CLASS_1_151B93D9C4BBDCA4_TRIGGERLITTLEGAMECUSTOMEVENT_OFFSET UNITYSDK_OFFSET(0x11AFE1B0)
#define CLASS_1_151B93D9C4BBDCA4__CANLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x11AFF1C0)
#define CLASS_1_151B93D9C4BBDCA4__CTOR_OFFSET UNITYSDK_OFFSET(0x11AFFC00)
#define CLASS_1_151B93D9C4BBDCA4__FINISHINIT_OFFSET UNITYSDK_OFFSET(0x11AFF310)
#define CLASS_1_151B93D9C4BBDCA4__NEEDWAITSTREAMING_OFFSET UNITYSDK_OFFSET(0x11AFFA30)
#define CLASS_1_151B93D9C4BBDCA4__ONCLEAR_OFFSET UNITYSDK_OFFSET(0x11AFF3D0)
#define CLASS_1_151B93D9C4BBDCA4__ONINIT_OFFSET UNITYSDK_OFFSET(0x11AFF2C0)
#define CLASS_1_151B93D9C4BBDCA4__ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x11AFF260)
#define CLASS_1_151B93D9C4BBDCA4__ONSTART_OFFSET UNITYSDK_OFFSET(0x11AFF350)
#define CLASS_1_151B93D9C4BBDCA4__ONSTOP_OFFSET UNITYSDK_OFFSET(0x11AFF390)
#define CLASS_1_151B93D9C4BBDCA4__ONTICK_OFFSET UNITYSDK_OFFSET(0x11AFF200)
#define CLASS_1_151B93D9C4BBDCA4__SETPOSTPROCESSONCLEAR_OFFSET UNITYSDK_OFFSET(0x11AFF730)
#define CLASS_1_151B93D9C4BBDCA4__SETPOSTPROCESSONINIT_OFFSET UNITYSDK_OFFSET(0x11AFF520)
#define CLASS_1_151B93D9C4BBDCA4__STARTLEVELGRAPH_OFFSET UNITYSDK_OFFSET(0x11AFF8D0)

inline static constexpr unsigned int Class_1_151B93D9C4BBDCA4_TypeDefinitionIndex = 55845;

class Class_1_151B93D9C4BBDCA4 : public ::System::Object
{
public:
	// static const ::System::String* Field_1_14; // 0x0
	::RPG::Client::LittleGameManager* Field_1_4; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action*>* Field_1_3; // 0x18
	::Class_3_E21F6DE9B7FA4D05* Field_1_8; // 0x20
	::Class_2_3547B9D7F2C7CCA9* Field_1_7; // 0x28
	::RPG::GameCore::GameEntity* _OwnerEntity_k__BackingField; // 0x30
	::Class_3_E21F6DE9B7FA4D05* Field_1_10; // 0x38
	::System::String* Field_1_5; // 0x40
	::RPG::GameCore::GameEntity* _GameInstanceEntity_k__BackingField; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::GameEntity*>* Field_1_13; // 0x50
	::RPG::GameCore::LittleGameLevelConfig* Field_1_6; // 0x58
	::Class_3_E21F6DE9B7FA4D05* Field_1_9; // 0x60
	::RPG::GameCore::TaskContext* Field_1_12; // 0x68
	::RPG::Client::LittleGameState _State_k__BackingField; // 0x70
	::System::Boolean Field_1_11; // 0x74
	::System::Boolean Field_1_15; // 0x75

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_151B93D9C4BBDCA4__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_EBBBED89F4A42AC6(::Class_1_75C90E178B164D38* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_75C90E178B164D38*))((::PBYTE)hIl2Cpp + CLASS_1_151B93D9C4BBDCA4_METHOD_1_EBBBED89F4A42AC6_OFFSET))(this, a1);
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

	::System::Void Method_1_5C28A8AFAFD92C5B(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_151B93D9C4BBDCA4_METHOD_1_5C28A8AFAFD92C5B_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_937B1B6BADEDF73B(::System::UInt32 a1, ::RPG::GameCore::GameEntity*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::GameEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_151B93D9C4BBDCA4_METHOD_1_937B1B6BADEDF73B_OFFSET))(this, a1, a2);
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

	::UnityEngine::Transform* Method_1_2DC4E067BF1CB662()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_151B93D9C4BBDCA4_METHOD_1_2DC4E067BF1CB662_OFFSET))(this);
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

	::System::Boolean Method_1_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_151B93D9C4BBDCA4_METHOD_1_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::Class_2_E2910CE9CBBA0DE5* GetStateTreeRoot(::System::Int32 a1)
	{
		return ((::Class_2_E2910CE9CBBA0DE5*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_151B93D9C4BBDCA4_GETSTATETREEROOT_OFFSET))(this, a1);
	}

	::Class_2_0A142DC5409043BE* Method_1_042161E3ACC3627B(::System::Int32 a1)
	{
		return ((::Class_2_0A142DC5409043BE*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_151B93D9C4BBDCA4_METHOD_1_042161E3ACC3627B_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_151B93D9C4BBDCA4_METHOD_1_391A84BCD9F51317_1_OFFSET))(this);
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

	::System::Void _OnInit(::Class_1_75C90E178B164D38* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_75C90E178B164D38*))((::PBYTE)hIl2Cpp + CLASS_1_151B93D9C4BBDCA4__ONINIT_OFFSET))(this, a1);
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

	::System::Void Method_1_096B8CF2749EE7F7(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_151B93D9C4BBDCA4_METHOD_1_096B8CF2749EE7F7_OFFSET))(this, a1);
	}

	::System::Void _SetPostProcessOnInit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_151B93D9C4BBDCA4__SETPOSTPROCESSONINIT_OFFSET))(this);
	}

	::System::Void _SetPostProcessOnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_151B93D9C4BBDCA4__SETPOSTPROCESSONCLEAR_OFFSET))(this);
	}

	::System::Void Method_1_E876C8B6D3B840A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_151B93D9C4BBDCA4_METHOD_1_E876C8B6D3B840A6_OFFSET))(this);
	}

	::System::Void _StartLevelGraph()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_151B93D9C4BBDCA4__STARTLEVELGRAPH_OFFSET))(this);
	}

	::System::Void Method_1_9BAB385F8658C2AD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_151B93D9C4BBDCA4_METHOD_1_9BAB385F8658C2AD_OFFSET))(this);
	}

	::System::Boolean _NeedWaitStreaming()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_151B93D9C4BBDCA4__NEEDWAITSTREAMING_OFFSET))(this);
	}

	::System::Void Method_1_4EA6B1791DACA9CC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_151B93D9C4BBDCA4_METHOD_1_4EA6B1791DACA9CC_OFFSET))(this);
	}

	::System::Void Method_1_5B0531D5B96D6B96(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_1_151B93D9C4BBDCA4_METHOD_1_5B0531D5B96D6B96_OFFSET))(this, a1);
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

	::System::Void Method_1_F3E5C9969C015809(::Il2CppArray<::RPG::GameCore::TaskConfig*>* a1, ::Il2CppArray<::RPG::GameCore::TaskConfig*>* a2, ::Il2CppArray<::RPG::GameCore::TaskConfig*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*))((::PBYTE)hIl2Cpp + CLASS_1_151B93D9C4BBDCA4_METHOD_1_F3E5C9969C015809_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_ABE7CF9FA1B8CCA3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_151B93D9C4BBDCA4_METHOD_1_ABE7CF9FA1B8CCA3_OFFSET))(this);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_151B93D9C4BBDCA4_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_1_6617E33D0A2EDC18(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_151B93D9C4BBDCA4_METHOD_1_6617E33D0A2EDC18_OFFSET))(this, a1);
	}

	::RPG::Client::LittleGameState get_State()
	{
		return ((::RPG::Client::LittleGameState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_151B93D9C4BBDCA4_GET_STATE_OFFSET))(this);
	}

	::System::Void set_State(::RPG::Client::LittleGameState value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGameState))((::PBYTE)hIl2Cpp + CLASS_1_151B93D9C4BBDCA4_SET_STATE_OFFSET))(this, value);
	}

	::RPG::GameCore::GameEntity* get_GameInstanceEntity()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_151B93D9C4BBDCA4_GET_GAMEINSTANCEENTITY_OFFSET))(this);
	}

	::System::Void set_GameInstanceEntity(::RPG::GameCore::GameEntity* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_151B93D9C4BBDCA4_SET_GAMEINSTANCEENTITY_OFFSET))(this, value);
	}

	::RPG::GameCore::GameEntity* get_OwnerEntity()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_151B93D9C4BBDCA4_GET_OWNERENTITY_OFFSET))(this);
	}

	::System::Void set_OwnerEntity(::RPG::GameCore::GameEntity* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_151B93D9C4BBDCA4_SET_OWNERENTITY_OFFSET))(this, value);
	}
};
