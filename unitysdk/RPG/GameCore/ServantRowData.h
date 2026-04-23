#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/AvatarSkillTreePointTriggerKey.h"
#include "unitysdk/RPG/GameCore/CombatPowerAvatarRarityType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/Struct_2_2D4CFA76DB950A9A.h"
#include "unitysdk/Struct_2_88A74A9E9AE5BA51.h"
#include "unitysdk/System/Object.h"

class Class_1_9B9B872136BC0EE3;
class Class_2_897CE1512E86E87A;
namespace RPG::GameCore { class AvatarRankConfigRow; }
namespace RPG::GameCore { class AvatarRowData; }
namespace RPG::GameCore { class AvatarServantSkillRow; }
namespace RPG::GameCore { class AvatarSkillTreeRow; }
namespace RPG::GameCore { class CharacterConfig; }
namespace RPG::GameCore { class ElementResistanceConfig; }
namespace RPG::GameCore { class IAvatarServantRowWrap; }
namespace RPG::GameCore { class ICharacterRowData; }
namespace RPG::GameCore { class ICharacterSkillRowData; }
namespace RPG::GameCore { class ServantConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_SERVANTROWDATA_GETRANKCONFIGROWBYTRIGGERKEY_OFFSET UNITYSDK_OFFSET(0xB7319D0)
#define RPG_GAMECORE_SERVANTROWDATA_GETRANKROWMAP_OFFSET UNITYSDK_OFFSET(0xB731510)
#define RPG_GAMECORE_SERVANTROWDATA_GETSKILLROWDATABYID_OFFSET UNITYSDK_OFFSET(0xB7312E0)
#define RPG_GAMECORE_SERVANTROWDATA_GETSKILLROWDATABYNAME_OFFSET UNITYSDK_OFFSET(0xB731280)
#define RPG_GAMECORE_SERVANTROWDATA_GETSKILLROWDATA_OFFSET UNITYSDK_OFFSET(0xB7311F0)
#define RPG_GAMECORE_SERVANTROWDATA_GETSKILLTREELEVELMAP_OFFSET UNITYSDK_OFFSET(0xB7316F0)
#define RPG_GAMECORE_SERVANTROWDATA_GETSKILLTREEPROPERTYMAP_OFFSET UNITYSDK_OFFSET(0xB7317E0)
#define RPG_GAMECORE_SERVANTROWDATA_GETSKILLTREEROWBYTRIGGERKEY_OFFSET UNITYSDK_OFFSET(0xB7318D0)
#define RPG_GAMECORE_SERVANTROWDATA_GETSKILLTREEROWMAP_OFFSET UNITYSDK_OFFSET(0xB731600)
#define RPG_GAMECORE_SERVANTROWDATA_GET_ACTIONICONPATH_OFFSET UNITYSDK_OFFSET(0xB730AE0)
#define RPG_GAMECORE_SERVANTROWDATA_GET_AIPATH_OFFSET UNITYSDK_OFFSET(0xB72F4C0)
#define RPG_GAMECORE_SERVANTROWDATA_GET_ATTACK_OFFSET UNITYSDK_OFFSET(0xB72F950)
#define RPG_GAMECORE_SERVANTROWDATA_GET_AVATARBASETYPE_OFFSET UNITYSDK_OFFSET(0xB72F1A0)
#define RPG_GAMECORE_SERVANTROWDATA_GET_AVATARSERVANTROW_OFFSET UNITYSDK_OFFSET(0xB72F2C0)
#define RPG_GAMECORE_SERVANTROWDATA_GET_AVATARSIDEICONPATH_OFFSET UNITYSDK_OFFSET(0xB730DB0)
#define RPG_GAMECORE_SERVANTROWDATA_GET_BASEAGGRO_OFFSET UNITYSDK_OFFSET(0xB730210)
#define RPG_GAMECORE_SERVANTROWDATA_GET_CHARACTERNAME_OFFSET UNITYSDK_OFFSET(0xB730710)
#define RPG_GAMECORE_SERVANTROWDATA_GET_CONFIGID_OFFSET UNITYSDK_OFFSET(0xB72F2F0)
#define RPG_GAMECORE_SERVANTROWDATA_GET_CRITICALCHANCE_OFFSET UNITYSDK_OFFSET(0xB72FF40)
#define RPG_GAMECORE_SERVANTROWDATA_GET_CRITICALDAMAGE_OFFSET UNITYSDK_OFFSET(0xB730030)
#define RPG_GAMECORE_SERVANTROWDATA_GET_DAMAGETYPERESISTANCE_OFFSET UNITYSDK_OFFSET(0xB731040)
#define RPG_GAMECORE_SERVANTROWDATA_GET_DAMAGETYPE_OFFSET UNITYSDK_OFFSET(0xB730FD0)
#define RPG_GAMECORE_SERVANTROWDATA_GET_DEFENCE_OFFSET UNITYSDK_OFFSET(0xB72FA40)
#define RPG_GAMECORE_SERVANTROWDATA_GET_HAVEACTIONDELAY_OFFSET UNITYSDK_OFFSET(0xB731090)
#define RPG_GAMECORE_SERVANTROWDATA_GET_HEADICONPATH_OFFSET UNITYSDK_OFFSET(0xB730900)
#define RPG_GAMECORE_SERVANTROWDATA_GET_INITACTIONDELAYRATIO_OFFSET UNITYSDK_OFFSET(0xB7305D0)
#define RPG_GAMECORE_SERVANTROWDATA_GET_INITHP_OFFSET UNITYSDK_OFFSET(0xB72F940)
#define RPG_GAMECORE_SERVANTROWDATA_GET_INTRODUCTION_OFFSET UNITYSDK_OFFSET(0xB730850)
#define RPG_GAMECORE_SERVANTROWDATA_GET_JSONPATH_OFFSET UNITYSDK_OFFSET(0xB72F3D0)
#define RPG_GAMECORE_SERVANTROWDATA_GET_JSON_OFFSET UNITYSDK_OFFSET(0xB72F2D0)
#define RPG_GAMECORE_SERVANTROWDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xB72F520)
#define RPG_GAMECORE_SERVANTROWDATA_GET_MAXHP_OFFSET UNITYSDK_OFFSET(0xB72F540)
#define RPG_GAMECORE_SERVANTROWDATA_GET_MAXSTANCE_OFFSET UNITYSDK_OFFSET(0xB730300)
#define RPG_GAMECORE_SERVANTROWDATA_GET_MINIMUMFATIGUERATIO_OFFSET UNITYSDK_OFFSET(0xB730120)
#define RPG_GAMECORE_SERVANTROWDATA_GET_MODELPATH_OFFSET UNITYSDK_OFFSET(0xB730620)
#define RPG_GAMECORE_SERVANTROWDATA_GET_NATUREID_OFFSET UNITYSDK_OFFSET(0xB730FC0)
#define RPG_GAMECORE_SERVANTROWDATA_GET_PROMOTION_OFFSET UNITYSDK_OFFSET(0xB731420)
#define RPG_GAMECORE_SERVANTROWDATA_GET_RANK_OFFSET UNITYSDK_OFFSET(0xB731340)
#define RPG_GAMECORE_SERVANTROWDATA_GET_RARITY_OFFSET UNITYSDK_OFFSET(0xB72F200)
#define RPG_GAMECORE_SERVANTROWDATA_GET_RESISTANCE_OFFSET UNITYSDK_OFFSET(0xB7303F0)
#define RPG_GAMECORE_SERVANTROWDATA_GET_ROUNDICONPATH_OFFSET UNITYSDK_OFFSET(0xB7309F0)
#define RPG_GAMECORE_SERVANTROWDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0xB72F280)
#define RPG_GAMECORE_SERVANTROWDATA_GET_SERVANTJSON_OFFSET UNITYSDK_OFFSET(0xB72F2E0)
#define RPG_GAMECORE_SERVANTROWDATA_GET_SERVANTMINIICONPATH_OFFSET UNITYSDK_OFFSET(0xB730DF0)
#define RPG_GAMECORE_SERVANTROWDATA_GET_SIDEAVATARHEADICONPATH_OFFSET UNITYSDK_OFFSET(0xB730BD0)
#define RPG_GAMECORE_SERVANTROWDATA_GET_SKILLROWDATAS_OFFSET UNITYSDK_OFFSET(0xB72F530)
#define RPG_GAMECORE_SERVANTROWDATA_GET_SPEED_OFFSET UNITYSDK_OFFSET(0xB72FB30)
#define RPG_GAMECORE_SERVANTROWDATA_GET_SPNEED_OFFSET UNITYSDK_OFFSET(0xB731050)
#define RPG_GAMECORE_SERVANTROWDATA_GET_STATUSPROBABILITY_OFFSET UNITYSDK_OFFSET(0xB7304E0)
#define RPG_GAMECORE_SERVANTROWDATA_GET_SUMMONERROWDATA_OFFSET UNITYSDK_OFFSET(0xB72F190)
#define RPG_GAMECORE_SERVANTROWDATA_GET_WAITINGAVATARHEADICONPATH_OFFSET UNITYSDK_OFFSET(0xB730CC0)
#define RPG_GAMECORE_SERVANTROWDATA_INITFROMCREATEPARAMS_OFFSET UNITYSDK_OFFSET(0xB72EA80)
#define RPG_GAMECORE_SERVANTROWDATA_INITFROMSERVANTDATA_1_OFFSET UNITYSDK_OFFSET(0xB72EA10)
#define RPG_GAMECORE_SERVANTROWDATA_INITFROMSERVANTDATA_OFFSET UNITYSDK_OFFSET(0xB72E8B0)
#define RPG_GAMECORE_SERVANTROWDATA_INIT_OFFSET UNITYSDK_OFFSET(0xB72E410)
#define RPG_GAMECORE_SERVANTROWDATA_OVERRIDEDATA_OFFSET UNITYSDK_OFFSET(0xB7310A0)
#define RPG_GAMECORE_SERVANTROWDATA_OVERRIDEDISPLAY_OFFSET UNITYSDK_OFFSET(0xB730EE0)
#define RPG_GAMECORE_SERVANTROWDATA_SET_ROW_OFFSET UNITYSDK_OFFSET(0xB72F290)
#define RPG_GAMECORE_SERVANTROWDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB72E400)
#define RPG_GAMECORE_SERVANTROWDATA__INITDATA_OFFSET UNITYSDK_OFFSET(0xB72E480)
#define RPG_GAMECORE_SERVANTROWDATA__SETUPSKILLLIST_OFFSET UNITYSDK_OFFSET(0xB72EB20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ServantRowData_TypeDefinitionIndex = 52471;

