#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/RPG/GameCore/CharacterDataComponent.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/MonsterViewPhaseType.h"
#include "unitysdk/Struct_2_52A902145F5BE513_4.h"
#include "unitysdk/System/Nullable_1.h"

class Class_0_16E4307DCC419505_401;
class Class_0_16E4307DCC419505_488;
class Class_1_2EC0EF10CE4B8713;
class Class_1_70697F531F566942_2;
class Class_1_8520D8479D0CC855;
class Class_1_B8FB38F0526A59B0;
class Class_2_23F9D0182A641C7D;
class Class_3_47866C0C90C73674;
namespace RPG::GameCore { class CharacterPhaseOverrideConfig; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class ICharacterRowData; }
namespace RPG::GameCore { class MonsterRow; }
namespace RPG::GameCore { class MonsterRowData; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }

#define RPG_GAMECORE_MONSTERDATACOMPONENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCE5D100)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_GETAISKILLSEQUENCE_OFFSET UNITYSDK_OFFSET(0xCE5D2C0)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_GETMONSTERID_OFFSET UNITYSDK_OFFSET(0xCE5CF10)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_GETMONSTERTEMPLATEID_OFFSET UNITYSDK_OFFSET(0xCE5CFA0)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_GETMONSTERUNIQUEID_OFFSET UNITYSDK_OFFSET(0xCE5D010)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_GETPHASEMAXHPRATIO_OFFSET UNITYSDK_OFFSET(0xCE5EDD0)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_GETPHASEMAXHP_OFFSET UNITYSDK_OFFSET(0xCE5E8E0)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_GET_CREATEPARAMS_OFFSET UNITYSDK_OFFSET(0xCE5F020)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_GET_CURRENTPHASEHPRECOVERED_OFFSET UNITYSDK_OFFSET(0xCE5E4D0)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_GET_CURRENTPHASE_OFFSET UNITYSDK_OFFSET(0xCE5E4C0)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_GET_CURRENTVIEWPHASE_OFFSET UNITYSDK_OFFSET(0xCE5F060)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_GET_EXTRALINEUP_OFFSET UNITYSDK_OFFSET(0xCE5F030)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_GET_HASLIFE_OFFSET UNITYSDK_OFFSET(0xCE5F000)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_GET_ISMAINMONSTER_OFFSET UNITYSDK_OFFSET(0xCE5F0F0)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_GET_ISMUTELASTKILL_OFFSET UNITYSDK_OFFSET(0xCE5E480)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_GET_MAXPHASENUMBER_OFFSET UNITYSDK_OFFSET(0xCE5E4A0)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_GET_MONSTERROWDATA_OFFSET UNITYSDK_OFFSET(0xCE5F010)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_GET_MULTIACTIONCOUNTER_OFFSET UNITYSDK_OFFSET(0xCE5F170)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_GET_OVERRIDERANKSCORE_OFFSET UNITYSDK_OFFSET(0xCE5F0D0)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_GET_PHASECOUNT_OFFSET UNITYSDK_OFFSET(0xCE5E880)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_GET_TOTALHP_OFFSET UNITYSDK_OFFSET(0xCE5EB20)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_GET_TOTALLEFTHPRATIO_OFFSET UNITYSDK_OFFSET(0xCE5E4E0)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_GET_TOTALLEFTHP_OFFSET UNITYSDK_OFFSET(0xCE5EC10)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_GET_VIEWPHASETYPE_OFFSET UNITYSDK_OFFSET(0xCE5F0C0)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_INITBATTLECHARACTERDATA_OFFSET UNITYSDK_OFFSET(0xCE5A920)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_MUTELASTKILL_OFFSET UNITYSDK_OFFSET(0xCE5E430)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_ONABILITYCHARACTERINITIALIZED_OFFSET UNITYSDK_OFFSET(0xCE5B740)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_SETCURRENTPHASE_OFFSET UNITYSDK_OFFSET(0xCE5C640)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_SETVIEWPHASE_OFFSET UNITYSDK_OFFSET(0xCE5ED70)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_SET_ISMUTELASTKILL_OFFSET UNITYSDK_OFFSET(0xCE5E490)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_SET_OVERRIDERANKSCORE_OFFSET UNITYSDK_OFFSET(0xCE5F0E0)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_SET_ROWDATA_OFFSET UNITYSDK_OFFSET(0xCE5F180)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_UPDATEENERGYBARSTATE_1_OFFSET UNITYSDK_OFFSET(0xCE5E3B0)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_UPDATEENERGYBARSTATE_OFFSET UNITYSDK_OFFSET(0xCE5DFF0)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_UPDATEPHASECONFIG_OFFSET UNITYSDK_OFFSET(0xCE5D8F0)
#define RPG_GAMECORE_MONSTERDATACOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0xCE5F210)
#define RPG_GAMECORE_MONSTERDATACOMPONENT__INITCOMMONDATAFROMMONSTERROWSADV_OFFSET UNITYSDK_OFFSET(0xCE5BDD0)
#define RPG_GAMECORE_MONSTERDATACOMPONENT__INITCOMMONDATAFROMMONSTERROWS_OFFSET UNITYSDK_OFFSET(0xCE5C890)
#define RPG_GAMECORE_MONSTERDATACOMPONENT__INITEVENT_OFFSET UNITYSDK_OFFSET(0xCE5CDE0)
#define RPG_GAMECORE_MONSTERDATACOMPONENT__ONHPCHANGE_OFFSET UNITYSDK_OFFSET(0xCE5D3F0)
#define RPG_GAMECORE_MONSTERDATACOMPONENT__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0xCE5A880)
#define RPG_GAMECORE_MONSTERDATACOMPONENT__ONPREABILITYADD_OFFSET UNITYSDK_OFFSET(0xCE5D350)
#define RPG_GAMECORE_MONSTERDATACOMPONENT__SETUPDEFAULTPHASECONFIG_OFFSET UNITYSDK_OFFSET(0xCE5B5A0)
#define RPG_GAMECORE_MONSTERDATACOMPONENT__UNINITEVENT_OFFSET UNITYSDK_OFFSET(0xCE5D190)
#define RPG_GAMECORE_MONSTERDATACOMPONENT__UPDATEPHASESTACKPROPERTY_OFFSET UNITYSDK_OFFSET(0xCE5D4D0)
#define RPG_GAMECORE_MONSTERDATACOMPONENT___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCE5F340)
#define RPG_GAMECORE_MONSTERDATACOMPONENT___IFIXBASEPROXY_INITBATTLECHARACTERDATA_OFFSET UNITYSDK_OFFSET(0xCE5F280)
#define RPG_GAMECORE_MONSTERDATACOMPONENT___IFIXBASEPROXY_ONABILITYCHARACTERINITIALIZED_OFFSET UNITYSDK_OFFSET(0xCE5F2E0)
#define RPG_GAMECORE_MONSTERDATACOMPONENT___IFIXBASEPROXY_SET_ROWDATA_OFFSET UNITYSDK_OFFSET(0xCE5F3B0)
#define RPG_GAMECORE_MONSTERDATACOMPONENT___IFIXBASEPROXY__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0xCE5F220)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonsterDataComponent_TypeDefinitionIndex = 53850;

	class MonsterDataComponent : public ::RPG::GameCore::CharacterDataComponent
	{
	public:
		::Class_3_47866C0C90C73674* _CustomDataRef; // 0x120
		::Class_2_23F9D0182A641C7D* _CreateParams; // 0x128
		::Class_1_70697F531F566942_2* EnergyBarState; // 0x130
		::Class_1_8520D8479D0CC855* _MultiActionCounter; // 0x138
		::RPG::GameCore::CharacterPhaseOverrideConfig* _DefaultPhaseConfig; // 0x140
		::RPG::GameCore::MonsterRowData* _MonsterRowData; // 0x148
		::System::UInt32 _CurrentPhase; // 0x150
		::RPG::GameCore::MonsterViewPhaseType _ViewPhaseType; // 0x154
		::RPG::GameCore::FixPoint _DefaultMaxHP; // 0x158
		::System::Int32 _PhaseMaxStanceStackIndex; // 0x160
		::System::Boolean _IsMuteLastKill_k__BackingField; // 0x164
		::System::Boolean _CurrentPhaseHPRecovered; // 0x165
		::System::Int32 _PhaseMaxHPStackIndex; // 0x168
		::System::UInt32 _OverrideViewPhase; // 0x16C
		::RPG::GameCore::FixPoint _DefaultMaxStance; // 0x170
		::System::Int32 MonsterWave; // 0x178
		::System::Int32 MonsterIndexInWave; // 0x17C
		::System::Nullable_1<::RPG::GameCore::FixPoint> _OverrideRankScore_k__BackingField; // 0x180

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitOwnerRef()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT__ONINITOWNERREF_OFFSET))(this);
		}

		::System::Void InitBattleCharacterData(::Class_1_B8FB38F0526A59B0* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B8FB38F0526A59B0*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT_INITBATTLECHARACTERDATA_OFFSET))(this, a1);
		}

		::System::Void OnAbilityCharacterInitialized(::RPG::GameCore::TurnBasedAbilityComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT_ONABILITYCHARACTERINITIALIZED_OFFSET))(this, a1);
		}

		::System::Void _InitCommonDataFromMonsterRowsAdv(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::Il2CppArray<::RPG::GameCore::MonsterRow*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*, ::Il2CppArray<::RPG::GameCore::MonsterRow*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT__INITCOMMONDATAFROMMONSTERROWSADV_OFFSET))(this, a1, a2);
		}

		::System::Void _InitCommonDataFromMonsterRows(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::Il2CppArray<::RPG::GameCore::MonsterRow*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*, ::Il2CppArray<::RPG::GameCore::MonsterRow*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT__INITCOMMONDATAFROMMONSTERROWS_OFFSET))(this, a1, a2);
		}

		::System::UInt32 GetMonsterID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT_GETMONSTERID_OFFSET))(this);
		}

		::System::UInt32 GetMonsterTemplateID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT_GETMONSTERTEMPLATEID_OFFSET))(this);
		}

		::System::UInt32 GetMonsterUniqueID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT_GETMONSTERUNIQUEID_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT_DISPOSE_OFFSET))(this);
		}

		::Il2CppArray<::Class_1_2EC0EF10CE4B8713*>* GetAISkillSequence()
		{
			return ((::Il2CppArray<::Class_1_2EC0EF10CE4B8713*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT_GETAISKILLSEQUENCE_OFFSET))(this);
		}

		::System::Void _InitEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT__INITEVENT_OFFSET))(this);
		}

		::System::Void _UnInitEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT__UNINITEVENT_OFFSET))(this);
		}

		::System::Void _OnPreAbilityAdd(::Class_0_16E4307DCC419505_401* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT__ONPREABILITYADD_OFFSET))(this, a1);
		}

		::System::Void _OnHPChange(::Class_0_16E4307DCC419505_401* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT__ONHPCHANGE_OFFSET))(this, a1);
		}

		::System::Void _UpdatePhaseStackProperty(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::RPG::GameCore::AbilityProperty a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::DynamicFloat* a4, ::System::Int32& a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::AbilityProperty, ::RPG::GameCore::FixPoint, ::RPG::GameCore::DynamicFloat*, ::System::Int32&, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT__UPDATEPHASESTACKPROPERTY_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void UpdatePhaseConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT_UPDATEPHASECONFIG_OFFSET))(this);
		}

		::System::Void _SetupDefaultPhaseConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT__SETUPDEFAULTPHASECONFIG_OFFSET))(this);
		}

		::System::Void UpdateEnergyBarState(::Struct_2_52A902145F5BE513_4 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_52A902145F5BE513_4))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT_UPDATEENERGYBARSTATE_OFFSET))(this, a1);
		}

		::System::Void UpdateEnergyBarState_1(::Class_1_70697F531F566942_2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_70697F531F566942_2*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT_UPDATEENERGYBARSTATE_1_OFFSET))(this, a1);
		}

		::System::Void MuteLastKill()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT_MUTELASTKILL_OFFSET))(this);
		}

		::System::Boolean get_IsMuteLastKill()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT_GET_ISMUTELASTKILL_OFFSET))(this);
		}

		::System::Void set_IsMuteLastKill(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT_SET_ISMUTELASTKILL_OFFSET))(this, a1);
		}

		::System::UInt32 get_MaxPhaseNumber()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT_GET_MAXPHASENUMBER_OFFSET))(this);
		}

		::System::UInt32 get_CurrentPhase()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT_GET_CURRENTPHASE_OFFSET))(this);
		}

		::System::Boolean get_CurrentPhaseHPRecovered()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT_GET_CURRENTPHASEHPRECOVERED_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_TotalLeftHPRatio()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT_GET_TOTALLEFTHPRATIO_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_TotalHP()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT_GET_TOTALHP_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_TotalLeftHP()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT_GET_TOTALLEFTHP_OFFSET))(this);
		}

		::System::Void SetCurrentPhase(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT_SETCURRENTPHASE_OFFSET))(this, a1, a2);
		}

		::System::Void SetViewPhase(::System::UInt32 a1, ::RPG::GameCore::MonsterViewPhaseType a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::MonsterViewPhaseType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT_SETVIEWPHASE_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::FixPoint GetPhaseMaxHP(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT_GETPHASEMAXHP_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint GetPhaseMaxHPRatio(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT_GETPHASEMAXHPRATIO_OFFSET))(this, a1);
		}

		::System::Boolean get_HasLife()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT_GET_HASLIFE_OFFSET))(this);
		}

		::RPG::GameCore::MonsterRowData* get_MonsterRowData()
		{
			return ((::RPG::GameCore::MonsterRowData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT_GET_MONSTERROWDATA_OFFSET))(this);
		}

		::Class_2_23F9D0182A641C7D* get_CreateParams()
		{
			return ((::Class_2_23F9D0182A641C7D*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT_GET_CREATEPARAMS_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_488* get_ExtraLineup()
		{
			return ((::Class_0_16E4307DCC419505_488*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT_GET_EXTRALINEUP_OFFSET))(this);
		}

		::System::Int32 get_PhaseCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT_GET_PHASECOUNT_OFFSET))(this);
		}

		::System::UInt32 get_CurrentViewPhase()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT_GET_CURRENTVIEWPHASE_OFFSET))(this);
		}

		::RPG::GameCore::MonsterViewPhaseType get_ViewPhaseType()
		{
			return ((::RPG::GameCore::MonsterViewPhaseType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT_GET_VIEWPHASETYPE_OFFSET))(this);
		}

		::System::Nullable_1<::RPG::GameCore::FixPoint> get_OverrideRankScore()
		{
			return ((::System::Nullable_1<::RPG::GameCore::FixPoint>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT_GET_OVERRIDERANKSCORE_OFFSET))(this);
		}

		::System::Void set_OverrideRankScore(::System::Nullable_1<::RPG::GameCore::FixPoint> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::RPG::GameCore::FixPoint>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT_SET_OVERRIDERANKSCORE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsMainMonster()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT_GET_ISMAINMONSTER_OFFSET))(this);
		}

		::Class_1_8520D8479D0CC855* get_MultiActionCounter()
		{
			return ((::Class_1_8520D8479D0CC855*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT_GET_MULTIACTIONCOUNTER_OFFSET))(this);
		}

		::System::Void set_RowData(::RPG::GameCore::ICharacterRowData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ICharacterRowData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT_SET_ROWDATA_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy__OnInitOwnerRef()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT___IFIXBASEPROXY__ONINITOWNERREF_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_InitBattleCharacterData(::Class_1_B8FB38F0526A59B0* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B8FB38F0526A59B0*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT___IFIXBASEPROXY_INITBATTLECHARACTERDATA_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_OnAbilityCharacterInitialized(::RPG::GameCore::TurnBasedAbilityComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT___IFIXBASEPROXY_ONABILITYCHARACTERINITIALIZED_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_set_RowData(::RPG::GameCore::ICharacterRowData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ICharacterRowData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT___IFIXBASEPROXY_SET_ROWDATA_OFFSET))(this, a1);
		}
	};
}
