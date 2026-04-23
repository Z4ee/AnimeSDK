#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BattlePhaseFinishType.h"
#include "unitysdk/RPG/Client/LevelDirector.h"
#include "unitysdk/RPG/MQuaternion.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_382;
class Class_1_887CCB848AAECD15;
class Class_1_B5D56B5BA908E892;
namespace RPG::Client { class LevelStageVisableController; }
namespace RPG::Client { class Stage; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class TeamFormationComponent; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BATTLELEVELDIRECTOR_BATTLEPHASEFINISH_OFFSET UNITYSDK_OFFSET(0x9E60E40)
#define RPG_CLIENT_BATTLELEVELDIRECTOR_BINDCURRSTAGE_OFFSET UNITYSDK_OFFSET(0x9E623A0)
#define RPG_CLIENT_BATTLELEVELDIRECTOR_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9E5F980)
#define RPG_CLIENT_BATTLELEVELDIRECTOR_GET_AUTOTOTALDAMAGEFINISH_OFFSET UNITYSDK_OFFSET(0x9E62360)
#define RPG_CLIENT_BATTLELEVELDIRECTOR_GET_CURRSTAGE_OFFSET UNITYSDK_OFFSET(0x9E62380)
#define RPG_CLIENT_BATTLELEVELDIRECTOR_GET_CUSTOMIZEFORMATION_OFFSET UNITYSDK_OFFSET(0x9E62340)
#define RPG_CLIENT_BATTLELEVELDIRECTOR_GET_ROOTSTAGEVISABLECONTROLLER_OFFSET UNITYSDK_OFFSET(0x9E623F0)
#define RPG_CLIENT_BATTLELEVELDIRECTOR_LEVELCREATEPLAYERTEAMFINISH_OFFSET UNITYSDK_OFFSET(0x9E60DF0)
#define RPG_CLIENT_BATTLELEVELDIRECTOR_LEVELPREBATTLEPERFORM_OFFSET UNITYSDK_OFFSET(0x9E606B0)
#define RPG_CLIENT_BATTLELEVELDIRECTOR_LEVELREFRESHDARKTEAMFACETO_OFFSET UNITYSDK_OFFSET(0x9E60340)
#define RPG_CLIENT_BATTLELEVELDIRECTOR_LEVELREFRESHTEAMLOCATION_OFFSET UNITYSDK_OFFSET(0x9E5D820)
#define RPG_CLIENT_BATTLELEVELDIRECTOR_LEVELRESETLEVELAREAROOTTOCENTER_OFFSET UNITYSDK_OFFSET(0x9E60490)
#define RPG_CLIENT_BATTLELEVELDIRECTOR_LEVELRESULTPERFORM_OFFSET UNITYSDK_OFFSET(0x9E60D60)
#define RPG_CLIENT_BATTLELEVELDIRECTOR_SET_AUTOTOTALDAMAGEFINISH_OFFSET UNITYSDK_OFFSET(0x9E62370)
#define RPG_CLIENT_BATTLELEVELDIRECTOR_SET_CURRSTAGE_OFFSET UNITYSDK_OFFSET(0x9E62390)
#define RPG_CLIENT_BATTLELEVELDIRECTOR_SET_CUSTOMIZEFORMATION_OFFSET UNITYSDK_OFFSET(0x9E62350)
#define RPG_CLIENT_BATTLELEVELDIRECTOR_SET_ROOTSTAGEVISABLECONTROLLER_OFFSET UNITYSDK_OFFSET(0x9E62400)
#define RPG_CLIENT_BATTLELEVELDIRECTOR_TICK_OFFSET UNITYSDK_OFFSET(0x9E5FAF0)
#define RPG_CLIENT_BATTLELEVELDIRECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x9E5F7B0)
#define RPG_CLIENT_BATTLELEVELDIRECTOR__DARKTEAMENTITYFACETO_OFFSET UNITYSDK_OFFSET(0x9E61480)
#define RPG_CLIENT_BATTLELEVELDIRECTOR__DODARKTEAMFACETOACTIVEENTITY_OFFSET UNITYSDK_OFFSET(0x9E5FF20)
#define RPG_CLIENT_BATTLELEVELDIRECTOR__ENTITYPLAYANIMATION_OFFSET UNITYSDK_OFFSET(0x9E622F0)
#define RPG_CLIENT_BATTLELEVELDIRECTOR__FINDROTATEWITHOTHERENTITY_OFFSET UNITYSDK_OFFSET(0x9E610C0)
#define RPG_CLIENT_BATTLELEVELDIRECTOR__INITEVENT_OFFSET UNITYSDK_OFFSET(0x9E5F8A0)
#define RPG_CLIENT_BATTLELEVELDIRECTOR__ONACTIONENTITYADDMODIFIEREVENT_OFFSET UNITYSDK_OFFSET(0x9E61DC0)
#define RPG_CLIENT_BATTLELEVELDIRECTOR__ONLEVELTURNSTATECHANGEEVENT_OFFSET UNITYSDK_OFFSET(0x9E61A70)
#define RPG_CLIENT_BATTLELEVELDIRECTOR__ONSINGLEINSERTABILITYFINISHORABORTEVENT_OFFSET UNITYSDK_OFFSET(0x9E61D00)
#define RPG_CLIENT_BATTLELEVELDIRECTOR__RESETALLENTITYFACEDIR_OFFSET UNITYSDK_OFFSET(0x9E5FB90)
#define RPG_CLIENT_BATTLELEVELDIRECTOR__RESETENTITYFACEDIR_OFFSET UNITYSDK_OFFSET(0x9E60EB0)
#define RPG_CLIENT_BATTLELEVELDIRECTOR__SETUPCLOSEUPSHOT_OFFSET UNITYSDK_OFFSET(0x9E60880)
#define RPG_CLIENT_BATTLELEVELDIRECTOR__SETUPTEAMFORMATION_OFFSET UNITYSDK_OFFSET(0x9E61E90)
#define RPG_CLIENT_BATTLELEVELDIRECTOR__UNINITEVENT_OFFSET UNITYSDK_OFFSET(0x9E5FA10)
#define RPG_CLIENT_BATTLELEVELDIRECTOR___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9E62410)
#define RPG_CLIENT_BATTLELEVELDIRECTOR___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x9E62480)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleLevelDirector_TypeDefinitionIndex = 54696;

