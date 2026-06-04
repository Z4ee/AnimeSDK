#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/SkillAutoLockType.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/Struct_2_EF7C37AF69DC7CE6.h"

class Class_1_0F24EAFEC305197B;
class Class_1_B940C10EDDC383AC;
class Class_1_E189E4C63AB59BB3;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class SkillConfig; }
namespace RPG::GameCore { class SkillData; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class String; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_TEAMDATACOMPONENT_ADDTEAMBLOCKINSTANCE_OFFSET UNITYSDK_OFFSET(0xCF06E40)
#define RPG_GAMECORE_TEAMDATACOMPONENT_AUTOLOCKTARGET_OFFSET UNITYSDK_OFFSET(0xCF04600)
#define RPG_GAMECORE_TEAMDATACOMPONENT_CALCULATEDEFENDERTEAMBLOCKDAMAGE_OFFSET UNITYSDK_OFFSET(0xCF07A50)
#define RPG_GAMECORE_TEAMDATACOMPONENT_CANCELLOCKTO_OFFSET UNITYSDK_OFFSET(0xCF06CA0)
#define RPG_GAMECORE_TEAMDATACOMPONENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCF04480)
#define RPG_GAMECORE_TEAMDATACOMPONENT_FINDTEAMBLOCKINSTANCES_OFFSET UNITYSDK_OFFSET(0xCF07240)
#define RPG_GAMECORE_TEAMDATACOMPONENT_FINDTEAMBLOCKINSTANCE_OFFSET UNITYSDK_OFFSET(0xCF07120)
#define RPG_GAMECORE_TEAMDATACOMPONENT_GETDEFENDERTEAMBLOCKDAMAGEDATALIST_OFFSET UNITYSDK_OFFSET(0xCF077D0)
#define RPG_GAMECORE_TEAMDATACOMPONENT_GET_BOOSTPOINTMAX_OFFSET UNITYSDK_OFFSET(0xCF08570)
#define RPG_GAMECORE_TEAMDATACOMPONENT_GET_BOOSTPOINTMODULE_OFFSET UNITYSDK_OFFSET(0xCF08510)
#define RPG_GAMECORE_TEAMDATACOMPONENT_GET_BOOSTPOINT_OFFSET UNITYSDK_OFFSET(0xCEF4960)
#define RPG_GAMECORE_TEAMDATACOMPONENT_GET_HPSHAREDMODULE_OFFSET UNITYSDK_OFFSET(0xCF08550)
#define RPG_GAMECORE_TEAMDATACOMPONENT_GET_LASTLOCKENEMYNORESTRICT_OFFSET UNITYSDK_OFFSET(0xCF08700)
#define RPG_GAMECORE_TEAMDATACOMPONENT_GET_LASTLOCKENEMY_OFFSET UNITYSDK_OFFSET(0xCF06BB0)
#define RPG_GAMECORE_TEAMDATACOMPONENT_GET_LASTLOCKFRIEND_OFFSET UNITYSDK_OFFSET(0xCF06DE0)
#define RPG_GAMECORE_TEAMDATACOMPONENT_GET_LOCKTARGETTEMPORARY_OFFSET UNITYSDK_OFFSET(0xCF085C0)
#define RPG_GAMECORE_TEAMDATACOMPONENT_GET_LOCKTARGET_OFFSET UNITYSDK_OFFSET(0xCF08630)
#define RPG_GAMECORE_TEAMDATACOMPONENT_GET_TEAMBLOCKINSTANCES_OFFSET UNITYSDK_OFFSET(0xCF08530)
#define RPG_GAMECORE_TEAMDATACOMPONENT_GET_TEAM_OFFSET UNITYSDK_OFFSET(0xCF084F0)
#define RPG_GAMECORE_TEAMDATACOMPONENT_GET_VERSUSBARVALUE_OFFSET UNITYSDK_OFFSET(0xCF08710)
#define RPG_GAMECORE_TEAMDATACOMPONENT_INITCOMPONENT_OFFSET UNITYSDK_OFFSET(0xCF04510)
#define RPG_GAMECORE_TEAMDATACOMPONENT_REMOVETEAMBLOCKINSTANCE_OFFSET UNITYSDK_OFFSET(0xCF07030)
#define RPG_GAMECORE_TEAMDATACOMPONENT_RESOLVEINVALIDTEAMBLOCK_OFFSET UNITYSDK_OFFSET(0xCF07F20)
#define RPG_GAMECORE_TEAMDATACOMPONENT_SET_BOOSTPOINTMODULE_OFFSET UNITYSDK_OFFSET(0xCF08520)
#define RPG_GAMECORE_TEAMDATACOMPONENT_SET_HPSHAREDMODULE_OFFSET UNITYSDK_OFFSET(0xCF08560)
#define RPG_GAMECORE_TEAMDATACOMPONENT_SET_LASTLOCKENEMYNORESTRICT_OFFSET UNITYSDK_OFFSET(0xCF086F0)
#define RPG_GAMECORE_TEAMDATACOMPONENT_SET_LASTLOCKENEMY_OFFSET UNITYSDK_OFFSET(0xCF086D0)
#define RPG_GAMECORE_TEAMDATACOMPONENT_SET_LASTLOCKFRIEND_OFFSET UNITYSDK_OFFSET(0xCF086E0)
#define RPG_GAMECORE_TEAMDATACOMPONENT_SET_LOCKTARGETTEMPORARY_OFFSET UNITYSDK_OFFSET(0xCF085D0)
#define RPG_GAMECORE_TEAMDATACOMPONENT_SET_LOCKTARGET_OFFSET UNITYSDK_OFFSET(0xCF04D10)
#define RPG_GAMECORE_TEAMDATACOMPONENT_SET_TEAMBLOCKINSTANCES_OFFSET UNITYSDK_OFFSET(0xCF08540)
#define RPG_GAMECORE_TEAMDATACOMPONENT_SET_TEAM_OFFSET UNITYSDK_OFFSET(0xCF08500)
#define RPG_GAMECORE_TEAMDATACOMPONENT__COMPAREBYAUTOLOCKTAUNT_OFFSET UNITYSDK_OFFSET(0xCF08DE0)
#define RPG_GAMECORE_TEAMDATACOMPONENT__COMPARETEAMBLOCKDAMAGEDATARULE_OFFSET UNITYSDK_OFFSET(0xCF08210)
#define RPG_GAMECORE_TEAMDATACOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0xCF04400)
#define RPG_GAMECORE_TEAMDATACOMPONENT__GETAITAGVALUE_OFFSET UNITYSDK_OFFSET(0xCF088B0)
#define RPG_GAMECORE_TEAMDATACOMPONENT__GETAUTOLOCKTARGETBYHIGHWEDO_OFFSET UNITYSDK_OFFSET(0xCF05080)
#define RPG_GAMECORE_TEAMDATACOMPONENT__GETAUTOLOCKTARGETBYHIGHWP_OFFSET UNITYSDK_OFFSET(0xCF05C20)
#define RPG_GAMECORE_TEAMDATACOMPONENT__GETAUTOLOCKTARGETBYJADEBP_OFFSET UNITYSDK_OFFSET(0xCF061A0)
#define RPG_GAMECORE_TEAMDATACOMPONENT__GETAUTOLOCKTARGETBYSORT_OFFSET UNITYSDK_OFFSET(0xCF04FB0)
#define RPG_GAMECORE_TEAMDATACOMPONENT__GETAUTOLOCKTARGETBYSOURCE_OFFSET UNITYSDK_OFFSET(0xCF06730)
#define RPG_GAMECORE_TEAMDATACOMPONENT__GETEXPECTEDDAMAGE_OFFSET UNITYSDK_OFFSET(0xCF087B0)
#define RPG_GAMECORE_TEAMDATACOMPONENT__ISVALIDFORAUTOLOCK_OFFSET UNITYSDK_OFFSET(0xCF04E20)
#define RPG_GAMECORE_TEAMDATACOMPONENT__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0xCF04410)
#define RPG_GAMECORE_TEAMDATACOMPONENT__SORTAUTOLOCKTARGETBYADJOINDEFAULT_OFFSET UNITYSDK_OFFSET(0xCF091B0)
#define RPG_GAMECORE_TEAMDATACOMPONENT__SORTAUTOLOCKTARGETBYDEFAULT_OFFSET UNITYSDK_OFFSET(0xCF08A20)
#define RPG_GAMECORE_TEAMDATACOMPONENT__SORTAUTOLOCKTARGETBYHIGHDPT_OFFSET UNITYSDK_OFFSET(0xCF09850)
#define RPG_GAMECORE_TEAMDATACOMPONENT__SORTAUTOLOCKTARGETBYHIGHED_OFFSET UNITYSDK_OFFSET(0xCF09710)
#define RPG_GAMECORE_TEAMDATACOMPONENT__SORTAUTOLOCKTARGETBYHIGHHP_OFFSET UNITYSDK_OFFSET(0xCF09570)
#define RPG_GAMECORE_TEAMDATACOMPONENT__SORTAUTOLOCKTARGETBYHIGHSPNOTFULL_OFFSET UNITYSDK_OFFSET(0xCF09A70)
#define RPG_GAMECORE_TEAMDATACOMPONENT__SORTAUTOLOCKTARGETBYLOWHP_OFFSET UNITYSDK_OFFSET(0xCF08E90)
#define RPG_GAMECORE_TEAMDATACOMPONENT__TRYGETPERCENT_OFFSET UNITYSDK_OFFSET(0xCF09430)
#define RPG_GAMECORE_TEAMDATACOMPONENT___IFIXBASEPROXY__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0xCF09DB0)
#define RPG_GAMECORE_TEAMDATACOMPONENT___SORTAUTOLOCKTARGETBYHIGHDPT_G___GETDPT_63_0_OFFSET UNITYSDK_OFFSET(0xCF09990)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TeamDataComponent_TypeDefinitionIndex = 53907;

