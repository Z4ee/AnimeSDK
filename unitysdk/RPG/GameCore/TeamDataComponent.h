#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/SkillAutoLockType.h"
#include "unitysdk/RPG/GameCore/TeamType.h"

class Class_1_B940C10EDDC383AC;
class Class_1_CC5F9F66B76D550F;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class SkillConfig; }
namespace RPG::GameCore { class SkillData; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_TEAMDATACOMPONENT_AUTOLOCKTARGET_OFFSET UNITYSDK_OFFSET(0xAA58750)
#define RPG_GAMECORE_TEAMDATACOMPONENT_CANCELLOCKTO_OFFSET UNITYSDK_OFFSET(0xAA5B0F0)
#define RPG_GAMECORE_TEAMDATACOMPONENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAA58620)
#define RPG_GAMECORE_TEAMDATACOMPONENT_GET_BOOSTPOINTMAX_OFFSET UNITYSDK_OFFSET(0xAA5B290)
#define RPG_GAMECORE_TEAMDATACOMPONENT_GET_BOOSTPOINTMODULE_OFFSET UNITYSDK_OFFSET(0xAA5B250)
#define RPG_GAMECORE_TEAMDATACOMPONENT_GET_BOOSTPOINT_OFFSET UNITYSDK_OFFSET(0xAA4A2A0)
#define RPG_GAMECORE_TEAMDATACOMPONENT_GET_HPSHAREDMODULE_OFFSET UNITYSDK_OFFSET(0xAA5B270)
#define RPG_GAMECORE_TEAMDATACOMPONENT_GET_LASTLOCKENEMYNORESTRICT_OFFSET UNITYSDK_OFFSET(0xAA5B3C0)
#define RPG_GAMECORE_TEAMDATACOMPONENT_GET_LASTLOCKENEMY_OFFSET UNITYSDK_OFFSET(0xAA2E840)
#define RPG_GAMECORE_TEAMDATACOMPONENT_GET_LASTLOCKFRIEND_OFFSET UNITYSDK_OFFSET(0xAA2E7E0)
#define RPG_GAMECORE_TEAMDATACOMPONENT_GET_LOCKTARGETTEMPORARY_OFFSET UNITYSDK_OFFSET(0xAA5B2E0)
#define RPG_GAMECORE_TEAMDATACOMPONENT_GET_LOCKTARGET_OFFSET UNITYSDK_OFFSET(0xAA5B2F0)
#define RPG_GAMECORE_TEAMDATACOMPONENT_GET_TEAM_OFFSET UNITYSDK_OFFSET(0xAA5B230)
#define RPG_GAMECORE_TEAMDATACOMPONENT_GET_VERSUSBARVALUE_OFFSET UNITYSDK_OFFSET(0xAA5B3D0)
#define RPG_GAMECORE_TEAMDATACOMPONENT_INITCOMPONENT_OFFSET UNITYSDK_OFFSET(0xAA58680)
#define RPG_GAMECORE_TEAMDATACOMPONENT_SET_BOOSTPOINTMODULE_OFFSET UNITYSDK_OFFSET(0xAA5B260)
#define RPG_GAMECORE_TEAMDATACOMPONENT_SET_HPSHAREDMODULE_OFFSET UNITYSDK_OFFSET(0xAA5B280)
#define RPG_GAMECORE_TEAMDATACOMPONENT_SET_LASTLOCKENEMYNORESTRICT_OFFSET UNITYSDK_OFFSET(0xAA5B3B0)
#define RPG_GAMECORE_TEAMDATACOMPONENT_SET_LASTLOCKENEMY_OFFSET UNITYSDK_OFFSET(0xAA5B390)
#define RPG_GAMECORE_TEAMDATACOMPONENT_SET_LASTLOCKFRIEND_OFFSET UNITYSDK_OFFSET(0xAA5B3A0)
#define RPG_GAMECORE_TEAMDATACOMPONENT_SET_LOCKTARGETTEMPORARY_OFFSET UNITYSDK_OFFSET(0xAA36CD0)
#define RPG_GAMECORE_TEAMDATACOMPONENT_SET_LOCKTARGET_OFFSET UNITYSDK_OFFSET(0xAA58F90)
#define RPG_GAMECORE_TEAMDATACOMPONENT_SET_TEAM_OFFSET UNITYSDK_OFFSET(0xAA5B240)
#define RPG_GAMECORE_TEAMDATACOMPONENT__COMPAREBYAUTOLOCKTAUNT_OFFSET UNITYSDK_OFFSET(0xAA5BD80)
#define RPG_GAMECORE_TEAMDATACOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0xAA585A0)
#define RPG_GAMECORE_TEAMDATACOMPONENT__GETAITAGVALUE_OFFSET UNITYSDK_OFFSET(0xAA5B850)
#define RPG_GAMECORE_TEAMDATACOMPONENT__GETAUTOLOCKTARGETBYHIGHWEDO_OFFSET UNITYSDK_OFFSET(0xAA592E0)
#define RPG_GAMECORE_TEAMDATACOMPONENT__GETAUTOLOCKTARGETBYHIGHWP_OFFSET UNITYSDK_OFFSET(0xAA59D90)
#define RPG_GAMECORE_TEAMDATACOMPONENT__GETAUTOLOCKTARGETBYJADEBP_OFFSET UNITYSDK_OFFSET(0xAA5A450)
#define RPG_GAMECORE_TEAMDATACOMPONENT__GETAUTOLOCKTARGETBYSORT_OFFSET UNITYSDK_OFFSET(0xAA59230)
#define RPG_GAMECORE_TEAMDATACOMPONENT__GETAUTOLOCKTARGETBYSOURCE_OFFSET UNITYSDK_OFFSET(0xAA5ABB0)
#define RPG_GAMECORE_TEAMDATACOMPONENT__GETEXPECTEDDAMAGE_OFFSET UNITYSDK_OFFSET(0xAA5B470)
#define RPG_GAMECORE_TEAMDATACOMPONENT__ISVALIDFORAUTOLOCK_OFFSET UNITYSDK_OFFSET(0xAA590A0)
#define RPG_GAMECORE_TEAMDATACOMPONENT__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0xAA585B0)
#define RPG_GAMECORE_TEAMDATACOMPONENT__SORTAUTOLOCKTARGETBYADJOINDEFAULT_OFFSET UNITYSDK_OFFSET(0xAA5C170)
#define RPG_GAMECORE_TEAMDATACOMPONENT__SORTAUTOLOCKTARGETBYDEFAULT_OFFSET UNITYSDK_OFFSET(0xAA5B9B0)
#define RPG_GAMECORE_TEAMDATACOMPONENT__SORTAUTOLOCKTARGETBYHIGHDPT_OFFSET UNITYSDK_OFFSET(0xAA5C880)
#define RPG_GAMECORE_TEAMDATACOMPONENT__SORTAUTOLOCKTARGETBYHIGHED_OFFSET UNITYSDK_OFFSET(0xAA5C7B0)
#define RPG_GAMECORE_TEAMDATACOMPONENT__SORTAUTOLOCKTARGETBYHIGHHP_OFFSET UNITYSDK_OFFSET(0xAA5C5F0)
#define RPG_GAMECORE_TEAMDATACOMPONENT__SORTAUTOLOCKTARGETBYHIGHSPNOTFULL_OFFSET UNITYSDK_OFFSET(0xAA5CED0)
#define RPG_GAMECORE_TEAMDATACOMPONENT__SORTAUTOLOCKTARGETBYLOWHP_OFFSET UNITYSDK_OFFSET(0xAA5BE30)
#define RPG_GAMECORE_TEAMDATACOMPONENT__TRYGETPERCENT_OFFSET UNITYSDK_OFFSET(0xAA5C3F0)
#define RPG_GAMECORE_TEAMDATACOMPONENT___IFIXBASEPROXY__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0xAA5D030)
#define RPG_GAMECORE_TEAMDATACOMPONENT___SORTAUTOLOCKTARGETBYHIGHDPT_G___GETDPT_51_0_OFFSET UNITYSDK_OFFSET(0xAA5C950)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TeamDataComponent_TypeDefinitionIndex = 46507;

