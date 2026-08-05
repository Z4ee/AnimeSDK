#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_38.h"
#include "unitysdk/Enum_3_C24BA36B4CDB26BB.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/GameSubsystemBase.h"
#include "unitysdk/MoleMole/Level/BangbooPlayType.h"

class Class_1_33B50469231C7D95;
class Class_1_8A0D924C14430663_2;
class Class_2_CD42631606067E6B;
class Class_3_458D0227F95D6A45_5;
namespace MoleMole::Battle { class Entity; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_BANGBOOGAMESUBSYSTEM_ADDBANGBOOEXPECTSELF_OFFSET UNITYSDK_OFFSET(0x13E9FE80)
#define MOLEMOLE_BANGBOOGAMESUBSYSTEM_CREATEANDINITAIMANAGER_OFFSET UNITYSDK_OFFSET(0x17268D40)
#define MOLEMOLE_BANGBOOGAMESUBSYSTEM_CREATEANDINITMOVINGWALLAIMANAGER_OFFSET UNITYSDK_OFFSET(0x17268E30)
#define MOLEMOLE_BANGBOOGAMESUBSYSTEM_CREATEDEFAULTCHEATDETECTOR_OFFSET UNITYSDK_OFFSET(0x17269030)
#define MOLEMOLE_BANGBOOGAMESUBSYSTEM_CREATEORMODIFYCHEATDETECTOR_OFFSET UNITYSDK_OFFSET(0x17268F70)
#define MOLEMOLE_BANGBOOGAMESUBSYSTEM_DESTROYMOVINGWALLAIMANAGER_OFFSET UNITYSDK_OFFSET(0x17268ED0)
#define MOLEMOLE_BANGBOOGAMESUBSYSTEM_DOHIDEORIBUDDY_OFFSET UNITYSDK_OFFSET(0x17267EE0)
#define MOLEMOLE_BANGBOOGAMESUBSYSTEM_DOUNSETBATTLEINOUTSTATE_OFFSET UNITYSDK_OFFSET(0x17267D40)
#define MOLEMOLE_BANGBOOGAMESUBSYSTEM_GETBANGBOOEXPECTSELF_OFFSET UNITYSDK_OFFSET(0x13EA0000)
#define MOLEMOLE_BANGBOOGAMESUBSYSTEM_GETQUESTID_OFFSET UNITYSDK_OFFSET(0x17269850)
#define MOLEMOLE_BANGBOOGAMESUBSYSTEM_GET_AIMANAGER_OFFSET UNITYSDK_OFFSET(0x17268C40)
#define MOLEMOLE_BANGBOOGAMESUBSYSTEM_GET_CHEATDETECTOR_OFFSET UNITYSDK_OFFSET(0x17268C60)
#define MOLEMOLE_BANGBOOGAMESUBSYSTEM_GET_EXITTELEPORTID_OFFSET UNITYSDK_OFFSET(0x13E9FE40)
#define MOLEMOLE_BANGBOOGAMESUBSYSTEM_GET_GAMESTATE_OFFSET UNITYSDK_OFFSET(0x17268220)
#define MOLEMOLE_BANGBOOGAMESUBSYSTEM_GET_ISCOLLISIONENABLED_OFFSET UNITYSDK_OFFSET(0x17268BF0)
#define MOLEMOLE_BANGBOOGAMESUBSYSTEM_GET_ISINHENSHINBUDDYSTATUS_OFFSET UNITYSDK_OFFSET(0x13E9FE20)
#define MOLEMOLE_BANGBOOGAMESUBSYSTEM_GET_OFFSET UNITYSDK_OFFSET(0x17268130)
#define MOLEMOLE_BANGBOOGAMESUBSYSTEM_GET_RESTARTTELEPORTID_OFFSET UNITYSDK_OFFSET(0x13E9FE60)
#define MOLEMOLE_BANGBOOGAMESUBSYSTEM_HANDLEPARTYGAMECHEATENOTIFY_OFFSET UNITYSDK_OFFSET(0x1726A0E0)
#define MOLEMOLE_BANGBOOGAMESUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x172667C0)
#define MOLEMOLE_BANGBOOGAMESUBSYSTEM_ONCHANGETOAUTHORITY_OFFSET UNITYSDK_OFFSET(0x172693B0)
#define MOLEMOLE_BANGBOOGAMESUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x17267170)
#define MOLEMOLE_BANGBOOGAMESUBSYSTEM_ONGAMESTATECHANGED_OFFSET UNITYSDK_OFFSET(0x17268230)
#define MOLEMOLE_BANGBOOGAMESUBSYSTEM_ONMARCELMOVETOPODIUM_OFFSET UNITYSDK_OFFSET(0x17269DE0)
#define MOLEMOLE_BANGBOOGAMESUBSYSTEM_ONMPPARTYGAMERESULTSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x17269A00)
#define MOLEMOLE_BANGBOOGAMESUBSYSTEM_ONREBORN_OFFSET UNITYSDK_OFFSET(0x172690C0)
#define MOLEMOLE_BANGBOOGAMESUBSYSTEM_ONRESET_OFFSET UNITYSDK_OFFSET(0x17268C70)
#define MOLEMOLE_BANGBOOGAMESUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x17267490)
#define MOLEMOLE_BANGBOOGAMESUBSYSTEM_RECOVERDISPLAYENTITIES_OFFSET UNITYSDK_OFFSET(0x172679F0)
#define MOLEMOLE_BANGBOOGAMESUBSYSTEM_REGISTERAIBUDDY_OFFSET UNITYSDK_OFFSET(0x17269130)
#define MOLEMOLE_BANGBOOGAMESUBSYSTEM_SAVEBEREPLACEENTITY_OFFSET UNITYSDK_OFFSET(0x17267690)
#define MOLEMOLE_BANGBOOGAMESUBSYSTEM_SETEXITTELEPORTID_OFFSET UNITYSDK_OFFSET(0x17268090)
#define MOLEMOLE_BANGBOOGAMESUBSYSTEM_SETHENSHINBUDDYSTATUS_OFFSET UNITYSDK_OFFSET(0x17267C30)
#define MOLEMOLE_BANGBOOGAMESUBSYSTEM_SETPLAYERMULTIPLAYSTATE_OFFSET UNITYSDK_OFFSET(0x17266940)
#define MOLEMOLE_BANGBOOGAMESUBSYSTEM_SETRESTARTTELEPORTID_OFFSET UNITYSDK_OFFSET(0x172680E0)
#define MOLEMOLE_BANGBOOGAMESUBSYSTEM_SET_AIMANAGER_OFFSET UNITYSDK_OFFSET(0x17268C50)
#define MOLEMOLE_BANGBOOGAMESUBSYSTEM_SET_EXITTELEPORTID_OFFSET UNITYSDK_OFFSET(0x13E9FE50)
#define MOLEMOLE_BANGBOOGAMESUBSYSTEM_SET_GAMESTATE_OFFSET UNITYSDK_OFFSET(0x17267630)
#define MOLEMOLE_BANGBOOGAMESUBSYSTEM_SET_ISINHENSHINBUDDYSTATUS_OFFSET UNITYSDK_OFFSET(0x13E9FE30)
#define MOLEMOLE_BANGBOOGAMESUBSYSTEM_SET_RESTARTTELEPORTID_OFFSET UNITYSDK_OFFSET(0x13E9FE70)
#define MOLEMOLE_BANGBOOGAMESUBSYSTEM_UNREGISTERAIBUDDY_OFFSET UNITYSDK_OFFSET(0x17269270)
#define MOLEMOLE_BANGBOOGAMESUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1726A2F0)
#define MOLEMOLE_BANGBOOGAMESUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1726A3E0)
#define MOLEMOLE_BANGBOOGAMESUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1726A470)
#define MOLEMOLE_BANGBOOGAMESUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1726A500)

namespace MoleMole
{
	inline static constexpr unsigned int BangbooGameSubsystem_TypeDefinitionIndex = 63916;

