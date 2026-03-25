#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/Struct_2_2D4CFA76DB950A9A.h"
#include "unitysdk/Struct_2_88A74A9E9AE5BA51.h"
#include "unitysdk/System/Object.h"

class Class_1_312DDC926E545863;
namespace RPG::GameCore { class BattleEventConfig; }
namespace RPG::GameCore { class BattleEventRow; }
namespace RPG::GameCore { class BattleEventSkillRow; }
namespace RPG::GameCore { class CharacterConfig; }
namespace RPG::GameCore { class ElementResistanceConfig; }
namespace RPG::GameCore { class GridFightRoleBackendRankConfigRow; }
namespace RPG::GameCore { class ICharacterSkillRowData; }
namespace RPG::GameCore { class StageRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_BATTLEEVENTROWDATA_GETOVERRIDEPROPERTY_OFFSET UNITYSDK_OFFSET(0xA881850)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GETRANKCONFIGROWBYTRIGGERKEY_OFFSET UNITYSDK_OFFSET(0xA882F60)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GETSKILLROWDATABYID_OFFSET UNITYSDK_OFFSET(0xA882E20)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GETSKILLROWDATABYNAME_OFFSET UNITYSDK_OFFSET(0xA882DC0)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GETSKILLROWDATA_OFFSET UNITYSDK_OFFSET(0xA882D30)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_ACTIONICONPATH_OFFSET UNITYSDK_OFFSET(0xA882970)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_ACTIVEBACKENDRANKLIST_OFFSET UNITYSDK_OFFSET(0xA883020)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_AIPATH_OFFSET UNITYSDK_OFFSET(0xA8821E0)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_ATTACK_OFFSET UNITYSDK_OFFSET(0xA882300)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_AVATARSIDEICONPATH_OFFSET UNITYSDK_OFFSET(0xA882A60)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_BASEAGGRO_OFFSET UNITYSDK_OFFSET(0xA882510)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_BATTLEEVENTJSON_OFFSET UNITYSDK_OFFSET(0xA882150)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_BATTLEEVENTROW_OFFSET UNITYSDK_OFFSET(0xA882130)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_CHARACTERNAME_OFFSET UNITYSDK_OFFSET(0xA882750)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_CONFIGID_OFFSET UNITYSDK_OFFSET(0xA882160)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_CRITICALCHANCE_OFFSET UNITYSDK_OFFSET(0xA882420)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_CRITICALDAMAGE_OFFSET UNITYSDK_OFFSET(0xA882470)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_DAMAGETYPERESISTANCE_OFFSET UNITYSDK_OFFSET(0xA882B20)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_DAMAGETYPE_OFFSET UNITYSDK_OFFSET(0xA882AB0)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_DEFENCE_OFFSET UNITYSDK_OFFSET(0xA882350)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_HAVEACTIONDELAY_OFFSET UNITYSDK_OFFSET(0xA882B80)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_HEADICONPATH_OFFSET UNITYSDK_OFFSET(0xA8828D0)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_INITACTIONDELAYRATIO_OFFSET UNITYSDK_OFFSET(0xA882650)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_INITHP_OFFSET UNITYSDK_OFFSET(0xA8822B0)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_INTRODUCTION_OFFSET UNITYSDK_OFFSET(0xA882820)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_JSONPATH_OFFSET UNITYSDK_OFFSET(0xA882180)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_JSON_OFFSET UNITYSDK_OFFSET(0xA882140)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xA882240)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_MAXHP_OFFSET UNITYSDK_OFFSET(0xA882260)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_MAXSTANCE_OFFSET UNITYSDK_OFFSET(0xA882560)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_MINIMUMFATIGUERATIO_OFFSET UNITYSDK_OFFSET(0xA8824C0)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_MODELPATH_OFFSET UNITYSDK_OFFSET(0xA8826A0)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_NATUREID_OFFSET UNITYSDK_OFFSET(0xA882AA0)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_RESISTANCE_OFFSET UNITYSDK_OFFSET(0xA8825B0)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_ROUNDICONPATH_OFFSET UNITYSDK_OFFSET(0xA882930)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0xA8820E0)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_SIDEAVATARHEADICONPATH_OFFSET UNITYSDK_OFFSET(0xA8829E0)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_SKILLROWDATAS_OFFSET UNITYSDK_OFFSET(0xA882250)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_SPEED_OFFSET UNITYSDK_OFFSET(0xA8823A0)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_SPNEED_OFFSET UNITYSDK_OFFSET(0xA882B30)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_STATUSPROBABILITY_OFFSET UNITYSDK_OFFSET(0xA882600)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_WAITINGAVATARHEADICONPATH_OFFSET UNITYSDK_OFFSET(0xA882A20)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_OVERRIDEDATA_OFFSET UNITYSDK_OFFSET(0xA882BE0)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_OVERRIDEDISPLAY_OFFSET UNITYSDK_OFFSET(0xA87E4F0)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_SET_ROW_OFFSET UNITYSDK_OFFSET(0xA8820F0)
#define RPG_GAMECORE_BATTLEEVENTROWDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA87E000)
#define RPG_GAMECORE_BATTLEEVENTROWDATA__SETUPACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0xA881900)
#define RPG_GAMECORE_BATTLEEVENTROWDATA__SETUPSKILLLIST_OFFSET UNITYSDK_OFFSET(0xA881B40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleEventRowData_TypeDefinitionIndex = 45809;

	class BattleEventRowData : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::BattleEventSkillRow*>** StaticGet__TmpSkillRowMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::BattleEventSkillRow*>**)Il2CppClass::FromTypeDefinitionIndex(BattleEventRowData_TypeDefinitionIndex)->GetStaticField(0x44850);
		}
		::RPG::GameCore::BattleEventRow* _Row; // 0x10
		::System::Collections::Generic::List_1<::RPG::GameCore::GridFightRoleBackendRankConfigRow*>* _ActiveBackendRankList; // 0x18
		::RPG::GameCore::BattleEventConfig* _Json; // 0x20
		::Struct_2_88A74A9E9AE5BA51 _OverrideDisplay; // 0x28
		::System::String* _OverrideModelPath; // 0x88
		::System::Collections::Generic::List_1<::RPG::GameCore::ICharacterSkillRowData*>* _SkillRowDatas; // 0x90
		::Struct_2_2D4CFA76DB950A9A _OverrideData; // 0x98
		::System::UInt32 _Level; // 0xC0

		::System::Void _ctor(::RPG::GameCore::BattleEventRow* row, ::RPG::GameCore::BattleEventConfig* json, ::Class_1_312DDC926E545863* createParams, ::RPG::GameCore::StageRow* stageRow, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Il2CppArray<::RPG::GameCore::FixPoint>*>* skillParamModifier)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleEventRow*, ::RPG::GameCore::BattleEventConfig*, ::Class_1_312DDC926E545863*, ::RPG::GameCore::StageRow*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Il2CppArray<::RPG::GameCore::FixPoint>*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA__CTOR_OFFSET))(this, row, json, createParams, stageRow, skillParamModifier);
		}

		::System::Object* get_Row()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA_GET_ROW_OFFSET))(this);
		}

		::System::Void set_Row(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA_SET_ROW_OFFSET))(this, value);
		}

		::RPG::GameCore::BattleEventRow* get_BattleEventRow()
		{
			return ((::RPG::GameCore::BattleEventRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA_GET_BATTLEEVENTROW_OFFSET))(this);
		}

		::RPG::GameCore::CharacterConfig* get_Json()
		{
			return ((::RPG::GameCore::CharacterConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA_GET_JSON_OFFSET))(this);
		}

		::RPG::GameCore::BattleEventConfig* get_BattleEventJson()
		{
			return ((::RPG::GameCore::BattleEventConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA_GET_BATTLEEVENTJSON_OFFSET))(this);
		}

		::System::UInt32 get_ConfigID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA_GET_CONFIGID_OFFSET))(this);
		}

		::System::String* get_JsonPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA_GET_JSONPATH_OFFSET))(this);
		}

		::System::String* get_AIPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA_GET_AIPATH_OFFSET))(this);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA_GET_LEVEL_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::ICharacterSkillRowData*>* get_SkillRowDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::ICharacterSkillRowData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA_GET_SKILLROWDATAS_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_MaxHP()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA_GET_MAXHP_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_InitHP()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA_GET_INITHP_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_Attack()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA_GET_ATTACK_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_Defence()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA_GET_DEFENCE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_Speed()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA_GET_SPEED_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_CriticalChance()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA_GET_CRITICALCHANCE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_CriticalDamage()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA_GET_CRITICALDAMAGE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_MinimumFatigueRatio()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA_GET_MINIMUMFATIGUERATIO_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_BaseAggro()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA_GET_BASEAGGRO_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_MaxStance()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA_GET_MAXSTANCE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_Resistance()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA_GET_RESISTANCE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_StatusProbability()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA_GET_STATUSPROBABILITY_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_InitActionDelayRatio()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA_GET_INITACTIONDELAYRATIO_OFFSET))(this);
		}

		::System::String* get_ModelPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA_GET_MODELPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_CharacterName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA_GET_CHARACTERNAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Introduction()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA_GET_INTRODUCTION_OFFSET))(this);
		}

		::System::String* get_HeadIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA_GET_HEADICONPATH_OFFSET))(this);
		}

		::System::String* get_RoundIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA_GET_ROUNDICONPATH_OFFSET))(this);
		}

		::System::String* get_ActionIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA_GET_ACTIONICONPATH_OFFSET))(this);
		}

		::System::String* get_SideAvatarHeadIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA_GET_SIDEAVATARHEADICONPATH_OFFSET))(this);
		}

		::System::String* get_WaitingAvatarHeadIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA_GET_WAITINGAVATARHEADICONPATH_OFFSET))(this);
		}

		::System::String* get_AvatarSideIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA_GET_AVATARSIDEICONPATH_OFFSET))(this);
		}

		::System::Void OverrideDisplay(::Struct_2_88A74A9E9AE5BA51 overrideData)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_88A74A9E9AE5BA51))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA_OVERRIDEDISPLAY_OFFSET))(this, overrideData);
		}

		::System::UInt32 get_NatureID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA_GET_NATUREID_OFFSET))(this);
		}

		::RPG::GameCore::AttackDamageType get_DamageType()
		{
			return ((::RPG::GameCore::AttackDamageType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA_GET_DAMAGETYPE_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::ElementResistanceConfig*>* get_DamageTypeResistance()
		{
			return ((::Il2CppArray<::RPG::GameCore::ElementResistanceConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA_GET_DAMAGETYPERESISTANCE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_SPNeed()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA_GET_SPNEED_OFFSET))(this);
		}

		::System::Boolean get_HaveActionDelay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA_GET_HAVEACTIONDELAY_OFFSET))(this);
		}

		::System::Void OverrideData(::Struct_2_2D4CFA76DB950A9A overrideData)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_2D4CFA76DB950A9A))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA_OVERRIDEDATA_OFFSET))(this, overrideData);
		}

		::RPG::GameCore::ICharacterSkillRowData* GetSkillRowData(::System::Int32 nSkillIndex)
		{
			return ((::RPG::GameCore::ICharacterSkillRowData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA_GETSKILLROWDATA_OFFSET))(this, nSkillIndex);
		}

		::RPG::GameCore::ICharacterSkillRowData* GetSkillRowDataByName(::System::String* skillName)
		{
			return ((::RPG::GameCore::ICharacterSkillRowData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA_GETSKILLROWDATABYNAME_OFFSET))(this, skillName);
		}

		::RPG::GameCore::ICharacterSkillRowData* GetSkillRowDataByID(::System::UInt32 skillID)
		{
			return ((::RPG::GameCore::ICharacterSkillRowData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA_GETSKILLROWDATABYID_OFFSET))(this, skillID);
		}

		::RPG::GameCore::FixPoint GetOverrideProperty(::RPG::GameCore::AbilityProperty propType, ::RPG::GameCore::FixPoint defVal)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AbilityProperty, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA_GETOVERRIDEPROPERTY_OFFSET))(this, propType, defVal);
		}

		::System::Void _SetupSkillList(::Il2CppArray<::System::UInt32>* SkillIdList)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA__SETUPSKILLLIST_OFFSET))(this, SkillIdList);
		}

		::System::Void _SetupActivityData(::Class_1_312DDC926E545863* createParams)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_312DDC926E545863*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA__SETUPACTIVITYDATA_OFFSET))(this, createParams);
		}

		::RPG::GameCore::GridFightRoleBackendRankConfigRow* GetRankConfigRowByTriggerKey(::RPG::GameCore::StringHash pTriggerKey)
		{
			return ((::RPG::GameCore::GridFightRoleBackendRankConfigRow*(*)(::PVOID, ::RPG::GameCore::StringHash))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA_GETRANKCONFIGROWBYTRIGGERKEY_OFFSET))(this, pTriggerKey);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::GridFightRoleBackendRankConfigRow*>* get_ActiveBackendRankList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::GridFightRoleBackendRankConfigRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA_GET_ACTIVEBACKENDRANKLIST_OFFSET))(this);
		}
	};
}