	class TeamDataComponent : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::RPG::GameCore::GameEntity* _LockTargetEnemy; // 0x18
		::RPG::GameCore::GameEntity* _LastLockEnemyNoRestrict_k__BackingField; // 0x20
		::RPG::GameCore::GameEntity* _LockTargetFriend; // 0x28
		::RPG::GameCore::GameEntity* _LockTargetTemporary; // 0x30
		::Class_1_B940C10EDDC383AC* _BoostPointModule_k__BackingField; // 0x38
		::Class_1_CC5F9F66B76D550F* _HpSharedModule_k__BackingField; // 0x40
		::RPG::GameCore::TeamType _Team_k__BackingField; // 0x48
		::RPG::GameCore::TeamType _CurrentLockTargetTeam; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMDATACOMPONENT__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitOwnerRef()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMDATACOMPONENT__ONINITOWNERREF_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMDATACOMPONENT_DISPOSE_OFFSET))(this);
		}

		::System::Void InitComponent(::RPG::GameCore::TeamType InitTeam)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMDATACOMPONENT_INITCOMPONENT_OFFSET))(this, InitTeam);
		}

		::System::Void AutoLockTarget(::RPG::GameCore::GameEntity* SkillCaster, ::RPG::GameCore::SkillConfig* SkillConfigData, ::RPG::GameCore::SkillData* pSkillData, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* TargetEntityList)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillConfig*, ::RPG::GameCore::SkillData*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMDATACOMPONENT_AUTOLOCKTARGET_OFFSET))(this, SkillCaster, SkillConfigData, pSkillData, TargetEntityList);
		}

		::System::Void CancelLockTo(::RPG::GameCore::GameEntity* target)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMDATACOMPONENT_CANCELLOCKTO_OFFSET))(this, target);
		}

		::RPG::GameCore::TeamType get_Team()
		{
			return ((::RPG::GameCore::TeamType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMDATACOMPONENT_GET_TEAM_OFFSET))(this);
		}

		::System::Void set_Team(::RPG::GameCore::TeamType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMDATACOMPONENT_SET_TEAM_OFFSET))(this, value);
		}

		::Class_1_B940C10EDDC383AC* get_BoostPointModule()
		{
			return ((::Class_1_B940C10EDDC383AC*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMDATACOMPONENT_GET_BOOSTPOINTMODULE_OFFSET))(this);
		}

		::System::Void set_BoostPointModule(::Class_1_B940C10EDDC383AC* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B940C10EDDC383AC*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMDATACOMPONENT_SET_BOOSTPOINTMODULE_OFFSET))(this, value);
		}

		::System::Int32 get_BoostPoint()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMDATACOMPONENT_GET_BOOSTPOINT_OFFSET))(this);
		}

		::Class_1_CC5F9F66B76D550F* get_HpSharedModule()
		{
			return ((::Class_1_CC5F9F66B76D550F*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMDATACOMPONENT_GET_HPSHAREDMODULE_OFFSET))(this);
		}

		::System::Void set_HpSharedModule(::Class_1_CC5F9F66B76D550F* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_CC5F9F66B76D550F*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMDATACOMPONENT_SET_HPSHAREDMODULE_OFFSET))(this, value);
		}

		::System::Int32 get_BoostPointMax()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMDATACOMPONENT_GET_BOOSTPOINTMAX_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_LockTargetTemporary()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMDATACOMPONENT_GET_LOCKTARGETTEMPORARY_OFFSET))(this);
		}

		::System::Void set_LockTargetTemporary(::RPG::GameCore::GameEntity* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMDATACOMPONENT_SET_LOCKTARGETTEMPORARY_OFFSET))(this, value);
		}

		::RPG::GameCore::GameEntity* get_LockTarget()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMDATACOMPONENT_GET_LOCKTARGET_OFFSET))(this);
		}

		::System::Void set_LockTarget(::RPG::GameCore::GameEntity* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMDATACOMPONENT_SET_LOCKTARGET_OFFSET))(this, value);
		}

		::System::Void set_LastLockEnemy(::RPG::GameCore::GameEntity* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMDATACOMPONENT_SET_LASTLOCKENEMY_OFFSET))(this, value);
		}

		::RPG::GameCore::GameEntity* get_LastLockEnemy()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMDATACOMPONENT_GET_LASTLOCKENEMY_OFFSET))(this);
		}

		::System::Void set_LastLockFriend(::RPG::GameCore::GameEntity* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMDATACOMPONENT_SET_LASTLOCKFRIEND_OFFSET))(this, value);
		}

		::RPG::GameCore::GameEntity* get_LastLockFriend()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMDATACOMPONENT_GET_LASTLOCKFRIEND_OFFSET))(this);
		}

		::System::Void set_LastLockEnemyNoRestrict(::RPG::GameCore::GameEntity* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMDATACOMPONENT_SET_LASTLOCKENEMYNORESTRICT_OFFSET))(this, value);
		}

		::RPG::GameCore::GameEntity* get_LastLockEnemyNoRestrict()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMDATACOMPONENT_GET_LASTLOCKENEMYNORESTRICT_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_VersusBarValue()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMDATACOMPONENT_GET_VERSUSBARVALUE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint _GetExpectedDamage(::RPG::GameCore::TurnBasedAbilityComponent* pTargetTBACmpt)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMDATACOMPONENT__GETEXPECTEDDAMAGE_OFFSET))(this, pTargetTBACmpt);
		}

		::RPG::GameCore::FixPoint _GetAITagValue(::RPG::GameCore::GameEntity* pTarget, ::RPG::GameCore::SkillAutoLockType eLockType)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillAutoLockType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMDATACOMPONENT__GETAITAGVALUE_OFFSET))(this, pTarget, eLockType);
		}

		::System::Boolean _IsValidForAutoLock(::RPG::GameCore::GameEntity* pTarget, ::RPG::GameCore::GameEntity* pSkillCaster, ::RPG::GameCore::SkillConfig* pSkillConfigData, ::RPG::GameCore::SkillData* pSkillData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillConfig*, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMDATACOMPONENT__ISVALIDFORAUTOLOCK_OFFSET))(this, pTarget, pSkillCaster, pSkillConfigData, pSkillData);
		}

		::RPG::GameCore::GameEntity* _GetAutoLockTargetBySort(::RPG::GameCore::GameEntityList* pTargetEntityList, ::System::Comparison_1<::RPG::GameCore::GameEntity*>* pComparer)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::GameEntityList*, ::System::Comparison_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMDATACOMPONENT__GETAUTOLOCKTARGETBYSORT_OFFSET))(this, pTargetEntityList, pComparer);
		}

		::System::Int32 _SortAutoLockTargetByDefault(::RPG::GameCore::GameEntity* a, ::RPG::GameCore::GameEntity* b)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMDATACOMPONENT__SORTAUTOLOCKTARGETBYDEFAULT_OFFSET))(this, a, b);
		}

		::System::Int32 _CompareByAutoLockTaunt(::RPG::GameCore::TurnBasedAbilityComponent* aCmpt, ::RPG::GameCore::TurnBasedAbilityComponent* bCmpt)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMDATACOMPONENT__COMPAREBYAUTOLOCKTAUNT_OFFSET))(this, aCmpt, bCmpt);
		}

		::System::Int32 _SortAutoLockTargetByAdjoinDefault(::RPG::GameCore::GameEntity* a, ::RPG::GameCore::GameEntity* b)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMDATACOMPONENT__SORTAUTOLOCKTARGETBYADJOINDEFAULT_OFFSET))(this, a, b);
		}

		::System::Boolean _TryGetPercent(::RPG::GameCore::FixPoint& fPercent, ::RPG::GameCore::TurnBasedAbilityComponent* pTargetEntity, ::RPG::GameCore::AbilityProperty eCurType, ::RPG::GameCore::AbilityProperty eMaxType)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::FixPoint&, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::AbilityProperty, ::RPG::GameCore::AbilityProperty))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMDATACOMPONENT__TRYGETPERCENT_OFFSET))(this, fPercent, pTargetEntity, eCurType, eMaxType);
		}

		::System::Int32 _SortAutoLockTargetByLowHp(::RPG::GameCore::GameEntity* a, ::RPG::GameCore::GameEntity* b)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMDATACOMPONENT__SORTAUTOLOCKTARGETBYLOWHP_OFFSET))(this, a, b);
		}

		::System::Int32 _SortAutoLockTargetByHighHp(::RPG::GameCore::GameEntity* a, ::RPG::GameCore::GameEntity* b)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMDATACOMPONENT__SORTAUTOLOCKTARGETBYHIGHHP_OFFSET))(this, a, b);
		}

		::System::Int32 _SortAutoLockTargetByHighED(::RPG::GameCore::GameEntity* a, ::RPG::GameCore::GameEntity* b)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMDATACOMPONENT__SORTAUTOLOCKTARGETBYHIGHED_OFFSET))(this, a, b);
		}

		::System::Int32 _SortAutoLockTargetByHighDPT(::RPG::GameCore::GameEntity* a, ::RPG::GameCore::GameEntity* b)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMDATACOMPONENT__SORTAUTOLOCKTARGETBYHIGHDPT_OFFSET))(this, a, b);
		}

		::System::Int32 _SortAutoLockTargetByHighSPNotFull(::RPG::GameCore::GameEntity* a, ::RPG::GameCore::GameEntity* b)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMDATACOMPONENT__SORTAUTOLOCKTARGETBYHIGHSPNOTFULL_OFFSET))(this, a, b);
		}

		::RPG::GameCore::GameEntity* _GetAutoLockTargetByHighWEDO(::RPG::GameCore::GameEntityList* pTargetEntityList, ::RPG::GameCore::SkillConfig* pSkillConfigData)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::GameEntityList*, ::RPG::GameCore::SkillConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMDATACOMPONENT__GETAUTOLOCKTARGETBYHIGHWEDO_OFFSET))(this, pTargetEntityList, pSkillConfigData);
		}

		::RPG::GameCore::GameEntity* _GetAutoLockTargetByHighWP(::RPG::GameCore::GameEntityList* pTargetEntityList, ::RPG::GameCore::SkillConfig* pSkillConfigData)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::GameEntityList*, ::RPG::GameCore::SkillConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMDATACOMPONENT__GETAUTOLOCKTARGETBYHIGHWP_OFFSET))(this, pTargetEntityList, pSkillConfigData);
		}

		::RPG::GameCore::GameEntity* _GetAutoLockTargetByJadeBP(::RPG::GameCore::GameEntity* pJade, ::RPG::GameCore::GameEntityList* pTargetEntityList)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntityList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMDATACOMPONENT__GETAUTOLOCKTARGETBYJADEBP_OFFSET))(this, pJade, pTargetEntityList);
		}

		::RPG::GameCore::GameEntity* _GetAutoLockTargetBySource(::RPG::GameCore::GameEntity* pSkillCaster, ::RPG::GameCore::GameEntityList* pTargetEntityList, ::RPG::GameCore::SkillData* pSkillData)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntityList*, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMDATACOMPONENT__GETAUTOLOCKTARGETBYSOURCE_OFFSET))(this, pSkillCaster, pTargetEntityList, pSkillData);
		}

		static ::RPG::GameCore::FixPoint __SortAutoLockTargetByHighDPT_g___GetDPT_51_0(::RPG::GameCore::TurnBasedAbilityComponent* pTargetTBACmpt)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMDATACOMPONENT___SORTAUTOLOCKTARGETBYHIGHDPT_G___GETDPT_51_0_OFFSET))(pTargetTBACmpt);
		}

		::System::Void __iFixBaseProxy__OnInitOwnerRef()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMDATACOMPONENT___IFIXBASEPROXY__ONINITOWNERREF_OFFSET))(this);
		}
	};
}