	class BangbooGameSubsystem : public ::MoleMole::GameSubsystemBase
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::UInt32>* reachedPlayers; // 0x10
		::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* refReplacedEntityHandles; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* rankInfo; // 0x20
		::MoleMole::EntityHandle bangbooEntity; // 0x28
		::Class_1_33B50469231C7D95* _aiManager; // 0x38
		::System::Collections::Generic::HashSet_1<::System::UInt32>* quitPlayerSet; // 0x40
		::MoleMole::EntityHandle beReplacedEntityHandle; // 0x48
		::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* _bangBooExpectSelf; // 0x58
		::Class_1_8A0D924C14430663_2* _cheatDetector; // 0x60
		::System::Int32 levelTotalTimeSeconds; // 0x68
		::MoleMole::Level::BangbooPlayType curPlayType; // 0x6C
		::Enum_3_C24BA36B4CDB26BB curState; // 0x70
		::System::Boolean IsInHenshinMazinger; // 0x74
		::System::Boolean isSlideAILevel; // 0x75
		::System::Boolean _isInHenshinBuddyStatus_k__BackingField; // 0x76
		::System::Int64 StopCountDownTime; // 0x78
		::System::Int32 _exitTeleportID_k__BackingField; // 0x80
		::System::Int32 _restartTeleportID_k__BackingField; // 0x84
		::System::Int64 StartTimelineTime; // 0x88
		::System::Int64 StartCountDownTime; // 0x90
		::Enum_3_C24BA36B4CDB26BB _gameState; // 0x98
		::System::Int32 levelEndTimeMs; // 0x9C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGBOOGAMESUBSYSTEM__CTOR_OFFSET))(this);
		}