	class BattleLevelDirector : public ::RPG::Client::LevelDirector
	{
	public:
		::RPG::Client::LevelStageVisableController* _RootStageVisableController_k__BackingField; // 0x40
		::Class_1_887CCB848AAECD15* _CustomizeFormation_k__BackingField; // 0x48
		::RPG::Client::Stage* _CurrStage_k__BackingField; // 0x50
		::Class_1_B5D56B5BA908E892* SPTGroup; // 0x58
		::System::Boolean _AutoTotalDamageFinish_k__BackingField; // 0x60

		::System::Void _ctor(::RPG::GameCore::GameWorld* pWorld)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELEVELDIRECTOR__CTOR_OFFSET))(this, pWorld);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELEVELDIRECTOR_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELEVELDIRECTOR_TICK_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void LevelRefreshTeamLocation(::RPG::GameCore::GameEntity* pActiveEntity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELEVELDIRECTOR_LEVELREFRESHTEAMLOCATION_OFFSET))(this, pActiveEntity);
		}

		::System::Void LevelRefreshDarkTeamFaceTo(::RPG::GameCore::GameEntity* pActiveEntity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELEVELDIRECTOR_LEVELREFRESHDARKTEAMFACETO_OFFSET))(this, pActiveEntity);
		}

		::System::Void LevelResetLevelAreaRootToCenter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELEVELDIRECTOR_LEVELRESETLEVELAREAROOTTOCENTER_OFFSET))(this);
		}

		::System::Void LevelPreBattlePerform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELEVELDIRECTOR_LEVELPREBATTLEPERFORM_OFFSET))(this);
		}

		::System::Void LevelResultPerform(::System::Boolean bWinFlag)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELEVELDIRECTOR_LEVELRESULTPERFORM_OFFSET))(this, bWinFlag);
		}

		::System::Void LevelCreatePlayerTeamFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELEVELDIRECTOR_LEVELCREATEPLAYERTEAMFINISH_OFFSET))(this);
		}

		::System::Void BattlePhaseFinish(::RPG::Client::BattlePhaseFinishType eFinishType)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BattlePhaseFinishType))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELEVELDIRECTOR_BATTLEPHASEFINISH_OFFSET))(this, eFinishType);
		}

		::System::Void _InitEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELEVELDIRECTOR__INITEVENT_OFFSET))(this);
		}

		::System::Void _UnInitEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELEVELDIRECTOR__UNINITEVENT_OFFSET))(this);
		}

		::System::Void _ResetAllEntityFaceDir()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELEVELDIRECTOR__RESETALLENTITYFACEDIR_OFFSET))(this);
		}

		::System::Void _ResetEntityFaceDir(::RPG::GameCore::GameEntity* entity, ::System::Single faceDir)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELEVELDIRECTOR__RESETENTITYFACEDIR_OFFSET))(this, entity, faceDir);
		}

		::RPG::GameCore::GameEntity* _FindRotateWithOtherEntity(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* entityList, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3>*& teammateOffset)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELEVELDIRECTOR__FINDROTATEWITHOTHERENTITY_OFFSET))(this, entityList, teammateOffset);
		}

		::System::Void _DoDarkTeamFaceToActiveEntity(::RPG::GameCore::GameEntity* pActiveEntity, ::RPG::GameCore::TeamFormationComponent* pDarkTeamFormationComponent)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TeamFormationComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELEVELDIRECTOR__DODARKTEAMFACETOACTIVEENTITY_OFFSET))(this, pActiveEntity, pDarkTeamFormationComponent);
		}

		::System::Void _DarkTeamEntityFaceTo(::RPG::GameCore::GameEntity* darkTeamEntity, ::RPG::GameCore::GameEntity* activeEntity, ::RPG::GameCore::TeamFormationComponent* pDarkTeamFormationComponent)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TeamFormationComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELEVELDIRECTOR__DARKTEAMENTITYFACETO_OFFSET))(this, darkTeamEntity, activeEntity, pDarkTeamFormationComponent);
		}

		::System::Void _OnLevelTurnStateChangeEvent(::Class_0_16E4307DCC419505_382* pEvt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELEVELDIRECTOR__ONLEVELTURNSTATECHANGEEVENT_OFFSET))(this, pEvt);
		}

		::System::Void _OnSingleInsertAbilityFinishOrAbortEvent(::Class_0_16E4307DCC419505_382* pEvt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELEVELDIRECTOR__ONSINGLEINSERTABILITYFINISHORABORTEVENT_OFFSET))(this, pEvt);
		}

		::System::Void _OnActionEntityAddModifierEvent(::Class_0_16E4307DCC419505_382* pEvt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELEVELDIRECTOR__ONACTIONENTITYADDMODIFIEREVENT_OFFSET))(this, pEvt);
		}

		::System::Void _SetupTeamFormation(::RPG::GameCore::TeamFormationComponent* pTeamFormation, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* pPriorityEntityList, ::Il2CppArray<::RPG::MVector3>* pTeamPosList)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TeamFormationComponent*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::Il2CppArray<::RPG::MVector3>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELEVELDIRECTOR__SETUPTEAMFORMATION_OFFSET))(this, pTeamFormation, pPriorityEntityList, pTeamPosList);
		}

		::System::Void _SetupCloseupShot(::System::String* strCloseupShotPath, ::System::Single fPauseTime, ::RPG::GameCore::GameEntity* pAnchorTargetEntity, ::RPG::GameCore::GameEntity* pAimTargetEntity, ::RPG::MVector3 vFollowOffset, ::RPG::MVector3 vAimOffset, ::System::Nullable_1<::RPG::MQuaternion> qLocalRotation)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::MVector3, ::RPG::MVector3, ::System::Nullable_1<::RPG::MQuaternion>))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELEVELDIRECTOR__SETUPCLOSEUPSHOT_OFFSET))(this, strCloseupShotPath, fPauseTime, pAnchorTargetEntity, pAimTargetEntity, vFollowOffset, vAimOffset, qLocalRotation);
		}

		::System::Void _EntityPlayAnimation(::RPG::GameCore::GameEntity* pEntity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELEVELDIRECTOR__ENTITYPLAYANIMATION_OFFSET))(this, pEntity);
		}

		::Class_1_887CCB848AAECD15* get_CustomizeFormation()
		{
			return ((::Class_1_887CCB848AAECD15*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELEVELDIRECTOR_GET_CUSTOMIZEFORMATION_OFFSET))(this);
		}

		::System::Void set_CustomizeFormation(::Class_1_887CCB848AAECD15* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_887CCB848AAECD15*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELEVELDIRECTOR_SET_CUSTOMIZEFORMATION_OFFSET))(this, value);
		}

		::System::Boolean get_AutoTotalDamageFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELEVELDIRECTOR_GET_AUTOTOTALDAMAGEFINISH_OFFSET))(this);
		}

		::System::Void set_AutoTotalDamageFinish(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELEVELDIRECTOR_SET_AUTOTOTALDAMAGEFINISH_OFFSET))(this, value);
		}

		::RPG::Client::Stage* get_CurrStage()
		{
			return ((::RPG::Client::Stage*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELEVELDIRECTOR_GET_CURRSTAGE_OFFSET))(this);
		}

		::System::Void set_CurrStage(::RPG::Client::Stage* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Stage*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELEVELDIRECTOR_SET_CURRSTAGE_OFFSET))(this, value);
		}

		::System::Void BindCurrStage(::RPG::Client::Stage* stage)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Stage*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELEVELDIRECTOR_BINDCURRSTAGE_OFFSET))(this, stage);
		}

		::RPG::Client::LevelStageVisableController* get_RootStageVisableController()
		{
			return ((::RPG::Client::LevelStageVisableController*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELEVELDIRECTOR_GET_ROOTSTAGEVISABLECONTROLLER_OFFSET))(this);
		}

		::System::Void set_RootStageVisableController(::RPG::Client::LevelStageVisableController* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LevelStageVisableController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELEVELDIRECTOR_SET_ROOTSTAGEVISABLECONTROLLER_OFFSET))(this, value);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELEVELDIRECTOR___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Tick(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELEVELDIRECTOR___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
		}
	};
}
