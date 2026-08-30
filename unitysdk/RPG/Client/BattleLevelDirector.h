#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BattlePhaseFinishType.h"
#include "unitysdk/RPG/Client/LevelDirector.h"
#include "unitysdk/RPG/MQuaternion.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_460;
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

#define RPG_CLIENT_BATTLELEVELDIRECTOR_BATTLEPHASEFINISH_OFFSET UNITYSDK_OFFSET(0x19F67310)
#define RPG_CLIENT_BATTLELEVELDIRECTOR_BINDCURRSTAGE_OFFSET UNITYSDK_OFFSET(0x19F5DBC0)
#define RPG_CLIENT_BATTLELEVELDIRECTOR_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19F55850)
#define RPG_CLIENT_BATTLELEVELDIRECTOR_GET_AUTOTOTALDAMAGEFINISH_OFFSET UNITYSDK_OFFSET(0x19F68930)
#define RPG_CLIENT_BATTLELEVELDIRECTOR_GET_CURRSTAGE_OFFSET UNITYSDK_OFFSET(0x19F68950)
#define RPG_CLIENT_BATTLELEVELDIRECTOR_GET_CUSTOMIZEFORMATION_OFFSET UNITYSDK_OFFSET(0x19F68910)
#define RPG_CLIENT_BATTLELEVELDIRECTOR_GET_ROOTSTAGEVISABLECONTROLLER_OFFSET UNITYSDK_OFFSET(0x19F68970)
#define RPG_CLIENT_BATTLELEVELDIRECTOR_LEVELCREATEPLAYERTEAMFINISH_OFFSET UNITYSDK_OFFSET(0x19F60E60)
#define RPG_CLIENT_BATTLELEVELDIRECTOR_LEVELPREBATTLEPERFORM_OFFSET UNITYSDK_OFFSET(0x19F5B260)
#define RPG_CLIENT_BATTLELEVELDIRECTOR_LEVELREFRESHDARKTEAMFACETO_OFFSET UNITYSDK_OFFSET(0x19F5B9A0)
#define RPG_CLIENT_BATTLELEVELDIRECTOR_LEVELREFRESHTEAMLOCATION_OFFSET UNITYSDK_OFFSET(0x19F5B5D0)
#define RPG_CLIENT_BATTLELEVELDIRECTOR_LEVELRESETLEVELAREAROOTTOCENTER_OFFSET UNITYSDK_OFFSET(0x19F610B0)
#define RPG_CLIENT_BATTLELEVELDIRECTOR_LEVELRESULTPERFORM_OFFSET UNITYSDK_OFFSET(0x19F5B4E0)
#define RPG_CLIENT_BATTLELEVELDIRECTOR_SET_AUTOTOTALDAMAGEFINISH_OFFSET UNITYSDK_OFFSET(0x19F68940)
#define RPG_CLIENT_BATTLELEVELDIRECTOR_SET_CURRSTAGE_OFFSET UNITYSDK_OFFSET(0x19F68960)
#define RPG_CLIENT_BATTLELEVELDIRECTOR_SET_CUSTOMIZEFORMATION_OFFSET UNITYSDK_OFFSET(0x19F68920)
#define RPG_CLIENT_BATTLELEVELDIRECTOR_SET_ROOTSTAGEVISABLECONTROLLER_OFFSET UNITYSDK_OFFSET(0x19F68980)
#define RPG_CLIENT_BATTLELEVELDIRECTOR_TICK_OFFSET UNITYSDK_OFFSET(0x19F59F20)
#define RPG_CLIENT_BATTLELEVELDIRECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x19F5CAA0)
#define RPG_CLIENT_BATTLELEVELDIRECTOR__DARKTEAMENTITYFACETO_OFFSET UNITYSDK_OFFSET(0x19F679E0)
#define RPG_CLIENT_BATTLELEVELDIRECTOR__DODARKTEAMFACETOACTIVEENTITY_OFFSET UNITYSDK_OFFSET(0x19F669B0)
#define RPG_CLIENT_BATTLELEVELDIRECTOR__ENTITYPLAYANIMATION_OFFSET UNITYSDK_OFFSET(0x19F688C0)
#define RPG_CLIENT_BATTLELEVELDIRECTOR__FINDROTATEWITHOTHERENTITY_OFFSET UNITYSDK_OFFSET(0x19F675B0)
#define RPG_CLIENT_BATTLELEVELDIRECTOR__INITEVENT_OFFSET UNITYSDK_OFFSET(0x19F663B0)
#define RPG_CLIENT_BATTLELEVELDIRECTOR__ONACTIONENTITYADDMODIFIEREVENT_OFFSET UNITYSDK_OFFSET(0x19F68330)
#define RPG_CLIENT_BATTLELEVELDIRECTOR__ONLEVELTURNSTATECHANGEEVENT_OFFSET UNITYSDK_OFFSET(0x19F67FC0)
#define RPG_CLIENT_BATTLELEVELDIRECTOR__ONSINGLEINSERTABILITYFINISHORABORTEVENT_OFFSET UNITYSDK_OFFSET(0x19F68260)
#define RPG_CLIENT_BATTLELEVELDIRECTOR__RESETALLENTITYFACEDIR_OFFSET UNITYSDK_OFFSET(0x19F665D0)
#define RPG_CLIENT_BATTLELEVELDIRECTOR__RESETENTITYFACEDIR_OFFSET UNITYSDK_OFFSET(0x19F67380)
#define RPG_CLIENT_BATTLELEVELDIRECTOR__SETUPCLOSEUPSHOT_OFFSET UNITYSDK_OFFSET(0x19F66E20)
#define RPG_CLIENT_BATTLELEVELDIRECTOR__SETUPTEAMFORMATION_OFFSET UNITYSDK_OFFSET(0x19F68410)
#define RPG_CLIENT_BATTLELEVELDIRECTOR__UNINITEVENT_OFFSET UNITYSDK_OFFSET(0x19F664C0)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleLevelDirector_TypeDefinitionIndex = 59445;

	class BattleLevelDirector : public ::RPG::Client::LevelDirector
	{
	public:
		::RPG::Client::LevelStageVisableController* _RootStageVisableController_k__BackingField; // 0x40
		::Class_1_887CCB848AAECD15* _CustomizeFormation_k__BackingField; // 0x48
		::Class_1_B5D56B5BA908E892* SPTGroup; // 0x50
		::RPG::Client::Stage* _CurrStage_k__BackingField; // 0x58
		::System::Boolean _AutoTotalDamageFinish_k__BackingField; // 0x60

		::System::Void _ctor(::RPG::GameCore::GameWorld* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELEVELDIRECTOR__CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELEVELDIRECTOR_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELEVELDIRECTOR_TICK_OFFSET))(this, a1);
		}

		::System::Void LevelRefreshTeamLocation(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELEVELDIRECTOR_LEVELREFRESHTEAMLOCATION_OFFSET))(this, a1, a2);
		}

		::System::Void LevelRefreshDarkTeamFaceTo(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELEVELDIRECTOR_LEVELREFRESHDARKTEAMFACETO_OFFSET))(this, a1);
		}

		::System::Void LevelResetLevelAreaRootToCenter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELEVELDIRECTOR_LEVELRESETLEVELAREAROOTTOCENTER_OFFSET))(this);
		}

		::System::Void LevelPreBattlePerform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELEVELDIRECTOR_LEVELPREBATTLEPERFORM_OFFSET))(this);
		}

		::System::Void LevelResultPerform(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELEVELDIRECTOR_LEVELRESULTPERFORM_OFFSET))(this, a1);
		}

		::System::Void LevelCreatePlayerTeamFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELEVELDIRECTOR_LEVELCREATEPLAYERTEAMFINISH_OFFSET))(this);
		}

		::System::Void BattlePhaseFinish(::RPG::Client::BattlePhaseFinishType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BattlePhaseFinishType))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELEVELDIRECTOR_BATTLEPHASEFINISH_OFFSET))(this, a1);
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

		::System::Void _ResetEntityFaceDir(::RPG::GameCore::GameEntity* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELEVELDIRECTOR__RESETENTITYFACEDIR_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::GameEntity* _FindRotateWithOtherEntity(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3>*& a2)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELEVELDIRECTOR__FINDROTATEWITHOTHERENTITY_OFFSET))(this, a1, a2);
		}

		::System::Void _DoDarkTeamFaceToActiveEntity(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TeamFormationComponent* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TeamFormationComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELEVELDIRECTOR__DODARKTEAMFACETOACTIVEENTITY_OFFSET))(this, a1, a2);
		}

		::System::Void _DarkTeamEntityFaceTo(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::TeamFormationComponent* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TeamFormationComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELEVELDIRECTOR__DARKTEAMENTITYFACETO_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _OnLevelTurnStateChangeEvent(::Class_0_16E4307DCC419505_460* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELEVELDIRECTOR__ONLEVELTURNSTATECHANGEEVENT_OFFSET))(this, a1);
		}

		::System::Void _OnSingleInsertAbilityFinishOrAbortEvent(::Class_0_16E4307DCC419505_460* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELEVELDIRECTOR__ONSINGLEINSERTABILITYFINISHORABORTEVENT_OFFSET))(this, a1);
		}

		::System::Void _OnActionEntityAddModifierEvent(::Class_0_16E4307DCC419505_460* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELEVELDIRECTOR__ONACTIONENTITYADDMODIFIEREVENT_OFFSET))(this, a1);
		}

		::System::Void _SetupTeamFormation(::RPG::GameCore::TeamFormationComponent* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2, ::Il2CppArray<::RPG::MVector3>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TeamFormationComponent*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::Il2CppArray<::RPG::MVector3>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELEVELDIRECTOR__SETUPTEAMFORMATION_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _SetupCloseupShot(::System::String* a1, ::System::Single a2, ::RPG::GameCore::GameEntity* a3, ::RPG::GameCore::GameEntity* a4, ::RPG::MVector3 a5, ::RPG::MVector3 a6, ::System::Nullable_1<::RPG::MQuaternion> a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::MVector3, ::RPG::MVector3, ::System::Nullable_1<::RPG::MQuaternion>))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELEVELDIRECTOR__SETUPCLOSEUPSHOT_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void _EntityPlayAnimation(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELEVELDIRECTOR__ENTITYPLAYANIMATION_OFFSET))(this, a1);
		}

		::Class_1_887CCB848AAECD15* get_CustomizeFormation()
		{
			return ((::Class_1_887CCB848AAECD15*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELEVELDIRECTOR_GET_CUSTOMIZEFORMATION_OFFSET))(this);
		}

		::System::Void set_CustomizeFormation(::Class_1_887CCB848AAECD15* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_887CCB848AAECD15*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELEVELDIRECTOR_SET_CUSTOMIZEFORMATION_OFFSET))(this, a1);
		}

		::System::Boolean get_AutoTotalDamageFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELEVELDIRECTOR_GET_AUTOTOTALDAMAGEFINISH_OFFSET))(this);
		}

		::System::Void set_AutoTotalDamageFinish(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELEVELDIRECTOR_SET_AUTOTOTALDAMAGEFINISH_OFFSET))(this, a1);
		}

		::RPG::Client::Stage* get_CurrStage()
		{
			return ((::RPG::Client::Stage*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELEVELDIRECTOR_GET_CURRSTAGE_OFFSET))(this);
		}

		::System::Void set_CurrStage(::RPG::Client::Stage* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Stage*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELEVELDIRECTOR_SET_CURRSTAGE_OFFSET))(this, a1);
		}

		::System::Void BindCurrStage(::RPG::Client::Stage* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Stage*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELEVELDIRECTOR_BINDCURRSTAGE_OFFSET))(this, a1);
		}

		::RPG::Client::LevelStageVisableController* get_RootStageVisableController()
		{
			return ((::RPG::Client::LevelStageVisableController*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELEVELDIRECTOR_GET_ROOTSTAGEVISABLECONTROLLER_OFFSET))(this);
		}

		::System::Void set_RootStageVisableController(::RPG::Client::LevelStageVisableController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LevelStageVisableController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELEVELDIRECTOR_SET_ROOTSTAGEVISABLECONTROLLER_OFFSET))(this, a1);
		}
	};
}