	class ServantRowData : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::AvatarServantSkillRow*>** StaticGet__TmpSkillRowMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::AvatarServantSkillRow*>**)Il2CppClass::FromTypeDefinitionIndex(ServantRowData_TypeDefinitionIndex)->GetStaticField(0x5CE80);
		}
		::RPG::GameCore::ServantConfig* _Json; // 0x10
		::RPG::GameCore::IAvatarServantRowWrap* _Row; // 0x18
		::RPG::GameCore::ICharacterRowData* _SummonerRowData; // 0x20
		::Struct_2_88A74A9E9AE5BA51 _OverrideDisplay; // 0x28
		::System::Collections::Generic::List_1<::RPG::GameCore::ICharacterSkillRowData*>* _SkillRowDatas; // 0x88
		::Struct_2_2D4CFA76DB950A9A _OverrideData; // 0x90
		::System::UInt32 _Level; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA__CTOR_OFFSET))(this);
		}

		::System::Void Init(::System::UInt32 servantID, ::RPG::GameCore::ServantConfig* servantConfig, ::RPG::GameCore::ICharacterRowData* summonerRowData)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::ServantConfig*, ::RPG::GameCore::ICharacterRowData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_INIT_OFFSET))(this, servantID, servantConfig, summonerRowData);
		}

		::System::Void InitFromServantData(::Class_1_9B9B872136BC0EE3* servantData, ::RPG::GameCore::AvatarRowData* avatarRowData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9B9B872136BC0EE3*, ::RPG::GameCore::AvatarRowData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_INITFROMSERVANTDATA_OFFSET))(this, servantData, avatarRowData);
		}

		::System::Void InitFromServantData_1(::System::UInt32 servantID, ::RPG::GameCore::CharacterConfig* servantConfig, ::RPG::GameCore::ICharacterRowData* summonerRowData)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::CharacterConfig*, ::RPG::GameCore::ICharacterRowData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_INITFROMSERVANTDATA_1_OFFSET))(this, servantID, servantConfig, summonerRowData);
		}

		::System::Void InitFromCreateParams(::Class_2_897CE1512E86E87A* createParams)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_897CE1512E86E87A*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_INITFROMCREATEPARAMS_OFFSET))(this, createParams);
		}

		::System::Void _InitData(::System::UInt32 characterID, ::RPG::GameCore::CharacterConfig* jsonConfig, ::RPG::GameCore::ICharacterRowData* summonerRowData)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::CharacterConfig*, ::RPG::GameCore::ICharacterRowData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA__INITDATA_OFFSET))(this, characterID, jsonConfig, summonerRowData);
		}

		::RPG::GameCore::ICharacterRowData* get_SummonerRowData()
		{
			return ((::RPG::GameCore::ICharacterRowData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_GET_SUMMONERROWDATA_OFFSET))(this);
		}

		::RPG::GameCore::AvatarBaseType get_AvatarBaseType()
		{
			return ((::RPG::GameCore::AvatarBaseType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_GET_AVATARBASETYPE_OFFSET))(this);
		}

		::RPG::GameCore::CombatPowerAvatarRarityType get_Rarity()
		{
			return ((::RPG::GameCore::CombatPowerAvatarRarityType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_GET_RARITY_OFFSET))(this);
		}

		::System::Object* get_Row()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_GET_ROW_OFFSET))(this);
		}

		::System::Void set_Row(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_SET_ROW_OFFSET))(this, value);
		}

		::RPG::GameCore::IAvatarServantRowWrap* get_AvatarServantRow()
		{
			return ((::RPG::GameCore::IAvatarServantRowWrap*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_GET_AVATARSERVANTROW_OFFSET))(this);
		}

		::RPG::GameCore::CharacterConfig* get_Json()
		{
			return ((::RPG::GameCore::CharacterConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_GET_JSON_OFFSET))(this);
		}

		::RPG::GameCore::ServantConfig* get_ServantJson()
		{
			return ((::RPG::GameCore::ServantConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_GET_SERVANTJSON_OFFSET))(this);
		}

		::System::UInt32 get_ConfigID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_GET_CONFIGID_OFFSET))(this);
		}

		::System::String* get_JsonPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_GET_JSONPATH_OFFSET))(this);
		}

		::System::String* get_AIPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_GET_AIPATH_OFFSET))(this);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_GET_LEVEL_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::ICharacterSkillRowData*>* get_SkillRowDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::ICharacterSkillRowData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_GET_SKILLROWDATAS_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_MaxHP()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_GET_MAXHP_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_InitHP()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_GET_INITHP_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_Attack()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_GET_ATTACK_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_Defence()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_GET_DEFENCE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_Speed()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_GET_SPEED_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_CriticalChance()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_GET_CRITICALCHANCE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_CriticalDamage()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_GET_CRITICALDAMAGE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_MinimumFatigueRatio()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_GET_MINIMUMFATIGUERATIO_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_BaseAggro()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_GET_BASEAGGRO_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_MaxStance()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_GET_MAXSTANCE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_Resistance()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_GET_RESISTANCE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_StatusProbability()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_GET_STATUSPROBABILITY_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_InitActionDelayRatio()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_GET_INITACTIONDELAYRATIO_OFFSET))(this);
		}

		::System::String* get_ModelPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_GET_MODELPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_CharacterName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_GET_CHARACTERNAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Introduction()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_GET_INTRODUCTION_OFFSET))(this);
		}

		::System::String* get_HeadIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_GET_HEADICONPATH_OFFSET))(this);
		}

		::System::String* get_RoundIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_GET_ROUNDICONPATH_OFFSET))(this);
		}

		::System::String* get_ActionIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_GET_ACTIONICONPATH_OFFSET))(this);
		}

		::System::String* get_SideAvatarHeadIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_GET_SIDEAVATARHEADICONPATH_OFFSET))(this);
		}

		::System::String* get_WaitingAvatarHeadIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_GET_WAITINGAVATARHEADICONPATH_OFFSET))(this);
		}

		::System::String* get_AvatarSideIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_GET_AVATARSIDEICONPATH_OFFSET))(this);
		}

		::System::String* get_ServantMiniIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_GET_SERVANTMINIICONPATH_OFFSET))(this);
		}

		::System::Void OverrideDisplay(::Struct_2_88A74A9E9AE5BA51 overrideData)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_88A74A9E9AE5BA51))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_OVERRIDEDISPLAY_OFFSET))(this, overrideData);
		}

		::System::UInt32 get_NatureID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_GET_NATUREID_OFFSET))(this);
		}

		::RPG::GameCore::AttackDamageType get_DamageType()
		{
			return ((::RPG::GameCore::AttackDamageType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_GET_DAMAGETYPE_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::ElementResistanceConfig*>* get_DamageTypeResistance()
		{
			return ((::Il2CppArray<::RPG::GameCore::ElementResistanceConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_GET_DAMAGETYPERESISTANCE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_SPNeed()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_GET_SPNEED_OFFSET))(this);
		}

		::System::Boolean get_HaveActionDelay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_GET_HAVEACTIONDELAY_OFFSET))(this);
		}

		::System::Void OverrideData(::Struct_2_2D4CFA76DB950A9A overrideData)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_2D4CFA76DB950A9A))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_OVERRIDEDATA_OFFSET))(this, overrideData);
		}

		::RPG::GameCore::ICharacterSkillRowData* GetSkillRowData(::System::Int32 nSkillIndex)
		{
			return ((::RPG::GameCore::ICharacterSkillRowData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_GETSKILLROWDATA_OFFSET))(this, nSkillIndex);
		}

		::RPG::GameCore::ICharacterSkillRowData* GetSkillRowDataByName(::System::String* skillName)
		{
			return ((::RPG::GameCore::ICharacterSkillRowData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_GETSKILLROWDATABYNAME_OFFSET))(this, skillName);
		}

		::RPG::GameCore::ICharacterSkillRowData* GetSkillRowDataByID(::System::UInt32 skillID)
		{
			return ((::RPG::GameCore::ICharacterSkillRowData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_GETSKILLROWDATABYID_OFFSET))(this, skillID);
		}

		::System::UInt32 get_Rank()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_GET_RANK_OFFSET))(this);
		}

		::System::UInt32 get_Promotion()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_GET_PROMOTION_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::RPG::GameCore::AvatarRankConfigRow*>* GetRankRowMap()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::RPG::GameCore::AvatarRankConfigRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_GETRANKROWMAP_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::GameCore::AvatarSkillTreeRow*>* GetSkillTreeRowMap()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::GameCore::AvatarSkillTreeRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_GETSKILLTREEROWMAP_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* GetSkillTreeLevelMap()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_GETSKILLTREELEVELMAP_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint>* GetSkillTreePropertyMap()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_GETSKILLTREEPROPERTYMAP_OFFSET))(this);
		}

		::RPG::GameCore::AvatarSkillTreeRow* GetSkillTreeRowByTriggerKey(::RPG::GameCore::AvatarSkillTreePointTriggerKey pTriggerKey)
		{
			return ((::RPG::GameCore::AvatarSkillTreeRow*(*)(::PVOID, ::RPG::GameCore::AvatarSkillTreePointTriggerKey))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_GETSKILLTREEROWBYTRIGGERKEY_OFFSET))(this, pTriggerKey);
		}

		::RPG::GameCore::AvatarRankConfigRow* GetRankConfigRowByTriggerKey(::RPG::GameCore::StringHash pTriggerKey)
		{
			return ((::RPG::GameCore::AvatarRankConfigRow*(*)(::PVOID, ::RPG::GameCore::StringHash))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_GETRANKCONFIGROWBYTRIGGERKEY_OFFSET))(this, pTriggerKey);
		}

		::System::Void _SetupSkillList(::Il2CppArray<::System::UInt32>* SkillIdList, ::Il2CppArray<::System::UInt32>* inheritedSkillList)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA__SETUPSKILLLIST_OFFSET))(this, SkillIdList, inheritedSkillList);
		}
	};
}
