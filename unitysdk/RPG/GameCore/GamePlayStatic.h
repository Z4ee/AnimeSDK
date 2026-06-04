#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_01618AD0437C8486.h"
#include "unitysdk/RPG/Client/EffectMutexResult.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/EffectMutexType.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/MonoEffectFlag.h"
#include "unitysdk/RPG/GameCore/ServantSelectType.h"
#include "unitysdk/RPG/GameCore/SkillCharacterComponent_UseSkillErrorInfo.h"
#include "unitysdk/RPG/GameCore/SkillDamageRange.h"
#include "unitysdk/RPG/GameCore/SkillTreeTemplateType.h"
#include "unitysdk/RPG/GameCore/TeamMemberCountingOption.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/RPG/GameCore/TurnState.h"
#include "unitysdk/Struct_2_3271D18CDCC3AB1D.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_557;
class Class_1_152140BAFD2DB102;
class Class_1_1D0B4E25DB90BF59;
class Class_1_48AADA497C3F117F_2;
class Class_1_57207EAD4239ED6B;
class Class_1_668FE281FA72D3E8;
class Class_1_7AB88D713F5121B3_47;
class Class_1_A2D8E5AB4B623162;
class Class_1_B10FFA91399295A9;
class Class_1_BF43A923389D144C;
class Class_1_C9DFE5EE7107C629_1;
class Class_1_D1E0AD3915BCCF29_7;
namespace RPG::Client { class EntityCollisionBodyParts; }
namespace RPG::Client { class LevelDirector; }
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class MonoEffectManager; }
namespace RPG::GameCore { class AbilityPropertyValue; }
namespace RPG::GameCore { class AvatarPropertyValue; }
namespace RPG::GameCore { class BattleEventRow; }
namespace RPG::GameCore { class CharacterPreloadConfig; }
namespace RPG::GameCore { class EntityManager; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class LocationConfig; }
namespace RPG::GameCore { class MonsterPreloadConfig; }
namespace RPG::GameCore { class PVEGameStatistics; }
namespace RPG::GameCore { class SkillConfig; }
namespace RPG::GameCore { class SkillData; }
namespace RPG::GameCore { class SkillTargetConfig; }
namespace RPG::GameCore { class SpecialAvatarRow; }
namespace RPG::GameCore { class StageMonsterRewardItem; }
namespace RPG::GameCore { class StageMonsterWave; }
namespace RPG::GameCore { class StageRow; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text { class StringBuilder; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }

#define RPG_GAMECORE_GAMEPLAYSTATIC_ABILITYPROPERTYTOAVATARPROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0xCE0ECC0)
#define RPG_GAMECORE_GAMEPLAYSTATIC_ADVENTUREGETSPECIALAVATARROWBYAVATARID_OFFSET UNITYSDK_OFFSET(0xCE0F610)
#define RPG_GAMECORE_GAMEPLAYSTATIC_APPLYAVATARPROPERTYITEM_1_OFFSET UNITYSDK_OFFSET(0xCE0F260)
#define RPG_GAMECORE_GAMEPLAYSTATIC_APPLYAVATARPROPERTYITEM_2_OFFSET UNITYSDK_OFFSET(0xCE0F2F0)
#define RPG_GAMECORE_GAMEPLAYSTATIC_APPLYAVATARPROPERTYITEM_3_OFFSET UNITYSDK_OFFSET(0xCE0EF80)
#define RPG_GAMECORE_GAMEPLAYSTATIC_APPLYAVATARPROPERTYITEM_OFFSET UNITYSDK_OFFSET(0xCE0EEF0)
#define RPG_GAMECORE_GAMEPLAYSTATIC_AVATARBATTLEINFOLISTFILLPRIMARY_OFFSET UNITYSDK_OFFSET(0xCE178E0)
#define RPG_GAMECORE_GAMEPLAYSTATIC_AVATARPROPERTYTYPETOABILITYPROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0xCE0EB80)
#define RPG_GAMECORE_GAMEPLAYSTATIC_BATTLEAVATARGLOBALBUFFINFOLISTFILLPRIMARY_OFFSET UNITYSDK_OFFSET(0xCE182B0)
#define RPG_GAMECORE_GAMEPLAYSTATIC_BATTLEAVATARSERVANTINFOLISTFILLPRIMARY_OFFSET UNITYSDK_OFFSET(0xCE180F0)
#define RPG_GAMECORE_GAMEPLAYSTATIC_BATTLEEVENTBATTLEINFOLISTFILLPRIMARY_OFFSET UNITYSDK_OFFSET(0xCE17E80)
#define RPG_GAMECORE_GAMEPLAYSTATIC_BOSSMULTIINSTCHECK_OFFSET UNITYSDK_OFFSET(0xCE19390)
#define RPG_GAMECORE_GAMEPLAYSTATIC_BUILDCHARACTERUNIQUENAME_OFFSET UNITYSDK_OFFSET(0xCE12D80)
#define RPG_GAMECORE_GAMEPLAYSTATIC_BUILDNPCMONSTERUNIQUENAMEBYGROUPINFO_OFFSET UNITYSDK_OFFSET(0xCE13600)
#define RPG_GAMECORE_GAMEPLAYSTATIC_BUILDNPCMONSTERUNIQUENAMEBYSTR_OFFSET UNITYSDK_OFFSET(0xCE137B0)
#define RPG_GAMECORE_GAMEPLAYSTATIC_BUILDNPCMONSTERUNIQUENAME_OFFSET UNITYSDK_OFFSET(0xCE134F0)
#define RPG_GAMECORE_GAMEPLAYSTATIC_BUILDNPCUNIQUENAMEBYGROUPINFO_OFFSET UNITYSDK_OFFSET(0xCE13280)
#define RPG_GAMECORE_GAMEPLAYSTATIC_BUILDNPCUNIQUENAMEBYSTR_OFFSET UNITYSDK_OFFSET(0xCE13460)
#define RPG_GAMECORE_GAMEPLAYSTATIC_BUILDNPCUNIQUENAME_OFFSET UNITYSDK_OFFSET(0xCE131D0)
#define RPG_GAMECORE_GAMEPLAYSTATIC_BUILDPROPUNIQUENAME_OFFSET UNITYSDK_OFFSET(0xCE13030)
#define RPG_GAMECORE_GAMEPLAYSTATIC_CALCRELICMAINAFFIXVALUE_OFFSET UNITYSDK_OFFSET(0xCE12580)
#define RPG_GAMECORE_GAMEPLAYSTATIC_CALCRELICSUBAFFIXVALUE_OFFSET UNITYSDK_OFFSET(0xCE12600)
#define RPG_GAMECORE_GAMEPLAYSTATIC_CALCUALTEBATTLEEQUIPMENTATTACKBASE_OFFSET UNITYSDK_OFFSET(0xCE12420)
#define RPG_GAMECORE_GAMEPLAYSTATIC_CALCUALTEBATTLEEQUIPMENTDEFENCEBASE_OFFSET UNITYSDK_OFFSET(0xCE124D0)
#define RPG_GAMECORE_GAMEPLAYSTATIC_CALCUALTEBATTLEEQUIPMENTHPBASE_OFFSET UNITYSDK_OFFSET(0xCE12370)
#define RPG_GAMECORE_GAMEPLAYSTATIC_CALCULATENEWACTIONDELAYWHENSPEEDCHANGE_OFFSET UNITYSDK_OFFSET(0xCE122F0)
#define RPG_GAMECORE_GAMEPLAYSTATIC_CANINSERTACTIONUSE_OFFSET UNITYSDK_OFFSET(0xCE11C40)
#define RPG_GAMECORE_GAMEPLAYSTATIC_CANULTRASKILLOPAPPLY_OFFSET UNITYSDK_OFFSET(0xCE10C90)
#define RPG_GAMECORE_GAMEPLAYSTATIC_CANULTRASKILLUSE_1_OFFSET UNITYSDK_OFFSET(0xCE11670)
#define RPG_GAMECORE_GAMEPLAYSTATIC_CANULTRASKILLUSE_OFFSET UNITYSDK_OFFSET(0xCE11410)
#define RPG_GAMECORE_GAMEPLAYSTATIC_CHECKEFFECTMUTEX_OFFSET UNITYSDK_OFFSET(0xCE15BE0)
#define RPG_GAMECORE_GAMEPLAYSTATIC_CHECKENTITYLOCKABLE_OFFSET UNITYSDK_OFFSET(0xCE0B8B0)
#define RPG_GAMECORE_GAMEPLAYSTATIC_CREATEBATTLESTATSPROTO_OFFSET UNITYSDK_OFFSET(0xCE18660)
#define RPG_GAMECORE_GAMEPLAYSTATIC_CREATEPRESHOWENTITY_OFFSET UNITYSDK_OFFSET(0xCE0BB50)
#define RPG_GAMECORE_GAMEPLAYSTATIC_ENABLEEFFECTLOWLOD_OFFSET UNITYSDK_OFFSET(0xCE16560)
#define RPG_GAMECORE_GAMEPLAYSTATIC_FILTERSKILLTARGETLISTBYSUMMONUNITMATCHED_OFFSET UNITYSDK_OFFSET(0xCE16820)
#define RPG_GAMECORE_GAMEPLAYSTATIC_FINDBODYPARTINDEX_OFFSET UNITYSDK_OFFSET(0xCE12CF0)
#define RPG_GAMECORE_GAMEPLAYSTATIC_FINDSCEPTER_OFFSET UNITYSDK_OFFSET(0xCE13AB0)
#define RPG_GAMECORE_GAMEPLAYSTATIC_FINDTYPEDCHARACTERBYUNIQUENAME_OFFSET UNITYSDK_OFFSET(0xCE13A20)
#define RPG_GAMECORE_GAMEPLAYSTATIC_FORCEEFFECTSMANUALFOLLOW_OFFSET UNITYSDK_OFFSET(0xCE16260)
#define RPG_GAMECORE_GAMEPLAYSTATIC_GENRELICSETABILITYKEY_1_OFFSET UNITYSDK_OFFSET(0xCE12800)
#define RPG_GAMECORE_GAMEPLAYSTATIC_GENRELICSETABILITYKEY_OFFSET UNITYSDK_OFFSET(0xCE126B0)
#define RPG_GAMECORE_GAMEPLAYSTATIC_GETABILITYPROPERTYANDSKILLLEVELBYAVATARSKILLTREEANDRANK_OFFSET UNITYSDK_OFFSET(0xCE0F6E0)
#define RPG_GAMECORE_GAMEPLAYSTATIC_GETAREANAMEBYTASK_OFFSET UNITYSDK_OFFSET(0xCE13E70)
#define RPG_GAMECORE_GAMEPLAYSTATIC_GETATTACKDAMAGETYPESTATISTICSINFOBYNPCMONSTERENTITY_OFFSET UNITYSDK_OFFSET(0xCE14A40)
#define RPG_GAMECORE_GAMEPLAYSTATIC_GETATTACKDAMAGETYPESTATISTICSINFOBYNPCMONSTERRUNTIMEID_OFFSET UNITYSDK_OFFSET(0xCE14C90)
#define RPG_GAMECORE_GAMEPLAYSTATIC_GETATTACKDAMAGETYPESTATISTICSINFOBYSTAGEID_OFFSET UNITYSDK_OFFSET(0xCE14850)
#define RPG_GAMECORE_GAMEPLAYSTATIC_GETATTACKDAMAGETYPESTATISTICSINFOBYWAVE_OFFSET UNITYSDK_OFFSET(0xCE14670)
#define RPG_GAMECORE_GAMEPLAYSTATIC_GETAVATARSKILLNAMEBYID_OFFSET UNITYSDK_OFFSET(0xCE0EA80)
#define RPG_GAMECORE_GAMEPLAYSTATIC_GETCOLLISIONBODYPARTSFROMHITBOX_OFFSET UNITYSDK_OFFSET(0xCE12C10)
#define RPG_GAMECORE_GAMEPLAYSTATIC_GETCOMBATPOWERWARNPERCENTMONSTERRATE_OFFSET UNITYSDK_OFFSET(0xCE16F90)
#define RPG_GAMECORE_GAMEPLAYSTATIC_GETCONFIG_OFFSET UNITYSDK_OFFSET(0xCE193D0)
#define RPG_GAMECORE_GAMEPLAYSTATIC_GETCURRENTLEVELDIRECTOR_OFFSET UNITYSDK_OFFSET(0xCE190F0)
#define RPG_GAMECORE_GAMEPLAYSTATIC_GETDISPLAYATTACKDAMAGETYPESTATISTICSINFOBYWAVE_OFFSET UNITYSDK_OFFSET(0xCE14490)
#define RPG_GAMECORE_GAMEPLAYSTATIC_GETEFFECTFLAGMASK_OFFSET UNITYSDK_OFFSET(0xCE163F0)
#define RPG_GAMECORE_GAMEPLAYSTATIC_GETENEMYTEAM_OFFSET UNITYSDK_OFFSET(0xCE0B330)
#define RPG_GAMECORE_GAMEPLAYSTATIC_GETENTITYFROMGAMEOBEJCT_OFFSET UNITYSDK_OFFSET(0xCE12960)
#define RPG_GAMECORE_GAMEPLAYSTATIC_GETENTITYLOCATIONCONFIG_OFFSET UNITYSDK_OFFSET(0xCE0EA10)
#define RPG_GAMECORE_GAMEPLAYSTATIC_GETENTITYMANAGER_OFFSET UNITYSDK_OFFSET(0xCE0B550)
#define RPG_GAMECORE_GAMEPLAYSTATIC_GETGAMEWORLD_OFFSET UNITYSDK_OFFSET(0xCE0B380)
#define RPG_GAMECORE_GAMEPLAYSTATIC_GETMAINATTACKDAMAGETYPEDICTBYNPCMONSTERRUNTIMEID_OFFSET UNITYSDK_OFFSET(0xCE14E30)
#define RPG_GAMECORE_GAMEPLAYSTATIC_GETMEMBERCOUNTINGOPTIONBYSERVANTSELECTTYPE_OFFSET UNITYSDK_OFFSET(0xCE16A80)
#define RPG_GAMECORE_GAMEPLAYSTATIC_GETMONSTERDROPREWARDDATA_OFFSET UNITYSDK_OFFSET(0xCE14FA0)
#define RPG_GAMECORE_GAMEPLAYSTATIC_GETOVERRIDEPROPERTY_OFFSET UNITYSDK_OFFSET(0xCE19C40)
#define RPG_GAMECORE_GAMEPLAYSTATIC_GETSKILLLIST_OFFSET UNITYSDK_OFFSET(0xCE19550)
#define RPG_GAMECORE_GAMEPLAYSTATIC_GETSKILLTREEPOINTLEVELSBYTEMPLATE_OFFSET UNITYSDK_OFFSET(0xCE10340)
#define RPG_GAMECORE_GAMEPLAYSTATIC_GETSKILLTREEPOINTSUITLEVEL_OFFSET UNITYSDK_OFFSET(0xCE10A60)
#define RPG_GAMECORE_GAMEPLAYSTATIC_GETSPECIALAVATARROWBYAVATARIDANDWORLDLEVEL_OFFSET UNITYSDK_OFFSET(0xCE0F570)
#define RPG_GAMECORE_GAMEPLAYSTATIC_GETSTAGEROWBYNPCMONSTERRUNTIMEID_OFFSET UNITYSDK_OFFSET(0xCE14AC0)
#define RPG_GAMECORE_GAMEPLAYSTATIC_GETTOTALMONSTERRANKSCORE_OFFSET UNITYSDK_OFFSET(0xCE17320)
#define RPG_GAMECORE_GAMEPLAYSTATIC_GETULTRASKILLINDEX_OFFSET UNITYSDK_OFFSET(0xCE10C10)
#define RPG_GAMECORE_GAMEPLAYSTATIC_GET_BATTLEID_OFFSET UNITYSDK_OFFSET(0xCE16E10)
#define RPG_GAMECORE_GAMEPLAYSTATIC_GET_LEGALSERVER_OFFSET UNITYSDK_OFFSET(0xCE16EF0)
#define RPG_GAMECORE_GAMEPLAYSTATIC_ISALLTEAMMATESTEALTH_OFFSET UNITYSDK_OFFSET(0xCE0B6C0)
#define RPG_GAMECORE_GAMEPLAYSTATIC_ISAVATAROWNEDEFFECT_OFFSET UNITYSDK_OFFSET(0xCE16AD0)
#define RPG_GAMECORE_GAMEPLAYSTATIC_ISENABLESPCHECKADDOPCOUNT_OFFSET UNITYSDK_OFFSET(0xCE113D0)
#define RPG_GAMECORE_GAMEPLAYSTATIC_ISENTITYINCIRCULARSECTOR_OFFSET UNITYSDK_OFFSET(0xCE13B80)
#define RPG_GAMECORE_GAMEPLAYSTATIC_ISINULTRASKILLINSERTSTATE_OFFSET UNITYSDK_OFFSET(0xCE12250)
#define RPG_GAMECORE_GAMEPLAYSTATIC_ISMATERIALSCALEHUGEMONSTER_OFFSET UNITYSDK_OFFSET(0xCE15EC0)
#define RPG_GAMECORE_GAMEPLAYSTATIC_ISMODIFIERPHASEENDSTATE_OFFSET UNITYSDK_OFFSET(0xCE122A0)
#define RPG_GAMECORE_GAMEPLAYSTATIC_ISMONSTERCONTAINSMAINATTACKDAMAGETYPE_OFFSET UNITYSDK_OFFSET(0xCE14EF0)
#define RPG_GAMECORE_GAMEPLAYSTATIC_ISMONSTEROWNEDEFFECT_OFFSET UNITYSDK_OFFSET(0xCE16C70)
#define RPG_GAMECORE_GAMEPLAYSTATIC_ISSUMMONUNITMATCHED_OFFSET UNITYSDK_OFFSET(0xCE16980)
#define RPG_GAMECORE_GAMEPLAYSTATIC_ISTARGETMATCHED_OFFSET UNITYSDK_OFFSET(0xCE0B9F0)
#define RPG_GAMECORE_GAMEPLAYSTATIC_ISTESELLATIONENABLE_OFFSET UNITYSDK_OFFSET(0xCE16080)
#define RPG_GAMECORE_GAMEPLAYSTATIC_ISTRIGGEREFFECTMUTEXENTITY_OFFSET UNITYSDK_OFFSET(0xCE15980)
#define RPG_GAMECORE_GAMEPLAYSTATIC_ISTRIGGEREFFECTMUTEXGLOBAL_OFFSET UNITYSDK_OFFSET(0xCE15560)
#define RPG_GAMECORE_GAMEPLAYSTATIC_ISULTRASKILL_OFFSET UNITYSDK_OFFSET(0xCE10B90)
#define RPG_GAMECORE_GAMEPLAYSTATIC_MAKENPCAIGOBACK_OFFSET UNITYSDK_OFFSET(0xCE13810)
#define RPG_GAMECORE_GAMEPLAYSTATIC_MONSTERBATTLEINFOLISTFILLPRIMARY_OFFSET UNITYSDK_OFFSET(0xCE17B40)
#define RPG_GAMECORE_GAMEPLAYSTATIC_PRECALCSKILLHPCHANGES_OFFSET UNITYSDK_OFFSET(0xCE0BF40)
#define RPG_GAMECORE_GAMEPLAYSTATIC_PRECALCSKILLSTANCE_OFFSET UNITYSDK_OFFSET(0xCE0CC80)
#define RPG_GAMECORE_GAMEPLAYSTATIC_PRECALCSTANCECHANGE_OFFSET UNITYSDK_OFFSET(0xCE0D7E0)
#define RPG_GAMECORE_GAMEPLAYSTATIC_PRECHECKDAMAGEBREAKSTANCE_1_OFFSET UNITYSDK_OFFSET(0xCE0E160)
#define RPG_GAMECORE_GAMEPLAYSTATIC_PRECHECKDAMAGEBREAKSTANCE_OFFSET UNITYSDK_OFFSET(0xCE0E750)
#define RPG_GAMECORE_GAMEPLAYSTATIC_PRECHECKSKILLBREAKREDSTANCE_OFFSET UNITYSDK_OFFSET(0xCE0E4D0)
#define RPG_GAMECORE_GAMEPLAYSTATIC_PRECHECKSKILLBREAKSTANCE_OFFSET UNITYSDK_OFFSET(0xCE0E040)
#define RPG_GAMECORE_GAMEPLAYSTATIC_PRECHECKSKILLFORCESTANCEDAMAGE_OFFSET UNITYSDK_OFFSET(0xCE0E8C0)
#define RPG_GAMECORE_GAMEPLAYSTATIC_PREPARECOMMONBATTLEEVENTCREATE_OFFSET UNITYSDK_OFFSET(0xCE17720)
#define RPG_GAMECORE_GAMEPLAYSTATIC_SETOVERRIDEJSONPATH_OFFSET UNITYSDK_OFFSET(0xCE196D0)
#define RPG_GAMECORE_GAMEPLAYSTATIC_SETOVERRIDEPROPERTY_OFFSET UNITYSDK_OFFSET(0xCE19A70)
#define RPG_GAMECORE_GAMEPLAYSTATIC_SETOVERRIDESKILLLIST_OFFSET UNITYSDK_OFFSET(0xCE198A0)
#define RPG_GAMECORE_GAMEPLAYSTATIC_SOLVESTANCEWEAKNESSPRESHOW_OFFSET UNITYSDK_OFFSET(0xCE0C870)
#define RPG_GAMECORE_GAMEPLAYSTATIC_STATISTICEVENTLISTFILLPRIMARY_OFFSET UNITYSDK_OFFSET(0xCE18490)
#define RPG_GAMECORE_GAMEPLAYSTATIC_TRYGETSTANCESLOTPERCENT_OFFSET UNITYSDK_OFFSET(0xCE0B5C0)
#define RPG_GAMECORE_GAMEPLAYSTATIC_TRYREPLAYMUTEXEFFECT_OFFSET UNITYSDK_OFFSET(0xCE15D70)
#define RPG_GAMECORE_GAMEPLAYSTATIC_UPDATEATTACKDAMAGETYPESTATISTICSINFOBYSINGLEMONSTERFORDISPLAY_OFFSET UNITYSDK_OFFSET(0xCE14170)
#define RPG_GAMECORE_GAMEPLAYSTATIC_UPDATEATTACKDAMAGETYPESTATISTICSINFOBYSINGLEMONSTER_OFFSET UNITYSDK_OFFSET(0xCE13F10)
#define RPG_GAMECORE_GAMEPLAYSTATIC_USESPECIALAVATAR_OFFSET UNITYSDK_OFFSET(0xCE0F520)
#define RPG_GAMECORE_GAMEPLAYSTATIC__CANINSERTACTIONUSEINTERNAL_OFFSET UNITYSDK_OFFSET(0xCE11CD0)
#define RPG_GAMECORE_GAMEPLAYSTATIC__CCTOR_OFFSET UNITYSDK_OFFSET(0xCE19D70)
#define RPG_GAMECORE_GAMEPLAYSTATIC__SHOULDCHECKFADEOUTMUTEXMAXCOUNT_OFFSET UNITYSDK_OFFSET(0xCE15780)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GamePlayStatic_TypeDefinitionIndex = 55182;