	class TeamDataComponent : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::RPG::GameCore::GameEntity* _LockTargetFriend; // 0x18
		::Class_1_E189E4C63AB59BB3* _HpSharedModule_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::Class_1_0F24EAFEC305197B*>* _TeamBlockInstances_k__BackingField; // 0x28
		::Class_1_B940C10EDDC383AC* _BoostPointModule_k__BackingField; // 0x30
		::RPG::GameCore::GameEntity* _LastLockEnemyNoRestrict_k__BackingField; // 0x38
		::RPG::GameCore::GameEntity* _LockTargetTemporary; // 0x40
		::RPG::GameCore::GameEntity* _LockTargetEnemy; // 0x48
		::RPG::GameCore::TeamType _Team_k__BackingField; // 0x50
		::RPG::GameCore::TeamType _CurrentLockTargetTeam; // 0x54

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

		::System::Void InitComponent(::RPG::GameCore::TeamType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMDATACOMPONENT_INITCOMPONENT_OFFSET))(this, a1);
		}

		::System::Void AutoLockTarget(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::SkillConfig* a2, ::RPG::GameCore::SkillData* a3, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillConfig*, ::RPG::GameCore::SkillData*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMDATACOMPONENT_AUTOLOCKTARGET_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void CancelLockTo(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMDATACOMPONENT_CANCELLOCKTO_OFFSET))(this, a1);
		}

		::System::Void AddTeamBlockInstance(::Class_1_0F24EAFEC305197B* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0F24EAFEC305197B*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMDATACOMPONENT_ADDTEAMBLOCKINSTANCE_OFFSET))(this, a1);
		}

		::System::Void RemoveTeamBlockInstance(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMDATACOMPONENT_REMOVETEAMBLOCKINSTANCE_OFFSET))(this, a1);
		}

		::Class_1_0F24EAFEC305197B* FindTeamBlockInstance(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::Class_1_0F24EAFEC305197B*(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMDATACOMPONENT_FINDTEAMBLOCKINSTANCE_OFFSET))(this, a1);
		}

		::RPG::PoolList_1<::Class_1_0F24EAFEC305197B*>* FindTeamBlockInstances(::RPG::GameCore::GameEntity* a1, ::Il2CppArray<::System::String*>* a2)
		{
			return ((::RPG::PoolList_1<::Class_1_0F24EAFEC305197B*>*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMDATACOMPONENT_FINDTEAMBLOCKINSTANCES_OFFSET))(this, a1, a2);
		}

		::RPG::PoolList_1<::Struct_2_EF7C37AF69DC7CE6>* GetDefenderTeamBlockDamageDataList(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::PoolList_1<::Struct_2_EF7C37AF69DC7CE6>*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMDATACOMPONENT_GETDEFENDERTEAMBLOCKDAMAGEDATALIST_OFFSET))(this, a1);
		}

		::System::Void CalculateDefenderTeamBlockDamage(::System::Collections::Generic::List_1<::Struct_2_EF7C37AF69DC7CE6>* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::FixPoint& a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Struct_2_EF7C37AF69DC7CE6>*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMDATACOMPONENT_CALCULATEDEFENDERTEAMBLOCKDAMAGE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ResolveInvalidTeamBlock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMDATACOMPONENT_RESOLVEINVALIDTEAMBLOCK_OFFSET))(this);
		}

		::System::Int32 _CompareTeamBlockDamageDataRule(::Struct_2_EF7C37AF69DC7CE6 a1, ::Struct_2_EF7C37AF69DC7CE6 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::Struct_2_EF7C37AF69DC7CE6, ::Struct_2_EF7C37AF69DC7CE6))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMDATACOMPONENT__COMPARETEAMBLOCKDAMAGEDATARULE_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::TeamType get_Team()
		{
			return ((::RPG::GameCore::TeamType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMDATACOMPONENT_GET_TEAM_OFFSET))(this);
		}

		::System::Void set_Team(::RPG::GameCore::TeamType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMDATACOMPONENT_SET_TEAM_OFFSET))(this, a1);
		}

		::Class_1_B940C10EDDC383AC* get_BoostPointModule()
		{
			return ((::Class_1_B940C10EDDC383AC*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMDATACOMPONENT_GET_BOOSTPOINTMODULE_OFFSET))(this);
		}

		::System::Void set_BoostPointModule(::Class_1_B940C10EDDC383AC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B940C10EDDC383AC*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMDATACOMPONENT_SET_BOOSTPOINTMODULE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::Class_1_0F24EAFEC305197B*>* get_TeamBlockInstances()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_0F24EAFEC305197B*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMDATACOMPONENT_GET_TEAMBLOCKINSTANCES_OFFSET))(this);
		}

		::System::Void set_TeamBlockInstances(::System::Collections::Generic::List_1<::Class_1_0F24EAFEC305197B*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_0F24EAFEC305197B*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMDATACOMPONENT_SET_TEAMBLOCKINSTANCES_OFFSET))(this, a1);
		}

		::System::Int32 get_BoostPoint()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMDATACOMPONENT_GET_BOOSTPOINT_OFFSET))(this);
		}

		::Class_1_E189E4C63AB59BB3* get_HpSharedModule()
		{
			return ((::Class_1_E189E4C63AB59BB3*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMDATACOMPONENT_GET_HPSHAREDMODULE_OFFSET))(this);
		}

		::System::Void set_HpSharedModule(::Class_1_E189E4C63AB59BB3* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E189E4C63AB59BB3*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMDATACOMPONENT_SET_HPSHAREDMODULE_OFFSET))(this, a1);
		}

		::System::Int32 get_BoostPointMax()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMDATACOMPONENT_GET_BOOSTPOINTMAX_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_LockTargetTemporary()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMDATACOMPONENT_GET_LOCKTARGETTEMPORARY_OFFSET))(this);
		}

		::System::Void set_LockTargetTemporary(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMDATACOMPONENT_SET_LOCKTARGETTEMPORARY_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* get_LockTarget()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMDATACOMPONENT_GET_LOCKTARGET_OFFSET))(this);
		}

		::System::Void set_LockTarget(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMDATACOMPONENT_SET_LOCKTARGET_OFFSET))(this, a1);
		}

		::System::Void set_LastLockEnemy(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMDATACOMPONENT_SET_LASTLOCKENEMY_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* get_LastLockEnemy()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMDATACOMPONENT_GET_LASTLOCKENEMY_OFFSET))(this);
		}

		::System::Void set_LastLockFriend(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMDATACOMPONENT_SET_LASTLOCKFRIEND_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* get_LastLockFriend()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMDATACOMPONENT_GET_LASTLOCKFRIEND_OFFSET))(this);
		}

		::System::Void set_LastLockEnemyNoRestrict(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMDATACOMPONENT_SET_LASTLOCKENEMYNORESTRICT_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* get_LastLockEnemyNoRestrict()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMDATACOMPONENT_GET_LASTLOCKENEMYNORESTRICT_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_VersusBarValue()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMDATACOMPONENT_GET_VERSUSBARVALUE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint _GetExpectedDamage(::RPG::GameCore::TurnBasedAbilityComponent* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMDATACOMPONENT__GETEXPECTEDDAMAGE_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint _GetAITagValue(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::SkillAutoLockType a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillAutoLockType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMDATACOMPONENT__GETAITAGVALUE_OFFSET))(this, a1, a2);
		}

		::System::Boolean _IsValidForAutoLock(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::SkillData* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMDATACOMPONENT__ISVALIDFORAUTOLOCK_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::GameEntity* _GetAutoLockTargetBySort(::RPG::GameCore::GameEntityList* a1, ::System::Comparison_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::GameEntityList*, ::System::Comparison_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMDATACOMPONENT__GETAUTOLOCKTARGETBYSORT_OFFSET))(this, a1, a2);
		}

		::System::Int32 _SortAutoLockTargetByDefault(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMDATACOMPONENT__SORTAUTOLOCKTARGETBYDEFAULT_OFFSET))(this, a1, a2);
		}

		::System::Int32 _CompareByAutoLockTaunt(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::RPG::GameCore::TurnBasedAbilityComponent* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMDATACOMPONENT__COMPAREBYAUTOLOCKTAUNT_OFFSET))(this, a1, a2);
		}

		::System::Int32 _SortAutoLockTargetByAdjoinDefault(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMDATACOMPONENT__SORTAUTOLOCKTARGETBYADJOINDEFAULT_OFFSET))(this, a1, a2);
		}

		::System::Boolean _TryGetPercent(::RPG::GameCore::FixPoint& a1, ::RPG::GameCore::TurnBasedAbilityComponent* a2, ::RPG::GameCore::AbilityProperty a3, ::RPG::GameCore::AbilityProperty a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::FixPoint&, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::AbilityProperty, ::RPG::GameCore::AbilityProperty))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMDATACOMPONENT__TRYGETPERCENT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 _SortAutoLockTargetByLowHp(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMDATACOMPONENT__SORTAUTOLOCKTARGETBYLOWHP_OFFSET))(this, a1, a2);
		}

		::System::Int32 _SortAutoLockTargetByHighHp(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMDATACOMPONENT__SORTAUTOLOCKTARGETBYHIGHHP_OFFSET))(this, a1, a2);
		}

		::System::Int32 _SortAutoLockTargetByHighED(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMDATACOMPONENT__SORTAUTOLOCKTARGETBYHIGHED_OFFSET))(this, a1, a2);
		}

		::System::Int32 _SortAutoLockTargetByHighDPT(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMDATACOMPONENT__SORTAUTOLOCKTARGETBYHIGHDPT_OFFSET))(this, a1, a2);
		}

		::System::Int32 _SortAutoLockTargetByHighSPNotFull(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMDATACOMPONENT__SORTAUTOLOCKTARGETBYHIGHSPNOTFULL_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::GameEntity* _GetAutoLockTargetByHighWEDO(::RPG::GameCore::GameEntityList* a1, ::RPG::GameCore::SkillData* a2)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::GameEntityList*, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMDATACOMPONENT__GETAUTOLOCKTARGETBYHIGHWEDO_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::GameEntity* _GetAutoLockTargetByHighWP(::RPG::GameCore::GameEntityList* a1, ::RPG::GameCore::SkillData* a2)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::GameEntityList*, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMDATACOMPONENT__GETAUTOLOCKTARGETBYHIGHWP_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::GameEntity* _GetAutoLockTargetByJadeBP(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntityList* a2)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntityList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMDATACOMPONENT__GETAUTOLOCKTARGETBYJADEBP_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::GameEntity* _GetAutoLockTargetBySource(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntityList* a2, ::RPG::GameCore::SkillData* a3)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntityList*, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMDATACOMPONENT__GETAUTOLOCKTARGETBYSOURCE_OFFSET))(this, a1, a2, a3);
		}

		static ::RPG::GameCore::FixPoint __SortAutoLockTargetByHighDPT_g___GetDPT_63_0(::RPG::GameCore::TurnBasedAbilityComponent* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMDATACOMPONENT___SORTAUTOLOCKTARGETBYHIGHDPT_G___GETDPT_63_0_OFFSET))(a1);
		}

		::System::Void __iFixBaseProxy__OnInitOwnerRef()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMDATACOMPONENT___IFIXBASEPROXY__ONINITOWNERREF_OFFSET))(this);
		}
	};
}
