#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_13.h"
#include "unitysdk/Enum_3_C24BA36B4CDB26BB.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/GameSubsystemBase.h"
#include "unitysdk/MoleMole/Level/BangbooPlayType.h"

class Class_1_33B50469231C7D95;
class Class_1_8A0D924C14430663_1;
class Class_2_CD42631606067E6B;
class Class_3_1D4158EAD4AF84E1;
namespace MoleMole::Battle { class Entity; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_BANGBOOGAMESUBSYSTEM_ADDBANGBOOEXPECTSELF_OFFSET UNITYSDK_OFFSET(0x122D2340)
#define MOLEMOLE_BANGBOOGAMESUBSYSTEM_CREATEANDINITAIMANAGER_OFFSET UNITYSDK_OFFSET(0x122D4AF0)
#define MOLEMOLE_BANGBOOGAMESUBSYSTEM_CREATEANDINITMOVINGWALLAIMANAGER_OFFSET UNITYSDK_OFFSET(0x122D4BE0)
#define MOLEMOLE_BANGBOOGAMESUBSYSTEM_CREATEDEFAULTCHEATDETECTOR_OFFSET UNITYSDK_OFFSET(0x122D4DE0)
#define MOLEMOLE_BANGBOOGAMESUBSYSTEM_CREATEORMODIFYCHEATDETECTOR_OFFSET UNITYSDK_OFFSET(0x122D4D20)
#define MOLEMOLE_BANGBOOGAMESUBSYSTEM_DESTROYMOVINGWALLAIMANAGER_OFFSET UNITYSDK_OFFSET(0x122D4C80)
#define MOLEMOLE_BANGBOOGAMESUBSYSTEM_DOHIDEORIBUDDY_OFFSET UNITYSDK_OFFSET(0x122D3C70)
#define MOLEMOLE_BANGBOOGAMESUBSYSTEM_DOUNSETBATTLEINOUTSTATE_OFFSET UNITYSDK_OFFSET(0x122D3AD0)
#define MOLEMOLE_BANGBOOGAMESUBSYSTEM_GETBANGBOOEXPECTSELF_OFFSET UNITYSDK_OFFSET(0x122D24C0)
#define MOLEMOLE_BANGBOOGAMESUBSYSTEM_GETQUESTID_OFFSET UNITYSDK_OFFSET(0x122D5610)
#define MOLEMOLE_BANGBOOGAMESUBSYSTEM_GET_AIMANAGER_OFFSET UNITYSDK_OFFSET(0x122D49F0)
#define MOLEMOLE_BANGBOOGAMESUBSYSTEM_GET_CHEATDETECTOR_OFFSET UNITYSDK_OFFSET(0x122D4A10)
#define MOLEMOLE_BANGBOOGAMESUBSYSTEM_GET_EXITTELEPORTID_OFFSET UNITYSDK_OFFSET(0x122D2300)
#define MOLEMOLE_BANGBOOGAMESUBSYSTEM_GET_GAMESTATE_OFFSET UNITYSDK_OFFSET(0x122D3FB0)
#define MOLEMOLE_BANGBOOGAMESUBSYSTEM_GET_ISCOLLISIONENABLED_OFFSET UNITYSDK_OFFSET(0x122D49A0)
#define MOLEMOLE_BANGBOOGAMESUBSYSTEM_GET_ISINHENSHINBUDDYSTATUS_OFFSET UNITYSDK_OFFSET(0x122D22E0)
#define MOLEMOLE_BANGBOOGAMESUBSYSTEM_GET_OFFSET UNITYSDK_OFFSET(0x122D3EC0)
#define MOLEMOLE_BANGBOOGAMESUBSYSTEM_GET_RESTARTTELEPORTID_OFFSET UNITYSDK_OFFSET(0x122D2320)
#define MOLEMOLE_BANGBOOGAMESUBSYSTEM_HANDLEPARTYGAMECHEATENOTIFY_OFFSET UNITYSDK_OFFSET(0x122D5E80)
#define MOLEMOLE_BANGBOOGAMESUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x122D2560)
#define MOLEMOLE_BANGBOOGAMESUBSYSTEM_ONCHANGETOAUTHORITY_OFFSET UNITYSDK_OFFSET(0x122D5160)
#define MOLEMOLE_BANGBOOGAMESUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x122D2F10)
#define MOLEMOLE_BANGBOOGAMESUBSYSTEM_ONGAMESTATECHANGED_OFFSET UNITYSDK_OFFSET(0x122D3FC0)
#define MOLEMOLE_BANGBOOGAMESUBSYSTEM_ONMARCELMOVETOPODIUM_OFFSET UNITYSDK_OFFSET(0x122D5B80)
#define MOLEMOLE_BANGBOOGAMESUBSYSTEM_ONMPPARTYGAMERESULTSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x122D57C0)
#define MOLEMOLE_BANGBOOGAMESUBSYSTEM_ONREBORN_OFFSET UNITYSDK_OFFSET(0x122D4E70)
#define MOLEMOLE_BANGBOOGAMESUBSYSTEM_ONRESET_OFFSET UNITYSDK_OFFSET(0x122D4A20)
#define MOLEMOLE_BANGBOOGAMESUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x122D3230)
#define MOLEMOLE_BANGBOOGAMESUBSYSTEM_RECOVERDISPLAYENTITIES_OFFSET UNITYSDK_OFFSET(0x122D3780)
#define MOLEMOLE_BANGBOOGAMESUBSYSTEM_REGISTERAIBUDDY_OFFSET UNITYSDK_OFFSET(0x122D4EE0)
#define MOLEMOLE_BANGBOOGAMESUBSYSTEM_SAVEBEREPLACEENTITY_OFFSET UNITYSDK_OFFSET(0x122D3420)
#define MOLEMOLE_BANGBOOGAMESUBSYSTEM_SETEXITTELEPORTID_OFFSET UNITYSDK_OFFSET(0x122D3E20)
#define MOLEMOLE_BANGBOOGAMESUBSYSTEM_SETHENSHINBUDDYSTATUS_OFFSET UNITYSDK_OFFSET(0x122D39C0)
#define MOLEMOLE_BANGBOOGAMESUBSYSTEM_SETPLAYERMULTIPLAYSTATE_OFFSET UNITYSDK_OFFSET(0x122D26E0)
#define MOLEMOLE_BANGBOOGAMESUBSYSTEM_SETRESTARTTELEPORTID_OFFSET UNITYSDK_OFFSET(0x122D3E70)
#define MOLEMOLE_BANGBOOGAMESUBSYSTEM_SET_AIMANAGER_OFFSET UNITYSDK_OFFSET(0x122D4A00)
#define MOLEMOLE_BANGBOOGAMESUBSYSTEM_SET_EXITTELEPORTID_OFFSET UNITYSDK_OFFSET(0x122D2310)
#define MOLEMOLE_BANGBOOGAMESUBSYSTEM_SET_GAMESTATE_OFFSET UNITYSDK_OFFSET(0x122D33C0)
#define MOLEMOLE_BANGBOOGAMESUBSYSTEM_SET_ISINHENSHINBUDDYSTATUS_OFFSET UNITYSDK_OFFSET(0x122D22F0)
#define MOLEMOLE_BANGBOOGAMESUBSYSTEM_SET_RESTARTTELEPORTID_OFFSET UNITYSDK_OFFSET(0x122D2330)
#define MOLEMOLE_BANGBOOGAMESUBSYSTEM_UNREGISTERAIBUDDY_OFFSET UNITYSDK_OFFSET(0x122D5020)
#define MOLEMOLE_BANGBOOGAMESUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x122D6090)
#define MOLEMOLE_BANGBOOGAMESUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x122D6180)
#define MOLEMOLE_BANGBOOGAMESUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x122D6210)
#define MOLEMOLE_BANGBOOGAMESUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x122D62A0)

namespace MoleMole
{
	inline static constexpr unsigned int BangbooGameSubsystem_TypeDefinitionIndex = 55008;

