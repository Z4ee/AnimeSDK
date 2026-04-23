#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9E296C95827C90A8.h"
#include "unitysdk/RPG/GameCore/ActivitySubModeType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GridFightPreset.h"
#include "unitysdk/RPG/GameCore/GridFightPropertyType.h"
#include "unitysdk/RPG/GameCore/GridFightTraitBonusType.h"
#include "unitysdk/Struct_2_34C03801479AC814.h"

class Class_0_16E4307DCC419505_382;
class Class_0_16E4307DCC419505_498;
class Class_1_12ABE890CAA92AB9;
class Class_1_23C1B7E6B450FFB8_4;
class Class_1_4AAB34DEAFC894B3;
class Class_1_6D3A625BE1D0B270;
class Class_1_6EA152E8ED858D74;
class Class_1_7FF19F6206AF6DD7_1;
class Class_1_82B09E39D0F93215;
class Class_1_8EC2A64207E05751;
class Class_1_9015B34004B876E5;
class Class_1_9EAA8F34F19AA563;
class Class_1_B3478091817B6770;
class Class_1_D17272E82AE804C2_33;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class AvatarPropertyValue; }
namespace RPG::GameCore { class BattleGridFightAvatarData; }
namespace RPG::GameCore { class BattleGridFightEquipData; }
namespace RPG::GameCore { class BattleGridFightTeamTraitData; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GridFightEnemyDifficultyLvConfigRow; }
namespace RPG::GameCore { class GridFightManager_GridFightCustomValue; }
namespace RPG::GameCore { class GridFightManager_GridFightCustomValueLookup; }
namespace RPG::GameCore { class GridFightManager_GridFightProgressRule; }
namespace RPG::GameCore { class GridFightManager_WaveKillRecordData; }
namespace RPG::GameCore { class GridFightPenaltyRuleConfigRow; }
namespace RPG::GameCore { class GridFightWaveInfo; }
namespace RPG::GameCore { class LevelBattleEventCreate; }
namespace RPG::GameCore { class LevelCharacterDie; }
namespace RPG::GameCore { class LevelCustomizeStringEvent; }
namespace RPG::GameCore { class LineUpCharacter; }
namespace RPG::GameCore { class PVEGameStatistics; }
namespace RPG::GameCore { class StageRow; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_GRIDFIGHTMANAGER_ADDDROPENTRY_OFFSET UNITYSDK_OFFSET(0xB6BDFC0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_APPLYPROJECTIONPROPERTYBYTRAITID_OFFSET UNITYSDK_OFFSET(0xB6BB090)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_APPLYPROJECTIONPROPERTY_OFFSET UNITYSDK_OFFSET(0xB6BAE10)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_CALCULATEPOWERGRIDFIGHT_OFFSET UNITYSDK_OFFSET(0xB6B82F0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_COLLECTAVATARTRAITLIST_OFFSET UNITYSDK_OFFSET(0xB6B6630)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB6B7DF0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GENSTATISTICS_OFFSET UNITYSDK_OFFSET(0xB6B6380)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GETACTIVETRAITINCLUDESUBTRAITLIST_OFFSET UNITYSDK_OFFSET(0xB6B6AB0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GETACTIVITYPROPERTY_OFFSET UNITYSDK_OFFSET(0xB6B75A0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GETAUGMENTSTT_OFFSET UNITYSDK_OFFSET(0xB6B7CF0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GETAVATARDATABYCHARACTERID_OFFSET UNITYSDK_OFFSET(0xB6B68F0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GETAVATARDATABYROLE_OFFSET UNITYSDK_OFFSET(0xB6BDB00)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GETAVATARDATAS_OFFSET UNITYSDK_OFFSET(0xB6BDC40)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GETAVATARSTAR_OFFSET UNITYSDK_OFFSET(0xB6B6530)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GETBACKENDALLTEAMPROPERTYLIST_OFFSET UNITYSDK_OFFSET(0xB6BD3D0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GETBACKENDGAMEENTITY_OFFSET UNITYSDK_OFFSET(0xB6B6450)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GETBACKENDOWNERPROPERTYLIST_OFFSET UNITYSDK_OFFSET(0xB6BD880)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GETBATTLERST_AUGMENTUPLOADDATA_OFFSET UNITYSDK_OFFSET(0xB6BECA0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GETBATTLERST_BATTLEPERCENT_OFFSET UNITYSDK_OFFSET(0xB6B9170)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GETBATTLERST_DEADLINEKILLPERCENT_OFFSET UNITYSDK_OFFSET(0xB6BE420)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GETBATTLERST_LOSEHP_OFFSET UNITYSDK_OFFSET(0xB6BE050)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GETBATTLERST_PORTALUPLOADDATA_OFFSET UNITYSDK_OFFSET(0xB6BEE60)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GETBATTLERST_TRAITUPLOADDATA_OFFSET UNITYSDK_OFFSET(0xB6BE5F0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GETBATTLERST_WAVESTTINFO_OFFSET UNITYSDK_OFFSET(0xB6BF020)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GETBEENTITYBYTRAITID_OFFSET UNITYSDK_OFFSET(0xB6BD2B0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GETCOUNTDOWNENTITY_OFFSET UNITYSDK_OFFSET(0xB6B7A40)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GETCURRENTTRAITBONUSLAYER_OFFSET UNITYSDK_OFFSET(0xB6B73B0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GETCUSTOMPROPERTY_OFFSET UNITYSDK_OFFSET(0xB6B6B10)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GETCUSTOMVALUE_OFFSET UNITYSDK_OFFSET(0xB6BF6C0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GETFILTEREDEQUIPCOUNT_OFFSET UNITYSDK_OFFSET(0xB6B7940)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GETLOSEGLOBALHP_OFFSET UNITYSDK_OFFSET(0xB6BE0B0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GETNPCDATAS_OFFSET UNITYSDK_OFFSET(0xB6BDEF0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GETPENALTYBONUSRULEID_OFFSET UNITYSDK_OFFSET(0xB6B7F90)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GETROLESTT_OFFSET UNITYSDK_OFFSET(0xB6B7D70)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GETSHOPLEVEL_OFFSET UNITYSDK_OFFSET(0xB6B63F0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GETTARGETTRAITBYID_OFFSET UNITYSDK_OFFSET(0xB6B7240)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GETTARGETTRAITBYUNIQUENAME_OFFSET UNITYSDK_OFFSET(0xB6BD010)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GETTEAMAUGMENTS_OFFSET UNITYSDK_OFFSET(0xB6B6A50)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GETTEAMTRAITLIST_OFFSET UNITYSDK_OFFSET(0xB6B69D0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GETTRAITBONUSTHESHOLDVALUE_OFFSET UNITYSDK_OFFSET(0xB6B7070)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GETTRAITSTT_OFFSET UNITYSDK_OFFSET(0xB6B7C70)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GETWHITEBOXSETTLEBONUSLIST_OFFSET UNITYSDK_OFFSET(0xB6B8080)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GET_ACTIVITYSUBMODETYPE_OFFSET UNITYSDK_OFFSET(0xB6B3C80)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GET_ADDDYNAMICEQUIPCOUNT_OFFSET UNITYSDK_OFFSET(0xB6BF740)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GET_CURRENTBATTLEPROGRESS_OFFSET UNITYSDK_OFFSET(0xB6B8230)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GET_DEADLINEKILLPROGRESS_OFFSET UNITYSDK_OFFSET(0xB6BF620)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GET_GLOBALVALUEMAP_OFFSET UNITYSDK_OFFSET(0xB6BF660)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GET_GRIDFIGHTSTATISTICS_OFFSET UNITYSDK_OFFSET(0xB6B7C50)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GET_HASCYRENEINFRONT_OFFSET UNITYSDK_OFFSET(0xB6BF640)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GET_MONSTERDIFFICULTYLVROW_OFFSET UNITYSDK_OFFSET(0xB6BF720)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GET_OWNERGAMEMODE_OFFSET UNITYSDK_OFFSET(0xB6B3FD0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GET_SHOWTRAITEFFECTLIST_OFFSET UNITYSDK_OFFSET(0xB6BF600)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GET_TOTALBATTLEPROGRESS_OFFSET UNITYSDK_OFFSET(0xB6B8290)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_ONAFTERPLAYERCREATE_OFFSET UNITYSDK_OFFSET(0xB6B9ED0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_ONBATTLEINSTANCECREATED_OFFSET UNITYSDK_OFFSET(0xB6B5310)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_ONINITIALIZE_OFFSET UNITYSDK_OFFSET(0xB6B3C90)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_REGISTERPROGRESSTARGETREMAP_OFFSET UNITYSDK_OFFSET(0xB6BF760)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_SETAUTOREFRESHGRIDFIGHTPROGRESSUI_OFFSET UNITYSDK_OFFSET(0xB6B8E80)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_SETCUSTOMPROPERTY_OFFSET UNITYSDK_OFFSET(0xB6B6D20)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_SETGLOBALHP_OFFSET UNITYSDK_OFFSET(0xB6B7F50)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_SET_ADDDYNAMICEQUIPCOUNT_OFFSET UNITYSDK_OFFSET(0xB6BF750)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_SET_DEADLINEKILLPROGRESS_OFFSET UNITYSDK_OFFSET(0xB6BF630)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_SET_GRIDFIGHTSTATISTICS_OFFSET UNITYSDK_OFFSET(0xB6B7C60)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_SET_HASCYRENEINFRONT_OFFSET UNITYSDK_OFFSET(0xB6BF650)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_SET_MONSTERDIFFICULTYLVROW_OFFSET UNITYSDK_OFFSET(0xB6BF730)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_SET_SHOWTRAITEFFECTLIST_OFFSET UNITYSDK_OFFSET(0xB6BF610)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_TRIGGERNEXTWAVE_OFFSET UNITYSDK_OFFSET(0xB6B8E30)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_TRIGGERSTAGEBONUS_OFFSET UNITYSDK_OFFSET(0xB6B8030)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_TRIGGERTRAITBONUS_OFFSET UNITYSDK_OFFSET(0xB6B7FF0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER__CACHETRAITBE_OFFSET UNITYSDK_OFFSET(0xB6BD0F0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER__CREATEBACKENDENTITYFORLINUPDATA_OFFSET UNITYSDK_OFFSET(0xB6BB540)
#define RPG_GAMECORE_GRIDFIGHTMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xB6BFD60)
#define RPG_GAMECORE_GRIDFIGHTMANAGER__INITBEMAPABILITY_OFFSET UNITYSDK_OFFSET(0xB6BC1E0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER__INITELATIONEQUIPS_OFFSET UNITYSDK_OFFSET(0xB6BCB60)
#define RPG_GAMECORE_GRIDFIGHTMANAGER__INITMAZEBUFFENHANCE_OFFSET UNITYSDK_OFFSET(0xB6BC440)
#define RPG_GAMECORE_GRIDFIGHTMANAGER__ISTRAITINCLUDEBE_OFFSET UNITYSDK_OFFSET(0xB6BCF00)
#define RPG_GAMECORE_GRIDFIGHTMANAGER__ONBATTLEPROGRESSCHANGED_OFFSET UNITYSDK_OFFSET(0xB6B8FD0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER__ONCREATEPLAYERTEAMFINISH_OFFSET UNITYSDK_OFFSET(0xB6BB440)
#define RPG_GAMECORE_GRIDFIGHTMANAGER__ONCUSTOMVALUECHANGED_OFFSET UNITYSDK_OFFSET(0xB6BB320)
#define RPG_GAMECORE_GRIDFIGHTMANAGER__ONLEVELBATTLEEVENTCREATE_OFFSET UNITYSDK_OFFSET(0xB6BC160)
#define RPG_GAMECORE_GRIDFIGHTMANAGER__ONLEVELCUSTOMSTRING_OFFSET UNITYSDK_OFFSET(0xB6B93C0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER__ONLEVELINFINITEWAVEPROGRESSCHANGE_OFFSET UNITYSDK_OFFSET(0xB6BBA10)
#define RPG_GAMECORE_GRIDFIGHTMANAGER__ONPROGRESSTARGETREMAPPED_OFFSET UNITYSDK_OFFSET(0xB6BF4F0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER__ONSHOWTRAITEFFECT_OFFSET UNITYSDK_OFFSET(0xB6BF540)
#define RPG_GAMECORE_GRIDFIGHTMANAGER__POSTONALLROLECREATEDEND_OFFSET UNITYSDK_OFFSET(0xB6B9E90)
#define RPG_GAMECORE_GRIDFIGHTMANAGER__POSTUPDATEROLEDATA_OFFSET UNITYSDK_OFFSET(0xB6BA910)
#define RPG_GAMECORE_GRIDFIGHTMANAGER__PRECHECKLIGHTTEAM_OFFSET UNITYSDK_OFFSET(0xB6BA9C0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER__PRECHECKROLEDATA_OFFSET UNITYSDK_OFFSET(0xB6BA420)
#define RPG_GAMECORE_GRIDFIGHTMANAGER__SETUPAUGMENTDATA_OFFSET UNITYSDK_OFFSET(0xB6B5290)
#define RPG_GAMECORE_GRIDFIGHTMANAGER__SETUPBACKENDAVATARABILITY_OFFSET UNITYSDK_OFFSET(0xB6B9520)
#define RPG_GAMECORE_GRIDFIGHTMANAGER__SETUPGLOBALVALUEDATA_OFFSET UNITYSDK_OFFSET(0xB6B3FE0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER__SETUPPORTALDATA_OFFSET UNITYSDK_OFFSET(0xB6B52D0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER__SETUPPROGRESSSTATISTICS_OFFSET UNITYSDK_OFFSET(0xB6B5F90)
#define RPG_GAMECORE_GRIDFIGHTMANAGER__SETUPROLEDATA_OFFSET UNITYSDK_OFFSET(0xB6B4200)
#define RPG_GAMECORE_GRIDFIGHTMANAGER__SETUPTRAITDATA_OFFSET UNITYSDK_OFFSET(0xB6B45F0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER__UPDATEGRIDFIGHTPROGRESSUI_OFFSET UNITYSDK_OFFSET(0xB6B8F30)
#define RPG_GAMECORE_GRIDFIGHTMANAGER__UPDATEROLEBACKENDEQUIPMENTEFFECT_OFFSET UNITYSDK_OFFSET(0xB6BA320)
#define RPG_GAMECORE_GRIDFIGHTMANAGER__UPDATEROLEBACKENDRANKLIST_OFFSET UNITYSDK_OFFSET(0xB6BA1B0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB6C0180)
#define RPG_GAMECORE_GRIDFIGHTMANAGER___IFIXBASEPROXY_GENSTATISTICS_OFFSET UNITYSDK_OFFSET(0xB6C0110)
#define RPG_GAMECORE_GRIDFIGHTMANAGER___IFIXBASEPROXY_ONAFTERPLAYERCREATE_OFFSET UNITYSDK_OFFSET(0xB6C0210)
#define RPG_GAMECORE_GRIDFIGHTMANAGER___IFIXBASEPROXY_ONBATTLEINSTANCECREATED_OFFSET UNITYSDK_OFFSET(0xB6C00B0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER___IFIXBASEPROXY_ONINITIALIZE_OFFSET UNITYSDK_OFFSET(0xB6C0050)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightManager_TypeDefinitionIndex = 51766;

	class GridFightManager : public ::Class_1_9E296C95827C90A8
	{
	public:
		::RPG::GameCore::GridFightWaveInfo* _NextWaveInfo; // 0x30
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* _BackendEntityList; // 0x38
		::RPG::GameCore::GameEntity* _CountDownEntity; // 0x40
		::System::Collections::Generic::List_1<::RPG::GameCore::GridFightManager_WaveKillRecordData*>* _WaveKillMonsterRecordData; // 0x48
		::System::Collections::Generic::List_1<::Class_1_B3478091817B6770*>* _ShowTraitEffectList_k__BackingField; // 0x50
		::RPG::GameCore::StageRow* _StageConfig; // 0x58
		::RPG::GameCore::GridFightPenaltyRuleConfigRow* _PenaltyRuleConfigRow; // 0x60
		::RPG::GameCore::GridFightManager_GridFightCustomValueLookup* _CustomValueLookUp; // 0x68
		::System::Collections::Generic::List_1<::Struct_2_34C03801479AC814>* BattleDropList; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*>* _BeEntityByTraitID; // 0x78
		::System::Collections::Generic::List_1<::System::UInt32>* _KillMonsterRuntimeIDSet; // 0x80
		::Class_1_9EAA8F34F19AA563* _GridFightStatistics_k__BackingField; // 0x88
		::Class_1_82B09E39D0F93215* _BattleGridFight; // 0x90
		::RPG::GameCore::GridFightEnemyDifficultyLvConfigRow* _MonsterDifficultyLvRow_k__BackingField; // 0x98
		::RPG::GameCore::GridFightManager_GridFightProgressRule* _GridFightProgressRule; // 0xA0
		::RPG::GameCore::FixPoint _DeadLineKillProgress_k__BackingField; // 0xA8
		::System::UInt32 _AddDynamicEquipCount_k__BackingField; // 0xB0
		::System::Boolean _ForceFullProgress; // 0xB4
		::System::Boolean _ShowGridFightProgress; // 0xB5
		::System::Boolean _HasCyreneInFront_k__BackingField; // 0xB6
		::System::Boolean _bSkipWaves; // 0xB7
		::System::Int32 _CurrentWaveIndex; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::ActivitySubModeType get_ActivitySubModeType()
		{
			return ((::RPG::GameCore::ActivitySubModeType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GET_ACTIVITYSUBMODETYPE_OFFSET))(this);
		}

		::System::Void OnInitialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_ONINITIALIZE_OFFSET))(this);
		}

		::System::Void OnBattleInstanceCreated()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_ONBATTLEINSTANCECREATED_OFFSET))(this);
		}

		::System::Void GenStatistics(::RPG::GameCore::PVEGameStatistics* pStt)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PVEGameStatistics*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GENSTATISTICS_OFFSET))(this, pStt);
		}

		::System::UInt32 GetShopLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GETSHOPLEVEL_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* GetBackendGameEntity(::System::UInt32 characterId)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GETBACKENDGAMEENTITY_OFFSET))(this, characterId);
		}

		::System::UInt32 GetAvatarStar(::System::UInt32 avatarId)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GETAVATARSTAR_OFFSET))(this, avatarId);
		}

		::RPG::PoolList_1<::System::UInt32>* CollectAvatarTraitList(::System::UInt32 avatarId, ::System::Boolean includeOtherEffect, ::System::Boolean includeInactiveTrait)
		{
			return ((::RPG::PoolList_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_COLLECTAVATARTRAITLIST_OFFSET))(this, avatarId, includeOtherEffect, includeInactiveTrait);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::BattleGridFightTeamTraitData*>* GetTeamTraitList(::System::Boolean activeOnly)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::BattleGridFightTeamTraitData*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GETTEAMTRAITLIST_OFFSET))(this, activeOnly);
		}

		::System::Collections::Generic::List_1<::Class_1_9015B34004B876E5*>* GetTeamAugments()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_9015B34004B876E5*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GETTEAMAUGMENTS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::BattleGridFightTeamTraitData*>* GetActiveTraitIncludeSubTraitList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::BattleGridFightTeamTraitData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GETACTIVETRAITINCLUDESUBTRAITLIST_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GetCustomProperty(::System::String* jsonEnum)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GETCUSTOMPROPERTY_OFFSET))(this, jsonEnum);
		}

		::System::Void SetCustomProperty(::System::String* jsonEnum, ::RPG::GameCore::FixPoint fixPoint)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_SETCUSTOMPROPERTY_OFFSET))(this, jsonEnum, fixPoint);
		}

		::RPG::GameCore::FixPoint GetTraitBonusThesholdValue(::System::UInt32 traitID, ::RPG::GameCore::GridFightTraitBonusType traitBonusType, ::System::Int32 thesholdIndex)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::GridFightTraitBonusType, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GETTRAITBONUSTHESHOLDVALUE_OFFSET))(this, traitID, traitBonusType, thesholdIndex);
		}

		::RPG::GameCore::FixPoint GetCurrentTraitBonusLayer(::System::UInt32 traitID, ::RPG::GameCore::GridFightTraitBonusType bonusType)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::GridFightTraitBonusType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GETCURRENTTRAITBONUSLAYER_OFFSET))(this, traitID, bonusType);
		}

		::RPG::GameCore::FixPoint GetActivityProperty(::RPG::GameCore::GameEntity* readTarget, ::RPG::GameCore::GridFightPropertyType propertyType, ::System::Boolean boolParam)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GridFightPropertyType, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GETACTIVITYPROPERTY_OFFSET))(this, readTarget, propertyType, boolParam);
		}

		::System::Int32 GetFilteredEquipCount(::System::Collections::Generic::List_1<::RPG::GameCore::BattleGridFightEquipData*>* equipList, ::System::Boolean cludeHackEquip)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::BattleGridFightEquipData*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GETFILTEREDEQUIPCOUNT_OFFSET))(this, equipList, cludeHackEquip);
		}

		::RPG::GameCore::GameEntity* GetCountdownEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GETCOUNTDOWNENTITY_OFFSET))(this);
		}

		::Class_1_9EAA8F34F19AA563* get_GridFightStatistics()
		{
			return ((::Class_1_9EAA8F34F19AA563*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GET_GRIDFIGHTSTATISTICS_OFFSET))(this);
		}

		::System::Void set_GridFightStatistics(::Class_1_9EAA8F34F19AA563* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9EAA8F34F19AA563*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_SET_GRIDFIGHTSTATISTICS_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_6D3A625BE1D0B270*>* GetTraitStt()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_6D3A625BE1D0B270*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GETTRAITSTT_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_6D3A625BE1D0B270*>* GetAugmentStt()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_6D3A625BE1D0B270*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GETAUGMENTSTT_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_6D3A625BE1D0B270*>* GetRoleStt()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_6D3A625BE1D0B270*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GETROLESTT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void SetGlobalHp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_SETGLOBALHP_OFFSET))(this);
		}

		::System::UInt32 GetPenaltyBonusRuleID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GETPENALTYBONUSRULEID_OFFSET))(this);
		}

		::System::Void TriggerTraitBonus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_TRIGGERTRAITBONUS_OFFSET))(this);
		}

		::System::Void TriggerStageBonus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_TRIGGERSTAGEBONUS_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* GetWhiteboxSettleBonusList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GETWHITEBOXSETTLEBONUSLIST_OFFSET))(this);
		}

		::System::Void CalculatePowerGridFight(::RPG::GameCore::BattleGridFightAvatarData* avatarData, ::System::Boolean fullRefresh)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleGridFightAvatarData*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_CALCULATEPOWERGRIDFIGHT_OFFSET))(this, avatarData, fullRefresh);
		}

		::System::Void TriggerNextWave()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_TRIGGERNEXTWAVE_OFFSET))(this);
		}

		::System::Void SetAutoRefreshGridFightProgressUI(::System::Boolean isOpen)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_SETAUTOREFRESHGRIDFIGHTPROGRESSUI_OFFSET))(this, isOpen);
		}

		::System::Void _OnBattleProgressChanged(::Class_0_16E4307DCC419505_498* progress)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_498*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER__ONBATTLEPROGRESSCHANGED_OFFSET))(this, progress);
		}

		::System::Void _OnLevelCustomString(::RPG::GameCore::LevelCustomizeStringEvent* realEvt)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelCustomizeStringEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER__ONLEVELCUSTOMSTRING_OFFSET))(this, realEvt);
		}

		::System::Void OnAfterPlayerCreate(::RPG::GameCore::GameEntity* pEntity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_ONAFTERPLAYERCREATE_OFFSET))(this, pEntity);
		}

		::System::Void _SetupBackendAvatarAbility()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER__SETUPBACKENDAVATARABILITY_OFFSET))(this);
		}

		::System::Void _PostOnAllRoleCreatedEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER__POSTONALLROLECREATEDEND_OFFSET))(this);
		}

		::System::Void _UpdateRoleBackendRankList(::RPG::GameCore::BattleGridFightAvatarData* avatarData, ::System::UInt32 characterRank)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleGridFightAvatarData*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER__UPDATEROLEBACKENDRANKLIST_OFFSET))(this, avatarData, characterRank);
		}

		::System::Void _UpdateRoleBackendEquipmentEffect(::RPG::GameCore::BattleGridFightAvatarData* avatarData, ::Il2CppArray<::Class_1_4AAB34DEAFC894B3*>* equipmentData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleGridFightAvatarData*, ::Il2CppArray<::Class_1_4AAB34DEAFC894B3*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER__UPDATEROLEBACKENDEQUIPMENTEFFECT_OFFSET))(this, avatarData, equipmentData);
		}

		::System::Void _SetupRoleData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER__SETUPROLEDATA_OFFSET))(this);
		}

		::System::Void _PrecheckRoleData(::RPG::GameCore::BattleGridFightAvatarData* roleData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleGridFightAvatarData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER__PRECHECKROLEDATA_OFFSET))(this, roleData);
		}

		::System::Void _PrecheckLightTeam()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER__PRECHECKLIGHTTEAM_OFFSET))(this);
		}

		::System::Void _PostUpdateRoleData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER__POSTUPDATEROLEDATA_OFFSET))(this);
		}

		::System::Void _SetupTraitData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER__SETUPTRAITDATA_OFFSET))(this);
		}

		::System::Void _SetupAugmentData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER__SETUPAUGMENTDATA_OFFSET))(this);
		}

		::System::Void _SetupPortalData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER__SETUPPORTALDATA_OFFSET))(this);
		}

		::System::Void _SetupGlobalValueData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER__SETUPGLOBALVALUEDATA_OFFSET))(this);
		}

		::System::Void ApplyProjectionProperty(::RPG::GameCore::TurnBasedAbilityComponent* tbAbilityRef)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_APPLYPROJECTIONPROPERTY_OFFSET))(this, tbAbilityRef);
		}

		::System::Void ApplyProjectionPropertyByTraitID(::RPG::GameCore::TurnBasedAbilityComponent* tbAbilityRef, ::System::UInt32 traitID)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_APPLYPROJECTIONPROPERTYBYTRAITID_OFFSET))(this, tbAbilityRef, traitID);
		}

		::System::Void _OnCustomValueChanged(::RPG::GameCore::GridFightManager_GridFightCustomValue* valueChanged)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightManager_GridFightCustomValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER__ONCUSTOMVALUECHANGED_OFFSET))(this, valueChanged);
		}

		::System::Void _OnCreatePlayerTeamFinish(::Class_0_16E4307DCC419505_382* pEvent)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER__ONCREATEPLAYERTEAMFINISH_OFFSET))(this, pEvent);
		}

		::System::Void _OnLevelInfiniteWaveProgressChange(::RPG::GameCore::LevelCharacterDie* pRealEvt)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelCharacterDie*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER__ONLEVELINFINITEWAVEPROGRESSCHANGE_OFFSET))(this, pRealEvt);
		}

		::System::Void _OnLevelBattleEventCreate(::RPG::GameCore::LevelBattleEventCreate* pRealEvt)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelBattleEventCreate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER__ONLEVELBATTLEEVENTCREATE_OFFSET))(this, pRealEvt);
		}

		::System::Void _InitBEMapAbility(::RPG::GameCore::GameEntity* beEntity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER__INITBEMAPABILITY_OFFSET))(this, beEntity);
		}

		::System::Void _InitMazeBuffEnhance(::RPG::GameCore::GameEntity* beEntity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER__INITMAZEBUFFENHANCE_OFFSET))(this, beEntity);
		}

		::System::Void _InitElationEquips(::RPG::GameCore::GameEntity* beEntity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER__INITELATIONEQUIPS_OFFSET))(this, beEntity);
		}

		::System::Boolean _IsTraitIncludeBE(::RPG::GameCore::GameEntity* beEntity, ::RPG::GameCore::BattleGridFightTeamTraitData* trait)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::BattleGridFightTeamTraitData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER__ISTRAITINCLUDEBE_OFFSET))(this, beEntity, trait);
		}

		::System::Void _CacheTraitBE(::RPG::GameCore::GameEntity* beEntity, ::System::UInt32 traitID)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER__CACHETRAITBE_OFFSET))(this, beEntity, traitID);
		}

		::RPG::GameCore::GameEntity* GetBEEntityByTraitID(::System::UInt32 traitID)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GETBEENTITYBYTRAITID_OFFSET))(this, traitID);
		}

		::RPG::GameCore::BattleGridFightTeamTraitData* GetTargetTraitByUniqueName(::System::String* beUniqueName)
		{
			return ((::RPG::GameCore::BattleGridFightTeamTraitData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GETTARGETTRAITBYUNIQUENAME_OFFSET))(this, beUniqueName);
		}

		::RPG::GameCore::BattleGridFightTeamTraitData* GetTargetTraitByID(::System::UInt32 tagID)
		{
			return ((::RPG::GameCore::BattleGridFightTeamTraitData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GETTARGETTRAITBYID_OFFSET))(this, tagID);
		}

		::RPG::PoolList_1<::RPG::GameCore::AvatarPropertyValue*>* GetBackendAllTeamPropertyList()
		{
			return ((::RPG::PoolList_1<::RPG::GameCore::AvatarPropertyValue*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GETBACKENDALLTEAMPROPERTYLIST_OFFSET))(this);
		}

		::RPG::PoolList_1<::RPG::GameCore::AvatarPropertyValue*>* GetBackendOwnerPropertyList(::System::UInt32 roleID)
		{
			return ((::RPG::PoolList_1<::RPG::GameCore::AvatarPropertyValue*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GETBACKENDOWNERPROPERTYLIST_OFFSET))(this, roleID);
		}

		::System::Void _UpdateGridFightProgressUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER__UPDATEGRIDFIGHTPROGRESSUI_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* _CreateBackendEntityForLinupData(::RPG::GameCore::LineUpCharacter* pLineupCharacter)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::LineUpCharacter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER__CREATEBACKENDENTITYFORLINUPDATA_OFFSET))(this, pLineupCharacter);
		}

		::RPG::GameCore::BattleGridFightAvatarData* GetAvatarDataByCharacterID(::System::UInt32 avatarId)
		{
			return ((::RPG::GameCore::BattleGridFightAvatarData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GETAVATARDATABYCHARACTERID_OFFSET))(this, avatarId);
		}

		::RPG::GameCore::BattleGridFightAvatarData* GetAvatarDataByRole(::System::UInt32 roleID)
		{
			return ((::RPG::GameCore::BattleGridFightAvatarData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GETAVATARDATABYROLE_OFFSET))(this, roleID);
		}

		::RPG::PoolList_1<::RPG::GameCore::BattleGridFightAvatarData*>* GetAvatarDatas(::RPG::GameCore::GridFightPreset preset)
		{
			return ((::RPG::PoolList_1<::RPG::GameCore::BattleGridFightAvatarData*>*(*)(::PVOID, ::RPG::GameCore::GridFightPreset))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GETAVATARDATAS_OFFSET))(this, preset);
		}

		::RPG::PoolList_1<::Class_1_6EA152E8ED858D74*>* GetNPCDatas()
		{
			return ((::RPG::PoolList_1<::Class_1_6EA152E8ED858D74*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GETNPCDATAS_OFFSET))(this);
		}

		::System::Void AddDropEntry(::RPG::GameCore::GameEntity* role, ::Struct_2_34C03801479AC814 dropEntry)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Struct_2_34C03801479AC814))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_ADDDROPENTRY_OFFSET))(this, role, dropEntry);
		}

		::System::UInt32 GetBattleRst_LoseHP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GETBATTLERST_LOSEHP_OFFSET))(this);
		}

		::System::UInt32 GetBattleRst_BattlePercent(::System::Boolean upload)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GETBATTLERST_BATTLEPERCENT_OFFSET))(this, upload);
		}

		::System::UInt32 GetBattleRst_DeadLineKillPercent()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GETBATTLERST_DEADLINEKILLPERCENT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_1_8EC2A64207E05751*>* GetBattleRst_TraitUploadData()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_8EC2A64207E05751*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GETBATTLERST_TRAITUPLOADDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_1_23C1B7E6B450FFB8_4*>* GetBattleRst_AugmentUploadData()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_23C1B7E6B450FFB8_4*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GETBATTLERST_AUGMENTUPLOADDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_1_D17272E82AE804C2_33*>* GetBattleRst_PortalUploadData()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_D17272E82AE804C2_33*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GETBATTLERST_PORTALUPLOADDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_1_7FF19F6206AF6DD7_1*>* GetBattleRst_WaveSttInfo()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_7FF19F6206AF6DD7_1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GETBATTLERST_WAVESTTINFO_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_CurrentBattleProgress()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GET_CURRENTBATTLEPROGRESS_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_TotalBattleProgress()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GET_TOTALBATTLEPROGRESS_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GetLoseGlobalHP()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GETLOSEGLOBALHP_OFFSET))(this);
		}

		::System::Void _SetupProgressStatistics()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER__SETUPPROGRESSSTATISTICS_OFFSET))(this);
		}

		::System::Void _OnProgressTargetRemapped(::RPG::GameCore::GameEntity* redirectEntity, ::RPG::GameCore::GameEntity* sourceEntity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER__ONPROGRESSTARGETREMAPPED_OFFSET))(this, redirectEntity, sourceEntity);
		}

		::System::Void _OnShowTraitEffect(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER__ONSHOWTRAITEFFECT_OFFSET))(this, arg);
		}

		::System::Collections::Generic::List_1<::Class_1_B3478091817B6770*>* get_ShowTraitEffectList()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_B3478091817B6770*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GET_SHOWTRAITEFFECTLIST_OFFSET))(this);
		}

		::System::Void set_ShowTraitEffectList(::System::Collections::Generic::List_1<::Class_1_B3478091817B6770*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_B3478091817B6770*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_SET_SHOWTRAITEFFECTLIST_OFFSET))(this, value);
		}

		::RPG::GameCore::TurnBasedGameMode* get_OwnerGameMode()
		{
			return ((::RPG::GameCore::TurnBasedGameMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GET_OWNERGAMEMODE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_DeadLineKillProgress()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GET_DEADLINEKILLPROGRESS_OFFSET))(this);
		}

		::System::Void set_DeadLineKillProgress(::RPG::GameCore::FixPoint value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_SET_DEADLINEKILLPROGRESS_OFFSET))(this, value);
		}

		::System::Boolean get_HasCyreneInFront()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GET_HASCYRENEINFRONT_OFFSET))(this);
		}

		::System::Void set_HasCyreneInFront(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_SET_HASCYRENEINFRONT_OFFSET))(this, value);
		}

		::Class_1_12ABE890CAA92AB9* get_GlobalValueMap()
		{
			return ((::Class_1_12ABE890CAA92AB9*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GET_GLOBALVALUEMAP_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GetCustomValue(::System::String* key)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GETCUSTOMVALUE_OFFSET))(this, key);
		}

		::RPG::GameCore::GridFightEnemyDifficultyLvConfigRow* get_MonsterDifficultyLvRow()
		{
			return ((::RPG::GameCore::GridFightEnemyDifficultyLvConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GET_MONSTERDIFFICULTYLVROW_OFFSET))(this);
		}

		::System::Void set_MonsterDifficultyLvRow(::RPG::GameCore::GridFightEnemyDifficultyLvConfigRow* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightEnemyDifficultyLvConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_SET_MONSTERDIFFICULTYLVROW_OFFSET))(this, value);
		}

		::System::UInt32 get_AddDynamicEquipCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GET_ADDDYNAMICEQUIPCOUNT_OFFSET))(this);
		}

		::System::Void set_AddDynamicEquipCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_SET_ADDDYNAMICEQUIPCOUNT_OFFSET))(this, value);
		}

		::System::Void RegisterProgressTargetRemap(::RPG::GameCore::GameEntity* redirectEntity, ::RPG::GameCore::GameEntity* sourceEntity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_REGISTERPROGRESSTARGETREMAP_OFFSET))(this, redirectEntity, sourceEntity);
		}

		::System::Void __iFixBaseProxy_OnInitialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER___IFIXBASEPROXY_ONINITIALIZE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnBattleInstanceCreated()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER___IFIXBASEPROXY_ONBATTLEINSTANCECREATED_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_GenStatistics(::RPG::GameCore::PVEGameStatistics* P0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PVEGameStatistics*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER___IFIXBASEPROXY_GENSTATISTICS_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnAfterPlayerCreate(::RPG::GameCore::GameEntity* P0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER___IFIXBASEPROXY_ONAFTERPLAYERCREATE_OFFSET))(this, P0);
		}
	};
}
