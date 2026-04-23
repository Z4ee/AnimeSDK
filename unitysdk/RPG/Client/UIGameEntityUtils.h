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

#define RPG_CLIENT_UIGAMEENTITYUTILS_CACULATEFORCEKILLRATIO_OFFSET UNITYSDK_OFFSET(0xB3EEA50)
#define RPG_CLIENT_UIGAMEENTITYUTILS_CHANGEULTRASKILLCUTINTIMESCALEFORLUA_OFFSET UNITYSDK_OFFSET(0xB3EF9A0)
#define RPG_CLIENT_UIGAMEENTITYUTILS_CONTROLSKILLDATA_OFFSET UNITYSDK_OFFSET(0xB3EF000)
#define RPG_CLIENT_UIGAMEENTITYUTILS_CONTROLSKILLTYPETOUISKILLINDEX_1_OFFSET UNITYSDK_OFFSET(0xB3EEDC0)
#define RPG_CLIENT_UIGAMEENTITYUTILS_CONTROLSKILLTYPETOUISKILLINDEX_OFFSET UNITYSDK_OFFSET(0xB3EED30)
#define RPG_CLIENT_UIGAMEENTITYUTILS_CURRENTTURNACTIONENTITY_OFFSET UNITYSDK_OFFSET(0xB3EC9C0)
#define RPG_CLIENT_UIGAMEENTITYUTILS_CURRENTTURNSTATE_OFFSET UNITYSDK_OFFSET(0xB3ED320)
#define RPG_CLIENT_UIGAMEENTITYUTILS_FIRSTINSERTENTITY_OFFSET UNITYSDK_OFFSET(0xB3ECB00)
#define RPG_CLIENT_UIGAMEENTITYUTILS_GETACTIONENTITYLIST_OFFSET UNITYSDK_OFFSET(0xB3ED570)
#define RPG_CLIENT_UIGAMEENTITYUTILS_GETAVATARID_OFFSET UNITYSDK_OFFSET(0xB3F00A0)
#define RPG_CLIENT_UIGAMEENTITYUTILS_GETBATTLESIMULATIONSPEED_OFFSET UNITYSDK_OFFSET(0xB3EF720)
#define RPG_CLIENT_UIGAMEENTITYUTILS_GETBATTLETIMESCALE_OFFSET UNITYSDK_OFFSET(0xB3EF570)
#define RPG_CLIENT_UIGAMEENTITYUTILS_GETCURRENTVIEWMODEPHASETYPE_OFFSET UNITYSDK_OFFSET(0xB3EFFD0)
#define RPG_CLIENT_UIGAMEENTITYUTILS_GETCURRENTVIEWMODEPHASE_OFFSET UNITYSDK_OFFSET(0xB3EFEC0)
#define RPG_CLIENT_UIGAMEENTITYUTILS_GETENTITYSTANCEWEAKINFO_OFFSET UNITYSDK_OFFSET(0xB3EFE20)
#define RPG_CLIENT_UIGAMEENTITYUTILS_GETSKILLDAMAGETYPE_OFFSET UNITYSDK_OFFSET(0xB3EE710)
#define RPG_CLIENT_UIGAMEENTITYUTILS_GETSKILLINDEX_OFFSET UNITYSDK_OFFSET(0xB3EE830)
#define RPG_CLIENT_UIGAMEENTITYUTILS_GETSKILLMAINANDSUBTARGETS_OFFSET UNITYSDK_OFFSET(0xB3ED6B0)
#define RPG_CLIENT_UIGAMEENTITYUTILS_GETSKILLSUBTARGETS_OFFSET UNITYSDK_OFFSET(0xB3EDFB0)
#define RPG_CLIENT_UIGAMEENTITYUTILS_GETSKILLTARGETS_OFFSET UNITYSDK_OFFSET(0xB3EDB00)
#define RPG_CLIENT_UIGAMEENTITYUTILS_GETSUBSKILLCHILDINDEX_OFFSET UNITYSDK_OFFSET(0xB3EE950)
#define RPG_CLIENT_UIGAMEENTITYUTILS_INSERTOWNER_OFFSET UNITYSDK_OFFSET(0xB3ED460)
#define RPG_CLIENT_UIGAMEENTITYUTILS_INSERTQUEUE_OFFSET UNITYSDK_OFFSET(0xB3ECBA0)
#define RPG_CLIENT_UIGAMEENTITYUTILS_ISACHERONGAMEENTITY_OFFSET UNITYSDK_OFFSET(0xB3F0110)
#define RPG_CLIENT_UIGAMEENTITYUTILS_ISAUTOBATTLE_OFFSET UNITYSDK_OFFSET(0xB3EF840)
#define RPG_CLIENT_UIGAMEENTITYUTILS_ISAVATARSUMMONUNIT_OFFSET UNITYSDK_OFFSET(0xB3F04B0)
#define RPG_CLIENT_UIGAMEENTITYUTILS_ISBOSSENTITY_OFFSET UNITYSDK_OFFSET(0xB3EFCC0)
#define RPG_CLIENT_UIGAMEENTITYUTILS_ISBREAK_OFFSET UNITYSDK_OFFSET(0xB3EC710)
#define RPG_CLIENT_UIGAMEENTITYUTILS_ISCASTORICEGAMEENTITY_OFFSET UNITYSDK_OFFSET(0xB3F0330)
#define RPG_CLIENT_UIGAMEENTITYUTILS_ISCYRENEGAMEENTITY_OFFSET UNITYSDK_OFFSET(0xB3F0430)
#define RPG_CLIENT_UIGAMEENTITYUTILS_ISDISABLEACTION_OFFSET UNITYSDK_OFFSET(0xB3EC690)
#define RPG_CLIENT_UIGAMEENTITYUTILS_ISFEIXIAOGAMEENTITY_OFFSET UNITYSDK_OFFSET(0xB3F02B0)
#define RPG_CLIENT_UIGAMEENTITYUTILS_ISFIREFLYINREDMODE_OFFSET UNITYSDK_OFFSET(0xB3F0230)
#define RPG_CLIENT_UIGAMEENTITYUTILS_ISFORCEKILLMODIFIER_OFFSET UNITYSDK_OFFSET(0xB3EEC30)
#define RPG_CLIENT_UIGAMEENTITYUTILS_ISINCHALLENGESTORYFEVERSTATUS_OFFSET UNITYSDK_OFFSET(0xB3F0500)
#define RPG_CLIENT_UIGAMEENTITYUTILS_ISLEVELLOCKEDFEATURE_OFFSET UNITYSDK_OFFSET(0xB3EC850)
#define RPG_CLIENT_UIGAMEENTITYUTILS_ISLIGHTTEAM_OFFSET UNITYSDK_OFFSET(0xB3EC5D0)
#define RPG_CLIENT_UIGAMEENTITYUTILS_ISMENUSUBSKILLINDEX_OFFSET UNITYSDK_OFFSET(0xB3EE910)
#define RPG_CLIENT_UIGAMEENTITYUTILS_ISPHAINONGAMEENTITY_OFFSET UNITYSDK_OFFSET(0xB3F03B0)
#define RPG_CLIENT_UIGAMEENTITYUTILS_ISPLAYERSUBSKILLINDEX_OFFSET UNITYSDK_OFFSET(0xB3EE8C0)
#define RPG_CLIENT_UIGAMEENTITYUTILS_ISSTANCEEMPTY_OFFSET UNITYSDK_OFFSET(0xB3EC790)
#define RPG_CLIENT_UIGAMEENTITYUTILS_SHOWNEGATIVEHP_OFFSET UNITYSDK_OFFSET(0xB3EDF50)
#define RPG_CLIENT_UIGAMEENTITYUTILS_SKILLBUTTONSTATUSHINT_OFFSET UNITYSDK_OFFSET(0xB3EF070)
#define RPG_CLIENT_UIGAMEENTITYUTILS_SKILLTYPETOUISKILLINDEX_OFFSET UNITYSDK_OFFSET(0xB3EECB0)
#define RPG_CLIENT_UIGAMEENTITYUTILS_TRYGETSKILLADDWEAKNESS_OFFSET UNITYSDK_OFFSET(0xB3EE650)
#define RPG_CLIENT_UIGAMEENTITYUTILS_TRYGETSKILLCHANGE_OFFSET UNITYSDK_OFFSET(0xB3EE530)
#define RPG_CLIENT_UIGAMEENTITYUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0xB3F0650)

