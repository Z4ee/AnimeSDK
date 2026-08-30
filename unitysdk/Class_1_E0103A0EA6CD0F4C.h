#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameState.h"
#include "unitysdk/RPG/Client/LockSource.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_460;
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

#define CLASS_1_E0103A0EA6CD0F4C_ADDLEVELVARIABLELISTENER_OFFSET UNITYSDK_OFFSET(0x1A8D6D90)
#define CLASS_1_E0103A0EA6CD0F4C_ADDLITTLEGAMECUSTOMEVENTLISTENER_1_OFFSET UNITYSDK_OFFSET(0x1A8D68C0)
#define CLASS_1_E0103A0EA6CD0F4C_ADDLITTLEGAMECUSTOMEVENTLISTENER_OFFSET UNITYSDK_OFFSET(0x1A8D6690)
#define CLASS_1_E0103A0EA6CD0F4C_CANCLEAR_OFFSET UNITYSDK_OFFSET(0x1A8D74D0)
#define CLASS_1_E0103A0EA6CD0F4C_CANSTART_OFFSET UNITYSDK_OFFSET(0x1A8D7400)
#define CLASS_1_E0103A0EA6CD0F4C_EVALUATELEVELVARNUMBER_OFFSET UNITYSDK_OFFSET(0x1A8D6D00)
#define CLASS_1_E0103A0EA6CD0F4C_EVALUATELEVELVARSHORT_OFFSET UNITYSDK_OFFSET(0x1A8D6C70)
#define CLASS_1_E0103A0EA6CD0F4C_FIREEFFECT_OFFSET UNITYSDK_OFFSET(0x1A8D6EB0)
#define CLASS_1_E0103A0EA6CD0F4C_GETENTITYNAME_OFFSET UNITYSDK_OFFSET(0x1A8D7070)
#define CLASS_1_E0103A0EA6CD0F4C_GETLEVELCONFIG_OFFSET UNITYSDK_OFFSET(0x1A8D7370)
#define CLASS_1_E0103A0EA6CD0F4C_GETLEVELGRAPHPATH_OFFSET UNITYSDK_OFFSET(0x1A8D7160)
#define CLASS_1_E0103A0EA6CD0F4C_GETSERVICES_OFFSET UNITYSDK_OFFSET(0x1A8D70E0)
#define CLASS_1_E0103A0EA6CD0F4C_GETSTATETREEROOT_OFFSET UNITYSDK_OFFSET(0x1A8D7560)
#define CLASS_1_E0103A0EA6CD0F4C_GETTICKLODEXTRASAMPLEPOSITIONS_OFFSET UNITYSDK_OFFSET(0x1A8D73B0)
#define CLASS_1_E0103A0EA6CD0F4C_GETVIEWROOT_OFFSET UNITYSDK_OFFSET(0x1A8D7220)
#define CLASS_1_E0103A0EA6CD0F4C_GET_GAMEINSTANCEENTITY_OFFSET UNITYSDK_OFFSET(0x1A8D81C0)
#define CLASS_1_E0103A0EA6CD0F4C_GET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0x1A8D81E0)
#define CLASS_1_E0103A0EA6CD0F4C_GET_STATE_OFFSET UNITYSDK_OFFSET(0x1A8D81A0)
#define CLASS_1_E0103A0EA6CD0F4C_KILLEFFECT_OFFSET UNITYSDK_OFFSET(0x1A8D6F40)
#define CLASS_1_E0103A0EA6CD0F4C_METHOD_1_042161E3ACC3627B_OFFSET UNITYSDK_OFFSET(0x1A8D75B0)
#define CLASS_1_E0103A0EA6CD0F4C_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x1A8D4F20)
#define CLASS_1_E0103A0EA6CD0F4C_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x1A8D4E00)
#define CLASS_1_E0103A0EA6CD0F4C_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1A8D7490)
#define CLASS_1_E0103A0EA6CD0F4C_METHOD_1_45AA2F5085C2C40D_OFFSET UNITYSDK_OFFSET(0x1A8D45D0)
#define CLASS_1_E0103A0EA6CD0F4C_METHOD_1_46DF29ACE60986D7_1_OFFSET UNITYSDK_OFFSET(0x1A8D5CF0)
#define CLASS_1_E0103A0EA6CD0F4C_METHOD_1_46DF29ACE60986D7_OFFSET UNITYSDK_OFFSET(0x1A8D5A80)
#define CLASS_1_E0103A0EA6CD0F4C_METHOD_1_4EA6B1791DACA9CC_OFFSET UNITYSDK_OFFSET(0x1A8D58D0)
#define CLASS_1_E0103A0EA6CD0F4C_METHOD_1_50E8D69C1DC7F05E_OFFSET UNITYSDK_OFFSET(0x1A8D5F40)
#define CLASS_1_E0103A0EA6CD0F4C_METHOD_1_614288621F812149_OFFSET UNITYSDK_OFFSET(0x1A8D7120)
#define CLASS_1_E0103A0EA6CD0F4C_METHOD_1_6617E33D0A2EDC18_OFFSET UNITYSDK_OFFSET(0x1A8D5BE0)
#define CLASS_1_E0103A0EA6CD0F4C_METHOD_1_6D0836608BC79A1C_OFFSET UNITYSDK_OFFSET(0x1A8D6390)
#define CLASS_1_E0103A0EA6CD0F4C_METHOD_1_7E94D8F880D247DF_OFFSET UNITYSDK_OFFSET(0x1A8D80E0)
#define CLASS_1_E0103A0EA6CD0F4C_METHOD_1_7F5CED483AD163C9_OFFSET UNITYSDK_OFFSET(0x1A8D72B0)
#define CLASS_1_E0103A0EA6CD0F4C_METHOD_1_88BAD5AB2EA710EB_OFFSET UNITYSDK_OFFSET(0x1A8D6430)
#define CLASS_1_E0103A0EA6CD0F4C_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1A8D5040)
#define CLASS_1_E0103A0EA6CD0F4C_METHOD_1_ABE7CF9FA1B8CCA3_OFFSET UNITYSDK_OFFSET(0x1A8D4750)
#define CLASS_1_E0103A0EA6CD0F4C_METHOD_1_B0D0D30AA6E083F2_OFFSET UNITYSDK_OFFSET(0x1A8D4220)
#define CLASS_1_E0103A0EA6CD0F4C_METHOD_1_C7FBC58B0791AA44_OFFSET UNITYSDK_OFFSET(0x1A8D6490)
#define CLASS_1_E0103A0EA6CD0F4C_METHOD_1_CA20A96113B135EC_OFFSET UNITYSDK_OFFSET(0x1A8D78A0)
#define CLASS_1_E0103A0EA6CD0F4C_METHOD_1_CBDC22058B67F0FE_1_OFFSET UNITYSDK_OFFSET(0x1A8D51A0)
#define CLASS_1_E0103A0EA6CD0F4C_METHOD_1_CBDC22058B67F0FE_OFFSET UNITYSDK_OFFSET(0x1A8D4900)
#define CLASS_1_E0103A0EA6CD0F4C_METHOD_1_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x1A8D56A0)
#define CLASS_1_E0103A0EA6CD0F4C_METHOD_1_EF343326A0C7462C_OFFSET UNITYSDK_OFFSET(0x1A8D7FC0)
#define CLASS_1_E0103A0EA6CD0F4C_METHOD_1_FA770C7F64C435D0_OFFSET UNITYSDK_OFFSET(0x1A8D7E80)
#define CLASS_1_E0103A0EA6CD0F4C_REGISTERTASKSEQUENCES_OFFSET UNITYSDK_OFFSET(0x1A8D5E40)
#define CLASS_1_E0103A0EA6CD0F4C_REMOVELEVELVARIABLELISTENER_OFFSET UNITYSDK_OFFSET(0x1A8D6E20)
#define CLASS_1_E0103A0EA6CD0F4C_REMOVELITTLEGAMECUSTOMEVENTLISTENER_1_OFFSET UNITYSDK_OFFSET(0x1A8D6B40)
#define CLASS_1_E0103A0EA6CD0F4C_REMOVELITTLEGAMECUSTOMEVENTLISTENER_OFFSET UNITYSDK_OFFSET(0x1A8D6960)
#define CLASS_1_E0103A0EA6CD0F4C_SETLEVELVARSHORT_OFFSET UNITYSDK_OFFSET(0x1A8D6BE0)
#define CLASS_1_E0103A0EA6CD0F4C_SETRENDERVISIBLE_OFFSET UNITYSDK_OFFSET(0x1A8D6FD0)
#define CLASS_1_E0103A0EA6CD0F4C_SET_GAMEINSTANCEENTITY_OFFSET UNITYSDK_OFFSET(0x1A8D81D0)
#define CLASS_1_E0103A0EA6CD0F4C_SET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0x1A8D81F0)
#define CLASS_1_E0103A0EA6CD0F4C_SET_STATE_OFFSET UNITYSDK_OFFSET(0x1A8D81B0)
#define CLASS_1_E0103A0EA6CD0F4C_TRIGGERLITTLEGAMECUSTOMEVENT_1_OFFSET UNITYSDK_OFFSET(0x1A8D6600)
#define CLASS_1_E0103A0EA6CD0F4C_TRIGGERLITTLEGAMECUSTOMEVENT_OFFSET UNITYSDK_OFFSET(0x1A8D6530)
#define CLASS_1_E0103A0EA6CD0F4C__CANLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1A8D7650)
#define CLASS_1_E0103A0EA6CD0F4C__CANTICK_OFFSET UNITYSDK_OFFSET(0x1A8D7600)
#define CLASS_1_E0103A0EA6CD0F4C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8D8200)
#define CLASS_1_E0103A0EA6CD0F4C__FINISHINIT_OFFSET UNITYSDK_OFFSET(0x1A8D77A0)
#define CLASS_1_E0103A0EA6CD0F4C__NEEDWAITSTREAMING_OFFSET UNITYSDK_OFFSET(0x1A8D7F00)
#define CLASS_1_E0103A0EA6CD0F4C__ONCLEAR_OFFSET UNITYSDK_OFFSET(0x1A8D7860)
#define CLASS_1_E0103A0EA6CD0F4C__ONINIT_OFFSET UNITYSDK_OFFSET(0x1A8D7750)
#define CLASS_1_E0103A0EA6CD0F4C__ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1A8D76F0)
#define CLASS_1_E0103A0EA6CD0F4C__ONSTART_OFFSET UNITYSDK_OFFSET(0x1A8D77E0)
#define CLASS_1_E0103A0EA6CD0F4C__ONSTOP_OFFSET UNITYSDK_OFFSET(0x1A8D7820)
#define CLASS_1_E0103A0EA6CD0F4C__ONTICK_OFFSET UNITYSDK_OFFSET(0x1A8D7690)
#define CLASS_1_E0103A0EA6CD0F4C__SETPOSTPROCESSONCLEAR_OFFSET UNITYSDK_OFFSET(0x1A8D7BF0)
#define CLASS_1_E0103A0EA6CD0F4C__SETPOSTPROCESSONINIT_OFFSET UNITYSDK_OFFSET(0x1A8D7970)
#define CLASS_1_E0103A0EA6CD0F4C__STARTLEVELGRAPH_OFFSET UNITYSDK_OFFSET(0x1A8D7DF0)