	class BangbooGameSubsystem : public ::MoleMole::GameSubsystemBase
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::UInt32>* reachedPlayers; // 0x10
		::Class_1_33B50469231C7D95* _aiManager; // 0x18
		::MoleMole::EntityHandle bangbooEntity; // 0x20
		::MoleMole::EntityHandle beReplacedEntityHandle; // 0x30
		::Class_1_8A0D924C14430663_1* _cheatDetector; // 0x40
		::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* _bangBooExpectSelf; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* rankInfo; // 0x50
		::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* refReplacedEntityHandles; // 0x58
		::System::Collections::Generic::HashSet_1<::System::UInt32>* quitPlayerSet; // 0x60
		::MoleMole::Level::BangbooPlayType curPlayType; // 0x68
		::Enum_3_C24BA36B4CDB26BB _gameState; // 0x6C
		::System::Boolean _isInHenshinBuddyStatus_k__BackingField; // 0x70
		::System::Boolean IsInHenshinMazinger; // 0x71
		::System::Boolean isSlideAILevel; // 0x72
		::System::Int32 levelEndTimeMs; // 0x74
		::System::Int64 StopCountDownTime; // 0x78
		::System::Int64 StartCountDownTime; // 0x80
		::System::Int32 _restartTeleportID_k__BackingField; // 0x88
		::Enum_3_C24BA36B4CDB26BB curState; // 0x8C
		::System::Int32 _exitTeleportID_k__BackingField; // 0x90
		::System::Int32 levelTotalTimeSeconds; // 0x94
		::System::Int64 StartTimelineTime; // 0x98

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

		::Class_1_8A0D924C14430663_1* get_CheatDetector()
		{
			return ((::Class_1_8A0D924C14430663_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGBOOGAMESUBSYSTEM_GET_CHEATDETECTOR_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGBOOGAMESUBSYSTEM_ONRESET_OFFSET))(this);
		}

		::System::Void OnGameStateChanged(::Enum_3_C24BA36B4CDB26BB newState)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_C24BA36B4CDB26BB))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGBOOGAMESUBSYSTEM_ONGAMESTATECHANGED_OFFSET))(this, newState);
		}

		::System::Void CreateAndInitAIManager(::Enum_3_0A3761FE34514D6C_13 playType)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_13))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGBOOGAMESUBSYSTEM_CREATEANDINITAIMANAGER_OFFSET))(this, playType);
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

		::System::Void OnMpPartyGameResultScNotify(::Class_3_1D4158EAD4AF84E1* notify)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_1D4158EAD4AF84E1*))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGBOOGAMESUBSYSTEM_ONMPPARTYGAMERESULTSCNOTIFY_OFFSET))(this, notify);
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