		::System::Boolean get_isInHenshinBuddyStatus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGBOOGAMESUBSYSTEM_GET_ISINHENSHINBUDDYSTATUS_OFFSET))(this);
		}

		::System::Void set_isInHenshinBuddyStatus(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGBOOGAMESUBSYSTEM_SET_ISINHENSHINBUDDYSTATUS_OFFSET))(this, value);
		}

		::System::Int32 get_exitTeleportID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGBOOGAMESUBSYSTEM_GET_EXITTELEPORTID_OFFSET))(this);
		}

		::System::Void set_exitTeleportID(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGBOOGAMESUBSYSTEM_SET_EXITTELEPORTID_OFFSET))(this, value);
		}

		::System::Int32 get_restartTeleportID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGBOOGAMESUBSYSTEM_GET_RESTARTTELEPORTID_OFFSET))(this);
		}

		::System::Void set_restartTeleportID(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGBOOGAMESUBSYSTEM_SET_RESTARTTELEPORTID_OFFSET))(this, value);
		}

		::System::Void AddBangBooExpectSelf(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGBOOGAMESUBSYSTEM_ADDBANGBOOEXPECTSELF_OFFSET))(this, entity);
		}

		::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* GetBangBooExpectSelf()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGBOOGAMESUBSYSTEM_GETBANGBOOEXPECTSELF_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGBOOGAMESUBSYSTEM_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGBOOGAMESUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGBOOGAMESUBSYSTEM_ONUPDATE_OFFSET))(this);
		}

		::System::Void SaveBeReplaceEntity(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGBOOGAMESUBSYSTEM_SAVEBEREPLACEENTITY_OFFSET))(this, entity);
		}

		::System::Void RecoverDisplayEntities()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGBOOGAMESUBSYSTEM_RECOVERDISPLAYENTITIES_OFFSET))(this);
		}

		::System::Void SetHenshinBuddyStatus(::System::Boolean isInHenshin)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGBOOGAMESUBSYSTEM_SETHENSHINBUDDYSTATUS_OFFSET))(this, isInHenshin);
		}

		::System::Void DoUnsetBattleInOutState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGBOOGAMESUBSYSTEM_DOUNSETBATTLEINOUTSTATE_OFFSET))(this);
		}

		::System::Void DoHideOriBuddy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGBOOGAMESUBSYSTEM_DOHIDEORIBUDDY_OFFSET))(this);
		}

		::System::Void SetPlayerMultiPlayState(::System::Boolean isInPlay)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGBOOGAMESUBSYSTEM_SETPLAYERMULTIPLAYSTATE_OFFSET))(this, isInPlay);
		}

		::System::Void SetExitTeleportID(::System::Int32 teleportID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGBOOGAMESUBSYSTEM_SETEXITTELEPORTID_OFFSET))(this, teleportID);
		}

		::System::Void SetRestartTeleportID(::System::Int32 teleportID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGBOOGAMESUBSYSTEM_SETRESTARTTELEPORTID_OFFSET))(this, teleportID);
		}

		static ::MoleMole::BangbooGameSubsystem* Get(::Class_2_CD42631606067E6B* ins)
		{
			return ((::MoleMole::BangbooGameSubsystem*(*)(::Class_2_CD42631606067E6B*))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGBOOGAMESUBSYSTEM_GET_OFFSET))(ins);
		}

		::Enum_3_C24BA36B4CDB26BB get_GameState()
		{
			return ((::Enum_3_C24BA36B4CDB26BB(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGBOOGAMESUBSYSTEM_GET_GAMESTATE_OFFSET))(this);
		}

		::System::Void set_GameState(::Enum_3_C24BA36B4CDB26BB value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_C24BA36B4CDB26BB))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGBOOGAMESUBSYSTEM_SET_GAMESTATE_OFFSET))(this, value);
		}

		::System::Boolean get_IsCollisionEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGBOOGAMESUBSYSTEM_GET_ISCOLLISIONENABLED_OFFSET))(this);
		}

		::Class_1_33B50469231C7D95* get_AIManager()
		{
			return ((::Class_1_33B50469231C7D95*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGBOOGAMESUBSYSTEM_GET_AIMANAGER_OFFSET))(this);
		}

		::System::Void set_AIManager(::Class_1_33B50469231C7D95* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_33B50469231C7D95*))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGBOOGAMESUBSYSTEM_SET_AIMANAGER_OFFSET))(this, value);
		}

		::Class_1_8A0D924C14430663_2* get_CheatDetector()
		{
			return ((::Class_1_8A0D924C14430663_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGBOOGAMESUBSYSTEM_GET_CHEATDETECTOR_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGBOOGAMESUBSYSTEM_ONRESET_OFFSET))(this);
		}

		::System::Void OnGameStateChanged(::Enum_3_C24BA36B4CDB26BB newState)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_C24BA36B4CDB26BB))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGBOOGAMESUBSYSTEM_ONGAMESTATECHANGED_OFFSET))(this, newState);
		}

		::System::Void CreateAndInitAIManager(::Enum_3_0A3761FE34514D6C_38 playType)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_38))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGBOOGAMESUBSYSTEM_CREATEANDINITAIMANAGER_OFFSET))(this, playType);
		}

		::System::Void CreateAndInitMovingWallAIManager()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGBOOGAMESUBSYSTEM_CREATEANDINITMOVINGWALLAIMANAGER_OFFSET))(this);
		}

		::System::Void DestroyMovingWallAIManager()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGBOOGAMESUBSYSTEM_DESTROYMOVINGWALLAIMANAGER_OFFSET))(this);
		}

		::System::Void CreateOrModifyCheatDetector(::System::Single minLongFrameTime, ::System::Single minAvarageFps)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGBOOGAMESUBSYSTEM_CREATEORMODIFYCHEATDETECTOR_OFFSET))(this, minLongFrameTime, minAvarageFps);
		}

		::System::Void CreateDefaultCheatDetector()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGBOOGAMESUBSYSTEM_CREATEDEFAULTCHEATDETECTOR_OFFSET))(this);
		}

		::System::Void OnReborn(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGBOOGAMESUBSYSTEM_ONREBORN_OFFSET))(this, entity);
		}

		::System::Void RegisterAIBuddy(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGBOOGAMESUBSYSTEM_REGISTERAIBUDDY_OFFSET))(this, entity);
		}

		::System::Void UnregisterAIBuddy(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGBOOGAMESUBSYSTEM_UNREGISTERAIBUDDY_OFFSET))(this, entity);
		}

		::System::Void OnChangeToAuthority(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGBOOGAMESUBSYSTEM_ONCHANGETOAUTHORITY_OFFSET))(this, entity);
		}

		static ::System::Int32 GetQuestID()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_BANGBOOGAMESUBSYSTEM_GETQUESTID_OFFSET))();
		}

		::System::Void OnMpPartyGameResultScNotify(::Class_3_458D0227F95D6A45_5* notify)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_458D0227F95D6A45_5*))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGBOOGAMESUBSYSTEM_ONMPPARTYGAMERESULTSCNOTIFY_OFFSET))(this, notify);
		}

		::System::Void OnMarcelMoveToPodium(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGBOOGAMESUBSYSTEM_ONMARCELMOVETOPODIUM_OFFSET))(this, args);
		}

		::System::Void HandlePartyGameCheateNotify(::System::Int32 cheatType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGBOOGAMESUBSYSTEM_HANDLEPARTYGAMECHEATENOTIFY_OFFSET))(this, cheatType);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGBOOGAMESUBSYSTEM___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGBOOGAMESUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGBOOGAMESUBSYSTEM___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