	class GamePlayStatic : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::GameCore::AvatarPropertyType>** StaticGet__Ability2AvatarPropertyMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::GameCore::AvatarPropertyType>**)Il2CppClass::FromTypeDefinitionIndex(GamePlayStatic_TypeDefinitionIndex)->GetStaticField(0x681D0);
		}
		static ::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::System::UInt32>*>** StaticGet__WaveStatisticsInfoList()
		{
			return (::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::System::UInt32>*>**)Il2CppClass::FromTypeDefinitionIndex(GamePlayStatic_TypeDefinitionIndex)->GetStaticField(0x681D8);
		}
		static ::System::Text::StringBuilder** StaticGet__NameBuilder()
		{
			return (::System::Text::StringBuilder**)Il2CppClass::FromTypeDefinitionIndex(GamePlayStatic_TypeDefinitionIndex)->GetStaticField(0x681E0);
		}
		static ::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::System::Single>*>** StaticGet__WaveStatisticsList()
		{
			return (::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::System::Single>*>**)Il2CppClass::FromTypeDefinitionIndex(GamePlayStatic_TypeDefinitionIndex)->GetStaticField(0x681E8);
		}
		static ::System::Collections::Generic::List_1<::System::Single>** StaticGet__CombatPowerWarnPercentMonsterList()
		{
			return (::System::Collections::Generic::List_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(GamePlayStatic_TypeDefinitionIndex)->GetStaticField(0x681F0);
		}
		static ::System::Int32* StaticGet__WaveStatisticsInfoIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GamePlayStatic_TypeDefinitionIndex)->GetStaticField(0x14010);
		}
		static ::System::Int32* StaticGet__WaveStatisticsIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GamePlayStatic_TypeDefinitionIndex)->GetStaticField(0x14014);
		}
		// static const ::System::String* PROP_PREFIX; // 0x0
		// static const ::System::String* SUMMON_UNIT_PREFIX; // 0x0
		// static const ::System::String* NPC_PREFIX; // 0x0
		// static const ::System::String* NPCMONSTER_PREFIX; // 0x0
		// static const ::System::Int32 MAX_WAVE_CACHE_NUMBER = 0x14; // 0x0
		// static const ::System::Single INVISIBLE_POSITION_Y; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC__CCTOR_OFFSET))();
		}

		static ::RPG::GameCore::TeamType GetEnemyTeam(::RPG::GameCore::TeamType a1)
		{
			return ((::RPG::GameCore::TeamType(*)(::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_GETENEMYTEAM_OFFSET))(a1);
		}

		static ::RPG::GameCore::GameWorld* GetGameWorld()
		{
			return ((::RPG::GameCore::GameWorld*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_GETGAMEWORLD_OFFSET))();
		}

		static ::RPG::GameCore::EntityManager* GetEntityManager()
		{
			return ((::RPG::GameCore::EntityManager*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_GETENTITYMANAGER_OFFSET))();
		}

		static ::System::Boolean TryGetStanceSlotPercent(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::FixPoint& a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint&, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_TRYGETSTANCESLOTPERCENT_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean IsAllTeammateStealth(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_ISALLTEAMMATESTEALTH_OFFSET))(a1);
		}

		static ::System::Boolean CheckEntityLockable(::RPG::GameCore::EntityManager* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::GameEntity* a3, ::RPG::GameCore::SkillTargetConfig* a4)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::EntityManager*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillTargetConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_CHECKENTITYLOCKABLE_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::GameCore::GameEntity* CreatePreShowEntity(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_CREATEPRESHOWENTITY_OFFSET))(a1);
		}

		static ::RPG::GameCore::FixPoint PreCalcSkillHPChanges(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::RPG::GameCore::TurnBasedAbilityComponent* a2, ::Class_1_A2D8E5AB4B623162* a3, ::Class_0_16E4307DCC419505_557* a4, ::RPG::GameCore::SkillDamageRange a5, ::RPG::GameCore::SkillData* a6)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::Class_1_A2D8E5AB4B623162*, ::Class_0_16E4307DCC419505_557*, ::RPG::GameCore::SkillDamageRange, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_PRECALCSKILLHPCHANGES_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::RPG::GameCore::AttackDamageType SolveStanceWeaknessPreshow(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::System::Int32 a3, ::System::Boolean a4)
		{
			return ((::RPG::GameCore::AttackDamageType(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_SOLVESTANCEWEAKNESSPRESHOW_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::ValueTuple_3<::RPG::GameCore::FixPoint, ::RPG::GameCore::AttackDamageType, ::System::Boolean> PreCalcSkillStance(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::RPG::GameCore::TurnBasedAbilityComponent* a2, ::Class_0_16E4307DCC419505_557* a3, ::RPG::GameCore::SkillData* a4, ::RPG::GameCore::SkillDamageRange a5)
		{
			return ((::System::ValueTuple_3<::RPG::GameCore::FixPoint, ::RPG::GameCore::AttackDamageType, ::System::Boolean>(*)(::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::Class_0_16E4307DCC419505_557*, ::RPG::GameCore::SkillData*, ::RPG::GameCore::SkillDamageRange))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_PRECALCSKILLSTANCE_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::RPG::GameCore::FixPoint PreCalcStanceChange(::Struct_2_3271D18CDCC3AB1D& a1, ::RPG::GameCore::AttackDamageType a2, ::System::Boolean& a3)
		{
			return ((::RPG::GameCore::FixPoint(*)(::Struct_2_3271D18CDCC3AB1D&, ::RPG::GameCore::AttackDamageType, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_PRECALCSTANCECHANGE_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean PreCheckSkillBreakStance(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::System::Int32 a3, ::System::Boolean& a4, ::System::Boolean& a5)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Int32, ::System::Boolean&, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_PRECHECKSKILLBREAKSTANCE_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean PreCheckSkillBreakRedStance(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>* a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_PRECHECKSKILLBREAKREDSTANCE_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean PreCheckDamageBreakStance(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_PRECHECKDAMAGEBREAKSTANCE_OFFSET))(a1, a2);
		}

		static ::System::Boolean PreCheckDamageBreakStance_1(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::GameEntity* a2, ::System::Boolean& a3, ::System::Boolean& a4)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::GameEntity*, ::System::Boolean&, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_PRECHECKDAMAGEBREAKSTANCE_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean PreCheckSkillForceStanceDamage(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::RPG::GameCore::TurnBasedAbilityComponent* a2, ::RPG::GameCore::SkillConfig* a3)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::SkillConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_PRECHECKSKILLFORCESTANCEDAMAGE_OFFSET))(a1, a2, a3);
		}

		static ::RPG::GameCore::LocationConfig* GetEntityLocationConfig(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::LocationConfig*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_GETENTITYLOCATIONCONFIG_OFFSET))(a1);
		}

		static ::System::String* GetAvatarSkillNameByID(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_GETAVATARSKILLNAMEBYID_OFFSET))(a1);
		}

		static ::RPG::GameCore::AbilityProperty AvatarPropertyTypeToAbilityPropertyType(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::RPG::GameCore::AbilityProperty(*)(::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_AVATARPROPERTYTYPETOABILITYPROPERTYTYPE_OFFSET))(a1);
		}

		static ::RPG::GameCore::AvatarPropertyType AbilityPropertyToAvatarPropertyType(::RPG::GameCore::AbilityProperty a1)
		{
			return ((::RPG::GameCore::AvatarPropertyType(*)(::RPG::GameCore::AbilityProperty))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_ABILITYPROPERTYTOAVATARPROPERTYTYPE_OFFSET))(a1);
		}

		static ::System::Void ApplyAvatarPropertyItem(::RPG::GameCore::AvatarPropertyValue* a1, ::RPG::GameCore::TurnBasedAbilityComponent* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::RPG::GameCore::AvatarPropertyValue*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_APPLYAVATARPROPERTYITEM_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ApplyAvatarPropertyItem_1(::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint> a1, ::RPG::GameCore::TurnBasedAbilityComponent* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint>, ::RPG::GameCore::TurnBasedAbilityComponent*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_APPLYAVATARPROPERTYITEM_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ApplyAvatarPropertyItem_2(::Class_1_57207EAD4239ED6B* a1, ::RPG::GameCore::TurnBasedAbilityComponent* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::Class_1_57207EAD4239ED6B*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_APPLYAVATARPROPERTYITEM_2_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ApplyAvatarPropertyItem_3(::RPG::GameCore::AbilityProperty a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::TurnBasedAbilityComponent* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::RPG::GameCore::AbilityProperty, ::RPG::GameCore::FixPoint, ::RPG::GameCore::TurnBasedAbilityComponent*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_APPLYAVATARPROPERTYITEM_3_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean UseSpecialAvatar(::Enum_3_01618AD0437C8486 a1)
		{
			return ((::System::Boolean(*)(::Enum_3_01618AD0437C8486))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_USESPECIALAVATAR_OFFSET))(a1);
		}

		static ::RPG::GameCore::SpecialAvatarRow* GetSpecialAvatarRowByAvatarIDAndWorldLevel(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::SpecialAvatarRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_GETSPECIALAVATARROWBYAVATARIDANDWORLDLEVEL_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::SpecialAvatarRow* AdventureGetSpecialAvatarRowByAvatarID(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::SpecialAvatarRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_ADVENTUREGETSPECIALAVATARROWBYAVATARID_OFFSET))(a1, a2);
		}

		static ::System::Void GetAbilityPropertyAndSkillLevelByAvatarSkillTreeAndRank(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Collections::Generic::List_1<::Class_1_7AB88D713F5121B3_47*>* a4, ::System::Collections::Generic::List_1<::Class_1_7AB88D713F5121B3_47*>* a5, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint>*& a6, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>*& a7)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::Class_1_7AB88D713F5121B3_47*>*, ::System::Collections::Generic::List_1<::Class_1_7AB88D713F5121B3_47*>*, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint>*&, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_GETABILITYPROPERTYANDSKILLLEVELBYAVATARSKILLTREEANDRANK_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* GetSkillTreePointLevelsByTemplate(::System::UInt32 a1, ::System::UInt32 a2, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a3, ::RPG::GameCore::SkillTreeTemplateType a4, ::System::String* a5)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::System::UInt32, ::System::UInt32, ::System::Collections::Generic::HashSet_1<::System::UInt32>*, ::RPG::GameCore::SkillTreeTemplateType, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_GETSKILLTREEPOINTLEVELSBYTEMPLATE_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::UInt32 GetSkillTreePointSuitLevel(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_GETSKILLTREEPOINTSUITLEVEL_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean IsUltraSkill(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_ISULTRASKILL_OFFSET))(a1, a2);
		}

		static ::System::Int32 GetUltraSkillIndex(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Int32(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_GETULTRASKILLINDEX_OFFSET))(a1);
		}

		static ::RPG::GameCore::SkillCharacterComponent_UseSkillErrorInfo CanUltraSkillOpApply(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::SkillCharacterComponent_UseSkillErrorInfo(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_CANULTRASKILLOPAPPLY_OFFSET))(a1);
		}

		static ::RPG::GameCore::SkillCharacterComponent_UseSkillErrorInfo CanUltraSkillUse(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::SkillCharacterComponent_UseSkillErrorInfo(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_CANULTRASKILLUSE_OFFSET))(a1);
		}

		static ::RPG::GameCore::SkillCharacterComponent_UseSkillErrorInfo CanUltraSkillUse_1(::System::Int32 a1, ::RPG::GameCore::GameEntity* a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::RPG::GameCore::SkillCharacterComponent_UseSkillErrorInfo(*)(::System::Int32, ::RPG::GameCore::GameEntity*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_CANULTRASKILLUSE_1_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean CanInsertActionUse(::Class_1_152140BAFD2DB102* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::Class_1_152140BAFD2DB102*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_CANINSERTACTIONUSE_OFFSET))(a1, a2);
		}

		static ::System::Boolean _CanInsertActionUseInternal(::Class_1_152140BAFD2DB102* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::Class_1_152140BAFD2DB102*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC__CANINSERTACTIONUSEINTERNAL_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsInUltraSkillInsertState(::RPG::GameCore::TurnState a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::TurnState))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_ISINULTRASKILLINSERTSTATE_OFFSET))(a1);
		}

		static ::System::Boolean IsModifierPhaseEndState(::RPG::GameCore::TurnState a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::TurnState))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_ISMODIFIERPHASEENDSTATE_OFFSET))(a1);
		}

		static ::RPG::GameCore::FixPoint CalculateNewActionDelayWhenSpeedChange(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_CALCULATENEWACTIONDELAYWHENSPEEDCHANGE_OFFSET))(a1, a2, a3);
		}

		static ::RPG::GameCore::FixPoint CalcualteBattleEquipmentHPBase(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::RPG::GameCore::FixPoint(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_CALCUALTEBATTLEEQUIPMENTHPBASE_OFFSET))(a1, a2, a3);
		}

		static ::RPG::GameCore::FixPoint CalcualteBattleEquipmentAttackBase(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::RPG::GameCore::FixPoint(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_CALCUALTEBATTLEEQUIPMENTATTACKBASE_OFFSET))(a1, a2, a3);
		}

		static ::RPG::GameCore::FixPoint CalcualteBattleEquipmentDefenceBase(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::RPG::GameCore::FixPoint(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_CALCUALTEBATTLEEQUIPMENTDEFENCEBASE_OFFSET))(a1, a2, a3);
		}

		static ::RPG::GameCore::FixPoint CalcRelicMainAffixValue(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2, ::System::UInt32 a3)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_CALCRELICMAINAFFIXVALUE_OFFSET))(a1, a2, a3);
		}

		static ::RPG::GameCore::FixPoint CalcRelicSubAffixValue(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_CALCRELICSUBAFFIXVALUE_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::String* GenRelicSetAbilityKey(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::String*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_GENRELICSETABILITYKEY_OFFSET))(a1, a2);
		}

		static ::System::String* GenRelicSetAbilityKey_1(::System::String* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_GENRELICSETABILITYKEY_1_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::GameEntity* GetEntityFromGameObejct(::UnityEngine::GameObject* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::UnityEngine::GameObject*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_GETENTITYFROMGAMEOBEJCT_OFFSET))(a1, a2, a3);
		}

		static ::RPG::Client::EntityCollisionBodyParts* GetCollisionBodyPartsFromHitBox(::UnityEngine::Collider* a1)
		{
			return ((::RPG::Client::EntityCollisionBodyParts*(*)(::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_GETCOLLISIONBODYPARTSFROMHITBOX_OFFSET))(a1);
		}

		static ::System::Int32 FindBodyPartIndex(::UnityEngine::Collider* a1)
		{
			return ((::System::Int32(*)(::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_FINDBODYPARTINDEX_OFFSET))(a1);
		}

		static ::System::String* BuildCharacterUniqueName(::RPG::GameCore::EntityType a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::RPG::GameCore::EntityType, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_BUILDCHARACTERUNIQUENAME_OFFSET))(a1, a2);
		}

		static ::System::String* BuildPropUniqueName(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::String*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_BUILDPROPUNIQUENAME_OFFSET))(a1, a2);
		}

		static ::System::String* BuildNpcUniqueName(::System::UInt32 a1, ::System::UInt32 a2, ::System::String* a3)
		{
			return ((::System::String*(*)(::System::UInt32, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_BUILDNPCUNIQUENAME_OFFSET))(a1, a2, a3);
		}

		static ::System::String* BuildNpcUniqueNameByGroupInfo(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::String*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_BUILDNPCUNIQUENAMEBYGROUPINFO_OFFSET))(a1, a2);
		}

		static ::System::String* BuildNpcUniqueNameByStr(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_BUILDNPCUNIQUENAMEBYSTR_OFFSET))(a1);
		}

		static ::System::String* BuildNPCMonsterUniqueName(::System::UInt32 a1, ::System::UInt32 a2, ::System::String* a3)
		{
			return ((::System::String*(*)(::System::UInt32, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_BUILDNPCMONSTERUNIQUENAME_OFFSET))(a1, a2, a3);
		}

		static ::System::Void MakeNpcAIGoBack(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_MAKENPCAIGOBACK_OFFSET))(a1, a2);
		}

		static ::System::String* BuildNPCMonsterUniqueNameByGroupInfo(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::String*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_BUILDNPCMONSTERUNIQUENAMEBYGROUPINFO_OFFSET))(a1, a2);
		}

		static ::System::String* BuildNPCMonsterUniqueNameByStr(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_BUILDNPCMONSTERUNIQUENAMEBYSTR_OFFSET))(a1);
		}

		static ::RPG::GameCore::GameEntity* FindTypedCharacterByUniqueName(::RPG::GameCore::EntityManager* a1, ::RPG::GameCore::EntityType a2, ::System::String* a3)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::RPG::GameCore::EntityType, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_FINDTYPEDCHARACTERBYUNIQUENAME_OFFSET))(a1, a2, a3);
		}

		static ::RPG::GameCore::GameEntity* FindScepter(::RPG::GameCore::EntityManager* a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_FINDSCEPTER_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsEntityInCircularSector(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4, ::RPG::GameCore::GameEntity* a5)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_ISENTITYINCIRCULARSECTOR_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::String* GetAreaNameByTask(::RPG::GameCore::TaskContext* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::RPG::GameCore::TaskContext*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_GETAREANAMEBYTASK_OFFSET))(a1, a2);
		}

		static ::System::Void UpdateAttackDamageTypeStatisticsInfoBySingleMonster(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::System::UInt32>* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_UPDATEATTACKDAMAGETYPESTATISTICSINFOBYSINGLEMONSTER_OFFSET))(a1, a2);
		}

		static ::System::Void UpdateAttackDamageTypeStatisticsInfoBySingleMonsterForDisplay(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::System::Single>* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::System::Single>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_UPDATEATTACKDAMAGETYPESTATISTICSINFOBYSINGLEMONSTERFORDISPLAY_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::System::Single>* GetDisplayAttackDamageTypeStatisticsInfoByWave(::RPG::GameCore::StageMonsterWave* a1)
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::System::Single>*(*)(::RPG::GameCore::StageMonsterWave*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_GETDISPLAYATTACKDAMAGETYPESTATISTICSINFOBYWAVE_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::System::UInt32>* GetAttackDamageTypeStatisticsInfoByWave(::RPG::GameCore::StageMonsterWave* a1)
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::System::UInt32>*(*)(::RPG::GameCore::StageMonsterWave*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_GETATTACKDAMAGETYPESTATISTICSINFOBYWAVE_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::System::UInt32>*>* GetAttackDamageTypeStatisticsInfoByStageID(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::System::UInt32>*>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_GETATTACKDAMAGETYPESTATISTICSINFOBYSTAGEID_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::System::UInt32>*>* GetAttackDamageTypeStatisticsInfoByNpcMonsterEntity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::System::UInt32>*>*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_GETATTACKDAMAGETYPESTATISTICSINFOBYNPCMONSTERENTITY_OFFSET))(a1);
		}

		static ::RPG::GameCore::StageRow* GetStageRowByNpcMonsterRuntimeID(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::StageRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_GETSTAGEROWBYNPCMONSTERRUNTIMEID_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::System::UInt32>*>* GetAttackDamageTypeStatisticsInfoByNpcMonsterRuntimeID(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::System::UInt32>*>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_GETATTACKDAMAGETYPESTATISTICSINFOBYNPCMONSTERRUNTIMEID_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::System::Single>* GetMainAttackDamageTypeDictByNpcMonsterRuntimeID(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::System::Single>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_GETMAINATTACKDAMAGETYPEDICTBYNPCMONSTERRUNTIMEID_OFFSET))(a1);
		}

		static ::System::Boolean IsMonsterContainsMainAttackDamageType(::System::UInt32 a1, ::RPG::GameCore::AttackDamageType a2)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_ISMONSTERCONTAINSMAINATTACKDAMAGETYPE_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::List_1<::RPG::GameCore::StageMonsterRewardItem*>* GetMonsterDropRewardData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::StageMonsterRewardItem*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_GETMONSTERDROPREWARDDATA_OFFSET))();
		}

		static ::RPG::Client::EffectMutexResult IsTriggerEffectMutexGlobal(::RPG::Client::MonoEffectManager* a1, ::System::String* a2, ::System::Single a3, ::System::Int32 a4)
		{
			return ((::RPG::Client::EffectMutexResult(*)(::RPG::Client::MonoEffectManager*, ::System::String*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_ISTRIGGEREFFECTMUTEXGLOBAL_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::Client::EffectMutexResult IsTriggerEffectMutexEntity(::RPG::Client::MonoEffectManager* a1, ::System::String* a2, ::System::Single a3, ::System::Int32 a4, ::RPG::GameCore::GameEntity* a5, ::System::Single a6)
		{
			return ((::RPG::Client::EffectMutexResult(*)(::RPG::Client::MonoEffectManager*, ::System::String*, ::System::Single, ::System::Int32, ::RPG::GameCore::GameEntity*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_ISTRIGGEREFFECTMUTEXENTITY_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Boolean CheckEffectMutex(::RPG::Client::MonoEffectManager* a1, ::RPG::GameCore::GameEntity* a2, ::System::String* a3, ::RPG::GameCore::EffectMutexType a4, ::System::Single a5, ::System::Int32 a6, ::RPG::Client::MonoEffect*& a7)
		{
			return ((::System::Boolean(*)(::RPG::Client::MonoEffectManager*, ::RPG::GameCore::GameEntity*, ::System::String*, ::RPG::GameCore::EffectMutexType, ::System::Single, ::System::Int32, ::RPG::Client::MonoEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_CHECKEFFECTMUTEX_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::RPG::Client::MonoEffect* TryReplayMutexEffect(::RPG::Client::MonoEffectManager* a1, ::System::String* a2, ::RPG::Client::EffectMutexResult a3, ::RPG::GameCore::GameEntity* a4)
		{
			return ((::RPG::Client::MonoEffect*(*)(::RPG::Client::MonoEffectManager*, ::System::String*, ::RPG::Client::EffectMutexResult, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_TRYREPLAYMUTEXEFFECT_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean _ShouldCheckFadeOutMutexMaxCount()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC__SHOULDCHECKFADEOUTMUTEXMAXCOUNT_OFFSET))();
		}

		static ::System::Boolean IsMaterialScaleHugeMonster(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_ISMATERIALSCALEHUGEMONSTER_OFFSET))(a1);
		}

		static ::System::Boolean IsTesellationEnable(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_ISTESELLATIONENABLE_OFFSET))(a1);
		}

		static ::System::Void ForceEffectsManualFollow(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_FORCEEFFECTSMANUALFOLLOW_OFFSET))(a1);
		}

		static ::System::Int32 GetEffectFlagMask(::Il2CppArray<::RPG::GameCore::MonoEffectFlag>* a1)
		{
			return ((::System::Int32(*)(::Il2CppArray<::RPG::GameCore::MonoEffectFlag>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_GETEFFECTFLAGMASK_OFFSET))(a1);
		}

		static ::System::Boolean EnableEffectLowLod()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_ENABLEEFFECTLOWLOD_OFFSET))();
		}

		static ::System::Void FilterSkillTargetListBySummonUnitMatched(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::RPG::GameCore::SkillTargetConfig* a2, ::RPG::GameCore::GameEntity* a3)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::SkillTargetConfig*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_FILTERSKILLTARGETLISTBYSUMMONUNITMATCHED_OFFSET))(a1, a2, a3);
		}

		static ::RPG::GameCore::TeamMemberCountingOption GetMemberCountingOptionByServantSelectType(::RPG::GameCore::ServantSelectType a1)
		{
			return ((::RPG::GameCore::TeamMemberCountingOption(*)(::RPG::GameCore::ServantSelectType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_GETMEMBERCOUNTINGOPTIONBYSERVANTSELECTTYPE_OFFSET))(a1);
		}

		static ::System::Boolean IsEnableSPCheckAddOPCount()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_ISENABLESPCHECKADDOPCOUNT_OFFSET))();
		}

		static ::System::Boolean IsTargetMatched(::RPG::GameCore::SkillTargetConfig* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::GameEntity* a3)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::SkillTargetConfig*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_ISTARGETMATCHED_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean IsSummonUnitMatched(::RPG::GameCore::SkillTargetConfig* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::GameEntity* a3)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::SkillTargetConfig*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_ISSUMMONUNITMATCHED_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean IsAvatarOwnedEffect(::RPG::GameCore::CharacterPreloadConfig* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::CharacterPreloadConfig*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_ISAVATAROWNEDEFFECT_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsMonsterOwnedEffect(::RPG::GameCore::MonsterPreloadConfig* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::MonsterPreloadConfig*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_ISMONSTEROWNEDEFFECT_OFFSET))(a1, a2);
		}

		static ::System::UInt32 get_BattleID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_GET_BATTLEID_OFFSET))();
		}

		static ::System::Boolean get_LegalServer()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_GET_LEGALSERVER_OFFSET))();
		}

		static ::System::Single GetCombatPowerWarnPercentMonsterRate(::System::Int32 a1)
		{
			return ((::System::Single(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_GETCOMBATPOWERWARNPERCENTMONSTERRATE_OFFSET))(a1);
		}

		static ::RPG::GameCore::FixPoint GetTotalMonsterRankScore(::RPG::GameCore::EntityManager* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::EntityManager*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_GETTOTALMONSTERRANKSCORE_OFFSET))(a1);
		}

		static ::RPG::GameCore::StageRow* PrepareCommonBattleEventCreate(::System::UInt32 a1, ::RPG::GameCore::TaskContext* a2, ::System::Boolean a3, ::System::Boolean& a4)
		{
			return ((::RPG::GameCore::StageRow*(*)(::System::UInt32, ::RPG::GameCore::TaskContext*, ::System::Boolean, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_PREPARECOMMONBATTLEEVENTCREATE_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Collections::Generic::List_1<::Class_1_BF43A923389D144C*>* AvatarBattleInfoListFillPrimary(::System::Collections::Generic::List_1<::Class_1_BF43A923389D144C*>* a1, ::System::Boolean a2)
		{
			return ((::System::Collections::Generic::List_1<::Class_1_BF43A923389D144C*>*(*)(::System::Collections::Generic::List_1<::Class_1_BF43A923389D144C*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_AVATARBATTLEINFOLISTFILLPRIMARY_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::List_1<::Class_1_1D0B4E25DB90BF59*>* MonsterBattleInfoListFillPrimary(::System::Collections::Generic::List_1<::Class_1_1D0B4E25DB90BF59*>* a1, ::System::Boolean a2)
		{
			return ((::System::Collections::Generic::List_1<::Class_1_1D0B4E25DB90BF59*>*(*)(::System::Collections::Generic::List_1<::Class_1_1D0B4E25DB90BF59*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_MONSTERBATTLEINFOLISTFILLPRIMARY_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::List_1<::Class_1_B10FFA91399295A9*>* BattleEventBattleInfoListFillPrimary(::System::Collections::Generic::List_1<::Class_1_B10FFA91399295A9*>* a1, ::System::Boolean a2)
		{
			return ((::System::Collections::Generic::List_1<::Class_1_B10FFA91399295A9*>*(*)(::System::Collections::Generic::List_1<::Class_1_B10FFA91399295A9*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_BATTLEEVENTBATTLEINFOLISTFILLPRIMARY_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::List_1<::Class_1_48AADA497C3F117F_2*>* BattleAvatarServantInfoListFillPrimary(::System::Collections::Generic::List_1<::Class_1_48AADA497C3F117F_2*>* a1, ::System::Boolean a2)
		{
			return ((::System::Collections::Generic::List_1<::Class_1_48AADA497C3F117F_2*>*(*)(::System::Collections::Generic::List_1<::Class_1_48AADA497C3F117F_2*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_BATTLEAVATARSERVANTINFOLISTFILLPRIMARY_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::List_1<::Class_1_D1E0AD3915BCCF29_7*>* BattleAvatarGlobalBuffInfoListFillPrimary(::System::Collections::Generic::List_1<::Class_1_D1E0AD3915BCCF29_7*>* a1, ::System::Boolean a2)
		{
			return ((::System::Collections::Generic::List_1<::Class_1_D1E0AD3915BCCF29_7*>*(*)(::System::Collections::Generic::List_1<::Class_1_D1E0AD3915BCCF29_7*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_BATTLEAVATARGLOBALBUFFINFOLISTFILLPRIMARY_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::List_1<::Class_1_668FE281FA72D3E8*>* StatisticEventListFillPrimary(::System::Collections::Generic::List_1<::Class_1_668FE281FA72D3E8*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::Class_1_668FE281FA72D3E8*>*(*)(::System::Collections::Generic::List_1<::Class_1_668FE281FA72D3E8*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_STATISTICEVENTLISTFILLPRIMARY_OFFSET))(a1);
		}

		static ::Class_1_C9DFE5EE7107C629_1* CreateBattleStatsProto(::RPG::GameCore::PVEGameStatistics* a1, ::System::Boolean a2)
		{
			return ((::Class_1_C9DFE5EE7107C629_1*(*)(::RPG::GameCore::PVEGameStatistics*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_CREATEBATTLESTATSPROTO_OFFSET))(a1, a2);
		}

		static ::RPG::Client::LevelDirector* GetCurrentLevelDirector()
		{
			return ((::RPG::Client::LevelDirector*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_GETCURRENTLEVELDIRECTOR_OFFSET))();
		}

		static ::System::Void BossMultiInstCheck(::RPG::GameCore::GameWorld* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_BOSSMULTIINSTCHECK_OFFSET))(a1);
		}

		static ::System::String* GetConfig(::RPG::GameCore::BattleEventRow* a1)
		{
			return ((::System::String*(*)(::RPG::GameCore::BattleEventRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_GETCONFIG_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::UInt32>* GetSkillList(::RPG::GameCore::BattleEventRow* a1)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::RPG::GameCore::BattleEventRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_GETSKILLLIST_OFFSET))(a1);
		}

		static ::System::Void SetOverrideJsonPath(::RPG::GameCore::BattleEventRow* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::BattleEventRow*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_SETOVERRIDEJSONPATH_OFFSET))(a1, a2);
		}

		static ::System::Void SetOverrideSkillList(::RPG::GameCore::BattleEventRow* a1, ::Il2CppArray<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::BattleEventRow*, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_SETOVERRIDESKILLLIST_OFFSET))(a1, a2);
		}

		static ::System::Void SetOverrideProperty(::RPG::GameCore::BattleEventRow* a1, ::Il2CppArray<::RPG::GameCore::AbilityPropertyValue*>* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::BattleEventRow*, ::Il2CppArray<::RPG::GameCore::AbilityPropertyValue*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_SETOVERRIDEPROPERTY_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::RPG::GameCore::AbilityPropertyValue*>* GetOverrideProperty(::RPG::GameCore::BattleEventRow* a1)
		{
			return ((::Il2CppArray<::RPG::GameCore::AbilityPropertyValue*>*(*)(::RPG::GameCore::BattleEventRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC_GETOVERRIDEPROPERTY_OFFSET))(a1);
		}
	};
}
