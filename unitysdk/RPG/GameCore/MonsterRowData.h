#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/BigFixPoint.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_2D4CFA76DB950A9A.h"
#include "unitysdk/Struct_2_88A74A9E9AE5BA51.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_386;
class Class_1_15C380EE9BA3240C;
class Class_1_7A36342401039887;
class Class_2_6729AC3ED949BE6A;
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

#define RPG_GAMECORE_MONSTERROWDATA_GETSKILLROWDATABYID_OFFSET UNITYSDK_OFFSET(0xA9F6510)
#define RPG_GAMECORE_MONSTERROWDATA_GETSKILLROWDATABYNAME_OFFSET UNITYSDK_OFFSET(0xA9F6490)
#define RPG_GAMECORE_MONSTERROWDATA_GETSKILLROWDATA_OFFSET UNITYSDK_OFFSET(0xA9F6400)
#define RPG_GAMECORE_MONSTERROWDATA_GET_ACTIONICONPATH_OFFSET UNITYSDK_OFFSET(0xA9F5FD0)
#define RPG_GAMECORE_MONSTERROWDATA_GET_AIPATH_OFFSET UNITYSDK_OFFSET(0xA9F3220)
#define RPG_GAMECORE_MONSTERROWDATA_GET_ALLPHASESKILLS_OFFSET UNITYSDK_OFFSET(0xA9F32D0)
#define RPG_GAMECORE_MONSTERROWDATA_GET_ATTACK_OFFSET UNITYSDK_OFFSET(0xA9F4260)
#define RPG_GAMECORE_MONSTERROWDATA_GET_AVATARSIDEICONPATH_OFFSET UNITYSDK_OFFSET(0xA9F60A0)
#define RPG_GAMECORE_MONSTERROWDATA_GET_BASEAGGRO_OFFSET UNITYSDK_OFFSET(0xA9F5BF0)
#define RPG_GAMECORE_MONSTERROWDATA_GET_BASEMONSTERROW_OFFSET UNITYSDK_OFFSET(0xA9F30B0)
#define RPG_GAMECORE_MONSTERROWDATA_GET_BIGINITHP_OFFSET UNITYSDK_OFFSET(0xA9F41B0)
#define RPG_GAMECORE_MONSTERROWDATA_GET_BIGMAXHP_OFFSET UNITYSDK_OFFSET(0xA9F3AB0)
#define RPG_GAMECORE_MONSTERROWDATA_GET_CHARACTERNAME_OFFSET UNITYSDK_OFFSET(0xA9F5D20)
#define RPG_GAMECORE_MONSTERROWDATA_GET_CONFIGID_OFFSET UNITYSDK_OFFSET(0xA9F31D0)
#define RPG_GAMECORE_MONSTERROWDATA_GET_CRITICALCHANCE_OFFSET UNITYSDK_OFFSET(0xA9F5B90)
#define RPG_GAMECORE_MONSTERROWDATA_GET_CRITICALDAMAGE_OFFSET UNITYSDK_OFFSET(0xA9F5BB0)
#define RPG_GAMECORE_MONSTERROWDATA_GET_DAMAGETYPERESISTANCE_OFFSET UNITYSDK_OFFSET(0xA9F62C0)
#define RPG_GAMECORE_MONSTERROWDATA_GET_DAMAGETYPE_OFFSET UNITYSDK_OFFSET(0xA9F6230)
#define RPG_GAMECORE_MONSTERROWDATA_GET_DEFENCE_OFFSET UNITYSDK_OFFSET(0xA9F4870)
#define RPG_GAMECORE_MONSTERROWDATA_GET_ELITEGROUP2ROW_OFFSET UNITYSDK_OFFSET(0xA9F30E0)
#define RPG_GAMECORE_MONSTERROWDATA_GET_ELITEGROUPROW_OFFSET UNITYSDK_OFFSET(0xA9F30D0)
#define RPG_GAMECORE_MONSTERROWDATA_GET_EXTRALINEUP_OFFSET UNITYSDK_OFFSET(0xA9F30F0)
#define RPG_GAMECORE_MONSTERROWDATA_GET_HARDLEVELROW_OFFSET UNITYSDK_OFFSET(0xA9F30C0)
#define RPG_GAMECORE_MONSTERROWDATA_GET_HAVEACTIONDELAY_OFFSET UNITYSDK_OFFSET(0xA9F6320)
#define RPG_GAMECORE_MONSTERROWDATA_GET_HEADICONPATH_OFFSET UNITYSDK_OFFSET(0xA9F5F10)
#define RPG_GAMECORE_MONSTERROWDATA_GET_INITACTIONDELAYRATIO_OFFSET UNITYSDK_OFFSET(0xA9F5CF0)
#define RPG_GAMECORE_MONSTERROWDATA_GET_INITHP_OFFSET UNITYSDK_OFFSET(0xA9F4130)
#define RPG_GAMECORE_MONSTERROWDATA_GET_INITSTANCE_OFFSET UNITYSDK_OFFSET(0xA9F5B30)
#define RPG_GAMECORE_MONSTERROWDATA_GET_INTRODUCTION_OFFSET UNITYSDK_OFFSET(0xA9F5DD0)
#define RPG_GAMECORE_MONSTERROWDATA_GET_ISAETHERDIVIDE_OFFSET UNITYSDK_OFFSET(0xA9F3300)
#define RPG_GAMECORE_MONSTERROWDATA_GET_JSONPATH_OFFSET UNITYSDK_OFFSET(0xA9F3200)
#define RPG_GAMECORE_MONSTERROWDATA_GET_JSON_OFFSET UNITYSDK_OFFSET(0xA9F31C0)
#define RPG_GAMECORE_MONSTERROWDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xA9F32A0)
#define RPG_GAMECORE_MONSTERROWDATA_GET_MAXHP_OFFSET UNITYSDK_OFFSET(0xA9F3310)
#define RPG_GAMECORE_MONSTERROWDATA_GET_MAXSTANCE_OFFSET UNITYSDK_OFFSET(0xA9F54D0)
#define RPG_GAMECORE_MONSTERROWDATA_GET_MINIMUMFATIGUERATIO_OFFSET UNITYSDK_OFFSET(0xA9F5BD0)
#define RPG_GAMECORE_MONSTERROWDATA_GET_MODELPATH_OFFSET UNITYSDK_OFFSET(0xA9F5D10)
#define RPG_GAMECORE_MONSTERROWDATA_GET_MONSTERROW_OFFSET UNITYSDK_OFFSET(0xA9F3090)
#define RPG_GAMECORE_MONSTERROWDATA_GET_NATUREID_OFFSET UNITYSDK_OFFSET(0xA9F6210)
#define RPG_GAMECORE_MONSTERROWDATA_GET_PHASEHIDESKILLS_OFFSET UNITYSDK_OFFSET(0xA9F32E0)
#define RPG_GAMECORE_MONSTERROWDATA_GET_RESISTANCE_OFFSET UNITYSDK_OFFSET(0xA9F5C30)
#define RPG_GAMECORE_MONSTERROWDATA_GET_ROUNDICONPATH_OFFSET UNITYSDK_OFFSET(0xA9F5F70)
#define RPG_GAMECORE_MONSTERROWDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0xA9F3100)
#define RPG_GAMECORE_MONSTERROWDATA_GET_SIDEAVATARHEADICONPATH_OFFSET UNITYSDK_OFFSET(0xA9F6010)
#define RPG_GAMECORE_MONSTERROWDATA_GET_SKILLROWDATAS_OFFSET UNITYSDK_OFFSET(0xA9F32C0)
#define RPG_GAMECORE_MONSTERROWDATA_GET_SPEED_OFFSET UNITYSDK_OFFSET(0xA9F4E80)
#define RPG_GAMECORE_MONSTERROWDATA_GET_SPNEED_OFFSET UNITYSDK_OFFSET(0xA9F62E0)
#define RPG_GAMECORE_MONSTERROWDATA_GET_STANCECOUNT_OFFSET UNITYSDK_OFFSET(0xA9F6330)
#define RPG_GAMECORE_MONSTERROWDATA_GET_STANCEWEAKLIST_OFFSET UNITYSDK_OFFSET(0xA9F6250)
#define RPG_GAMECORE_MONSTERROWDATA_GET_STATUSPROBABILITY_OFFSET UNITYSDK_OFFSET(0xA9F5CD0)
#define RPG_GAMECORE_MONSTERROWDATA_GET_STRATEGIES_OFFSET UNITYSDK_OFFSET(0xA9F5E80)
#define RPG_GAMECORE_MONSTERROWDATA_GET_TEMPLATEROW_OFFSET UNITYSDK_OFFSET(0xA9F30A0)
#define RPG_GAMECORE_MONSTERROWDATA_GET_WAITINGAVATARHEADICONPATH_OFFSET UNITYSDK_OFFSET(0xA9F6050)
#define RPG_GAMECORE_MONSTERROWDATA_OVERRIDEDATA_OFFSET UNITYSDK_OFFSET(0xA9F63A0)
#define RPG_GAMECORE_MONSTERROWDATA_OVERRIDEDISPLAY_OFFSET UNITYSDK_OFFSET(0xA9F60E0)
#define RPG_GAMECORE_MONSTERROWDATA_OVERRIDESTRATEGIES_OFFSET UNITYSDK_OFFSET(0xA9F61C0)
#define RPG_GAMECORE_MONSTERROWDATA_SET_PHASEHIDESKILLS_OFFSET UNITYSDK_OFFSET(0xA9F32F0)
#define RPG_GAMECORE_MONSTERROWDATA_SET_ROW_OFFSET UNITYSDK_OFFSET(0xA9F3110)
#define RPG_GAMECORE_MONSTERROWDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA9F1350)
#define RPG_GAMECORE_MONSTERROWDATA__SETUPSKILLLIST_OFFSET UNITYSDK_OFFSET(0xA9F1A70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonsterRowData_TypeDefinitionIndex = 45810;

	class MonsterRowData : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::RPG::GameCore::MonsterSkillRow*>** StaticGet__TmpSkillRowList()
		{
			return (::System::Collections::Generic::List_1<::RPG::GameCore::MonsterSkillRow*>**)Il2CppClass::FromTypeDefinitionIndex(MonsterRowData_TypeDefinitionIndex)->GetStaticField(0x44860);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::MonsterSkillRow*>** StaticGet__TmpSkillRowMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::MonsterSkillRow*>**)Il2CppClass::FromTypeDefinitionIndex(MonsterRowData_TypeDefinitionIndex)->GetStaticField(0x44868);
		}
		::RPG::GameCore::MonsterTemplateRow* _TemplateRow; // 0x10
		::RPG::GameCore::EliteGroupRow* _EliteGroup3Row; // 0x18
		::System::String* _modelPath; // 0x20
		::RPG::GameCore::BigFixPoint _MaxHPBig; // 0x28
		::Struct_2_88A74A9E9AE5BA51 _OverrideDisplay; // 0x38
		::RPG::GameCore::EliteGroupRow* _EliteGroupRow; // 0x98
		::RPG::GameCore::GridFightEnemyDifficultyLvConfigRow* _DifficultyLvRow; // 0xA0
		::RPG::GameCore::MonsterRow* _Row; // 0xA8
		::Class_1_7A36342401039887* _AllPhaseSkills; // 0xB0
		::System::Collections::Generic::List_1<::RPG::GameCore::ICharacterSkillRowData*>* _SkillRowDatas; // 0xB8
		::Class_0_16E4307DCC419505_386* _ExtraLineup; // 0xC0
		::RPG::GameCore::HardLevelGroupRow* _HardLevelRow; // 0xC8
		::Class_1_15C380EE9BA3240C* _PhaseHideSkills_k__BackingField; // 0xD0
		::Il2CppArray<::RPG::Client::TextID>* _OverrideStrategies; // 0xD8
		::RPG::GameCore::CharacterConfig* _Json; // 0xE0
		::RPG::GameCore::MonsterRow* _BaseMonsterRow; // 0xE8
		::RPG::GameCore::BigFixPoint _InitHPBig; // 0xF0
		::Il2CppArray<::RPG::GameCore::AttackDamageType>* _OverrideStanceWeakList; // 0x100
		::RPG::GameCore::EliteGroupRow* _EliteGroup2Row; // 0x108
		::System::Boolean _InheritPBig; // 0x110
		::RPG::GameCore::FixPoint _InitHP; // 0x118
		::System::Nullable_1<::RPG::GameCore::FixPoint> _MaxStance; // 0x120
		::RPG::GameCore::FixPoint _MaxHP; // 0x130
		::RPG::GameCore::FixPoint _WorldHPMulRatio; // 0x138
		::System::Nullable_1<::RPG::GameCore::FixPoint> _InitStance; // 0x140

		::System::Void _ctor(::RPG::GameCore::MonsterRow* row, ::Class_2_6729AC3ED949BE6A* createaParams, ::RPG::GameCore::StageRow* stageRow)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MonsterRow*, ::Class_2_6729AC3ED949BE6A*, ::RPG::GameCore::StageRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA__CTOR_OFFSET))(this, row, createaParams, stageRow);
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

		::Class_0_16E4307DCC419505_386* get_ExtraLineup()
		{
			return ((::Class_0_16E4307DCC419505_386*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_EXTRALINEUP_OFFSET))(this);
		}

		::System::Object* get_Row()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_ROW_OFFSET))(this);
		}

		::System::Void set_Row(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_SET_ROW_OFFSET))(this, value);
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

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_LEVEL_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::ICharacterSkillRowData*>* get_SkillRowDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::ICharacterSkillRowData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_SKILLROWDATAS_OFFSET))(this);
		}

		::Class_1_7A36342401039887* get_AllPhaseSkills()
		{
			return ((::Class_1_7A36342401039887*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_ALLPHASESKILLS_OFFSET))(this);
		}

		::Class_1_15C380EE9BA3240C* get_PhaseHideSkills()
		{
			return ((::Class_1_15C380EE9BA3240C*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_PHASEHIDESKILLS_OFFSET))(this);
		}

		::System::Void set_PhaseHideSkills(::Class_1_15C380EE9BA3240C* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_15C380EE9BA3240C*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_SET_PHASEHIDESKILLS_OFFSET))(this, value);
		}

		::System::Boolean get_IsAetherDivide()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_ISAETHERDIVIDE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_MaxHP()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_MAXHP_OFFSET))(this);
		}

		::RPG::GameCore::BigFixPoint get_BigMaxHP()
		{
			return ((::RPG::GameCore::BigFixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_BIGMAXHP_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_InitHP()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_INITHP_OFFSET))(this);
		}

		::RPG::GameCore::BigFixPoint get_BigInitHP()
		{
			return ((::RPG::GameCore::BigFixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_BIGINITHP_OFFSET))(this);
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

		::System::Void OverrideDisplay(::Struct_2_88A74A9E9AE5BA51 overrideData)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_88A74A9E9AE5BA51))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_OVERRIDEDISPLAY_OFFSET))(this, overrideData);
		}

		::System::Void OverrideStrategies(::Il2CppArray<::RPG::Client::TextID>* strategies)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::Client::TextID>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_OVERRIDESTRATEGIES_OFFSET))(this, strategies);
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

		::System::Void OverrideData(::Struct_2_2D4CFA76DB950A9A overrideData)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_2D4CFA76DB950A9A))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_OVERRIDEDATA_OFFSET))(this, overrideData);
		}

		::RPG::GameCore::ICharacterSkillRowData* GetSkillRowData(::System::Int32 nSkillIndex)
		{
			return ((::RPG::GameCore::ICharacterSkillRowData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GETSKILLROWDATA_OFFSET))(this, nSkillIndex);
		}

		::RPG::GameCore::ICharacterSkillRowData* GetSkillRowDataByName(::System::String* skillName)
		{
			return ((::RPG::GameCore::ICharacterSkillRowData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GETSKILLROWDATABYNAME_OFFSET))(this, skillName);
		}

		::RPG::GameCore::ICharacterSkillRowData* GetSkillRowDataByID(::System::UInt32 skillID)
		{
			return ((::RPG::GameCore::ICharacterSkillRowData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GETSKILLROWDATABYID_OFFSET))(this, skillID);
		}

		static ::System::Void _SetupSkillList(::RPG::GameCore::MonsterRow* monsterRow, ::RPG::GameCore::CharacterConfig* monsterJson, ::System::Collections::Generic::List_1<::RPG::GameCore::ICharacterSkillRowData*>* skillRowDatas)
		{
			return ((::System::Void(*)(::RPG::GameCore::MonsterRow*, ::RPG::GameCore::CharacterConfig*, ::System::Collections::Generic::List_1<::RPG::GameCore::ICharacterSkillRowData*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA__SETUPSKILLLIST_OFFSET))(monsterRow, monsterJson, skillRowDatas);
		}
	};
}
