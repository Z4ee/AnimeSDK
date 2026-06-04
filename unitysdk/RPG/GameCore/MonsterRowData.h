#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_2D4CFA76DB950A9A.h"
#include "unitysdk/Struct_2_88A74A9E9AE5BA51.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_488;
class Class_1_6F2CC3A2F2CEF554;
class Class_1_D31FB8D7186DB2BC;
class Class_2_23F9D0182A641C7D;
namespace RPG::GameCore { class CharacterConfig; }
namespace RPG::GameCore { class ElementResistanceConfig; }
namespace RPG::GameCore { class EliteGroupRow; }
namespace RPG::GameCore { class GridFightEnemyDifficultyLvConfigRow; }
namespace RPG::GameCore { class HardLevelGroupRow; }
namespace RPG::GameCore { class ICharacterSkillRowData; }
namespace RPG::GameCore { class MonsterRow; }
namespace RPG::GameCore { class MonsterSkillRow; }
namespace RPG::GameCore { class MonsterTemplateRow; }
namespace RPG::GameCore { class StageRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_MONSTERROWDATA_GETSKILLROWDATABYID_OFFSET UNITYSDK_OFFSET(0xCE62160)
#define RPG_GAMECORE_MONSTERROWDATA_GETSKILLROWDATABYNAME_OFFSET UNITYSDK_OFFSET(0xCE620E0)
#define RPG_GAMECORE_MONSTERROWDATA_GETSKILLROWDATA_OFFSET UNITYSDK_OFFSET(0xCE62080)
#define RPG_GAMECORE_MONSTERROWDATA_GET_ACTIONICONPATH_OFFSET UNITYSDK_OFFSET(0xCE61C70)
#define RPG_GAMECORE_MONSTERROWDATA_GET_AIPATH_OFFSET UNITYSDK_OFFSET(0xCE60EE0)
#define RPG_GAMECORE_MONSTERROWDATA_GET_ALLPHASESKILLS_OFFSET UNITYSDK_OFFSET(0xCE60FA0)
#define RPG_GAMECORE_MONSTERROWDATA_GET_ATTACK_OFFSET UNITYSDK_OFFSET(0xCE612C0)
#define RPG_GAMECORE_MONSTERROWDATA_GET_AVATARSIDEICONPATH_OFFSET UNITYSDK_OFFSET(0xCE61D60)
#define RPG_GAMECORE_MONSTERROWDATA_GET_BASEAGGRO_OFFSET UNITYSDK_OFFSET(0xCE618D0)
#define RPG_GAMECORE_MONSTERROWDATA_GET_BASEMONSTERROW_OFFSET UNITYSDK_OFFSET(0xCE60D90)
#define RPG_GAMECORE_MONSTERROWDATA_GET_CHARACTERNAME_OFFSET UNITYSDK_OFFSET(0xCE619E0)
#define RPG_GAMECORE_MONSTERROWDATA_GET_CONFIGID_OFFSET UNITYSDK_OFFSET(0xCE5CF80)
#define RPG_GAMECORE_MONSTERROWDATA_GET_CRITICALCHANCE_OFFSET UNITYSDK_OFFSET(0xCE61840)
#define RPG_GAMECORE_MONSTERROWDATA_GET_CRITICALDAMAGE_OFFSET UNITYSDK_OFFSET(0xCE61870)
#define RPG_GAMECORE_MONSTERROWDATA_GET_DAMAGETYPERESISTANCE_OFFSET UNITYSDK_OFFSET(0xCE61F40)
#define RPG_GAMECORE_MONSTERROWDATA_GET_DAMAGETYPE_OFFSET UNITYSDK_OFFSET(0xCE61F10)
#define RPG_GAMECORE_MONSTERROWDATA_GET_DEFENCE_OFFSET UNITYSDK_OFFSET(0xCE613F0)
#define RPG_GAMECORE_MONSTERROWDATA_GET_ELITEGROUP2ROW_OFFSET UNITYSDK_OFFSET(0xCE60DC0)
#define RPG_GAMECORE_MONSTERROWDATA_GET_ELITEGROUPROW_OFFSET UNITYSDK_OFFSET(0xCE60DB0)
#define RPG_GAMECORE_MONSTERROWDATA_GET_EXTRAHPRATIO_OFFSET UNITYSDK_OFFSET(0xCE60FD0)
#define RPG_GAMECORE_MONSTERROWDATA_GET_EXTRALINEUP_OFFSET UNITYSDK_OFFSET(0xCE60DD0)
#define RPG_GAMECORE_MONSTERROWDATA_GET_HARDLEVELROW_OFFSET UNITYSDK_OFFSET(0xCE60DA0)
#define RPG_GAMECORE_MONSTERROWDATA_GET_HAVEACTIONDELAY_OFFSET UNITYSDK_OFFSET(0xCE61FA0)
#define RPG_GAMECORE_MONSTERROWDATA_GET_HEADICONPATH_OFFSET UNITYSDK_OFFSET(0xCE61BB0)
#define RPG_GAMECORE_MONSTERROWDATA_GET_INITACTIONDELAYRATIO_OFFSET UNITYSDK_OFFSET(0xCE619A0)
#define RPG_GAMECORE_MONSTERROWDATA_GET_INITHP_OFFSET UNITYSDK_OFFSET(0xCE61240)
#define RPG_GAMECORE_MONSTERROWDATA_GET_INITSTANCE_OFFSET UNITYSDK_OFFSET(0xCE617E0)
#define RPG_GAMECORE_MONSTERROWDATA_GET_INTRODUCTION_OFFSET UNITYSDK_OFFSET(0xCE61A80)
#define RPG_GAMECORE_MONSTERROWDATA_GET_ISAETHERDIVIDE_OFFSET UNITYSDK_OFFSET(0xCE610B0)
#define RPG_GAMECORE_MONSTERROWDATA_GET_JSONPATH_OFFSET UNITYSDK_OFFSET(0xCE60EC0)
#define RPG_GAMECORE_MONSTERROWDATA_GET_JSON_OFFSET UNITYSDK_OFFSET(0xCE60EB0)
#define RPG_GAMECORE_MONSTERROWDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xCE60F70)
#define RPG_GAMECORE_MONSTERROWDATA_GET_MAXHP_OFFSET UNITYSDK_OFFSET(0xCE610C0)
#define RPG_GAMECORE_MONSTERROWDATA_GET_MAXSTANCE_OFFSET UNITYSDK_OFFSET(0xCE61670)
#define RPG_GAMECORE_MONSTERROWDATA_GET_MINIMUMFATIGUERATIO_OFFSET UNITYSDK_OFFSET(0xCE618A0)
#define RPG_GAMECORE_MONSTERROWDATA_GET_MODELPATH_OFFSET UNITYSDK_OFFSET(0xCE619D0)
#define RPG_GAMECORE_MONSTERROWDATA_GET_MONSTERROW_OFFSET UNITYSDK_OFFSET(0xCE60D70)
#define RPG_GAMECORE_MONSTERROWDATA_GET_NATUREID_OFFSET UNITYSDK_OFFSET(0xCE61EE0)
#define RPG_GAMECORE_MONSTERROWDATA_GET_OVERRIDEAIPATH_OFFSET UNITYSDK_OFFSET(0xCE60F60)
#define RPG_GAMECORE_MONSTERROWDATA_GET_PHASEHIDESKILLS_OFFSET UNITYSDK_OFFSET(0xCE60FB0)
#define RPG_GAMECORE_MONSTERROWDATA_GET_RESISTANCE_OFFSET UNITYSDK_OFFSET(0xCE61910)
#define RPG_GAMECORE_MONSTERROWDATA_GET_ROUNDICONPATH_OFFSET UNITYSDK_OFFSET(0xCE61C10)
#define RPG_GAMECORE_MONSTERROWDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0xCE60DE0)
#define RPG_GAMECORE_MONSTERROWDATA_GET_SIDEAVATARHEADICONPATH_OFFSET UNITYSDK_OFFSET(0xCE61CC0)
#define RPG_GAMECORE_MONSTERROWDATA_GET_SKILLROWDATAS_OFFSET UNITYSDK_OFFSET(0xCE60F90)
#define RPG_GAMECORE_MONSTERROWDATA_GET_SPEED_OFFSET UNITYSDK_OFFSET(0xCE61520)
#define RPG_GAMECORE_MONSTERROWDATA_GET_SPNEED_OFFSET UNITYSDK_OFFSET(0xCE61F60)
#define RPG_GAMECORE_MONSTERROWDATA_GET_STANCECOUNT_OFFSET UNITYSDK_OFFSET(0xCE61FB0)
#define RPG_GAMECORE_MONSTERROWDATA_GET_STANCEWEAKLIST_OFFSET UNITYSDK_OFFSET(0xCE5C5E0)
#define RPG_GAMECORE_MONSTERROWDATA_GET_STATUSPROBABILITY_OFFSET UNITYSDK_OFFSET(0xCE61980)
#define RPG_GAMECORE_MONSTERROWDATA_GET_STRATEGIES_OFFSET UNITYSDK_OFFSET(0xCE61B20)
#define RPG_GAMECORE_MONSTERROWDATA_GET_TEMPLATEROW_OFFSET UNITYSDK_OFFSET(0xCE60D80)
#define RPG_GAMECORE_MONSTERROWDATA_GET_WAITINGAVATARHEADICONPATH_OFFSET UNITYSDK_OFFSET(0xCE61D10)
#define RPG_GAMECORE_MONSTERROWDATA_OVERRIDEDATA_OFFSET UNITYSDK_OFFSET(0xCE62020)
#define RPG_GAMECORE_MONSTERROWDATA_OVERRIDEDISPLAY_OFFSET UNITYSDK_OFFSET(0xCE61DB0)
#define RPG_GAMECORE_MONSTERROWDATA_OVERRIDESTRATEGIES_OFFSET UNITYSDK_OFFSET(0xCE61E90)
#define RPG_GAMECORE_MONSTERROWDATA_SET_PHASEHIDESKILLS_OFFSET UNITYSDK_OFFSET(0xCE60FC0)
#define RPG_GAMECORE_MONSTERROWDATA_SET_ROW_OFFSET UNITYSDK_OFFSET(0xCE60DF0)
#define RPG_GAMECORE_MONSTERROWDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xCE5AF60)
#define RPG_GAMECORE_MONSTERROWDATA__SETUPSKILLLIST_OFFSET UNITYSDK_OFFSET(0xCE5F3C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonsterRowData_TypeDefinitionIndex = 53166;

