#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UISkillIndex.h"
#include "unitysdk/RPG/Client/UISkillIndexMask.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ForceKillShowType.h"
#include "unitysdk/RPG/GameCore/LevelLockableFeatureType.h"
#include "unitysdk/RPG/GameCore/MonsterViewPhaseType.h"
#include "unitysdk/RPG/GameCore/SkillType.h"
#include "unitysdk/RPG/GameCore/TurnState.h"
#include "unitysdk/RPG/GameCore/WeaknessState.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class Class_1_152140BAFD2DB102;
namespace RPG::GameCore { class CharacterDataComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SkillCharacterComponent; }
namespace RPG::GameCore { class SkillData; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class ParticleSystem; }

#define RPG_CLIENT_UIGAMEENTITYUTILS_CACULATEFORCEKILLRATIO_OFFSET UNITYSDK_OFFSET(0xCB4F440)
#define RPG_CLIENT_UIGAMEENTITYUTILS_CHANGEULTRASKILLCUTINTIMESCALEFORLUA_OFFSET UNITYSDK_OFFSET(0xCB502C0)
#define RPG_CLIENT_UIGAMEENTITYUTILS_CONTROLSKILLDATA_OFFSET UNITYSDK_OFFSET(0xCB4FA00)
#define RPG_CLIENT_UIGAMEENTITYUTILS_CONTROLSKILLTYPETOUISKILLINDEX_1_OFFSET UNITYSDK_OFFSET(0xCB4F7C0)
#define RPG_CLIENT_UIGAMEENTITYUTILS_CONTROLSKILLTYPETOUISKILLINDEX_OFFSET UNITYSDK_OFFSET(0xCB4F730)
#define RPG_CLIENT_UIGAMEENTITYUTILS_CURRENTTURNACTIONENTITY_OFFSET UNITYSDK_OFFSET(0xCB4D360)
#define RPG_CLIENT_UIGAMEENTITYUTILS_CURRENTTURNSTATE_OFFSET UNITYSDK_OFFSET(0xCB4DCC0)
#define RPG_CLIENT_UIGAMEENTITYUTILS_FIRSTINSERTENTITY_OFFSET UNITYSDK_OFFSET(0xCB4D4B0)
#define RPG_CLIENT_UIGAMEENTITYUTILS_GETACTIONENTITYLIST_OFFSET UNITYSDK_OFFSET(0xCB4DF10)
#define RPG_CLIENT_UIGAMEENTITYUTILS_GETAVATARID_OFFSET UNITYSDK_OFFSET(0xCB509F0)
#define RPG_CLIENT_UIGAMEENTITYUTILS_GETBATTLESIMULATIONSPEED_OFFSET UNITYSDK_OFFSET(0xCB500B0)
#define RPG_CLIENT_UIGAMEENTITYUTILS_GETBATTLETIMESCALE_OFFSET UNITYSDK_OFFSET(0xCB4FF00)
#define RPG_CLIENT_UIGAMEENTITYUTILS_GETCURRENTVIEWMODEPHASETYPE_OFFSET UNITYSDK_OFFSET(0xCB50920)
#define RPG_CLIENT_UIGAMEENTITYUTILS_GETCURRENTVIEWMODEPHASE_OFFSET UNITYSDK_OFFSET(0xCB50800)
#define RPG_CLIENT_UIGAMEENTITYUTILS_GETENTITYSTANCEWEAKINFO_OFFSET UNITYSDK_OFFSET(0xCB50760)
#define RPG_CLIENT_UIGAMEENTITYUTILS_GETSKILLDAMAGETYPE_OFFSET UNITYSDK_OFFSET(0xCB4F0B0)
#define RPG_CLIENT_UIGAMEENTITYUTILS_GETSKILLINDEX_OFFSET UNITYSDK_OFFSET(0xCB4F1D0)
#define RPG_CLIENT_UIGAMEENTITYUTILS_GETSKILLMAINANDSUBTARGETS_OFFSET UNITYSDK_OFFSET(0xCB4E060)
#define RPG_CLIENT_UIGAMEENTITYUTILS_GETSKILLSUBTARGETS_OFFSET UNITYSDK_OFFSET(0xCB4E950)
#define RPG_CLIENT_UIGAMEENTITYUTILS_GETSKILLTARGETS_OFFSET UNITYSDK_OFFSET(0xCB4E4A0)
#define RPG_CLIENT_UIGAMEENTITYUTILS_GETSUBSKILLCHILDINDEX_OFFSET UNITYSDK_OFFSET(0xCB4F340)
#define RPG_CLIENT_UIGAMEENTITYUTILS_INSERTOWNER_OFFSET UNITYSDK_OFFSET(0xCB4DDF0)
#define RPG_CLIENT_UIGAMEENTITYUTILS_INSERTQUEUE_OFFSET UNITYSDK_OFFSET(0xCB4D540)
#define RPG_CLIENT_UIGAMEENTITYUTILS_ISAUTOBATTLE_OFFSET UNITYSDK_OFFSET(0xCB501D0)
#define RPG_CLIENT_UIGAMEENTITYUTILS_ISAVATARSUMMONUNIT_OFFSET UNITYSDK_OFFSET(0xCB50AE0)
#define RPG_CLIENT_UIGAMEENTITYUTILS_ISBOSSENTITY_OFFSET UNITYSDK_OFFSET(0xCB50600)
#define RPG_CLIENT_UIGAMEENTITYUTILS_ISBREAK_OFFSET UNITYSDK_OFFSET(0xCB4D0B0)
#define RPG_CLIENT_UIGAMEENTITYUTILS_ISDISABLEACTION_OFFSET UNITYSDK_OFFSET(0xCB4D030)
#define RPG_CLIENT_UIGAMEENTITYUTILS_ISFIREFLYINREDMODE_OFFSET UNITYSDK_OFFSET(0xCB50A60)
#define RPG_CLIENT_UIGAMEENTITYUTILS_ISFORCEKILLMODIFIER_OFFSET UNITYSDK_OFFSET(0xCB4F630)
#define RPG_CLIENT_UIGAMEENTITYUTILS_ISINCHALLENGESTORYFEVERSTATUS_OFFSET UNITYSDK_OFFSET(0xCB50B30)
#define RPG_CLIENT_UIGAMEENTITYUTILS_ISLEVELLOCKEDFEATURE_OFFSET UNITYSDK_OFFSET(0xCB4D1E0)
#define RPG_CLIENT_UIGAMEENTITYUTILS_ISLIGHTTEAM_OFFSET UNITYSDK_OFFSET(0xCB4CF70)
#define RPG_CLIENT_UIGAMEENTITYUTILS_ISMENUSUBSKILLINDEX_OFFSET UNITYSDK_OFFSET(0xCB4F300)
#define RPG_CLIENT_UIGAMEENTITYUTILS_ISPLAYERSUBSKILLINDEX_OFFSET UNITYSDK_OFFSET(0xCB4F2B0)
#define RPG_CLIENT_UIGAMEENTITYUTILS_ISSTANCEEMPTY_OFFSET UNITYSDK_OFFSET(0xCB4D130)
#define RPG_CLIENT_UIGAMEENTITYUTILS_SHOWNEGATIVEHP_OFFSET UNITYSDK_OFFSET(0xCB4E8E0)
#define RPG_CLIENT_UIGAMEENTITYUTILS_SKILLBUTTONSTATUSHINT_OFFSET UNITYSDK_OFFSET(0xCB4FA70)
#define RPG_CLIENT_UIGAMEENTITYUTILS_SKILLTYPETOUISKILLINDEX_OFFSET UNITYSDK_OFFSET(0xCB4F6B0)
#define RPG_CLIENT_UIGAMEENTITYUTILS_TRYGETSKILLADDWEAKNESS_OFFSET UNITYSDK_OFFSET(0xCB4EFF0)
#define RPG_CLIENT_UIGAMEENTITYUTILS_TRYGETSKILLCHANGE_OFFSET UNITYSDK_OFFSET(0xCB4EED0)
#define RPG_CLIENT_UIGAMEENTITYUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0xCB50C90)