namespace RPG::Client
{
	inline static constexpr unsigned int UIGameEntityUtils_TypeDefinitionIndex = 67377;

	class UIGameEntityUtils : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>** StaticGet__SubTargetsCache()
		{
			return (::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>**)Il2CppClass::FromTypeDefinitionIndex(UIGameEntityUtils_TypeDefinitionIndex)->GetStaticField(0x2F0C0);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem*>** StaticGet__cachePS()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem*>**)Il2CppClass::FromTypeDefinitionIndex(UIGameEntityUtils_TypeDefinitionIndex)->GetStaticField(0x2F0C8);
		}
		static ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>** StaticGet__MainAndSubTargetsCache()
		{
			return (::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>**)Il2CppClass::FromTypeDefinitionIndex(UIGameEntityUtils_TypeDefinitionIndex)->GetStaticField(0x2F0D0);
		}
		static ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>** StaticGet__MainTargetsCache()
		{
			return (::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>**)Il2CppClass::FromTypeDefinitionIndex(UIGameEntityUtils_TypeDefinitionIndex)->GetStaticField(0x2F0D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIGAMEENTITYUTILS__CCTOR_OFFSET))();
		}

		static ::System::Boolean IsLightTeam(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIGAMEENTITYUTILS_ISLIGHTTEAM_OFFSET))(entity);
		}

		static ::System::Boolean IsDisableAction(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIGAMEENTITYUTILS_ISDISABLEACTION_OFFSET))(entity);
		}

		static ::System::Boolean IsBreak(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIGAMEENTITYUTILS_ISBREAK_OFFSET))(entity);
		}

		static ::System::Boolean IsStanceEmpty(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIGAMEENTITYUTILS_ISSTANCEEMPTY_OFFSET))(entity);
		}

		static ::System::Boolean IsLevelLockedFeature(::RPG::GameCore::LevelLockableFeatureType type)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LevelLockableFeatureType))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIGAMEENTITYUTILS_ISLEVELLOCKEDFEATURE_OFFSET))(type);
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

		static ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>* GetSkillMainAndSubTargets(::RPG::GameCore::GameEntity* entity, ::System::Int32 activeSkillIndex)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>*(*)(::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIGAMEENTITYUTILS_GETSKILLMAINANDSUBTARGETS_OFFSET))(entity, activeSkillIndex);
		}

		static ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>* GetSkillTargets(::RPG::GameCore::GameEntity* entity, ::System::Int32 activeSkillIndex)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>*(*)(::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIGAMEENTITYUTILS_GETSKILLTARGETS_OFFSET))(entity, activeSkillIndex);
		}

		static ::System::Boolean ShowNegativeHP(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIGAMEENTITYUTILS_SHOWNEGATIVEHP_OFFSET))(entity);
		}

		static ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>* GetSkillSubTargets(::RPG::GameCore::GameEntity* entity, ::System::Int32 activeSkillIndex)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>*(*)(::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIGAMEENTITYUTILS_GETSKILLSUBTARGETS_OFFSET))(entity, activeSkillIndex);
		}

		static ::System::Boolean TryGetSkillChange(::RPG::GameCore::GameEntity* attacker, ::RPG::GameCore::GameEntity* target, ::System::Int32 skillIndex, ::RPG::GameCore::FixPoint& changeHP, ::RPG::GameCore::FixPoint& changeStance, ::System::Int32& stanceCountdown, ::System::Boolean& previewForceStanceDamage)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Int32, ::RPG::GameCore::FixPoint&, ::RPG::GameCore::FixPoint&, ::System::Int32&, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIGAMEENTITYUTILS_TRYGETSKILLCHANGE_OFFSET))(attacker, target, skillIndex, changeHP, changeStance, stanceCountdown, previewForceStanceDamage);
		}

		static ::RPG::GameCore::AttackDamageType TryGetSkillAddWeakness(::RPG::GameCore::GameEntity* attacker, ::RPG::GameCore::GameEntity* target, ::System::Int32 skillIndex)
		{
			return ((::RPG::GameCore::AttackDamageType(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIGAMEENTITYUTILS_TRYGETSKILLADDWEAKNESS_OFFSET))(attacker, target, skillIndex);
		}

		static ::RPG::GameCore::AttackDamageType GetSkillDamageType(::RPG::GameCore::GameEntity* attacker, ::System::Int32 skillIndex)
		{
			return ((::RPG::GameCore::AttackDamageType(*)(::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIGAMEENTITYUTILS_GETSKILLDAMAGETYPE_OFFSET))(attacker, skillIndex);
		}

		static ::System::Int32 GetSkillIndex(::RPG::GameCore::GameEntity* entity, ::RPG::GameCore::ControlSkillType controllType)
		{
			return ((::System::Int32(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::ControlSkillType))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIGAMEENTITYUTILS_GETSKILLINDEX_OFFSET))(entity, controllType);
		}

		static ::System::Boolean IsPlayerSubSkillIndex(::RPG::Client::UISkillIndex UISkillIdx)
		{
			return ((::System::Boolean(*)(::RPG::Client::UISkillIndex))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIGAMEENTITYUTILS_ISPLAYERSUBSKILLINDEX_OFFSET))(UISkillIdx);
		}

		static ::System::Boolean IsMenuSubSkillIndex(::RPG::Client::UISkillIndex UISkillIdx)
		{
			return ((::System::Boolean(*)(::RPG::Client::UISkillIndex))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIGAMEENTITYUTILS_ISMENUSUBSKILLINDEX_OFFSET))(UISkillIdx);
		}

		static ::System::Int32 GetSubSkillChildIndex(::RPG::Client::UISkillIndex UISkillIdx)
		{
			return ((::System::Int32(*)(::RPG::Client::UISkillIndex))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIGAMEENTITYUTILS_GETSUBSKILLCHILDINDEX_OFFSET))(UISkillIdx);
		}

		static ::System::Boolean CaculateForceKillRatio(::RPG::GameCore::GameEntity* entity, ::System::Single& retRatio, ::RPG::GameCore::ForceKillShowType& retForceKillShowType)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::System::Single&, ::RPG::GameCore::ForceKillShowType&))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIGAMEENTITYUTILS_CACULATEFORCEKILLRATIO_OFFSET))(entity, retRatio, retForceKillShowType);
		}

		static ::System::Boolean IsForceKillModifier(::RPG::GameCore::TurnBasedModifierInstance* mdf)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIGAMEENTITYUTILS_ISFORCEKILLMODIFIER_OFFSET))(mdf);
		}

		static ::RPG::Client::UISkillIndex SkillTypeToUISkillIndex(::RPG::GameCore::SkillType skillType, ::System::Int32 childSkillIndex)
		{
			return ((::RPG::Client::UISkillIndex(*)(::RPG::GameCore::SkillType, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIGAMEENTITYUTILS_SKILLTYPETOUISKILLINDEX_OFFSET))(skillType, childSkillIndex);
		}

		static ::RPG::Client::UISkillIndex ControlSkillTypeToUISkillIndex(::RPG::GameCore::ControlSkillType ctrlType, ::RPG::GameCore::SkillCharacterComponent* skillComponent)
		{
			return ((::RPG::Client::UISkillIndex(*)(::RPG::GameCore::ControlSkillType, ::RPG::GameCore::SkillCharacterComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIGAMEENTITYUTILS_CONTROLSKILLTYPETOUISKILLINDEX_OFFSET))(ctrlType, skillComponent);
		}

		static ::RPG::Client::UISkillIndexMask ControlSkillTypeToUISkillIndex_1(::Il2CppArray<::RPG::GameCore::ControlSkillType>* ctrlTypes, ::RPG::GameCore::SkillCharacterComponent* skillComponent)
		{
			return ((::RPG::Client::UISkillIndexMask(*)(::Il2CppArray<::RPG::GameCore::ControlSkillType>*, ::RPG::GameCore::SkillCharacterComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIGAMEENTITYUTILS_CONTROLSKILLTYPETOUISKILLINDEX_1_OFFSET))(ctrlTypes, skillComponent);
		}

		static ::RPG::GameCore::SkillData* ControlSkillData(::RPG::GameCore::SkillCharacterComponent* skillCharacter, ::System::Int32 controlSkillType, ::System::Int32 childIndex)
		{
			return ((::RPG::GameCore::SkillData*(*)(::RPG::GameCore::SkillCharacterComponent*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIGAMEENTITYUTILS_CONTROLSKILLDATA_OFFSET))(skillCharacter, controlSkillType, childIndex);
		}

		static ::System::Void SkillButtonStatusHint(::RPG::GameCore::GameEntity* entity, ::System::Int32 skillIndex)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIGAMEENTITYUTILS_SKILLBUTTONSTATUSHINT_OFFSET))(entity, skillIndex);
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

		static ::System::Void ChangeUltraSkillCutinTimeScaleForLua(::UnityEngine::GameObject* loadedGameObject)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIGAMEENTITYUTILS_CHANGEULTRASKILLCUTINTIMESCALEFORLUA_OFFSET))(loadedGameObject);
		}

		static ::System::Boolean IsBossEntity(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIGAMEENTITYUTILS_ISBOSSENTITY_OFFSET))(entity);
		}

		static ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::AttackDamageType, ::RPG::GameCore::WeaknessState>>* GetEntityStanceWeakInfo(::RPG::GameCore::GameEntity* target)
		{
			return ((::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::AttackDamageType, ::RPG::GameCore::WeaknessState>>*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIGAMEENTITYUTILS_GETENTITYSTANCEWEAKINFO_OFFSET))(target);
		}

		static ::System::UInt32 GetCurrentViewModePhase(::RPG::GameCore::CharacterDataComponent* characterDataComponent)
		{
			return ((::System::UInt32(*)(::RPG::GameCore::CharacterDataComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIGAMEENTITYUTILS_GETCURRENTVIEWMODEPHASE_OFFSET))(characterDataComponent);
		}

		static ::RPG::GameCore::MonsterViewPhaseType GetCurrentViewModePhaseType(::RPG::GameCore::CharacterDataComponent* characterDataComponent)
		{
			return ((::RPG::GameCore::MonsterViewPhaseType(*)(::RPG::GameCore::CharacterDataComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIGAMEENTITYUTILS_GETCURRENTVIEWMODEPHASETYPE_OFFSET))(characterDataComponent);
		}

		static ::System::UInt32 GetAvatarID(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::UInt32(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIGAMEENTITYUTILS_GETAVATARID_OFFSET))(entity);
		}

		static ::System::Boolean IsAcheronGameEntity(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIGAMEENTITYUTILS_ISACHERONGAMEENTITY_OFFSET))(entity);
		}

		static ::System::Boolean IsFireFlyInRedMode(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIGAMEENTITYUTILS_ISFIREFLYINREDMODE_OFFSET))(entity);
		}

		static ::System::Boolean IsFeixiaoGameEntity(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIGAMEENTITYUTILS_ISFEIXIAOGAMEENTITY_OFFSET))(entity);
		}

		static ::System::Boolean IsCastoriceGameEntity(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIGAMEENTITYUTILS_ISCASTORICEGAMEENTITY_OFFSET))(entity);
		}

		static ::System::Boolean IsPhainonGameEntity(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIGAMEENTITYUTILS_ISPHAINONGAMEENTITY_OFFSET))(entity);
		}

		static ::System::Boolean IsCyreneGameEntity(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIGAMEENTITYUTILS_ISCYRENEGAMEENTITY_OFFSET))(entity);
		}

		static ::System::Boolean IsAvatarSummonUnit(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIGAMEENTITYUTILS_ISAVATARSUMMONUNIT_OFFSET))(entity);
		}

		static ::System::Boolean IsInChallengeStoryFeverStatus()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIGAMEENTITYUTILS_ISINCHALLENGESTORYFEVERSTATUS_OFFSET))();
		}
	};
}