	class MonsterRowData : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::MonsterSkillRow*>** StaticGet__TmpSkillRowMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::MonsterSkillRow*>**)Il2CppClass::FromTypeDefinitionIndex(MonsterRowData_TypeDefinitionIndex)->GetStaticField(0x68850);
		}
		static ::System::Collections::Generic::List_1<::RPG::GameCore::MonsterSkillRow*>** StaticGet__TmpSkillRowList()
		{
			return (::System::Collections::Generic::List_1<::RPG::GameCore::MonsterSkillRow*>**)Il2CppClass::FromTypeDefinitionIndex(MonsterRowData_TypeDefinitionIndex)->GetStaticField(0x68858);
		}
		::RPG::GameCore::HardLevelGroupRow* _HardLevelRow; // 0x10
		::Il2CppArray<::RPG::Client::TextID>* _OverrideStrategies; // 0x18
		::Class_1_D31FB8D7186DB2BC* _AllPhaseSkills; // 0x20
		::System::String* _modelPath; // 0x28
		::RPG::GameCore::MonsterRow* _Row; // 0x30
		::RPG::GameCore::CharacterConfig* _Json; // 0x38
		::Class_1_6F2CC3A2F2CEF554* _PhaseHideSkills_k__BackingField; // 0x40
		::RPG::GameCore::EliteGroupRow* _EliteGroup3Row; // 0x48
		::Struct_2_88A74A9E9AE5BA51 _OverrideDisplay; // 0x50
		::Il2CppArray<::RPG::GameCore::AttackDamageType>* _OverrideStanceWeakList; // 0xB0
		::RPG::GameCore::MonsterRow* _BaseMonsterRow; // 0xB8
		::Class_0_16E4307DCC419505_488* _ExtraLineup; // 0xC0
		::System::Collections::Generic::List_1<::RPG::GameCore::ICharacterSkillRowData*>* _SkillRowDatas; // 0xC8
		::RPG::GameCore::MonsterTemplateRow* _TemplateRow; // 0xD0
		::RPG::GameCore::EliteGroupRow* _EliteGroup2Row; // 0xD8
		::RPG::GameCore::EliteGroupRow* _EliteGroupRow; // 0xE0
		::RPG::GameCore::GridFightEnemyDifficultyLvConfigRow* _DifficultyLvRow; // 0xE8
		::System::Nullable_1<::RPG::GameCore::FixPoint> _InitStance; // 0xF0
		::RPG::GameCore::FixPoint _MaxHP; // 0x100
		::RPG::GameCore::FixPoint _InitHP; // 0x108
		::System::Nullable_1<::RPG::GameCore::FixPoint> _MaxStance; // 0x110

		::System::Void _ctor(::RPG::GameCore::MonsterRow* a1, ::Class_2_23F9D0182A641C7D* a2, ::RPG::GameCore::StageRow* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MonsterRow*, ::Class_2_23F9D0182A641C7D*, ::RPG::GameCore::StageRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::MonsterRow* get_MonsterRow()
		{
			return ((::RPG::GameCore::MonsterRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_MONSTERROW_OFFSET))(this);
		}

		::RPG::GameCore::MonsterTemplateRow* get_TemplateRow()
		{
			return ((::RPG::GameCore::MonsterTemplateRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_TEMPLATEROW_OFFSET))(this);
		}

		::RPG::GameCore::MonsterRow* get_BaseMonsterRow()
		{
			return ((::RPG::GameCore::MonsterRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_BASEMONSTERROW_OFFSET))(this);
		}

		::RPG::GameCore::HardLevelGroupRow* get_HardLevelRow()
		{
			return ((::RPG::GameCore::HardLevelGroupRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_HARDLEVELROW_OFFSET))(this);
		}

		::RPG::GameCore::EliteGroupRow* get_EliteGroupRow()
		{
			return ((::RPG::GameCore::EliteGroupRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_ELITEGROUPROW_OFFSET))(this);
		}

		::RPG::GameCore::EliteGroupRow* get_EliteGroup2Row()
		{
			return ((::RPG::GameCore::EliteGroupRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_ELITEGROUP2ROW_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_488* get_ExtraLineup()
		{
			return ((::Class_0_16E4307DCC419505_488*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_EXTRALINEUP_OFFSET))(this);
		}

		::System::Object* get_Row()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_ROW_OFFSET))(this);
		}

		::System::Void set_Row(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_SET_ROW_OFFSET))(this, a1);
		}

		::RPG::GameCore::CharacterConfig* get_Json()
		{
			return ((::RPG::GameCore::CharacterConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_JSON_OFFSET))(this);
		}

		::System::UInt32 get_ConfigID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_CONFIGID_OFFSET))(this);
		}

		::System::String* get_JsonPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_JSONPATH_OFFSET))(this);
		}

		::System::String* get_AIPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_AIPATH_OFFSET))(this);
		}

		::System::String* get_OverrideAIPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_OVERRIDEAIPATH_OFFSET))(this);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_LEVEL_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::ICharacterSkillRowData*>* get_SkillRowDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::ICharacterSkillRowData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_SKILLROWDATAS_OFFSET))(this);
		}

		::Class_1_D31FB8D7186DB2BC* get_AllPhaseSkills()
		{
			return ((::Class_1_D31FB8D7186DB2BC*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_ALLPHASESKILLS_OFFSET))(this);
		}

		::Class_1_6F2CC3A2F2CEF554* get_PhaseHideSkills()
		{
			return ((::Class_1_6F2CC3A2F2CEF554*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_PHASEHIDESKILLS_OFFSET))(this);
		}

		::System::Void set_PhaseHideSkills(::Class_1_6F2CC3A2F2CEF554* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6F2CC3A2F2CEF554*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_SET_PHASEHIDESKILLS_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_ExtraHPRatio()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_EXTRAHPRATIO_OFFSET))(this);
		}

		::System::Boolean get_IsAetherDivide()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_ISAETHERDIVIDE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_MaxHP()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_MAXHP_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_InitHP()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_INITHP_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_Attack()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_ATTACK_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_Defence()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_DEFENCE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_Speed()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_SPEED_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_MaxStance()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_MAXSTANCE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_InitStance()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_INITSTANCE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_CriticalChance()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_CRITICALCHANCE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_CriticalDamage()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_CRITICALDAMAGE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_MinimumFatigueRatio()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_MINIMUMFATIGUERATIO_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_BaseAggro()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_BASEAGGRO_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_Resistance()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_RESISTANCE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_StatusProbability()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_STATUSPROBABILITY_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_InitActionDelayRatio()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_INITACTIONDELAYRATIO_OFFSET))(this);
		}

		::System::String* get_ModelPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_MODELPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_CharacterName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_CHARACTERNAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Introduction()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_INTRODUCTION_OFFSET))(this);
		}

		::Il2CppArray<::RPG::Client::TextID>* get_Strategies()
		{
			return ((::Il2CppArray<::RPG::Client::TextID>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_STRATEGIES_OFFSET))(this);
		}

		::System::String* get_HeadIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_HEADICONPATH_OFFSET))(this);
		}

		::System::String* get_RoundIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_ROUNDICONPATH_OFFSET))(this);
		}

		::System::String* get_ActionIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_ACTIONICONPATH_OFFSET))(this);
		}

		::System::String* get_SideAvatarHeadIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_SIDEAVATARHEADICONPATH_OFFSET))(this);
		}

		::System::String* get_WaitingAvatarHeadIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_WAITINGAVATARHEADICONPATH_OFFSET))(this);
		}

		::System::String* get_AvatarSideIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_AVATARSIDEICONPATH_OFFSET))(this);
		}

		::System::Void OverrideDisplay(::Struct_2_88A74A9E9AE5BA51 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_88A74A9E9AE5BA51))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_OVERRIDEDISPLAY_OFFSET))(this, a1);
		}

		::System::Void OverrideStrategies(::Il2CppArray<::RPG::Client::TextID>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::Client::TextID>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_OVERRIDESTRATEGIES_OFFSET))(this, a1);
		}

		::System::UInt32 get_NatureID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_NATUREID_OFFSET))(this);
		}

		::RPG::GameCore::AttackDamageType get_DamageType()
		{
			return ((::RPG::GameCore::AttackDamageType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_DAMAGETYPE_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::AttackDamageType>* get_StanceWeakList()
		{
			return ((::Il2CppArray<::RPG::GameCore::AttackDamageType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_STANCEWEAKLIST_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::ElementResistanceConfig*>* get_DamageTypeResistance()
		{
			return ((::Il2CppArray<::RPG::GameCore::ElementResistanceConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_DAMAGETYPERESISTANCE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_SPNeed()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_SPNEED_OFFSET))(this);
		}

		::System::Boolean get_HaveActionDelay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_HAVEACTIONDELAY_OFFSET))(this);
		}

		::System::Int32 get_StanceCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_STANCECOUNT_OFFSET))(this);
		}

		::System::Void OverrideData(::Struct_2_2D4CFA76DB950A9A a1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_2D4CFA76DB950A9A))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_OVERRIDEDATA_OFFSET))(this, a1);
		}

		::RPG::GameCore::ICharacterSkillRowData* GetSkillRowData(::System::Int32 a1)
		{
			return ((::RPG::GameCore::ICharacterSkillRowData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GETSKILLROWDATA_OFFSET))(this, a1);
		}

		::RPG::GameCore::ICharacterSkillRowData* GetSkillRowDataByName(::System::String* a1)
		{
			return ((::RPG::GameCore::ICharacterSkillRowData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GETSKILLROWDATABYNAME_OFFSET))(this, a1);
		}

		::RPG::GameCore::ICharacterSkillRowData* GetSkillRowDataByID(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ICharacterSkillRowData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GETSKILLROWDATABYID_OFFSET))(this, a1);
		}

		static ::System::Void _SetupSkillList(::RPG::GameCore::MonsterRow* a1, ::RPG::GameCore::CharacterConfig* a2, ::System::Collections::Generic::List_1<::RPG::GameCore::ICharacterSkillRowData*>* a3)
		{
			return ((::System::Void(*)(::RPG::GameCore::MonsterRow*, ::RPG::GameCore::CharacterConfig*, ::System::Collections::Generic::List_1<::RPG::GameCore::ICharacterSkillRowData*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA__SETUPSKILLLIST_OFFSET))(a1, a2, a3);
		}
	};
}
