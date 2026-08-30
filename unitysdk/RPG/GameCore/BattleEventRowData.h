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

#define RPG_GAMECORE_BATTLEEVENTROWDATA_GETOVERRIDEPROPERTY_OFFSET UNITYSDK_OFFSET(0x1B627C00)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GETRANKCONFIGROWBYTRIGGERKEY_OFFSET UNITYSDK_OFFSET(0x1B629520)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GETSKILLROWDATABYID_OFFSET UNITYSDK_OFFSET(0x1B6293E0)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GETSKILLROWDATABYNAME_OFFSET UNITYSDK_OFFSET(0x1B629390)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GETSKILLROWDATA_OFFSET UNITYSDK_OFFSET(0x1B629340)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_ACTIONICONPATH_OFFSET UNITYSDK_OFFSET(0x1B628F80)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_ACTIVEBACKENDRANKLIST_OFFSET UNITYSDK_OFFSET(0x1B6295E0)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_AIPATH_OFFSET UNITYSDK_OFFSET(0x1B628740)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_ATTACK_OFFSET UNITYSDK_OFFSET(0x1B628870)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_AVATARSIDEICONPATH_OFFSET UNITYSDK_OFFSET(0x1B629070)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_BASEAGGRO_OFFSET UNITYSDK_OFFSET(0x1B628B10)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_BATTLEEVENTJSON_OFFSET UNITYSDK_OFFSET(0x1B6286B0)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_BATTLEEVENTROW_OFFSET UNITYSDK_OFFSET(0x1B628690)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_CHARACTERNAME_OFFSET UNITYSDK_OFFSET(0x1B628D50)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_CONFIGID_OFFSET UNITYSDK_OFFSET(0x1B6286C0)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_CRITICALCHANCE_OFFSET UNITYSDK_OFFSET(0x1B628A20)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_CRITICALDAMAGE_OFFSET UNITYSDK_OFFSET(0x1B628A70)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_DAMAGETYPERESISTANCE_OFFSET UNITYSDK_OFFSET(0x1B629130)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_DAMAGETYPE_OFFSET UNITYSDK_OFFSET(0x1B6290C0)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_DEFENCE_OFFSET UNITYSDK_OFFSET(0x1B6288C0)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_HAVEACTIONDELAY_OFFSET UNITYSDK_OFFSET(0x1B629190)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_HEADICONPATH_OFFSET UNITYSDK_OFFSET(0x1B628EE0)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_INITACTIONDELAYRATIO_OFFSET UNITYSDK_OFFSET(0x1B628C50)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_INITHP_OFFSET UNITYSDK_OFFSET(0x1B628820)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_INTRODUCTION_OFFSET UNITYSDK_OFFSET(0x1B628E30)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_JSONPATH_OFFSET UNITYSDK_OFFSET(0x1B6286E0)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_JSON_OFFSET UNITYSDK_OFFSET(0x1B6286A0)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1B6287B0)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_MAXHP_OFFSET UNITYSDK_OFFSET(0x1B6287D0)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_MAXSTANCE_OFFSET UNITYSDK_OFFSET(0x1B628B60)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_MINIMUMFATIGUERATIO_OFFSET UNITYSDK_OFFSET(0x1B628AC0)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_MODELPATH_OFFSET UNITYSDK_OFFSET(0x1B628CA0)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_NATUREID_OFFSET UNITYSDK_OFFSET(0x1B6290B0)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_OVERRIDEAIPATHS_OFFSET UNITYSDK_OFFSET(0x1B6287A0)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_RESISTANCE_OFFSET UNITYSDK_OFFSET(0x1B628BB0)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_ROUNDICONPATH_OFFSET UNITYSDK_OFFSET(0x1B628F40)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0x1B628630)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_SIDEAVATARHEADICONPATH_OFFSET UNITYSDK_OFFSET(0x1B628FF0)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_SKILLROWDATAS_OFFSET UNITYSDK_OFFSET(0x1B6287C0)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_SPEED_OFFSET UNITYSDK_OFFSET(0x1B628910)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_SPNEED_OFFSET UNITYSDK_OFFSET(0x1B629140)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_STATUSPROBABILITY_OFFSET UNITYSDK_OFFSET(0x1B628C00)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_WAITINGAVATARHEADICONPATH_OFFSET UNITYSDK_OFFSET(0x1B629030)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_OVERRIDEDATA_OFFSET UNITYSDK_OFFSET(0x1B6291F0)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_OVERRIDEDISPLAY_OFFSET UNITYSDK_OFFSET(0x1B6256A0)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_SET_ROW_OFFSET UNITYSDK_OFFSET(0x1B628640)
#define RPG_GAMECORE_BATTLEEVENTROWDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B624C10)
#define RPG_GAMECORE_BATTLEEVENTROWDATA__SETUPACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x1B627CC0)
#define RPG_GAMECORE_BATTLEEVENTROWDATA__SETUPSKILLLIST_OFFSET UNITYSDK_OFFSET(0x1B628070)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleEventRowData_TypeDefinitionIndex = 57100;

	class BattleEventRowData : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::BattleEventSkillRow*>** StaticGet__TmpSkillRowMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::BattleEventSkillRow*>**)Il2CppClass::FromTypeDefinitionIndex(BattleEventRowData_TypeDefinitionIndex)->GetStaticField(0x666A0);
		}
		::System::Collections::Generic::List_1<::RPG::GameCore::GridFightRoleBackendRankConfigRow*>* _ActiveBackendRankList; // 0x10
		::System::Collections::Generic::List_1<::RPG::GameCore::ICharacterSkillRowData*>* _SkillRowDatas; // 0x18
		::RPG::GameCore::BattleEventRow* _Row; // 0x20
		::System::String* _OverrideModelPath; // 0x28
		::Struct_2_88A74A9E9AE5BA51 _OverrideDisplay; // 0x30
		::RPG::GameCore::BattleEventConfig* _Json; // 0x90
		::System::UInt32 _Level; // 0x98
		::Struct_2_2D4CFA76DB950A9A _OverrideData; // 0xA0

		::System::Void _ctor(::RPG::GameCore::BattleEventRow* a1, ::RPG::GameCore::BattleEventConfig* a2, ::Class_1_312DDC926E545863* a3, ::RPG::GameCore::StageRow* a4, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Il2CppArray<::RPG::GameCore::FixPoint>*>* a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleEventRow*, ::RPG::GameCore::BattleEventConfig*, ::Class_1_312DDC926E545863*, ::RPG::GameCore::StageRow*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Il2CppArray<::RPG::GameCore::FixPoint>*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Object* get_Row()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA_GET_ROW_OFFSET))(this);
		}

		::System::Void set_Row(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA_SET_ROW_OFFSET))(this, a1);
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

		::Il2CppArray<::System::String*>* get_OverrideAIPaths()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA_GET_OVERRIDEAIPATHS_OFFSET))(this);
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

		::System::Void OverrideDisplay(::Struct_2_88A74A9E9AE5BA51 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_88A74A9E9AE5BA51))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA_OVERRIDEDISPLAY_OFFSET))(this, a1);
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

		::System::Void OverrideData(::Struct_2_2D4CFA76DB950A9A a1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_2D4CFA76DB950A9A))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA_OVERRIDEDATA_OFFSET))(this, a1);
		}

		::RPG::GameCore::ICharacterSkillRowData* GetSkillRowData(::System::Int32 a1)
		{
			return ((::RPG::GameCore::ICharacterSkillRowData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA_GETSKILLROWDATA_OFFSET))(this, a1);
		}

		::RPG::GameCore::ICharacterSkillRowData* GetSkillRowDataByName(::System::String* a1)
		{
			return ((::RPG::GameCore::ICharacterSkillRowData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA_GETSKILLROWDATABYNAME_OFFSET))(this, a1);
		}

		::RPG::GameCore::ICharacterSkillRowData* GetSkillRowDataByID(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ICharacterSkillRowData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA_GETSKILLROWDATABYID_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint GetOverrideProperty(::RPG::GameCore::AbilityProperty a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AbilityProperty, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA_GETOVERRIDEPROPERTY_OFFSET))(this, a1, a2);
		}

		::System::Void _SetupSkillList(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA__SETUPSKILLLIST_OFFSET))(this, a1);
		}

		::System::Void _SetupActivityData(::Class_1_312DDC926E545863* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_312DDC926E545863*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA__SETUPACTIVITYDATA_OFFSET))(this, a1);
		}

		::RPG::GameCore::GridFightRoleBackendRankConfigRow* GetRankConfigRowByTriggerKey(::RPG::GameCore::StringHash a1)
		{
			return ((::RPG::GameCore::GridFightRoleBackendRankConfigRow*(*)(::PVOID, ::RPG::GameCore::StringHash))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA_GETRANKCONFIGROWBYTRIGGERKEY_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::GridFightRoleBackendRankConfigRow*>* get_ActiveBackendRankList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::GridFightRoleBackendRankConfigRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA_GET_ACTIVEBACKENDRANKLIST_OFFSET))(this);
		}
	};
}
