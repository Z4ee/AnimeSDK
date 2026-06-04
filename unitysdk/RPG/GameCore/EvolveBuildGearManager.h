#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9E296C95827C90A8.h"
#include "unitysdk/Class_1_9E296C95827C90A8_ERegisterMode.h"
#include "unitysdk/RPG/GameCore/ActivitySubModeType.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/EvolveBuildFeatureType.h"
#include "unitysdk/RPG/GameCore/EvolveBuildGearManager_DebugCsvLogRow.h"
#include "unitysdk/RPG/GameCore/EvolveBuildGearManager_DebugCsvMode.h"
#include "unitysdk/RPG/GameCore/EvolveBuildGearManager_EvolveBuildPauseConfig.h"
#include "unitysdk/RPG/GameCore/EvolveBuildPropertyType.h"
#include "unitysdk/RPG/GameCore/EvolveBuildSeason.h"
#include "unitysdk/RPG/GameCore/EvolveGearType.h"
#include "unitysdk/RPG/GameCore/EvolvePeriodType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_1DAEAAA43D28FC47;
class Class_1_3B8811FC98169DA6;
class Class_1_48FE7ED9C7C8C788;
class Class_1_6E48A12B40FA04FD;
class Class_1_7AB88D713F5121B3_40;
class Class_1_827373C1CEDFE355;
class Class_1_B66FD2332404CEBB;
class Class_1_E7A847EAD72D587F;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::Client { class SortedEvolveBuildGearEquipInfoLists; }
namespace RPG::GameCore { class ActivityEvolveBuildGearRow; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class EvolveBuildGearEquipInfo; }
namespace RPG::GameCore { class EvolveBuildGearManager_ExpCalculator; }
namespace RPG::GameCore { class EvolveBuildGearManager_IEvolveBuildSeasonStrategy; }
namespace RPG::GameCore { class EvolveBuildGearSelectInfo; }
namespace RPG::GameCore { class EvolveGearConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelCharacterDie; }
namespace RPG::GameCore { class LevelDamageEntityPhase1; }
namespace RPG::GameCore { class LevelMainMonsterChange; }
namespace RPG::GameCore { class LevelPreDamageEntity; }
namespace RPG::GameCore { class LevelWaveMonster; }
namespace RPG::GameCore { class LevelWaveMonsterBegin; }
namespace RPG::GameCore { class PVEGameStatistics; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_APPLYCARD_OFFSET UNITYSDK_OFFSET(0xCDD5430)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_AUTOSELECTGEAR_OFFSET UNITYSDK_OFFSET(0xCDE1970)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_DEBUGRANDOMCARD_OFFSET UNITYSDK_OFFSET(0xCDD6C40)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_DEBUGRANDOMGEAR_OFFSET UNITYSDK_OFFSET(0xCDD6170)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_DEBUGRANDOMTREASUREPIECECOUNT_OFFSET UNITYSDK_OFFSET(0xCDD8040)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_DEBUGRANDOMTREASURE_OFFSET UNITYSDK_OFFSET(0xCDD7310)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCDDBFD0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GAINNEWCARD_OFFSET UNITYSDK_OFFSET(0xCDD5280)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GAINNEWGEAR_OFFSET UNITYSDK_OFFSET(0xCDD8FC0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GENCARDFORSELECTED_OFFSET UNITYSDK_OFFSET(0xCDD5110)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GENCARDONCE_OFFSET UNITYSDK_OFFSET(0xCDD5720)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GENEXTRATURNSNAPSHOTHASH_OFFSET UNITYSDK_OFFSET(0xCDE2AD0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GENGEARFORSELECTED_OFFSET UNITYSDK_OFFSET(0xCDE09C0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GENGEARFORTREASURE_OFFSET UNITYSDK_OFFSET(0xCDD7960)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GENSPECIFIEDGEARFORSELECTED_OFFSET UNITYSDK_OFFSET(0xCDE0E20)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GENSTATISTICS_OFFSET UNITYSDK_OFFSET(0xCDDD240)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GETALLEQUIPPEDGEAR_1_OFFSET UNITYSDK_OFFSET(0xCDE2170)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GETALLEQUIPPEDGEAR_2_OFFSET UNITYSDK_OFFSET(0xCDE2880)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GETALLEQUIPPEDGEAR_OFFSET UNITYSDK_OFFSET(0xCDDA800)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GETALLEXCEPTEQUIPPEDGEAR_OFFSET UNITYSDK_OFFSET(0xCDDAAE0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GETALLPERIODMAXWAVECOUNT_OFFSET UNITYSDK_OFFSET(0xCDDF350)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GETGEARSELECTPROGRESS_OFFSET UNITYSDK_OFFSET(0xCDE1EA0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GETISGEARDAMAGETYPECONNECT_OFFSET UNITYSDK_OFFSET(0xCDDADB0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GETISGEARTAGCONNECT_OFFSET UNITYSDK_OFFSET(0xCDDA620)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GETPASTPERIODWAVECOUNT_OFFSET UNITYSDK_OFFSET(0xCDDF270)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GETPROPERTYINUINT_OFFSET UNITYSDK_OFFSET(0xCDDEF70)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GETPROPERTY_OFFSET UNITYSDK_OFFSET(0xCDDE5B0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GETRESONANCEIDSINPACKET_OFFSET UNITYSDK_OFFSET(0xCDDA4E0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GETSLOTCAPACITY_OFFSET UNITYSDK_OFFSET(0xCDE1FB0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GETTREASUREPIECECOUNT_OFFSET UNITYSDK_OFFSET(0xCDD81D0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GETUNLOCKSLOTCAPACITY_OFFSET UNITYSDK_OFFSET(0xCDE2090)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GET_ACTIVITYSUBMODETYPE_OFFSET UNITYSDK_OFFSET(0xCDDB500)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GET_AUTOSELECT_OFFSET UNITYSDK_OFFSET(0xCDD6130)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GET_AUTOSKIPSELECT_OFFSET UNITYSDK_OFFSET(0xCDD6150)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GET_BASECARDREROLLCOUNT_OFFSET UNITYSDK_OFFSET(0xCDD5DC0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GET_CARDBAG_OFFSET UNITYSDK_OFFSET(0xCDD5E20)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GET_CONST_COINFORFULLPACK_OFFSET UNITYSDK_OFFSET(0xCDE5BF0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GET_CONST_TREASUREALTERCOINPERPIECE_OFFSET UNITYSDK_OFFSET(0xCDE5C20)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GET_CONST_TREASUREBASICCOINPERPIECE_OFFSET UNITYSDK_OFFSET(0xCDE5C10)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GET_CONST_TREASUREBASICCOIN_OFFSET UNITYSDK_OFFSET(0xCDE5C00)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GET_EQUIPGEAR_OFFSET UNITYSDK_OFFSET(0xCDE5C70)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GET_EQUIPPLUGIN_OFFSET UNITYSDK_OFFSET(0xCDE5C90)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GET_EQUIPTOOLANDFORGE_OFFSET UNITYSDK_OFFSET(0xCDE5C80)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GET_GEARSORTLISTS_OFFSET UNITYSDK_OFFSET(0xCDE5CB0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GET_HASCARDSYSTEM_OFFSET UNITYSDK_OFFSET(0xCDD60D0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GET_ISMAINMONSTERSUMMONED_OFFSET UNITYSDK_OFFSET(0xCDE5C50)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GET_ISUNLOCKCARDREROLL_OFFSET UNITYSDK_OFFSET(0xCDD5DB0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GET_ISUNLOCKLOSTGEAR_OFFSET UNITYSDK_OFFSET(0xCDE5C40)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GET_ISUNLOCKREROLL_OFFSET UNITYSDK_OFFSET(0xCDE5C30)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GET_PAUSECONFIGFORLUA_OFFSET UNITYSDK_OFFSET(0xCDDB430)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GET_PREADDGEARID_OFFSET UNITYSDK_OFFSET(0xCDE2A10)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GET_REGISTERMODE_OFFSET UNITYSDK_OFFSET(0xCDDB510)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GET_SEASONSTRATEGY_OFFSET UNITYSDK_OFFSET(0xCDDB410)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GET_SEASON_OFFSET UNITYSDK_OFFSET(0xCDDB3F0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GET_STAGEMERGEDID_OFFSET UNITYSDK_OFFSET(0xCDE5CA0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GET__CARDCAPACITY_OFFSET UNITYSDK_OFFSET(0xCDD6070)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GET__CURKILLSCORE_OFFSET UNITYSDK_OFFSET(0xCDE5080)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GET__MAXLOCKPLUGINSLOT_OFFSET UNITYSDK_OFFSET(0xCDDEE70)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GET__MAXLOCKTOOLSLOT_OFFSET UNITYSDK_OFFSET(0xCDDEE20)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_HASGEARORPREADD_OFFSET UNITYSDK_OFFSET(0xCDDB040)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_HASGEAR_OFFSET UNITYSDK_OFFSET(0xCDD94D0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_HASLOST_OFFSET UNITYSDK_OFFSET(0xCDE0530)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_HASNOGEARFORSELECTED_OFFSET UNITYSDK_OFFSET(0xCDE08A0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_HASWEAPONANDPLUGINRESONANCEINPACKET_OFFSET UNITYSDK_OFFSET(0xCDD9E80)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_HASWEAPONANDTOOLRESONANCEINPACKET_OFFSET UNITYSDK_OFFSET(0xCDDA350)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_ISFEATUREACTIVE_OFFSET UNITYSDK_OFFSET(0xCDD85C0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_ISLASTMATERIALTOFORGE_OFFSET UNITYSDK_OFFSET(0xCDE0600)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_ISPLUGINFULL_OFFSET UNITYSDK_OFFSET(0xCDD8F50)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_ISTOOLFULL_OFFSET UNITYSDK_OFFSET(0xCDE1900)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_LOSTGEAR_OFFSET UNITYSDK_OFFSET(0xCDE0370)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_ONINITIALIZE_OFFSET UNITYSDK_OFFSET(0xCDDB520)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_ONKILLDEMONTREASURE_OFFSET UNITYSDK_OFFSET(0xCDE3420)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_ONMAZEBUFFBINDING_OFFSET UNITYSDK_OFFSET(0xCDDBC20)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_REVERTFEATURE_OFFSET UNITYSDK_OFFSET(0xCDD9740)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SETPROPERTY_OFFSET UNITYSDK_OFFSET(0xCDDF430)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SET_AUTOSELECT_OFFSET UNITYSDK_OFFSET(0xCDD6140)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SET_AUTOSKIPSELECT_OFFSET UNITYSDK_OFFSET(0xCDD6160)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SET_ISMAINMONSTERSUMMONED_OFFSET UNITYSDK_OFFSET(0xCDE5C60)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SET_PREADDGEARID_OFFSET UNITYSDK_OFFSET(0xCDE2A20)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SET_SEASONSTRATEGY_OFFSET UNITYSDK_OFFSET(0xCDDB420)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SET_SEASON_OFFSET UNITYSDK_OFFSET(0xCDDB400)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_TRIGGERFEATURE_OFFSET UNITYSDK_OFFSET(0xCDD8610)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_TRYGETGEARLEVEL_OFFSET UNITYSDK_OFFSET(0xCDD7FB0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__BEGINNEWWAVESTATINFO_OFFSET UNITYSDK_OFFSET(0xCDE4CD0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0xCDE6210)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__COSTGEARBYFORGE_OFFSET UNITYSDK_OFFSET(0xCDDFDC0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xCDE5EF0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__EXPORTCSVLOG_OFFSET UNITYSDK_OFFSET(0xCDD66E0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__FINISHCURWAVESTATINFO_OFFSET UNITYSDK_OFFSET(0xCDDEEC0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__GENGEARSELECTINFO_OFFSET UNITYSDK_OFFSET(0xCDE0CE0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__GENGEARSNAPSHOT_OFFSET UNITYSDK_OFFSET(0xCDE5A20)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__GETKILLSCORE_OFFSET UNITYSDK_OFFSET(0xCDE3C50)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__GETRANDOMGEARBYWEIGHT_OFFSET UNITYSDK_OFFSET(0xCDD6580)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__HASANOTHERFORGEMATERIALGEARRESONANCEINPACKET_OFFSET UNITYSDK_OFFSET(0xCDDA440)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__HASBROADCASTFORGERESONANCEINPACKET_OFFSET UNITYSDK_OFFSET(0xCDDAFB0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__HASNORMALFORGEPLUGINRESONANCEINPACKET_OFFSET UNITYSDK_OFFSET(0xCDDA080)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__HASPLUGINRESONANCEINPACKET_OFFSET UNITYSDK_OFFSET(0xCDDA130)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__HASTOOLRESONANCEINPACKET_OFFSET UNITYSDK_OFFSET(0xCDDA2A0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__HASULTRAFORGERESONANCEINPACKET_OFFSET UNITYSDK_OFFSET(0xCDD9FB0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__INITFORDEBUGRANDOM_OFFSET UNITYSDK_OFFSET(0xCDD63C0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__ISALLMATERIALSREADYWITHADDITIONALGEAR_OFFSET UNITYSDK_OFFSET(0xCDE06B0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__ISALLMATERIALSREADY_OFFSET UNITYSDK_OFFSET(0xCDE1730)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__ONADDBINDINGGEARMAZEBUFF_OFFSET UNITYSDK_OFFSET(0xCDE57B0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__ONCONTINUOUSFEATUREFIRSTTIMEACTIVE_OFFSET UNITYSDK_OFFSET(0xCDD9590)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__ONEQUIPGEARORPREADDGEARCHANGED_OFFSET UNITYSDK_OFFSET(0xCDE0320)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__ONGEAREQUIP_OFFSET UNITYSDK_OFFSET(0xCDDFF80)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__ONGEARUNEQUIP_OFFSET UNITYSDK_OFFSET(0xCDE55B0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__ONGEARUPGRADE_OFFSET UNITYSDK_OFFSET(0xCDDFD20)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__ONLEVELDAMAGEENTITYPHASE1_OFFSET UNITYSDK_OFFSET(0xCDE52A0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__ONLEVELDAMAGEENTITY_OFFSET UNITYSDK_OFFSET(0xCDE50D0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__ONLEVELENTITYDIEEVENT_OFFSET UNITYSDK_OFFSET(0xCDE36B0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__ONLEVELMAINMONSTERCHANGE_OFFSET UNITYSDK_OFFSET(0xCDE5490)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__ONLEVELWAVEMONSTERBEGIN_OFFSET UNITYSDK_OFFSET(0xCDE4700)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__ONLEVELWAVEMONSTERFINISH_OFFSET UNITYSDK_OFFSET(0xCDE4880)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__ONREMOVEBINDINGGEARMAZEBUFF_OFFSET UNITYSDK_OFFSET(0xCDE5650)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__RECORDREFRESHEDCARD_OFFSET UNITYSDK_OFFSET(0xCDD58A0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__SETUPBASICDATA_OFFSET UNITYSDK_OFFSET(0xCDDB5B0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__SETUPCARDATBATTLESTART_OFFSET UNITYSDK_OFFSET(0xCDD59D0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__SETUPCARDRANDOM_OFFSET UNITYSDK_OFFSET(0xCDD5CB0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__SETUPCONST_OFFSET UNITYSDK_OFFSET(0xCDDC1D0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__SETUPGEARATBATTLESTART_OFFSET UNITYSDK_OFFSET(0xCDDBCF0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__SETUPSEASONSTRATEGY_OFFSET UNITYSDK_OFFSET(0xCDDB130)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__TRYFEATURE_BIGTREASURE_OFFSET UNITYSDK_OFFSET(0xCDD9D60)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__TRYFEATURE_MINLVGEARLVUPONWAVE_OFFSET UNITYSDK_OFFSET(0xCDD97A0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__TRYFEATURE_MODIFYGEARDELTALV_OFFSET UNITYSDK_OFFSET(0xCDD9BF0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__UNEQUIPGEAR_OFFSET UNITYSDK_OFFSET(0xCDE54F0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCDE6510)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER___IFIXBASEPROXY_GENSTATISTICS_OFFSET UNITYSDK_OFFSET(0xCDE6590)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER___IFIXBASEPROXY_ONINITIALIZE_OFFSET UNITYSDK_OFFSET(0xCDE6450)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER___IFIXBASEPROXY_ONMAZEBUFFBINDING_OFFSET UNITYSDK_OFFSET(0xCDE64B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EvolveBuildGearManager_TypeDefinitionIndex = 52327;

	class EvolveBuildGearManager : public ::Class_1_9E296C95827C90A8
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_TreasurePieceCountCsvColumn()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(EvolveBuildGearManager_TypeDefinitionIndex)->GetStaticField(0x67CF0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_TreasureCsvColumn()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(EvolveBuildGearManager_TypeDefinitionIndex)->GetStaticField(0x67CF8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_CardCsvColumn()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(EvolveBuildGearManager_TypeDefinitionIndex)->GetStaticField(0x67D00);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_GearCsvColumn()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(EvolveBuildGearManager_TypeDefinitionIndex)->GetStaticField(0x67D08);
		}
		// static const ::System::Int32 _InitCardCapacity = 0x4; // 0x0
		// static const ::System::Int32 _TreasureStep = 0x3; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_6E48A12B40FA04FD*>* _GearDamageStatistics; // 0x30
		::Il2CppArray<::RPG::GameCore::FixPoint>* _Const_TreasureBaseProbability; // 0x38
		::System::Collections::Generic::List_1<::System::UInt32>* _EquipPlugin; // 0x40
		::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearManager_DebugCsvLogRow>* _LogRow; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_E7A847EAD72D587F*>* _CardBag; // 0x50
		::System::Collections::Generic::List_1<::System::UInt32>* _AllowedCard; // 0x58
		::RPG::GameCore::EvolveBuildGearManager_ExpCalculator* _ExpCalc; // 0x60
		::System::String* _CSVLogFolderPath; // 0x68
		::Il2CppArray<::RPG::GameCore::FixPoint>* _StatParams; // 0x70
		::System::Collections::Generic::List_1<::System::UInt32>* _AllowedGear; // 0x78
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _EquipGear; // 0x80
		::System::Collections::Generic::List_1<::System::UInt32>* _EquipToolAndForge; // 0x88
		::System::Collections::Generic::List_1<::System::UInt32>* _LostGear; // 0x90
		::Class_1_827373C1CEDFE355* _CardRandom; // 0x98
		::Class_1_48FE7ED9C7C8C788* _StatLogInfo; // 0xA0
		::Il2CppArray<::System::UInt32>* _Const_KillCoinBountyMap; // 0xA8
		::Il2CppArray<::System::UInt32>* _Const_KillExpBountyMap; // 0xB0
		::Class_1_1DAEAAA43D28FC47* _ExtraDataCache; // 0xB8
		::RPG::Client::SortedEvolveBuildGearEquipInfoLists* _GearSortLists; // 0xC0
		::Class_1_3B8811FC98169DA6* _Collection; // 0xC8
		::RPG::GameCore::EvolveBuildGearManager_IEvolveBuildSeasonStrategy* _SeasonStrategy_k__BackingField; // 0xD0
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _MonsterIdSetOfCurWave; // 0xD8
		::Il2CppArray<::System::String*>* _Const_LevelUpAbilityNamePrefix; // 0xE0
		::Il2CppArray<::System::UInt32>* _LevelPeriodList; // 0xE8
		::Il2CppArray<::RPG::GameCore::FixPoint>* _TreasureProbability; // 0xF0
		::Il2CppArray<::System::UInt32>* _Const_KillScoreBountyWeightMap; // 0xF8
		::Il2CppArray<::RPG::GameCore::FixPoint>* _Const_TreasureStepProbability; // 0x100
		::System::UInt32 GearSelectDialogOpenTimes; // 0x108
		::System::UInt32 _Const_KillScoreBountyMaxOfWave; // 0x10C
		::RPG::GameCore::FixPoint _WaveExExpRatio; // 0x110
		::RPG::GameCore::FixPoint _Const_TreasureBasicCoin; // 0x118
		::RPG::GameCore::FixPoint _Const_ExpMultiplierByWave; // 0x120
		::System::UInt32 _CoinTotalLevel; // 0x128
		::System::UInt32 _ScoreMaxWeightOfCurWaveByKill; // 0x12C
		::System::Boolean _IsUnlockReRoll; // 0x130
		::System::Boolean _AutoSelect_k__BackingField; // 0x131
		::System::Boolean _IsUnlockCardReRoll; // 0x132
		::System::Int32 _MaxPluginSlot; // 0x134
		::RPG::GameCore::EvolvePeriodType _LevelPeriod; // 0x138
		::System::UInt32 _Const_FinalWaveKillScoreBountyMaxOfWave; // 0x13C
		::System::UInt32 _LostCount; // 0x140
		::RPG::GameCore::EvolveBuildSeason _Season_k__BackingField; // 0x144
		::RPG::GameCore::FixPoint _Const_TreasureBasicCoinPerPiece; // 0x148
		::System::UInt32 _ReRollCount; // 0x150
		::System::UInt32 _CurCountdownTimer; // 0x154
		::System::UInt32 _ScoreSpecialOfCurWaveByKill; // 0x158
		::System::UInt32 _TreasureMissCount; // 0x15C
		::System::UInt32 _CurKillScoreFromNormal; // 0x160
		::System::UInt32 _Period1RandomSeed; // 0x164
		::System::UInt32 _CurPeriodID; // 0x168
		::System::Nullable_1<::System::UInt32> _PreAddGearID; // 0x16C
		::System::Int32 _MaxToolSlot; // 0x174
		::System::Boolean _IsUnlockLostGear; // 0x178
		::System::Boolean _IsMainMonsterSummoned_k__BackingField; // 0x179
		::RPG::GameCore::FixPoint _ExExpRatio; // 0x180
		::System::UInt32 _CurKillScoreFromSpecial; // 0x188
		::System::Int32 _MaxUnlockToolSlot; // 0x18C
		::RPG::GameCore::FixPoint _Const_CoinForFullPack; // 0x190
		::System::UInt32 _StageMergedID; // 0x198
		::System::UInt32 _ScoreWeightOfCurWaveByKill; // 0x19C
		::RPG::GameCore::FixPoint _ExCoinRatio; // 0x1A0
		::RPG::GameCore::FixPoint _Const_TreasureAlterCoinPerPiece; // 0x1A8
		::System::Boolean IsQuitAndGiveUp; // 0x1B0
		::System::Boolean _IsCardSetup; // 0x1B1
		::System::Boolean _AutoSkipSelect_k__BackingField; // 0x1B2
		::System::Boolean _IsUnlockSkipGear; // 0x1B3
		::System::UInt32 _BaseCardReRollCount; // 0x1B4
		::RPG::GameCore::EvolveBuildFeatureType _CurContinuousFeatures; // 0x1B8
		::RPG::GameCore::FixPoint _LevelDifficulty; // 0x1C0
		::System::UInt32 _StoryStep; // 0x1C8
		::System::Int32 _MaxUnlockPluginSlot; // 0x1CC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__CCTOR_OFFSET))();
		}

		::System::Void GenCardForSelected(::System::Collections::Generic::List_1<::Class_1_7AB88D713F5121B3_40*>* a1, ::Il2CppArray<::System::UInt32>* a2, ::Il2CppArray<::System::UInt32>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_7AB88D713F5121B3_40*>*, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GENCARDFORSELECTED_OFFSET))(this, a1, a2, a3);
		}

		::System::Void GainNewCard(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GAINNEWCARD_OFFSET))(this, a1);
		}

		::System::Void ApplyCard(::Class_1_E7A847EAD72D587F* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E7A847EAD72D587F*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_APPLYCARD_OFFSET))(this, a1);
		}

		::Class_1_7AB88D713F5121B3_40* GenCardOnce()
		{
			return ((::Class_1_7AB88D713F5121B3_40*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GENCARDONCE_OFFSET))(this);
		}

		::System::Void _RecordRefreshedCard(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__RECORDREFRESHEDCARD_OFFSET))(this, a1);
		}

		::System::Void _SetupCardAtBattleStart(::Class_1_B66FD2332404CEBB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B66FD2332404CEBB*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__SETUPCARDATBATTLESTART_OFFSET))(this, a1);
		}

		::System::Void _SetupCardRandom(::Class_1_B66FD2332404CEBB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B66FD2332404CEBB*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__SETUPCARDRANDOM_OFFSET))(this, a1);
		}

		::System::Boolean get_IsUnlockCardReRoll()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GET_ISUNLOCKCARDREROLL_OFFSET))(this);
		}

		::System::UInt32 get_BaseCardReRollCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GET_BASECARDREROLLCOUNT_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_CardBag()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GET_CARDBAG_OFFSET))(this);
		}

		::System::Boolean get_HasCardSystem()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GET_HASCARDSYSTEM_OFFSET))(this);
		}

		::System::Int32 get__CardCapacity()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GET__CARDCAPACITY_OFFSET))(this);
		}

		::System::Boolean get_AutoSelect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GET_AUTOSELECT_OFFSET))(this);
		}

		::System::Void set_AutoSelect(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SET_AUTOSELECT_OFFSET))(this, a1);
		}

		::System::Boolean get_AutoSkipSelect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GET_AUTOSKIPSELECT_OFFSET))(this);
		}

		::System::Void set_AutoSkipSelect(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SET_AUTOSKIPSELECT_OFFSET))(this, a1);
		}

		::System::String* DebugRandomGear(::System::Int32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_DEBUGRANDOMGEAR_OFFSET))(this, a1);
		}

		::System::String* DebugRandomCard(::System::Int32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_DEBUGRANDOMCARD_OFFSET))(this, a1);
		}

		::System::String* DebugRandomTreasure(::System::Int32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_DEBUGRANDOMTREASURE_OFFSET))(this, a1);
		}

		::System::String* DebugRandomTreasurePieceCount(::System::Int32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_DEBUGRANDOMTREASUREPIECECOUNT_OFFSET))(this, a1);
		}

		::System::Void _InitForDebugRandom()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__INITFORDEBUGRANDOM_OFFSET))(this);
		}

		::System::String* _ExportCSVLog(::RPG::GameCore::EvolveBuildGearManager_DebugCsvMode a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::EvolveBuildGearManager_DebugCsvMode))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__EXPORTCSVLOG_OFFSET))(this, a1);
		}

		::System::Boolean IsFeatureActive(::RPG::GameCore::EvolveBuildFeatureType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::EvolveBuildFeatureType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_ISFEATUREACTIVE_OFFSET))(this, a1);
		}

		::System::Void TriggerFeature(::RPG::GameCore::EvolveBuildFeatureType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EvolveBuildFeatureType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_TRIGGERFEATURE_OFFSET))(this, a1);
		}

		::System::Void RevertFeature(::RPG::GameCore::EvolveBuildFeatureType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EvolveBuildFeatureType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_REVERTFEATURE_OFFSET))(this, a1);
		}

		::System::Void _TryFeature_MinLvGearLvUpOnWave()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__TRYFEATURE_MINLVGEARLVUPONWAVE_OFFSET))(this);
		}

		::System::Void _TryFeature_ModifyGearDeltaLv(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32& a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__TRYFEATURE_MODIFYGEARDELTALV_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _TryFeature_BigTreasure(::Il2CppArray<::RPG::GameCore::FixPoint>*& a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::FixPoint>*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__TRYFEATURE_BIGTREASURE_OFFSET))(this, a1);
		}

		::System::Void _OnContinuousFeatureFirstTimeActive(::RPG::GameCore::EvolveBuildFeatureType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EvolveBuildFeatureType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__ONCONTINUOUSFEATUREFIRSTTIMEACTIVE_OFFSET))(this, a1);
		}

		::System::Boolean HasWeaponAndPluginResonanceInPacket(::System::UInt32 a1, ::System::UInt32& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_HASWEAPONANDPLUGINRESONANCEINPACKET_OFFSET))(this, a1, a2);
		}

		::System::Boolean HasWeaponAndToolResonanceInPacket(::System::UInt32 a1, ::System::UInt32& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_HASWEAPONANDTOOLRESONANCEINPACKET_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetResonanceIDsInPacket(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GETRESONANCEIDSINPACKET_OFFSET))(this, a1);
		}

		::System::Boolean GetIsGearTagConnect(::System::UInt32 a1, ::RPG::GameCore::EvolveGearType a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::EvolveGearType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GETISGEARTAGCONNECT_OFFSET))(this, a1, a2);
		}

		::System::Boolean GetIsGearDamageTypeConnect(::RPG::GameCore::AttackDamageType a1, ::RPG::GameCore::EvolveGearType a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AttackDamageType, ::RPG::GameCore::EvolveGearType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GETISGEARDAMAGETYPECONNECT_OFFSET))(this, a1, a2);
		}

		::System::Boolean _HasUltraForgeResonanceInPacket(::System::UInt32 a1, ::System::UInt32& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__HASULTRAFORGERESONANCEINPACKET_OFFSET))(this, a1, a2);
		}

		::System::Boolean _HasNormalForgePluginResonanceInPacket(::System::UInt32 a1, ::System::UInt32& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__HASNORMALFORGEPLUGINRESONANCEINPACKET_OFFSET))(this, a1, a2);
		}

		::System::Boolean _HasPluginResonanceInPacket(::System::UInt32 a1, ::System::UInt32& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__HASPLUGINRESONANCEINPACKET_OFFSET))(this, a1, a2);
		}

		::System::Boolean _HasBroadcastForgeResonanceInPacket(::System::UInt32 a1, ::System::UInt32& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__HASBROADCASTFORGERESONANCEINPACKET_OFFSET))(this, a1, a2);
		}

		::System::Boolean _HasToolResonanceInPacket(::System::UInt32 a1, ::RPG::GameCore::EvolveGearType a2, ::System::UInt32& a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::EvolveGearType, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__HASTOOLRESONANCEINPACKET_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean _HasAnotherForgeMaterialGearResonanceInPacket(::System::UInt32 a1, ::System::UInt32& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__HASANOTHERFORGEMATERIALGEARRESONANCEINPACKET_OFFSET))(this, a1, a2);
		}

		::System::Void _SetupSeasonStrategy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__SETUPSEASONSTRATEGY_OFFSET))(this);
		}

		::RPG::GameCore::EvolveBuildSeason get_Season()
		{
			return ((::RPG::GameCore::EvolveBuildSeason(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GET_SEASON_OFFSET))(this);
		}

		::System::Void set_Season(::RPG::GameCore::EvolveBuildSeason a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EvolveBuildSeason))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SET_SEASON_OFFSET))(this, a1);
		}

		::RPG::GameCore::EvolveBuildGearManager_IEvolveBuildSeasonStrategy* get_SeasonStrategy()
		{
			return ((::RPG::GameCore::EvolveBuildGearManager_IEvolveBuildSeasonStrategy*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GET_SEASONSTRATEGY_OFFSET))(this);
		}

		::System::Void set_SeasonStrategy(::RPG::GameCore::EvolveBuildGearManager_IEvolveBuildSeasonStrategy* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EvolveBuildGearManager_IEvolveBuildSeasonStrategy*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SET_SEASONSTRATEGY_OFFSET))(this, a1);
		}

		::RPG::GameCore::EvolveBuildGearManager_EvolveBuildPauseConfig get_PauseConfigForLua()
		{
			return ((::RPG::GameCore::EvolveBuildGearManager_EvolveBuildPauseConfig(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GET_PAUSECONFIGFORLUA_OFFSET))(this);
		}

		::RPG::GameCore::ActivitySubModeType get_ActivitySubModeType()
		{
			return ((::RPG::GameCore::ActivitySubModeType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GET_ACTIVITYSUBMODETYPE_OFFSET))(this);
		}

		::Class_1_9E296C95827C90A8_ERegisterMode get_RegisterMode()
		{
			return ((::Class_1_9E296C95827C90A8_ERegisterMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GET_REGISTERMODE_OFFSET))(this);
		}

		::System::Void OnInitialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_ONINITIALIZE_OFFSET))(this);
		}

		::System::Void OnMazeBuffBinding()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_ONMAZEBUFFBINDING_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void _SetupBasicData(::Class_1_B66FD2332404CEBB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B66FD2332404CEBB*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__SETUPBASICDATA_OFFSET))(this, a1);
		}

		::System::Void GenStatistics(::RPG::GameCore::PVEGameStatistics* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PVEGameStatistics*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GENSTATISTICS_OFFSET))(this, a1);
		}

		::System::UInt32 GetPropertyInUint(::RPG::GameCore::EvolveBuildPropertyType a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::EvolveBuildPropertyType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GETPROPERTYINUINT_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint GetProperty(::RPG::GameCore::EvolveBuildPropertyType a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::EvolveBuildPropertyType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GETPROPERTY_OFFSET))(this, a1);
		}

		::System::Void SetProperty(::RPG::GameCore::EvolveBuildPropertyType a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EvolveBuildPropertyType, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SETPROPERTY_OFFSET))(this, a1, a2);
		}

		::System::Void GainNewGear(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GAINNEWGEAR_OFFSET))(this, a1);
		}

		::System::Void LostGear(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_LOSTGEAR_OFFSET))(this, a1);
		}

		::System::Boolean HasLost(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_HASLOST_OFFSET))(this, a1);
		}

		::System::UInt32 TryGetGearLevel(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_TRYGETGEARLEVEL_OFFSET))(this, a1);
		}

		::System::Boolean HasGear(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_HASGEAR_OFFSET))(this, a1);
		}

		::System::Boolean HasGearOrPreAdd(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_HASGEARORPREADD_OFFSET))(this, a1);
		}

		::System::Boolean IsLastMaterialToForge(::System::UInt32 a1, ::System::Boolean a2, ::System::UInt32& a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_ISLASTMATERIALTOFORGE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean HasNoGearForSelected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_HASNOGEARFORSELECTED_OFFSET))(this);
		}

		::System::Void GenGearForSelected(::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearSelectInfo*>*& a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearSelectInfo*>*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GENGEARFORSELECTED_OFFSET))(this, a1);
		}

		::System::Void GenSpecifiedGearForSelected(::RPG::GameCore::TaskContext* a1, ::Il2CppArray<::RPG::GameCore::DynamicFloat*>* a2, ::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearSelectInfo*>*& a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Il2CppArray<::RPG::GameCore::DynamicFloat*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearSelectInfo*>*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GENSPECIFIEDGEARFORSELECTED_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 AutoSelectGear(::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearSelectInfo*>*& a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearSelectInfo*>*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_AUTOSELECTGEAR_OFFSET))(this, a1);
		}

		::System::Void GenGearForTreasure(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GENGEARFORTREASURE_OFFSET))(this, a1);
		}

		::System::ValueTuple_2<::System::UInt32, ::System::UInt32> GetGearSelectProgress()
		{
			return ((::System::ValueTuple_2<::System::UInt32, ::System::UInt32>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GETGEARSELECTPROGRESS_OFFSET))(this);
		}

		::RPG::PoolList_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>* GetAllEquippedGear(::RPG::GameCore::EvolveGearType a1)
		{
			return ((::RPG::PoolList_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>*(*)(::PVOID, ::RPG::GameCore::EvolveGearType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GETALLEQUIPPEDGEAR_OFFSET))(this, a1);
		}

		::System::Boolean IsToolFull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_ISTOOLFULL_OFFSET))(this);
		}

		::System::Boolean IsPluginFull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_ISPLUGINFULL_OFFSET))(this);
		}

		::System::Int32 GetSlotCapacity(::RPG::GameCore::EvolveGearType a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::EvolveGearType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GETSLOTCAPACITY_OFFSET))(this, a1);
		}

		::System::Int32 GetUnlockSlotCapacity(::RPG::GameCore::EvolveGearType a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::EvolveGearType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GETUNLOCKSLOTCAPACITY_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>* GetAllEquippedGear_1(::RPG::GameCore::EvolveGearType a1, ::System::Boolean a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>*(*)(::PVOID, ::RPG::GameCore::EvolveGearType, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GETALLEQUIPPEDGEAR_1_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>* GetAllEquippedGear_2(::RPG::GameCore::EvolveGearType a1, ::RPG::GameCore::EvolveGearType a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>*(*)(::PVOID, ::RPG::GameCore::EvolveGearType, ::RPG::GameCore::EvolveGearType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GETALLEQUIPPEDGEAR_2_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>* GetAllExceptEquippedGear(::RPG::GameCore::EvolveGearType a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>*(*)(::PVOID, ::RPG::GameCore::EvolveGearType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GETALLEXCEPTEQUIPPEDGEAR_OFFSET))(this, a1);
		}

		::System::Nullable_1<::System::UInt32> get_PreAddGearID()
		{
			return ((::System::Nullable_1<::System::UInt32>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GET_PREADDGEARID_OFFSET))(this);
		}

		::System::Void set_PreAddGearID(::System::Nullable_1<::System::UInt32> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::UInt32>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SET_PREADDGEARID_OFFSET))(this, a1);
		}

		::System::Void _OnEquipGearOrPreAddGearChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__ONEQUIPGEARORPREADDGEARCHANGED_OFFSET))(this);
		}

		::System::Int32 GetTreasurePieceCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GETTREASUREPIECECOUNT_OFFSET))(this);
		}

		::System::Int32 GetPastPeriodWaveCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GETPASTPERIODWAVECOUNT_OFFSET))(this);
		}

		::System::Int32 GetAllPeriodMaxWaveCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GETALLPERIODMAXWAVECOUNT_OFFSET))(this);
		}

		::System::UInt32 GenExtraTurnSnapshotHash()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GENEXTRATURNSNAPSHOTHASH_OFFSET))(this);
		}

		::System::Void OnKillDemonTreasure()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_ONKILLDEMONTREASURE_OFFSET))(this);
		}

		::System::Void _SetupConst()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__SETUPCONST_OFFSET))(this);
		}

		::System::Void _SetupGearAtBattleStart(::Class_1_B66FD2332404CEBB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B66FD2332404CEBB*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__SETUPGEARATBATTLESTART_OFFSET))(this, a1);
		}

		::System::Void _OnLevelEntityDieEvent(::RPG::GameCore::LevelCharacterDie* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelCharacterDie*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__ONLEVELENTITYDIEEVENT_OFFSET))(this, a1);
		}

		::System::Void _OnLevelWaveMonsterBegin(::RPG::GameCore::LevelWaveMonsterBegin* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelWaveMonsterBegin*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__ONLEVELWAVEMONSTERBEGIN_OFFSET))(this, a1);
		}

		::System::Void _OnLevelWaveMonsterFinish(::RPG::GameCore::LevelWaveMonster* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelWaveMonster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__ONLEVELWAVEMONSTERFINISH_OFFSET))(this, a1);
		}

		::System::Void _GetKillScore(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__GETKILLSCORE_OFFSET))(this, a1);
		}

		::System::Void _OnLevelDamageEntity(::RPG::GameCore::LevelPreDamageEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelPreDamageEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__ONLEVELDAMAGEENTITY_OFFSET))(this, a1);
		}

		::System::Void _OnLevelDamageEntityPhase1(::RPG::GameCore::LevelDamageEntityPhase1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelDamageEntityPhase1*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__ONLEVELDAMAGEENTITYPHASE1_OFFSET))(this, a1);
		}

		::System::Void _OnLevelMainMonsterChange(::RPG::GameCore::LevelMainMonsterChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelMainMonsterChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__ONLEVELMAINMONSTERCHANGE_OFFSET))(this, a1);
		}

		::System::Void _CostGearByForge(::System::UInt32 a1, ::System::Int32& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__COSTGEARBYFORGE_OFFSET))(this, a1, a2);
		}

		::System::Void _UnEquipGear(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__UNEQUIPGEAR_OFFSET))(this, a1);
		}

		::System::Void _OnGearUpgrade(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__ONGEARUPGRADE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _OnGearEquip(::System::UInt32 a1, ::System::UInt32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__ONGEAREQUIP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _OnGearUnEquip(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__ONGEARUNEQUIP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnAddBindingGearMazeBuff(::RPG::GameCore::ActivityEvolveBuildGearRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ActivityEvolveBuildGearRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__ONADDBINDINGGEARMAZEBUFF_OFFSET))(this, a1);
		}

		::System::Void _OnRemoveBindingGearMazeBuff(::RPG::GameCore::ActivityEvolveBuildGearRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ActivityEvolveBuildGearRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__ONREMOVEBINDINGGEARMAZEBUFF_OFFSET))(this, a1);
		}

		::System::Boolean _IsAllMaterialsReady(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__ISALLMATERIALSREADY_OFFSET))(this, a1);
		}

		::System::Boolean _IsAllMaterialsReadyWithAdditionalGear(::System::UInt32 a1, ::System::UInt32 a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__ISALLMATERIALSREADYWITHADDITIONALGEAR_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 _GetRandomGearByWeight(::System::Int32 a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__GETRANDOMGEARBYWEIGHT_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::EvolveBuildGearSelectInfo* _GenGearSelectInfo(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::EvolveBuildGearSelectInfo*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__GENGEARSELECTINFO_OFFSET))(this, a1);
		}

		::System::Void _BeginNewWaveStatInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__BEGINNEWWAVESTATINFO_OFFSET))(this);
		}

		::System::Void _FinishCurWaveStatInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__FINISHCURWAVESTATINFO_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::EvolveGearConfig*>* _GenGearSnapshot()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::EvolveGearConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__GENGEARSNAPSHOT_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_Const_CoinForFullPack()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GET_CONST_COINFORFULLPACK_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_Const_TreasureBasicCoin()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GET_CONST_TREASUREBASICCOIN_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_Const_TreasureBasicCoinPerPiece()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GET_CONST_TREASUREBASICCOINPERPIECE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_Const_TreasureAlterCoinPerPiece()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GET_CONST_TREASUREALTERCOINPERPIECE_OFFSET))(this);
		}

		::System::Boolean get_IsUnlockReRoll()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GET_ISUNLOCKREROLL_OFFSET))(this);
		}

		::System::Boolean get_IsUnlockLostGear()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GET_ISUNLOCKLOSTGEAR_OFFSET))(this);
		}

		::System::Boolean get_IsMainMonsterSummoned()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GET_ISMAINMONSTERSUMMONED_OFFSET))(this);
		}

		::System::Void set_IsMainMonsterSummoned(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SET_ISMAINMONSTERSUMMONED_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* get_EquipGear()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GET_EQUIPGEAR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_EquipToolAndForge()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GET_EQUIPTOOLANDFORGE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_EquipPlugin()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GET_EQUIPPLUGIN_OFFSET))(this);
		}

		::System::UInt32 get_StageMergedID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GET_STAGEMERGEDID_OFFSET))(this);
		}

		::RPG::Client::SortedEvolveBuildGearEquipInfoLists* get_GearSortLists()
		{
			return ((::RPG::Client::SortedEvolveBuildGearEquipInfoLists*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GET_GEARSORTLISTS_OFFSET))(this);
		}

		::System::Int32 get__MaxLockToolSlot()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GET__MAXLOCKTOOLSLOT_OFFSET))(this);
		}

		::System::Int32 get__MaxLockPluginSlot()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GET__MAXLOCKPLUGINSLOT_OFFSET))(this);
		}

		::System::UInt32 get__CurKillScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GET__CURKILLSCORE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnInitialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER___IFIXBASEPROXY_ONINITIALIZE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnMazeBuffBinding()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER___IFIXBASEPROXY_ONMAZEBUFFBINDING_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_GenStatistics(::RPG::GameCore::PVEGameStatistics* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PVEGameStatistics*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER___IFIXBASEPROXY_GENSTATISTICS_OFFSET))(this, a1);
		}
	};
}
