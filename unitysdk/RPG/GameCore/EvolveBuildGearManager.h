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

class Class_1_03DFC5F304B992FF;
class Class_1_1DAEAAA43D28FC47;
class Class_1_3B8811FC98169DA6;
class Class_1_6E48A12B40FA04FD;
class Class_1_7AB88D713F5121B3_33;
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

#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_APPLYCARD_OFFSET UNITYSDK_OFFSET(0xA921650)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_AUTOSELECTGEAR_OFFSET UNITYSDK_OFFSET(0xA92CEA0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_DEBUGRANDOMCARD_OFFSET UNITYSDK_OFFSET(0xA922B00)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_DEBUGRANDOMGEAR_OFFSET UNITYSDK_OFFSET(0xA9221C0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_DEBUGRANDOMTREASUREPIECECOUNT_OFFSET UNITYSDK_OFFSET(0xA923D00)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_DEBUGRANDOMTREASURE_OFFSET UNITYSDK_OFFSET(0xA923010)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA927DB0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GAINNEWCARD_OFFSET UNITYSDK_OFFSET(0xA9214A0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GAINNEWGEAR_OFFSET UNITYSDK_OFFSET(0xA924D10)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GENCARDFORSELECTED_OFFSET UNITYSDK_OFFSET(0xA921360)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GENCARDONCE_OFFSET UNITYSDK_OFFSET(0xA921940)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GENEXTRATURNSNAPSHOTHASH_OFFSET UNITYSDK_OFFSET(0xA92DF10)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GENGEARFORSELECTED_OFFSET UNITYSDK_OFFSET(0xA92C200)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GENGEARFORTREASURE_OFFSET UNITYSDK_OFFSET(0xA9234E0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GENSPECIFIEDGEARFORSELECTED_OFFSET UNITYSDK_OFFSET(0xA92C5B0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GENSTATISTICS_OFFSET UNITYSDK_OFFSET(0xA9294A0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GETALLEQUIPPEDGEAR_1_OFFSET UNITYSDK_OFFSET(0xA92D650)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GETALLEQUIPPEDGEAR_2_OFFSET UNITYSDK_OFFSET(0xA92DCC0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GETALLEQUIPPEDGEAR_OFFSET UNITYSDK_OFFSET(0xA926550)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GETALLEXCEPTEQUIPPEDGEAR_OFFSET UNITYSDK_OFFSET(0xA9267C0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GETALLPERIODMAXWAVECOUNT_OFFSET UNITYSDK_OFFSET(0xA92AE10)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GETGEARSELECTPROGRESS_OFFSET UNITYSDK_OFFSET(0xA92D3A0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GETISGEARDAMAGETYPECONNECT_OFFSET UNITYSDK_OFFSET(0xA926A20)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GETISGEARTAGCONNECT_OFFSET UNITYSDK_OFFSET(0xA926370)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GETPASTPERIODWAVECOUNT_OFFSET UNITYSDK_OFFSET(0xA92AD30)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GETPROPERTYINUINT_OFFSET UNITYSDK_OFFSET(0xA92AB90)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GETPROPERTY_OFFSET UNITYSDK_OFFSET(0xA92A270)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GETRESONANCEIDSINPACKET_OFFSET UNITYSDK_OFFSET(0xA926280)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GETSLOTCAPACITY_OFFSET UNITYSDK_OFFSET(0xA92D490)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GETTREASUREPIECECOUNT_OFFSET UNITYSDK_OFFSET(0xA923E50)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GETUNLOCKSLOTCAPACITY_OFFSET UNITYSDK_OFFSET(0xA92D570)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GET_ACTIVITYSUBMODETYPE_OFFSET UNITYSDK_OFFSET(0xA927180)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GET_AUTOSELECT_OFFSET UNITYSDK_OFFSET(0xA922180)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GET_AUTOSKIPSELECT_OFFSET UNITYSDK_OFFSET(0xA9221A0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GET_BASECARDREROLLCOUNT_OFFSET UNITYSDK_OFFSET(0xA921E40)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GET_CARDBAG_OFFSET UNITYSDK_OFFSET(0xA921EA0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GET_CONST_COINFORFULLPACK_OFFSET UNITYSDK_OFFSET(0xA930C20)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GET_CONST_TREASUREALTERCOINPERPIECE_OFFSET UNITYSDK_OFFSET(0xA930C50)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GET_CONST_TREASUREBASICCOINPERPIECE_OFFSET UNITYSDK_OFFSET(0xA930C40)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GET_CONST_TREASUREBASICCOIN_OFFSET UNITYSDK_OFFSET(0xA930C30)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GET_EQUIPGEAR_OFFSET UNITYSDK_OFFSET(0xA930CA0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GET_EQUIPPLUGIN_OFFSET UNITYSDK_OFFSET(0xA930CC0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GET_EQUIPTOOLANDFORGE_OFFSET UNITYSDK_OFFSET(0xA930CB0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GET_GEARSORTLISTS_OFFSET UNITYSDK_OFFSET(0xA930CE0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GET_HASCARDSYSTEM_OFFSET UNITYSDK_OFFSET(0xA922120)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GET_ISMAINMONSTERSUMMONED_OFFSET UNITYSDK_OFFSET(0xA930C80)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GET_ISUNLOCKCARDREROLL_OFFSET UNITYSDK_OFFSET(0xA921E30)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GET_ISUNLOCKLOSTGEAR_OFFSET UNITYSDK_OFFSET(0xA930C70)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GET_ISUNLOCKREROLL_OFFSET UNITYSDK_OFFSET(0xA930C60)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GET_PAUSECONFIGFORLUA_OFFSET UNITYSDK_OFFSET(0xA9270B0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GET_PREADDGEARID_OFFSET UNITYSDK_OFFSET(0xA92DE50)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GET_REGISTERMODE_OFFSET UNITYSDK_OFFSET(0xA927190)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GET_SEASONSTRATEGY_OFFSET UNITYSDK_OFFSET(0xA927090)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GET_SEASON_OFFSET UNITYSDK_OFFSET(0xA927070)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GET_STAGEMERGEDID_OFFSET UNITYSDK_OFFSET(0xA930CD0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GET__CARDCAPACITY_OFFSET UNITYSDK_OFFSET(0xA9220C0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GET__CURKILLSCORE_OFFSET UNITYSDK_OFFSET(0xA930090)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GET__MAXLOCKPLUGINSLOT_OFFSET UNITYSDK_OFFSET(0xA92A9F0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GET__MAXLOCKTOOLSLOT_OFFSET UNITYSDK_OFFSET(0xA92A9A0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_HASGEARORPREADD_OFFSET UNITYSDK_OFFSET(0xA926CB0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_HASGEAR_OFFSET UNITYSDK_OFFSET(0xA925220)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_HASLOST_OFFSET UNITYSDK_OFFSET(0xA92BDB0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_HASNOGEARFORSELECTED_OFFSET UNITYSDK_OFFSET(0xA92C0F0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_HASWEAPONANDPLUGINRESONANCEINPACKET_OFFSET UNITYSDK_OFFSET(0xA925C00)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_HASWEAPONANDTOOLRESONANCEINPACKET_OFFSET UNITYSDK_OFFSET(0xA9260F0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_ISFEATUREACTIVE_OFFSET UNITYSDK_OFFSET(0xA9243D0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_ISLASTMATERIALTOFORGE_OFFSET UNITYSDK_OFFSET(0xA92BE20)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_ISPLUGINFULL_OFFSET UNITYSDK_OFFSET(0xA924CA0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_ISTOOLFULL_OFFSET UNITYSDK_OFFSET(0xA92CE30)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_LOSTGEAR_OFFSET UNITYSDK_OFFSET(0xA92BC90)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_ONINITIALIZE_OFFSET UNITYSDK_OFFSET(0xA9271A0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_ONKILLDEMONTREASURE_OFFSET UNITYSDK_OFFSET(0xA92E5D0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_ONMAZEBUFFBINDING_OFFSET UNITYSDK_OFFSET(0xA927A00)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_REVERTFEATURE_OFFSET UNITYSDK_OFFSET(0xA925470)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SETPROPERTY_OFFSET UNITYSDK_OFFSET(0xA92AF00)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SET_AUTOSELECT_OFFSET UNITYSDK_OFFSET(0xA922190)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SET_AUTOSKIPSELECT_OFFSET UNITYSDK_OFFSET(0xA9221B0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SET_ISMAINMONSTERSUMMONED_OFFSET UNITYSDK_OFFSET(0xA930C90)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SET_PREADDGEARID_OFFSET UNITYSDK_OFFSET(0xA92DE60)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SET_SEASONSTRATEGY_OFFSET UNITYSDK_OFFSET(0xA9270A0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SET_SEASON_OFFSET UNITYSDK_OFFSET(0xA927080)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_TRIGGERFEATURE_OFFSET UNITYSDK_OFFSET(0xA924420)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_TRYGETGEARLEVEL_OFFSET UNITYSDK_OFFSET(0xA923C60)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__BEGINNEWWAVESTATINFO_OFFSET UNITYSDK_OFFSET(0xA92FE90)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0xA931240)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__COSTGEARBYFORGE_OFFSET UNITYSDK_OFFSET(0xA92B770)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xA930F20)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__EXPORTCSVLOG_OFFSET UNITYSDK_OFFSET(0xA922700)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__FINISHCURWAVESTATINFO_OFFSET UNITYSDK_OFFSET(0xA92AA40)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__GENGEARSELECTINFO_OFFSET UNITYSDK_OFFSET(0xA92C460)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__GENGEARSNAPSHOT_OFFSET UNITYSDK_OFFSET(0xA930AA0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__GETKILLSCORE_OFFSET UNITYSDK_OFFSET(0xA92EF60)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__GETRANDOMGEARBYWEIGHT_OFFSET UNITYSDK_OFFSET(0xA9225A0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__HASANOTHERFORGEMATERIALGEARRESONANCEINPACKET_OFFSET UNITYSDK_OFFSET(0xA9261E0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__HASBROADCASTFORGERESONANCEINPACKET_OFFSET UNITYSDK_OFFSET(0xA926C20)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__HASNORMALFORGEPLUGINRESONANCEINPACKET_OFFSET UNITYSDK_OFFSET(0xA925E20)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__HASPLUGINRESONANCEINPACKET_OFFSET UNITYSDK_OFFSET(0xA925ED0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__HASTOOLRESONANCEINPACKET_OFFSET UNITYSDK_OFFSET(0xA926040)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__HASULTRAFORGERESONANCEINPACKET_OFFSET UNITYSDK_OFFSET(0xA925D30)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__INITFORDEBUGRANDOM_OFFSET UNITYSDK_OFFSET(0xA9223C0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__ISALLMATERIALSREADYWITHADDITIONALGEAR_OFFSET UNITYSDK_OFFSET(0xA92BED0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__ISALLMATERIALSREADY_OFFSET UNITYSDK_OFFSET(0xA92CC30)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__ONADDBINDINGGEARMAZEBUFF_OFFSET UNITYSDK_OFFSET(0xA930830)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__ONCONTINUOUSFEATUREFIRSTTIMEACTIVE_OFFSET UNITYSDK_OFFSET(0xA9252F0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__ONEQUIPGEARORPREADDGEARCHANGED_OFFSET UNITYSDK_OFFSET(0xA92BC40)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__ONGEAREQUIP_OFFSET UNITYSDK_OFFSET(0xA92B8F0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__ONGEARUNEQUIP_OFFSET UNITYSDK_OFFSET(0xA930630)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__ONGEARUPGRADE_OFFSET UNITYSDK_OFFSET(0xA92B6D0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__ONLEVELDAMAGEENTITYPHASE1_OFFSET UNITYSDK_OFFSET(0xA9302E0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__ONLEVELDAMAGEENTITY_OFFSET UNITYSDK_OFFSET(0xA9300E0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__ONLEVELENTITYDIEEVENT_OFFSET UNITYSDK_OFFSET(0xA92E760)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__ONLEVELMAINMONSTERCHANGE_OFFSET UNITYSDK_OFFSET(0xA930500)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__ONLEVELWAVEMONSTERBEGIN_OFFSET UNITYSDK_OFFSET(0xA92F850)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__ONLEVELWAVEMONSTERFINISH_OFFSET UNITYSDK_OFFSET(0xA92FA60)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__ONREMOVEBINDINGGEARMAZEBUFF_OFFSET UNITYSDK_OFFSET(0xA9306D0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__RECORDREFRESHEDCARD_OFFSET UNITYSDK_OFFSET(0xA921AB0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__SETUPBASICDATA_OFFSET UNITYSDK_OFFSET(0xA927230)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__SETUPCARDATBATTLESTART_OFFSET UNITYSDK_OFFSET(0xA921B50)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__SETUPCARDRANDOM_OFFSET UNITYSDK_OFFSET(0xA921D30)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__SETUPCONST_OFFSET UNITYSDK_OFFSET(0xA927FC0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__SETUPGEARATBATTLESTART_OFFSET UNITYSDK_OFFSET(0xA927AD0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__SETUPSEASONSTRATEGY_OFFSET UNITYSDK_OFFSET(0xA926DA0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__TRYFEATURE_BIGTREASURE_OFFSET UNITYSDK_OFFSET(0xA925A50)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__TRYFEATURE_MINLVGEARLVUPONWAVE_OFFSET UNITYSDK_OFFSET(0xA9254D0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__TRYFEATURE_MODIFYGEARDELTALV_OFFSET UNITYSDK_OFFSET(0xA9258E0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__UNEQUIPGEAR_OFFSET UNITYSDK_OFFSET(0xA930560)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA9315E0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER___IFIXBASEPROXY_GENSTATISTICS_OFFSET UNITYSDK_OFFSET(0xA931650)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER___IFIXBASEPROXY_ONINITIALIZE_OFFSET UNITYSDK_OFFSET(0xA931520)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER___IFIXBASEPROXY_ONMAZEBUFFBINDING_OFFSET UNITYSDK_OFFSET(0xA931580)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EvolveBuildGearManager_TypeDefinitionIndex = 44905;

	class EvolveBuildGearManager : public ::Class_1_9E296C95827C90A8
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_GearCsvColumn()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(EvolveBuildGearManager_TypeDefinitionIndex)->GetStaticField(0x46500);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_TreasureCsvColumn()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(EvolveBuildGearManager_TypeDefinitionIndex)->GetStaticField(0x46508);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_CardCsvColumn()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(EvolveBuildGearManager_TypeDefinitionIndex)->GetStaticField(0x46510);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_TreasurePieceCountCsvColumn()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(EvolveBuildGearManager_TypeDefinitionIndex)->GetStaticField(0x46518);
		}
		// static const ::System::Int32 _InitCardCapacity = 0x4; // 0x0
		// static const ::System::Int32 _TreasureStep = 0x3; // 0x0
		::Class_1_1DAEAAA43D28FC47* _ExtraDataCache; // 0x28
		::Class_1_03DFC5F304B992FF* _StatLogInfo; // 0x30
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _MonsterIdSetOfCurWave; // 0x38
		::Il2CppArray<::System::UInt32>* _Const_KillExpBountyMap; // 0x40
		::Class_1_3B8811FC98169DA6* _Collection; // 0x48
		::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearManager_DebugCsvLogRow>* _LogRow; // 0x50
		::System::Collections::Generic::List_1<::System::UInt32>* _AllowedCard; // 0x58
		::Il2CppArray<::System::UInt32>* _Const_KillCoinBountyMap; // 0x60
		::Class_1_827373C1CEDFE355* _CardRandom; // 0x68
		::System::Collections::Generic::List_1<::System::UInt32>* _AllowedGear; // 0x70
		::System::Collections::Generic::List_1<::System::UInt32>* _EquipPlugin; // 0x78
		::RPG::Client::SortedEvolveBuildGearEquipInfoLists* _GearSortLists; // 0x80
		::Il2CppArray<::RPG::GameCore::FixPoint>* _Const_TreasureBaseProbability; // 0x88
		::Il2CppArray<::System::String*>* _Const_LevelUpAbilityNamePrefix; // 0x90
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_E7A847EAD72D587F*>* _CardBag; // 0x98
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _EquipGear; // 0xA0
		::System::Collections::Generic::List_1<::System::UInt32>* _LostGear; // 0xA8
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_6E48A12B40FA04FD*>* _GearDamageStatistics; // 0xB0
		::Il2CppArray<::RPG::GameCore::FixPoint>* _Const_TreasureStepProbability; // 0xB8
		::System::String* _CSVLogFolderPath; // 0xC0
		::RPG::GameCore::EvolveBuildGearManager_IEvolveBuildSeasonStrategy* _SeasonStrategy_k__BackingField; // 0xC8
		::RPG::GameCore::EvolveBuildGearManager_ExpCalculator* _ExpCalc; // 0xD0
		::Il2CppArray<::RPG::GameCore::FixPoint>* _StatParams; // 0xD8
		::Il2CppArray<::System::UInt32>* _Const_KillScoreBountyWeightMap; // 0xE0
		::Il2CppArray<::System::UInt32>* _LevelPeriodList; // 0xE8
		::System::Collections::Generic::List_1<::System::UInt32>* _EquipToolAndForge; // 0xF0
		::Il2CppArray<::RPG::GameCore::FixPoint>* _TreasureProbability; // 0xF8
		::System::UInt32 _ScoreSpecialOfCurWaveByKill; // 0x100
		::System::UInt32 _CurPeriodID; // 0x104
		::System::UInt32 _CurKillScoreFromNormal; // 0x108
		::RPG::GameCore::EvolveBuildSeason _Season_k__BackingField; // 0x10C
		::System::UInt32 _ScoreWeightOfCurWaveByKill; // 0x110
		::RPG::GameCore::FixPoint _ExCoinRatio; // 0x118
		::RPG::GameCore::EvolveBuildFeatureType _CurContinuousFeatures; // 0x120
		::System::Boolean _IsUnlockReRoll; // 0x124
		::System::Boolean _IsCardSetup; // 0x125
		::System::Boolean _IsMainMonsterSummoned_k__BackingField; // 0x126
		::RPG::GameCore::FixPoint _Const_TreasureBasicCoinPerPiece; // 0x128
		::System::UInt32 GearSelectDialogOpenTimes; // 0x130
		::System::Int32 _MaxUnlockToolSlot; // 0x134
		::RPG::GameCore::FixPoint _WaveExExpRatio; // 0x138
		::RPG::GameCore::EvolvePeriodType _LevelPeriod; // 0x140
		::System::Nullable_1<::System::UInt32> _PreAddGearID; // 0x144
		::System::UInt32 _Const_FinalWaveKillScoreBountyMaxOfWave; // 0x14C
		::System::UInt32 _LostCount; // 0x150
		::RPG::GameCore::FixPoint _Const_TreasureBasicCoin; // 0x158
		::RPG::GameCore::FixPoint _Const_TreasureAlterCoinPerPiece; // 0x160
		::System::UInt32 _ScoreMaxWeightOfCurWaveByKill; // 0x168
		::System::UInt32 _CoinTotalLevel; // 0x16C
		::RPG::GameCore::FixPoint _LevelDifficulty; // 0x170
		::System::UInt32 _Period1RandomSeed; // 0x178
		::System::UInt32 _StoryStep; // 0x17C
		::RPG::GameCore::FixPoint _ExExpRatio; // 0x180
		::System::UInt32 _CurKillScoreFromSpecial; // 0x188
		::System::Int32 _MaxToolSlot; // 0x18C
		::System::UInt32 _Const_KillScoreBountyMaxOfWave; // 0x190
		::System::UInt32 _ReRollCount; // 0x194
		::System::Boolean _IsUnlockSkipGear; // 0x198
		::System::Boolean _IsUnlockCardReRoll; // 0x199
		::System::UInt32 _BaseCardReRollCount; // 0x19C
		::System::Boolean IsQuitAndGiveUp; // 0x1A0
		::System::Boolean _AutoSkipSelect_k__BackingField; // 0x1A1
		::System::Boolean _AutoSelect_k__BackingField; // 0x1A2
		::System::Boolean _IsUnlockLostGear; // 0x1A3
		::System::UInt32 _StageMergedID; // 0x1A4
		::RPG::GameCore::FixPoint _Const_ExpMultiplierByWave; // 0x1A8
		::System::UInt32 _CurCountdownTimer; // 0x1B0
		::System::Int32 _MaxUnlockPluginSlot; // 0x1B4
		::RPG::GameCore::FixPoint _Const_CoinForFullPack; // 0x1B8
		::System::UInt32 _TreasureMissCount; // 0x1C0
		::System::Int32 _MaxPluginSlot; // 0x1C4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__CCTOR_OFFSET))();
		}

		::System::Void GenCardForSelected(::System::Collections::Generic::List_1<::Class_1_7AB88D713F5121B3_33*>* targetArr, ::Il2CppArray<::System::UInt32>* refWhitelist, ::Il2CppArray<::System::UInt32>* refBlacklist)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_7AB88D713F5121B3_33*>*, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GENCARDFORSELECTED_OFFSET))(this, targetArr, refWhitelist, refBlacklist);
		}

		::System::Void GainNewCard(::System::UInt32 nCardID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GAINNEWCARD_OFFSET))(this, nCardID);
		}

		::System::Void ApplyCard(::Class_1_E7A847EAD72D587F* pCard)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E7A847EAD72D587F*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_APPLYCARD_OFFSET))(this, pCard);
		}

		::Class_1_7AB88D713F5121B3_33* GenCardOnce()
		{
			return ((::Class_1_7AB88D713F5121B3_33*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GENCARDONCE_OFFSET))(this);
		}

		::System::Void _RecordRefreshedCard(::System::UInt32 cardId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__RECORDREFRESHEDCARD_OFFSET))(this, cardId);
		}

		::System::Void _SetupCardAtBattleStart(::Class_1_B66FD2332404CEBB* pBattleData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B66FD2332404CEBB*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__SETUPCARDATBATTLESTART_OFFSET))(this, pBattleData);
		}

		::System::Void _SetupCardRandom(::Class_1_B66FD2332404CEBB* pBattleData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B66FD2332404CEBB*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__SETUPCARDRANDOM_OFFSET))(this, pBattleData);
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

		::System::Void set_AutoSelect(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SET_AUTOSELECT_OFFSET))(this, value);
		}

		::System::Boolean get_AutoSkipSelect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GET_AUTOSKIPSELECT_OFFSET))(this);
		}

		::System::Void set_AutoSkipSelect(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SET_AUTOSKIPSELECT_OFFSET))(this, value);
		}

		::System::String* DebugRandomGear(::System::Int32 nTime)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_DEBUGRANDOMGEAR_OFFSET))(this, nTime);
		}

		::System::String* DebugRandomCard(::System::Int32 nTime)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_DEBUGRANDOMCARD_OFFSET))(this, nTime);
		}

		::System::String* DebugRandomTreasure(::System::Int32 nTime)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_DEBUGRANDOMTREASURE_OFFSET))(this, nTime);
		}

		::System::String* DebugRandomTreasurePieceCount(::System::Int32 nTime)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_DEBUGRANDOMTREASUREPIECECOUNT_OFFSET))(this, nTime);
		}

		::System::Void _InitForDebugRandom()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__INITFORDEBUGRANDOM_OFFSET))(this);
		}

		::System::String* _ExportCSVLog(::RPG::GameCore::EvolveBuildGearManager_DebugCsvMode debugMode)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::EvolveBuildGearManager_DebugCsvMode))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__EXPORTCSVLOG_OFFSET))(this, debugMode);
		}

		::System::Boolean IsFeatureActive(::RPG::GameCore::EvolveBuildFeatureType eFeature)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::EvolveBuildFeatureType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_ISFEATUREACTIVE_OFFSET))(this, eFeature);
		}

		::System::Void TriggerFeature(::RPG::GameCore::EvolveBuildFeatureType eFeature)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EvolveBuildFeatureType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_TRIGGERFEATURE_OFFSET))(this, eFeature);
		}

		::System::Void RevertFeature(::RPG::GameCore::EvolveBuildFeatureType eFeature)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EvolveBuildFeatureType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_REVERTFEATURE_OFFSET))(this, eFeature);
		}

		::System::Void _TryFeature_MinLvGearLvUpOnWave()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__TRYFEATURE_MINLVGEARLVUPONWAVE_OFFSET))(this);
		}

		::System::Void _TryFeature_ModifyGearDeltaLv(::System::UInt32 gearId, ::System::UInt32 curLv, ::System::UInt32& deltaLv)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__TRYFEATURE_MODIFYGEARDELTALV_OFFSET))(this, gearId, curLv, deltaLv);
		}

		::System::Void _TryFeature_BigTreasure(::Il2CppArray<::RPG::GameCore::FixPoint>*& pTreasureProb)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::FixPoint>*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__TRYFEATURE_BIGTREASURE_OFFSET))(this, pTreasureProb);
		}

		::System::Void _OnContinuousFeatureFirstTimeActive(::RPG::GameCore::EvolveBuildFeatureType curContinuousFeatures)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EvolveBuildFeatureType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__ONCONTINUOUSFEATUREFIRSTTIMEACTIVE_OFFSET))(this, curContinuousFeatures);
		}

		::System::Boolean HasWeaponAndPluginResonanceInPacket(::System::UInt32 gearID, ::System::UInt32& resonanceID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_HASWEAPONANDPLUGINRESONANCEINPACKET_OFFSET))(this, gearID, resonanceID);
		}

		::System::Boolean HasWeaponAndToolResonanceInPacket(::System::UInt32 gearID, ::System::UInt32& toolID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_HASWEAPONANDTOOLRESONANCEINPACKET_OFFSET))(this, gearID, toolID);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetResonanceIDsInPacket(::System::UInt32 gearID)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GETRESONANCEIDSINPACKET_OFFSET))(this, gearID);
		}

		::System::Boolean GetIsGearTagConnect(::System::UInt32 tagID, ::RPG::GameCore::EvolveGearType gearType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::EvolveGearType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GETISGEARTAGCONNECT_OFFSET))(this, tagID, gearType);
		}

		::System::Boolean GetIsGearDamageTypeConnect(::RPG::GameCore::AttackDamageType damageType, ::RPG::GameCore::EvolveGearType gearType)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AttackDamageType, ::RPG::GameCore::EvolveGearType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GETISGEARDAMAGETYPECONNECT_OFFSET))(this, damageType, gearType);
		}

		::System::Boolean _HasUltraForgeResonanceInPacket(::System::UInt32 ultraForgeID, ::System::UInt32& resonanceID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__HASULTRAFORGERESONANCEINPACKET_OFFSET))(this, ultraForgeID, resonanceID);
		}

		::System::Boolean _HasNormalForgePluginResonanceInPacket(::System::UInt32 forgeID, ::System::UInt32& resonanceID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__HASNORMALFORGEPLUGINRESONANCEINPACKET_OFFSET))(this, forgeID, resonanceID);
		}

		::System::Boolean _HasPluginResonanceInPacket(::System::UInt32 pluginID, ::System::UInt32& resonanceID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__HASPLUGINRESONANCEINPACKET_OFFSET))(this, pluginID, resonanceID);
		}

		::System::Boolean _HasBroadcastForgeResonanceInPacket(::System::UInt32 gearID, ::System::UInt32& forgeID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__HASBROADCASTFORGERESONANCEINPACKET_OFFSET))(this, gearID, forgeID);
		}

		::System::Boolean _HasToolResonanceInPacket(::System::UInt32 toolID, ::RPG::GameCore::EvolveGearType resonanceType, ::System::UInt32& resonanceID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::EvolveGearType, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__HASTOOLRESONANCEINPACKET_OFFSET))(this, toolID, resonanceType, resonanceID);
		}

		::System::Boolean _HasAnotherForgeMaterialGearResonanceInPacket(::System::UInt32 gearID, ::System::UInt32& resonanceID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__HASANOTHERFORGEMATERIALGEARRESONANCEINPACKET_OFFSET))(this, gearID, resonanceID);
		}

		::System::Void _SetupSeasonStrategy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__SETUPSEASONSTRATEGY_OFFSET))(this);
		}

		::RPG::GameCore::EvolveBuildSeason get_Season()
		{
			return ((::RPG::GameCore::EvolveBuildSeason(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GET_SEASON_OFFSET))(this);
		}

		::System::Void set_Season(::RPG::GameCore::EvolveBuildSeason value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EvolveBuildSeason))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SET_SEASON_OFFSET))(this, value);
		}

		::RPG::GameCore::EvolveBuildGearManager_IEvolveBuildSeasonStrategy* get_SeasonStrategy()
		{
			return ((::RPG::GameCore::EvolveBuildGearManager_IEvolveBuildSeasonStrategy*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GET_SEASONSTRATEGY_OFFSET))(this);
		}

		::System::Void set_SeasonStrategy(::RPG::GameCore::EvolveBuildGearManager_IEvolveBuildSeasonStrategy* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EvolveBuildGearManager_IEvolveBuildSeasonStrategy*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SET_SEASONSTRATEGY_OFFSET))(this, value);
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

		::System::Void _SetupBasicData(::Class_1_B66FD2332404CEBB* dataFromLineup)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B66FD2332404CEBB*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__SETUPBASICDATA_OFFSET))(this, dataFromLineup);
		}

		::System::Void GenStatistics(::RPG::GameCore::PVEGameStatistics* pStt)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PVEGameStatistics*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GENSTATISTICS_OFFSET))(this, pStt);
		}

		::System::UInt32 GetPropertyInUint(::RPG::GameCore::EvolveBuildPropertyType eProperty)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::EvolveBuildPropertyType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GETPROPERTYINUINT_OFFSET))(this, eProperty);
		}

		::RPG::GameCore::FixPoint GetProperty(::RPG::GameCore::EvolveBuildPropertyType eProperty)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::EvolveBuildPropertyType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GETPROPERTY_OFFSET))(this, eProperty);
		}

		::System::Void SetProperty(::RPG::GameCore::EvolveBuildPropertyType eProperty, ::RPG::GameCore::FixPoint fNewValue)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EvolveBuildPropertyType, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SETPROPERTY_OFFSET))(this, eProperty, fNewValue);
		}

		::System::Void GainNewGear(::System::UInt32 gearId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GAINNEWGEAR_OFFSET))(this, gearId);
		}

		::System::Void LostGear(::System::UInt32 gearId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_LOSTGEAR_OFFSET))(this, gearId);
		}

		::System::Boolean HasLost(::System::UInt32 gearId)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_HASLOST_OFFSET))(this, gearId);
		}

		::System::UInt32 TryGetGearLevel(::System::UInt32 gearId)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_TRYGETGEARLEVEL_OFFSET))(this, gearId);
		}

		::System::Boolean HasGear(::System::UInt32 gearId)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_HASGEAR_OFFSET))(this, gearId);
		}

		::System::Boolean HasGearOrPreAdd(::System::UInt32 gearId)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_HASGEARORPREADD_OFFSET))(this, gearId);
		}

		::System::Boolean IsLastMaterialToForge(::System::UInt32 tobeAddGearId, ::System::Boolean ignoreLv, ::System::UInt32& forgeGearId)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_ISLASTMATERIALTOFORGE_OFFSET))(this, tobeAddGearId, ignoreLv, forgeGearId);
		}

		::System::Boolean HasNoGearForSelected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_HASNOGEARFORSELECTED_OFFSET))(this);
		}

		::System::Void GenGearForSelected(::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearSelectInfo*>*& targetArr)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearSelectInfo*>*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GENGEARFORSELECTED_OFFSET))(this, targetArr);
		}

		::System::Void GenSpecifiedGearForSelected(::RPG::GameCore::TaskContext* context, ::Il2CppArray<::RPG::GameCore::DynamicFloat*>* debugIdList, ::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearSelectInfo*>*& targetArr)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Il2CppArray<::RPG::GameCore::DynamicFloat*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearSelectInfo*>*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GENSPECIFIEDGEARFORSELECTED_OFFSET))(this, context, debugIdList, targetArr);
		}

		::System::Int32 AutoSelectGear(::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearSelectInfo*>*& targetArr)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearSelectInfo*>*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_AUTOSELECTGEAR_OFFSET))(this, targetArr);
		}

		::System::Void GenGearForTreasure(::System::Collections::Generic::List_1<::System::UInt32>* targetArr)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GENGEARFORTREASURE_OFFSET))(this, targetArr);
		}

		::System::ValueTuple_2<::System::UInt32, ::System::UInt32> GetGearSelectProgress()
		{
			return ((::System::ValueTuple_2<::System::UInt32, ::System::UInt32>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GETGEARSELECTPROGRESS_OFFSET))(this);
		}

		::RPG::PoolList_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>* GetAllEquippedGear(::RPG::GameCore::EvolveGearType filterType)
		{
			return ((::RPG::PoolList_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>*(*)(::PVOID, ::RPG::GameCore::EvolveGearType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GETALLEQUIPPEDGEAR_OFFSET))(this, filterType);
		}

		::System::Boolean IsToolFull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_ISTOOLFULL_OFFSET))(this);
		}

		::System::Boolean IsPluginFull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_ISPLUGINFULL_OFFSET))(this);
		}

		::System::Int32 GetSlotCapacity(::RPG::GameCore::EvolveGearType type)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::EvolveGearType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GETSLOTCAPACITY_OFFSET))(this, type);
		}

		::System::Int32 GetUnlockSlotCapacity(::RPG::GameCore::EvolveGearType type)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::EvolveGearType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GETUNLOCKSLOTCAPACITY_OFFSET))(this, type);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>* GetAllEquippedGear_1(::RPG::GameCore::EvolveGearType filterType, ::System::Boolean includePreAdd)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>*(*)(::PVOID, ::RPG::GameCore::EvolveGearType, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GETALLEQUIPPEDGEAR_1_OFFSET))(this, filterType, includePreAdd);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>* GetAllEquippedGear_2(::RPG::GameCore::EvolveGearType filterType1, ::RPG::GameCore::EvolveGearType filterType2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>*(*)(::PVOID, ::RPG::GameCore::EvolveGearType, ::RPG::GameCore::EvolveGearType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GETALLEQUIPPEDGEAR_2_OFFSET))(this, filterType1, filterType2);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>* GetAllExceptEquippedGear(::RPG::GameCore::EvolveGearType exceptType)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>*(*)(::PVOID, ::RPG::GameCore::EvolveGearType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GETALLEXCEPTEQUIPPEDGEAR_OFFSET))(this, exceptType);
		}

		::System::Nullable_1<::System::UInt32> get_PreAddGearID()
		{
			return ((::System::Nullable_1<::System::UInt32>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_GET_PREADDGEARID_OFFSET))(this);
		}

		::System::Void set_PreAddGearID(::System::Nullable_1<::System::UInt32> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::UInt32>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SET_PREADDGEARID_OFFSET))(this, value);
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

		::System::Void _SetupGearAtBattleStart(::Class_1_B66FD2332404CEBB* pBattleData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B66FD2332404CEBB*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__SETUPGEARATBATTLESTART_OFFSET))(this, pBattleData);
		}

		::System::Void _OnLevelEntityDieEvent(::RPG::GameCore::LevelCharacterDie* pEvt)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelCharacterDie*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__ONLEVELENTITYDIEEVENT_OFFSET))(this, pEvt);
		}

		::System::Void _OnLevelWaveMonsterBegin(::RPG::GameCore::LevelWaveMonsterBegin* pEvt)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelWaveMonsterBegin*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__ONLEVELWAVEMONSTERBEGIN_OFFSET))(this, pEvt);
		}

		::System::Void _OnLevelWaveMonsterFinish(::RPG::GameCore::LevelWaveMonster* pEvt)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelWaveMonster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__ONLEVELWAVEMONSTERFINISH_OFFSET))(this, pEvt);
		}

		::System::Void _GetKillScore(::RPG::GameCore::GameEntity* pDiedMonster)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__GETKILLSCORE_OFFSET))(this, pDiedMonster);
		}

		::System::Void _OnLevelDamageEntity(::RPG::GameCore::LevelPreDamageEntity* pEvt)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelPreDamageEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__ONLEVELDAMAGEENTITY_OFFSET))(this, pEvt);
		}

		::System::Void _OnLevelDamageEntityPhase1(::RPG::GameCore::LevelDamageEntityPhase1* pEvt)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelDamageEntityPhase1*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__ONLEVELDAMAGEENTITYPHASE1_OFFSET))(this, pEvt);
		}

		::System::Void _OnLevelMainMonsterChange(::RPG::GameCore::LevelMainMonsterChange* pEvt)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelMainMonsterChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__ONLEVELMAINMONSTERCHANGE_OFFSET))(this, pEvt);
		}

		::System::Void _CostGearByForge(::System::UInt32 forgeGearId, ::System::Int32& nCostGearIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__COSTGEARBYFORGE_OFFSET))(this, forgeGearId, nCostGearIndex);
		}

		::System::Void _UnEquipGear(::System::UInt32 gearId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__UNEQUIPGEAR_OFFSET))(this, gearId);
		}

		::System::Void _OnGearUpgrade(::System::UInt32 gearId, ::System::UInt32 oldLevel, ::System::UInt32 newLevel)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__ONGEARUPGRADE_OFFSET))(this, gearId, oldLevel, newLevel);
		}

		::System::Void _OnGearEquip(::System::UInt32 gearId, ::System::UInt32 level, ::System::Int32 specifiedInsertIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__ONGEAREQUIP_OFFSET))(this, gearId, level, specifiedInsertIndex);
		}

		::System::Void _OnGearUnEquip(::System::UInt32 gearId, ::System::UInt32 level)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__ONGEARUNEQUIP_OFFSET))(this, gearId, level);
		}

		::System::Void _OnAddBindingGearMazeBuff(::RPG::GameCore::ActivityEvolveBuildGearRow* pGearRow)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ActivityEvolveBuildGearRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__ONADDBINDINGGEARMAZEBUFF_OFFSET))(this, pGearRow);
		}

		::System::Void _OnRemoveBindingGearMazeBuff(::RPG::GameCore::ActivityEvolveBuildGearRow* pGearRow)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ActivityEvolveBuildGearRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__ONREMOVEBINDINGGEARMAZEBUFF_OFFSET))(this, pGearRow);
		}

		::System::Boolean _IsAllMaterialsReady(::System::UInt32 forgeGearId)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__ISALLMATERIALSREADY_OFFSET))(this, forgeGearId);
		}

		::System::Boolean _IsAllMaterialsReadyWithAdditionalGear(::System::UInt32 addGearId, ::System::UInt32 forgeGearId, ::System::Boolean ignoreLv)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__ISALLMATERIALSREADYWITHADDITIONALGEAR_OFFSET))(this, addGearId, forgeGearId, ignoreLv);
		}

		::System::UInt32 _GetRandomGearByWeight(::System::Int32 nTotalWeight, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* pWeightDict)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__GETRANDOMGEARBYWEIGHT_OFFSET))(this, nTotalWeight, pWeightDict);
		}

		::RPG::GameCore::EvolveBuildGearSelectInfo* _GenGearSelectInfo(::System::UInt32 nGearId)
		{
			return ((::RPG::GameCore::EvolveBuildGearSelectInfo*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER__GENGEARSELECTINFO_OFFSET))(this, nGearId);
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

		::System::Void set_IsMainMonsterSummoned(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SET_ISMAINMONSTERSUMMONED_OFFSET))(this, value);
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

		::System::Void __iFixBaseProxy_GenStatistics(::RPG::GameCore::PVEGameStatistics* P0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PVEGameStatistics*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER___IFIXBASEPROXY_GENSTATISTICS_OFFSET))(this, P0);
		}
	};
}