namespace RPG::Client
{
	inline static constexpr unsigned int UIGameEntityUtils_TypeDefinitionIndex = 68329;

	class UIGameEntityUtils : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>** StaticGet__MainTargetsCache()
		{
			return (::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>**)Il2CppClass::FromTypeDefinitionIndex(UIGameEntityUtils_TypeDefinitionIndex)->GetStaticField(0x5CAC0);
		}
		static ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>** StaticGet__MainAndSubTargetsCache()
		{
			return (::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>**)Il2CppClass::FromTypeDefinitionIndex(UIGameEntityUtils_TypeDefinitionIndex)->GetStaticField(0x5CAC8);
		}
		static ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>** StaticGet__SubTargetsCache()
		{
			return (::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>**)Il2CppClass::FromTypeDefinitionIndex(UIGameEntityUtils_TypeDefinitionIndex)->GetStaticField(0x5CAD0);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem*>** StaticGet__cachePS()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem*>**)Il2CppClass::FromTypeDefinitionIndex(UIGameEntityUtils_TypeDefinitionIndex)->GetStaticField(0x5CAD8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIGAMEENTITYUTILS__CCTOR_OFFSET))();
		}

		static ::System::Boolean IsLightTeam(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIGAMEENTITYUTILS_ISLIGHTTEAM_OFFSET))(a1);
		}

		static ::System::Boolean IsDisableAction(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIGAMEENTITYUTILS_ISDISABLEACTION_OFFSET))(a1);
		}

		static ::System::Boolean IsBreak(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIGAMEENTITYUTILS_ISBREAK_OFFSET))(a1);
		}

		static ::System::Boolean IsStanceEmpty(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIGAMEENTITYUTILS_ISSTANCEEMPTY_OFFSET))(a1);
		}

		static ::System::Boolean IsLevelLockedFeature(::RPG::GameCore::LevelLockableFeatureType a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LevelLockableFeatureType))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIGAMEENTITYUTILS_ISLEVELLOCKEDFEATURE_OFFSET))(a1);
		}

		static ::RPG::GameCore::GameEntity* CurrentTurnActionEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIGAMEENTITYUTILS_CURRENTTURNACTIONENTITY_OFFSET))();
		}

		static ::RPG::GameCore::GameEntity* FirstInsertEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIGAMEENTITYUTILS_FIRSTINSERTENTITY_OFFSET))();
		}

		static ::Il2CppArray<::Class_1_152140BAFD2DB102*>* InsertQueue()
		{
			return ((::Il2CppArray<::Class_1_152140BAFD2DB102*>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIGAMEENTITYUTILS_INSERTQUEUE_OFFSET))();
		}

		static ::RPG::GameCore::TurnState CurrentTurnState()
		{
			return ((::RPG::GameCore::TurnState(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIGAMEENTITYUTILS_CURRENTTURNSTATE_OFFSET))();
		}

		static ::RPG::GameCore::GameEntity* InsertOwner()
		{
			return ((::RPG::GameCore::GameEntity*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIGAMEENTITYUTILS_INSERTOWNER_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* GetActionEntityList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIGAMEENTITYUTILS_GETACTIONENTITYLIST_OFFSET))();
		}

		static ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>* GetSkillMainAndSubTargets(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>*(*)(::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIGAMEENTITYUTILS_GETSKILLMAINANDSUBTARGETS_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>* GetSkillTargets(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>*(*)(::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIGAMEENTITYUTILS_GETSKILLTARGETS_OFFSET))(a1, a2);
		}

		static ::System::Boolean ShowNegativeHP(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIGAMEENTITYUTILS_SHOWNEGATIVEHP_OFFSET))(a1);
		}

		static ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>* GetSkillSubTargets(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>*(*)(::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIGAMEENTITYUTILS_GETSKILLSUBTARGETS_OFFSET))(a1, a2);
		}

		static ::System::Boolean TryGetSkillChange(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::System::Int32 a3, ::RPG::GameCore::FixPoint& a4, ::RPG::GameCore::FixPoint& a5, ::System::Int32& a6, ::System::Boolean& a7)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Int32, ::RPG::GameCore::FixPoint&, ::RPG::GameCore::FixPoint&, ::System::Int32&, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIGAMEENTITYUTILS_TRYGETSKILLCHANGE_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::RPG::GameCore::AttackDamageType TryGetSkillAddWeakness(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::System::Int32 a3)
		{
			return ((::RPG::GameCore::AttackDamageType(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIGAMEENTITYUTILS_TRYGETSKILLADDWEAKNESS_OFFSET))(a1, a2, a3);
		}

		static ::RPG::GameCore::AttackDamageType GetSkillDamageType(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2)
		{
			return ((::RPG::GameCore::AttackDamageType(*)(::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIGAMEENTITYUTILS_GETSKILLDAMAGETYPE_OFFSET))(a1, a2);
		}

		static ::System::Int32 GetSkillIndex(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::ControlSkillType a2)
		{
			return ((::System::Int32(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::ControlSkillType))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIGAMEENTITYUTILS_GETSKILLINDEX_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsPlayerSubSkillIndex(::RPG::Client::UISkillIndex a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::UISkillIndex))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIGAMEENTITYUTILS_ISPLAYERSUBSKILLINDEX_OFFSET))(a1);
		}

		static ::System::Boolean IsMenuSubSkillIndex(::RPG::Client::UISkillIndex a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::UISkillIndex))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIGAMEENTITYUTILS_ISMENUSUBSKILLINDEX_OFFSET))(a1);
		}

		static ::System::Int32 GetSubSkillChildIndex(::RPG::Client::UISkillIndex a1)
		{
			return ((::System::Int32(*)(::RPG::Client::UISkillIndex))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIGAMEENTITYUTILS_GETSUBSKILLCHILDINDEX_OFFSET))(a1);
		}

		static ::System::Boolean CaculateForceKillRatio(::RPG::GameCore::GameEntity* a1, ::System::Single& a2, ::RPG::GameCore::ForceKillShowType& a3)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::System::Single&, ::RPG::GameCore::ForceKillShowType&))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIGAMEENTITYUTILS_CACULATEFORCEKILLRATIO_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean IsForceKillModifier(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIGAMEENTITYUTILS_ISFORCEKILLMODIFIER_OFFSET))(a1);
		}

		static ::RPG::Client::UISkillIndex SkillTypeToUISkillIndex(::RPG::GameCore::SkillType a1, ::System::Int32 a2)
		{
			return ((::RPG::Client::UISkillIndex(*)(::RPG::GameCore::SkillType, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIGAMEENTITYUTILS_SKILLTYPETOUISKILLINDEX_OFFSET))(a1, a2);
		}

		static ::RPG::Client::UISkillIndex ControlSkillTypeToUISkillIndex(::RPG::GameCore::ControlSkillType a1, ::RPG::GameCore::SkillCharacterComponent* a2)
		{
			return ((::RPG::Client::UISkillIndex(*)(::RPG::GameCore::ControlSkillType, ::RPG::GameCore::SkillCharacterComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIGAMEENTITYUTILS_CONTROLSKILLTYPETOUISKILLINDEX_OFFSET))(a1, a2);
		}

		static ::RPG::Client::UISkillIndexMask ControlSkillTypeToUISkillIndex_1(::Il2CppArray<::RPG::GameCore::ControlSkillType>* a1, ::RPG::GameCore::SkillCharacterComponent* a2)
		{
			return ((::RPG::Client::UISkillIndexMask(*)(::Il2CppArray<::RPG::GameCore::ControlSkillType>*, ::RPG::GameCore::SkillCharacterComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIGAMEENTITYUTILS_CONTROLSKILLTYPETOUISKILLINDEX_1_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::SkillData* ControlSkillData(::RPG::GameCore::SkillCharacterComponent* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::RPG::GameCore::SkillData*(*)(::RPG::GameCore::SkillCharacterComponent*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIGAMEENTITYUTILS_CONTROLSKILLDATA_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SkillButtonStatusHint(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIGAMEENTITYUTILS_SKILLBUTTONSTATUSHINT_OFFSET))(a1, a2);
		}

		static ::System::Single GetBattleTimeScale()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIGAMEENTITYUTILS_GETBATTLETIMESCALE_OFFSET))();
		}

		static ::System::Single GetBattleSimulationSpeed()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIGAMEENTITYUTILS_GETBATTLESIMULATIONSPEED_OFFSET))();
		}

		static ::System::Boolean IsAutoBattle()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIGAMEENTITYUTILS_ISAUTOBATTLE_OFFSET))();
		}

		static ::System::Void ChangeUltraSkillCutinTimeScaleForLua(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIGAMEENTITYUTILS_CHANGEULTRASKILLCUTINTIMESCALEFORLUA_OFFSET))(a1);
		}

		static ::System::Boolean IsBossEntity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIGAMEENTITYUTILS_ISBOSSENTITY_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::AttackDamageType, ::RPG::GameCore::WeaknessState>>* GetEntityStanceWeakInfo(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::AttackDamageType, ::RPG::GameCore::WeaknessState>>*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIGAMEENTITYUTILS_GETENTITYSTANCEWEAKINFO_OFFSET))(a1);
		}

		static ::System::UInt32 GetCurrentViewModePhase(::RPG::GameCore::CharacterDataComponent* a1)
		{
			return ((::System::UInt32(*)(::RPG::GameCore::CharacterDataComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIGAMEENTITYUTILS_GETCURRENTVIEWMODEPHASE_OFFSET))(a1);
		}

		static ::RPG::GameCore::MonsterViewPhaseType GetCurrentViewModePhaseType(::RPG::GameCore::CharacterDataComponent* a1)
		{
			return ((::RPG::GameCore::MonsterViewPhaseType(*)(::RPG::GameCore::CharacterDataComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIGAMEENTITYUTILS_GETCURRENTVIEWMODEPHASETYPE_OFFSET))(a1);
		}

		static ::System::UInt32 GetAvatarID(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::UInt32(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIGAMEENTITYUTILS_GETAVATARID_OFFSET))(a1);
		}

		static ::System::Boolean IsFireFlyInRedMode(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIGAMEENTITYUTILS_ISFIREFLYINREDMODE_OFFSET))(a1);
		}

		static ::System::Boolean IsAvatarSummonUnit(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIGAMEENTITYUTILS_ISAVATARSUMMONUNIT_OFFSET))(a1);
		}

		static ::System::Boolean IsInChallengeStoryFeverStatus()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIGAMEENTITYUTILS_ISINCHALLENGESTORYFEVERSTATUS_OFFSET))();
		}
	};
}