inline static constexpr unsigned int Class_1_E0103A0EA6CD0F4C_TypeDefinitionIndex = 60666;

class Class_1_E0103A0EA6CD0F4C : public ::System::Object
{
public:
	// static const ::System::String* GKPEEJNJBCJ; // 0x0
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x10
	::Class_3_07C3C4D2990C49EE* INJAFKILCKC; // 0x18
	::Class_3_07C3C4D2990C49EE* PIAIHCJPJDG; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::GameEntity*>* JFBFIDDALLG; // 0x28
	::RPG::GameCore::LittleGameLevelConfig* CLKEPOJFDPD; // 0x30
	::Class_3_07C3C4D2990C49EE* BKEIJFLIONC; // 0x38
	::System::String* BFDFFDNCBCA; // 0x40
	::Class_2_7D53347CD75A5D8B* DLALHGJDNNO; // 0x48
	::RPG::Client::LittleGameManager* NMKCIEGHMLF; // 0x50
	::RPG::GameCore::GameEntity* _OwnerEntity_k__BackingField; // 0x58
	::RPG::GameCore::GameEntity* _GameInstanceEntity_k__BackingField; // 0x60
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action*>* LOOHCKGKHNJ; // 0x68
	::RPG::Client::LittleGameState _State_k__BackingField; // 0x70
	::System::Boolean MLEAGNIHILM; // 0x74
	::System::Boolean EOKLHLCFLFK; // 0x75

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E0103A0EA6CD0F4C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_B0D0D30AA6E083F2(::Class_1_4CD8A1ACD565F336* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4CD8A1ACD565F336*))((::PBYTE)hIl2Cpp + CLASS_1_E0103A0EA6CD0F4C_METHOD_1_B0D0D30AA6E083F2_OFFSET))(this, a1);
	}

	::System::Void Method_1_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E0103A0EA6CD0F4C_METHOD_1_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_1_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E0103A0EA6CD0F4C_METHOD_1_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E0103A0EA6CD0F4C_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_1_46DF29ACE60986D7(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E0103A0EA6CD0F4C_METHOD_1_46DF29ACE60986D7_OFFSET))(this, a1);
	}

	::System::Void Method_1_46DF29ACE60986D7_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E0103A0EA6CD0F4C_METHOD_1_46DF29ACE60986D7_1_OFFSET))(this, a1);
	}

	::System::Void RegisterTaskSequences(::Il2CppArray<::RPG::GameCore::TaskConfig*>* a1, ::Il2CppArray<::RPG::GameCore::TaskConfig*>* a2, ::Il2CppArray<::RPG::GameCore::TaskConfig*>* a3, ::RPG::GameCore::TaskContext* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_E0103A0EA6CD0F4C_REGISTERTASKSEQUENCES_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_6D0836608BC79A1C(::System::UInt32 a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_E0103A0EA6CD0F4C_METHOD_1_6D0836608BC79A1C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_88BAD5AB2EA710EB(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E0103A0EA6CD0F4C_METHOD_1_88BAD5AB2EA710EB_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_C7FBC58B0791AA44(::System::UInt32 a1, ::RPG::GameCore::GameEntity*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::GameEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_E0103A0EA6CD0F4C_METHOD_1_C7FBC58B0791AA44_OFFSET))(this, a1, a2);
	}

	::System::Void TriggerLittleGameCustomEvent(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E0103A0EA6CD0F4C_TRIGGERLITTLEGAMECUSTOMEVENT_OFFSET))(this, a1);
	}

	::System::Void TriggerLittleGameCustomEvent_1(::System::String* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E0103A0EA6CD0F4C_TRIGGERLITTLEGAMECUSTOMEVENT_1_OFFSET))(this, a1, a2);
	}

	::System::Void AddLittleGameCustomEventListener(::System::String* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_E0103A0EA6CD0F4C_ADDLITTLEGAMECUSTOMEVENTLISTENER_OFFSET))(this, a1, a2);
	}

	::System::Void AddLittleGameCustomEventListener_1(::System::String* a1, ::System::UInt32 a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_E0103A0EA6CD0F4C_ADDLITTLEGAMECUSTOMEVENTLISTENER_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void RemoveLittleGameCustomEventListener(::System::String* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_E0103A0EA6CD0F4C_REMOVELITTLEGAMECUSTOMEVENTLISTENER_OFFSET))(this, a1, a2);
	}

	::System::Void RemoveLittleGameCustomEventListener_1(::System::String* a1, ::System::UInt32 a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_E0103A0EA6CD0F4C_REMOVELITTLEGAMECUSTOMEVENTLISTENER_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void SetLevelVarShort(::System::String* a1, ::RPG::GameCore::DynamicFloat* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::DynamicFloat*))((::PBYTE)hIl2Cpp + CLASS_1_E0103A0EA6CD0F4C_SETLEVELVARSHORT_OFFSET))(this, a1, a2);
	}

	::System::Int16 EvaluateLevelVarShort(::RPG::GameCore::DynamicFloat* a1)
	{
		return ((::System::Int16(*)(::PVOID, ::RPG::GameCore::DynamicFloat*))((::PBYTE)hIl2Cpp + CLASS_1_E0103A0EA6CD0F4C_EVALUATELEVELVARSHORT_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint EvaluateLevelVarNumber(::RPG::GameCore::DynamicFloat* a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::DynamicFloat*))((::PBYTE)hIl2Cpp + CLASS_1_E0103A0EA6CD0F4C_EVALUATELEVELVARNUMBER_OFFSET))(this, a1);
	}

	::System::Void AddLevelVariableListener(::System::String* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_E0103A0EA6CD0F4C_ADDLEVELVARIABLELISTENER_OFFSET))(this, a1, a2);
	}

	::System::Void RemoveLevelVariableListener(::System::String* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_E0103A0EA6CD0F4C_REMOVELEVELVARIABLELISTENER_OFFSET))(this, a1, a2);
	}

	::System::Void FireEffect(::Entitas::IEntity* a1, ::RPG::GameCore::LittleGameFireEffectParams* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::RPG::GameCore::LittleGameFireEffectParams*))((::PBYTE)hIl2Cpp + CLASS_1_E0103A0EA6CD0F4C_FIREEFFECT_OFFSET))(this, a1, a2);
	}

	::System::Void KillEffect(::Entitas::IEntity* a1, ::RPG::GameCore::LittleGameKillEffectParams* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::RPG::GameCore::LittleGameKillEffectParams*))((::PBYTE)hIl2Cpp + CLASS_1_E0103A0EA6CD0F4C_KILLEFFECT_OFFSET))(this, a1, a2);
	}

	::System::Void SetRenderVisible(::Entitas::IEntity* a1, ::System::Boolean a2, ::Il2CppArray<::System::String*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::System::Boolean, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_E0103A0EA6CD0F4C_SETRENDERVISIBLE_OFFSET))(this, a1, a2, a3);
	}

	::System::String* GetEntityName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E0103A0EA6CD0F4C_GETENTITYNAME_OFFSET))(this);
	}

	::Class_1_47EE63CB5C4DC8FC_5* GetServices()
	{
		return ((::Class_1_47EE63CB5C4DC8FC_5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E0103A0EA6CD0F4C_GETSERVICES_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_1_614288621F812149()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E0103A0EA6CD0F4C_METHOD_1_614288621F812149_OFFSET))(this);
	}

	::System::String* GetLevelGraphPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E0103A0EA6CD0F4C_GETLEVELGRAPHPATH_OFFSET))(this);
	}

	::UnityEngine::Transform* GetViewRoot(::Entitas::IEntity* a1)
	{
		return ((::UnityEngine::Transform*(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + CLASS_1_E0103A0EA6CD0F4C_GETVIEWROOT_OFFSET))(this, a1);
	}

	::RPG::GameCore::LevelGraphValueSource* Method_1_7F5CED483AD163C9()
	{
		return ((::RPG::GameCore::LevelGraphValueSource*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E0103A0EA6CD0F4C_METHOD_1_7F5CED483AD163C9_OFFSET))(this);
	}

	::RPG::GameCore::LittleGameLevelConfig* GetLevelConfig()
	{
		return ((::RPG::GameCore::LittleGameLevelConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E0103A0EA6CD0F4C_GETLEVELCONFIG_OFFSET))(this);
	}

	::System::Void GetTickLodExtraSamplePositions(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + CLASS_1_E0103A0EA6CD0F4C_GETTICKLODEXTRASAMPLEPOSITIONS_OFFSET))(this, a1);
	}

	::System::Boolean CanStart()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E0103A0EA6CD0F4C_CANSTART_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E0103A0EA6CD0F4C_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Boolean CanClear()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E0103A0EA6CD0F4C_CANCLEAR_OFFSET))(this);
	}

	::Class_2_E2910CE9CBBA0DE5* GetStateTreeRoot(::System::Int32 a1)
	{
		return ((::Class_2_E2910CE9CBBA0DE5*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E0103A0EA6CD0F4C_GETSTATETREEROOT_OFFSET))(this, a1);
	}

	::Class_2_0A142DC5409043BE* Method_1_042161E3ACC3627B(::System::Int32 a1)
	{
		return ((::Class_2_0A142DC5409043BE*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E0103A0EA6CD0F4C_METHOD_1_042161E3ACC3627B_OFFSET))(this, a1);
	}

	::System::Boolean _CanTick()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E0103A0EA6CD0F4C__CANTICK_OFFSET))(this);
	}

	::System::Boolean _CanLateUpdate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E0103A0EA6CD0F4C__CANLATEUPDATE_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E0103A0EA6CD0F4C__ONTICK_OFFSET))(this, a1);
	}

	::System::Void _OnLateUpdate(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E0103A0EA6CD0F4C__ONLATEUPDATE_OFFSET))(this, a1);
	}

	::System::Void _OnInit(::Class_1_4CD8A1ACD565F336* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4CD8A1ACD565F336*))((::PBYTE)hIl2Cpp + CLASS_1_E0103A0EA6CD0F4C__ONINIT_OFFSET))(this, a1);
	}

	::System::Void _FinishInit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E0103A0EA6CD0F4C__FINISHINIT_OFFSET))(this);
	}

	::System::Void _OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E0103A0EA6CD0F4C__ONSTART_OFFSET))(this);
	}

	::System::Void _OnStop()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E0103A0EA6CD0F4C__ONSTOP_OFFSET))(this);
	}

	::System::Void _OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E0103A0EA6CD0F4C__ONCLEAR_OFFSET))(this);
	}

	::System::Void Method_1_CA20A96113B135EC(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E0103A0EA6CD0F4C_METHOD_1_CA20A96113B135EC_OFFSET))(this, a1);
	}

	::System::Void _SetPostProcessOnInit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E0103A0EA6CD0F4C__SETPOSTPROCESSONINIT_OFFSET))(this);
	}

	::System::Void _SetPostProcessOnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E0103A0EA6CD0F4C__SETPOSTPROCESSONCLEAR_OFFSET))(this);
	}

	::System::Void Method_1_45AA2F5085C2C40D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E0103A0EA6CD0F4C_METHOD_1_45AA2F5085C2C40D_OFFSET))(this);
	}

	::System::Void _StartLevelGraph()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E0103A0EA6CD0F4C__STARTLEVELGRAPH_OFFSET))(this);
	}

	::System::Void Method_1_FA770C7F64C435D0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E0103A0EA6CD0F4C_METHOD_1_FA770C7F64C435D0_OFFSET))(this);
	}

	::System::Boolean _NeedWaitStreaming()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E0103A0EA6CD0F4C__NEEDWAITSTREAMING_OFFSET))(this);
	}

	::System::Void Method_1_4EA6B1791DACA9CC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E0103A0EA6CD0F4C_METHOD_1_4EA6B1791DACA9CC_OFFSET))(this);
	}

	::System::Void Method_1_EF343326A0C7462C(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_1_E0103A0EA6CD0F4C_METHOD_1_EF343326A0C7462C_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::RPG::Client::LockSource>* Method_1_7E94D8F880D247DF()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::LockSource>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E0103A0EA6CD0F4C_METHOD_1_7E94D8F880D247DF_OFFSET))(this);
	}

	::System::Void Method_1_CBDC22058B67F0FE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E0103A0EA6CD0F4C_METHOD_1_CBDC22058B67F0FE_OFFSET))(this);
	}

	::System::Void Method_1_CBDC22058B67F0FE_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E0103A0EA6CD0F4C_METHOD_1_CBDC22058B67F0FE_1_OFFSET))(this);
	}

	::System::Void Method_1_50E8D69C1DC7F05E(::Il2CppArray<::RPG::GameCore::TaskConfig*>* a1, ::Il2CppArray<::RPG::GameCore::TaskConfig*>* a2, ::Il2CppArray<::RPG::GameCore::TaskConfig*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*))((::PBYTE)hIl2Cpp + CLASS_1_E0103A0EA6CD0F4C_METHOD_1_50E8D69C1DC7F05E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_ABE7CF9FA1B8CCA3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E0103A0EA6CD0F4C_METHOD_1_ABE7CF9FA1B8CCA3_OFFSET))(this);
	}

	::System::Void Method_1_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E0103A0EA6CD0F4C_METHOD_1_E7EF6BC52B28648C_OFFSET))(this);
	}

	::System::Void Method_1_6617E33D0A2EDC18(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E0103A0EA6CD0F4C_METHOD_1_6617E33D0A2EDC18_OFFSET))(this, a1);
	}

	::RPG::Client::LittleGameState get_State()
	{
		return ((::RPG::Client::LittleGameState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E0103A0EA6CD0F4C_GET_STATE_OFFSET))(this);
	}

	::System::Void set_State(::RPG::Client::LittleGameState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGameState))((::PBYTE)hIl2Cpp + CLASS_1_E0103A0EA6CD0F4C_SET_STATE_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* get_GameInstanceEntity()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E0103A0EA6CD0F4C_GET_GAMEINSTANCEENTITY_OFFSET))(this);
	}

	::System::Void set_GameInstanceEntity(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_E0103A0EA6CD0F4C_SET_GAMEINSTANCEENTITY_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* get_OwnerEntity()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E0103A0EA6CD0F4C_GET_OWNERENTITY_OFFSET))(this);
	}

	::System::Void set_OwnerEntity(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_E0103A0EA6CD0F4C_SET_OWNERENTITY_OFFSET))(this, a1);
	}
};
