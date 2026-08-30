#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D90D29A0DA06B4F8.h"
#include "unitysdk/Class_1_D90D29A0DA06B4F8_ERegisterMode.h"
#include "unitysdk/RPG/GameCore/ActivitySubModeType.h"
#include "unitysdk/RPG/GameCore/FateAffixInsertMonsterPhaseType.h"
#include "unitysdk/RPG/GameCore/FateBattleManager___c__DisplayClass11_0.h"
#include "unitysdk/RPG/GameCore/FateContentParamType.h"
#include "unitysdk/RPG/GameCore/FateHouguType.h"
#include "unitysdk/RPG/GameCore/FateLevelParamType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

class Class_0_16E4307DCC419505_460;
class Class_1_1C30CE192ABE4C54;
class Class_1_5CFC3AE61DDB76FA;
class Class_1_6ECCFCE75EB143F8;
class Class_1_923C1AF2DBD806BC;
class Class_1_97870C1EEE9A6A4F;
class Class_1_9D50B47B40CEFD84;
class Class_1_C4C2ACF3D9655BEA_27;
class Class_1_C4C2ACF3D9655BEA_28;
class Class_2_1DB6C02CA182EEBA;
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG::GameCore { class BattleFateHouguRuntime; }
namespace RPG::GameCore { class InfiniteBattleData; }
namespace RPG::GameCore { class InfinitePerWaveData; }
namespace RPG::GameCore { class PVEGameStatistics; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_FATEBATTLEMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE63D1C0)
#define RPG_GAMECORE_FATEBATTLEMANAGER_GAINNEWHOUGU_OFFSET UNITYSDK_OFFSET(0xE640560)
#define RPG_GAMECORE_FATEBATTLEMANAGER_GENHOUGUPROJECTIONWEIGHTPOOL_OFFSET UNITYSDK_OFFSET(0xE63FFE0)
#define RPG_GAMECORE_FATEBATTLEMANAGER_GENHOUGUPROJECTION_OFFSET UNITYSDK_OFFSET(0xE63FDA0)
#define RPG_GAMECORE_FATEBATTLEMANAGER_GENSTATISTICS_OFFSET UNITYSDK_OFFSET(0xE63E650)
#define RPG_GAMECORE_FATEBATTLEMANAGER_GETCLAZZTRAITPARAM_OFFSET UNITYSDK_OFFSET(0xE642960)
#define RPG_GAMECORE_FATEBATTLEMANAGER_GETCONTENTPARAM_OFFSET UNITYSDK_OFFSET(0xE63F810)
#define RPG_GAMECORE_FATEBATTLEMANAGER_GET_ACTIVITYSUBMODETYPE_OFFSET UNITYSDK_OFFSET(0xE63C370)
#define RPG_GAMECORE_FATEBATTLEMANAGER_GET_AFFIXMAP_OFFSET UNITYSDK_OFFSET(0xE643600)
#define RPG_GAMECORE_FATEBATTLEMANAGER_GET_AUTOSELECT_OFFSET UNITYSDK_OFFSET(0xE6437C0)
#define RPG_GAMECORE_FATEBATTLEMANAGER_GET_FATEBUFFLIST_OFFSET UNITYSDK_OFFSET(0xE641E20)
#define RPG_GAMECORE_FATEBATTLEMANAGER_GET_HOUGUMAP_OFFSET UNITYSDK_OFFSET(0xE641760)
#define RPG_GAMECORE_FATEBATTLEMANAGER_GET_MASTERCONTENT_OFFSET UNITYSDK_OFFSET(0xE642940)
#define RPG_GAMECORE_FATEBATTLEMANAGER_GET_REGISTERMODE_OFFSET UNITYSDK_OFFSET(0xE63C380)
#define RPG_GAMECORE_FATEBATTLEMANAGER_GET_REIJUAFFIXLIST_OFFSET UNITYSDK_OFFSET(0xE6436F0)
#define RPG_GAMECORE_FATEBATTLEMANAGER_GET_REIJULIST_OFFSET UNITYSDK_OFFSET(0xE643620)
#define RPG_GAMECORE_FATEBATTLEMANAGER_GET__AFFIXLIST_OFFSET UNITYSDK_OFFSET(0xE643530)
#define RPG_GAMECORE_FATEBATTLEMANAGER_GET__HOUGULIST_OFFSET UNITYSDK_OFFSET(0xE640800)
#define RPG_GAMECORE_FATEBATTLEMANAGER_GET__TRAITBUFFLIST_OFFSET UNITYSDK_OFFSET(0xE642F70)
#define RPG_GAMECORE_FATEBATTLEMANAGER_GET__TRAITLIST_OFFSET UNITYSDK_OFFSET(0xE642EA0)
#define RPG_GAMECORE_FATEBATTLEMANAGER_MODIFYCONTENTPARAM_OFFSET UNITYSDK_OFFSET(0xE63FA10)
#define RPG_GAMECORE_FATEBATTLEMANAGER_MODIFYFATEBUFFAMPLIFICATION_OFFSET UNITYSDK_OFFSET(0xE641780)
#define RPG_GAMECORE_FATEBATTLEMANAGER_MODIFYLEVELPARAM_OFFSET UNITYSDK_OFFSET(0xE641EF0)
#define RPG_GAMECORE_FATEBATTLEMANAGER_ONBATTLEINSTANCECREATED_OFFSET UNITYSDK_OFFSET(0xE63CF20)
#define RPG_GAMECORE_FATEBATTLEMANAGER_ONINITIALIZE_OFFSET UNITYSDK_OFFSET(0xE63C760)
#define RPG_GAMECORE_FATEBATTLEMANAGER_ONMAZEBUFFBINDING_OFFSET UNITYSDK_OFFSET(0xE63D7D0)
#define RPG_GAMECORE_FATEBATTLEMANAGER_REMOVEHOUGU_OFFSET UNITYSDK_OFFSET(0xE640A10)
#define RPG_GAMECORE_FATEBATTLEMANAGER_SET_AFFIXMAP_OFFSET UNITYSDK_OFFSET(0xE643610)
#define RPG_GAMECORE_FATEBATTLEMANAGER_SET_AUTOSELECT_OFFSET UNITYSDK_OFFSET(0xE6437D0)
#define RPG_GAMECORE_FATEBATTLEMANAGER_SET_HOUGUMAP_OFFSET UNITYSDK_OFFSET(0xE641770)
#define RPG_GAMECORE_FATEBATTLEMANAGER_SET_MASTERCONTENT_OFFSET UNITYSDK_OFFSET(0xE642950)
#define RPG_GAMECORE_FATEBATTLEMANAGER_SORTBYFATEBATTLERULE_OFFSET UNITYSDK_OFFSET(0xE63F280)
#define RPG_GAMECORE_FATEBATTLEMANAGER_TRYGETCONTENTCLIENTUID_OFFSET UNITYSDK_OFFSET(0xE63F460)
#define RPG_GAMECORE_FATEBATTLEMANAGER_TRYGETCONTENT_OFFSET UNITYSDK_OFFSET(0xE63F740)
#define RPG_GAMECORE_FATEBATTLEMANAGER_TRYGETLEVELPARAM_OFFSET UNITYSDK_OFFSET(0xE6404B0)
#define RPG_GAMECORE_FATEBATTLEMANAGER__APPLYAFFIX_OFFSET UNITYSDK_OFFSET(0xE63E3D0)
#define RPG_GAMECORE_FATEBATTLEMANAGER__APPLYFATEBUFF_OFFSET UNITYSDK_OFFSET(0xE63D870)
#define RPG_GAMECORE_FATEBATTLEMANAGER__APPLYHOUGU_OFFSET UNITYSDK_OFFSET(0xE63E280)
#define RPG_GAMECORE_FATEBATTLEMANAGER__APPLYINSERTMONSTER_OFFSET UNITYSDK_OFFSET(0xE642310)
#define RPG_GAMECORE_FATEBATTLEMANAGER__APPLYINSERTWAVE_OFFSET UNITYSDK_OFFSET(0xE63CF70)
#define RPG_GAMECORE_FATEBATTLEMANAGER__APPLYMASTER_OFFSET UNITYSDK_OFFSET(0xE63E520)
#define RPG_GAMECORE_FATEBATTLEMANAGER__APPLYMAZEBUFF_OFFSET UNITYSDK_OFFSET(0xE641050)
#define RPG_GAMECORE_FATEBATTLEMANAGER__APPLYREIJUANDREIJUAFFIX_OFFSET UNITYSDK_OFFSET(0xE63DF50)
#define RPG_GAMECORE_FATEBATTLEMANAGER__APPLYTRAITBUFF_OFFSET UNITYSDK_OFFSET(0xE63DB90)
#define RPG_GAMECORE_FATEBATTLEMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0xE6437E0)
#define RPG_GAMECORE_FATEBATTLEMANAGER__COMPAREMONSTERRANK_OFFSET UNITYSDK_OFFSET(0xE642790)
#define RPG_GAMECORE_FATEBATTLEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xE63C390)
#define RPG_GAMECORE_FATEBATTLEMANAGER__GENSTATISTICS_G___GETRANK_11_0_OFFSET UNITYSDK_OFFSET(0xE63F180)
#define RPG_GAMECORE_FATEBATTLEMANAGER__GETRANDOMBYWEIGHT_OFFSET UNITYSDK_OFFSET(0xE640350)
#define RPG_GAMECORE_FATEBATTLEMANAGER__GETRANK_OFFSET UNITYSDK_OFFSET(0xE642820)
#define RPG_GAMECORE_FATEBATTLEMANAGER__GETTRAITBUFFPARAMMAP_OFFSET UNITYSDK_OFFSET(0xE63F8C0)
#define RPG_GAMECORE_FATEBATTLEMANAGER__GETTRAITRUNTIMEBYTRAITID_OFFSET UNITYSDK_OFFSET(0xE643040)
#define RPG_GAMECORE_FATEBATTLEMANAGER__ONAFTERCONTENTPARAMCHANGE_OFFSET UNITYSDK_OFFSET(0xE63FC00)
#define RPG_GAMECORE_FATEBATTLEMANAGER__ONFIRSTWAVEDATAREADY_OFFSET UNITYSDK_OFFSET(0xE642120)
#define RPG_GAMECORE_FATEBATTLEMANAGER__REFRESHFATEBUFFAMPLIFICATION_OFFSET UNITYSDK_OFFSET(0xE641840)
#define RPG_GAMECORE_FATEBATTLEMANAGER__REMOVEMAZEBUFF_OFFSET UNITYSDK_OFFSET(0xE640D10)
#define RPG_GAMECORE_FATEBATTLEMANAGER__SETUPAFFIXRUNTIMEMAP_OFFSET UNITYSDK_OFFSET(0xE643170)
#define RPG_GAMECORE_FATEBATTLEMANAGER__SETUPBASICDATA_OFFSET UNITYSDK_OFFSET(0xE63CB40)
#define RPG_GAMECORE_FATEBATTLEMANAGER__SETUPGAMECORELEVELPARAM_OFFSET UNITYSDK_OFFSET(0xE642070)
#define RPG_GAMECORE_FATEBATTLEMANAGER__SETUPHASHCACHEFORFATEBUFFAMPLIFICATION_OFFSET UNITYSDK_OFFSET(0xE641B20)
#define RPG_GAMECORE_FATEBATTLEMANAGER__SETUPHOUGURUNTIMEMAP_OFFSET UNITYSDK_OFFSET(0xE640DD0)
#define RPG_GAMECORE_FATEBATTLEMANAGER__SETUPORREUSEAFFIXABILITY_OFFSET UNITYSDK_OFFSET(0xE6433F0)
#define RPG_GAMECORE_FATEBATTLEMANAGER__SETUPORREUSEHOUGUABILITY_OFFSET UNITYSDK_OFFSET(0xE6408D0)
#define RPG_GAMECORE_FATEBATTLEMANAGER__SETUPTRAITDATA_OFFSET UNITYSDK_OFFSET(0xE642C20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateBattleManager_TypeDefinitionIndex = 56272;

	class FateBattleManager : public ::Class_1_D90D29A0DA06B4F8
	{
	public:
		static ::RPG::GameCore::StringHash* StaticGet_ClientUidKeyHash()
		{
			return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(FateBattleManager_TypeDefinitionIndex)->GetStaticField(0x10540);
		}
		// static const ::System::String* ClientUidKey; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::Class_1_5CFC3AE61DDB76FA*>*>* _TypedContentMap; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_5CFC3AE61DDB76FA*>* ContentMap; // 0x40
		::Class_1_5CFC3AE61DDB76FA* _LevelParamMap; // 0x48
		::Class_1_9D50B47B40CEFD84* _BattleData; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* _FateBuffAmplificationKeyMap; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::BattleFateHouguRuntime*>* _HouguMap_k__BackingField; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* _RankFindingMap; // 0x68
		::Class_1_C4C2ACF3D9655BEA_27* _ArcherMagicalEnergyNotifyParam; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_6ECCFCE75EB143F8*>* TraitRuntimeFindingMap; // 0x78
		::Class_1_5CFC3AE61DDB76FA* _MasterContent_k__BackingField; // 0x80
		::System::Collections::Generic::List_1<::Class_1_6ECCFCE75EB143F8*>* _TraitRuntimeList; // 0x88
		::Class_1_C4C2ACF3D9655BEA_28* _RiderBloodFortAndromedaManaNotifyParam; // 0x90
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_97870C1EEE9A6A4F*>* _AffixMap_k__BackingField; // 0x98
		::System::Boolean _AutoSelect_k__BackingField; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER__CCTOR_OFFSET))();
		}

		::RPG::GameCore::ActivitySubModeType get_ActivitySubModeType()
		{
			return ((::RPG::GameCore::ActivitySubModeType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_GET_ACTIVITYSUBMODETYPE_OFFSET))(this);
		}

		::Class_1_D90D29A0DA06B4F8_ERegisterMode get_RegisterMode()
		{
			return ((::Class_1_D90D29A0DA06B4F8_ERegisterMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_GET_REGISTERMODE_OFFSET))(this);
		}

		::System::Void OnInitialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_ONINITIALIZE_OFFSET))(this);
		}

		::System::Void OnBattleInstanceCreated()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_ONBATTLEINSTANCECREATED_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void OnMazeBuffBinding()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_ONMAZEBUFFBINDING_OFFSET))(this);
		}

		::System::Void GenStatistics(::RPG::GameCore::PVEGameStatistics* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PVEGameStatistics*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_GENSTATISTICS_OFFSET))(this, a1);
		}

		::System::Void SortByFateBattleRule(::RPG::GameCore::InfinitePerWaveData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::InfinitePerWaveData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_SORTBYFATEBATTLERULE_OFFSET))(this, a1);
		}

		::System::Boolean TryGetContentClientUid(::RPG::GameCore::TaskContext* a1, ::System::UInt32& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_TRYGETCONTENTCLIENTUID_OFFSET))(this, a1, a2);
		}

		::System::Boolean TryGetContent(::System::UInt32 a1, ::Class_1_5CFC3AE61DDB76FA*& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::Class_1_5CFC3AE61DDB76FA*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_TRYGETCONTENT_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::FixPoint GetContentParam(::Class_1_5CFC3AE61DDB76FA* a1, ::RPG::GameCore::FateContentParamType a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::Class_1_5CFC3AE61DDB76FA*, ::RPG::GameCore::FateContentParamType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_GETCONTENTPARAM_OFFSET))(this, a1, a2);
		}

		::System::Void ModifyContentParam(::Class_1_5CFC3AE61DDB76FA* a1, ::RPG::GameCore::FateContentParamType a2, ::RPG::GameCore::PropertyModifyFunction a3, ::RPG::GameCore::FixPoint a4)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5CFC3AE61DDB76FA*, ::RPG::GameCore::FateContentParamType, ::RPG::GameCore::PropertyModifyFunction, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_MODIFYCONTENTPARAM_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _OnAfterContentParamChange(::Class_1_5CFC3AE61DDB76FA* a1, ::RPG::GameCore::FateContentParamType a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::FixPoint a4)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5CFC3AE61DDB76FA*, ::RPG::GameCore::FateContentParamType, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER__ONAFTERCONTENTPARAMCHANGE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void GenHouguProjection(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::RPG::GameCore::FateHouguType a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::RPG::GameCore::FateHouguType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_GENHOUGUPROJECTION_OFFSET))(this, a1, a2);
		}

		::System::Int32 GenHouguProjectionWeightPool(::RPG::GameCore::FateHouguType a1, ::RPG::PoolDictionary_2<::System::UInt32, ::System::Int32>* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::FateHouguType, ::RPG::PoolDictionary_2<::System::UInt32, ::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_GENHOUGUPROJECTIONWEIGHTPOOL_OFFSET))(this, a1, a2);
		}

		::System::Void GainNewHougu(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_GAINNEWHOUGU_OFFSET))(this, a1);
		}

		::System::Void RemoveHougu(::System::UInt32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_REMOVEHOUGU_OFFSET))(this, a1, a2);
		}

		::System::Void _ApplyHougu()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER__APPLYHOUGU_OFFSET))(this);
		}

		::System::Void _SetupHouguRuntimeMap()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER__SETUPHOUGURUNTIMEMAP_OFFSET))(this);
		}

		::System::Void _SetupOrReUseHouguAbility(::RPG::GameCore::BattleFateHouguRuntime* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleFateHouguRuntime*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER__SETUPORREUSEHOUGUABILITY_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::Class_1_5CFC3AE61DDB76FA*>* get__HouguList()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_5CFC3AE61DDB76FA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_GET__HOUGULIST_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::BattleFateHouguRuntime*>* get_HouguMap()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::BattleFateHouguRuntime*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_GET_HOUGUMAP_OFFSET))(this);
		}

		::System::Void set_HouguMap(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::BattleFateHouguRuntime*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::BattleFateHouguRuntime*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_SET_HOUGUMAP_OFFSET))(this, a1);
		}

		::System::Void ModifyFateBuffAmplification(::Class_1_5CFC3AE61DDB76FA* a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5CFC3AE61DDB76FA*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_MODIFYFATEBUFFAMPLIFICATION_OFFSET))(this, a1, a2);
		}

		::System::Void _ApplyFateBuff()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER__APPLYFATEBUFF_OFFSET))(this);
		}

		::System::Void _RefreshFateBuffAmplification(::Class_1_5CFC3AE61DDB76FA* a1, ::Class_1_1C30CE192ABE4C54* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5CFC3AE61DDB76FA*, ::Class_1_1C30CE192ABE4C54*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER__REFRESHFATEBUFFAMPLIFICATION_OFFSET))(this, a1, a2);
		}

		::System::Void _SetupHashCacheForFateBuffAmplification()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER__SETUPHASHCACHEFORFATEBUFFAMPLIFICATION_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_1_5CFC3AE61DDB76FA*>* get_FateBuffList()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_5CFC3AE61DDB76FA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_GET_FATEBUFFLIST_OFFSET))(this);
		}

		::System::Boolean TryGetLevelParam(::RPG::GameCore::FateLevelParamType a1, ::RPG::GameCore::FixPoint& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::FateLevelParamType, ::RPG::GameCore::FixPoint&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_TRYGETLEVELPARAM_OFFSET))(this, a1, a2);
		}

		::System::Void ModifyLevelParam(::RPG::GameCore::FateLevelParamType a1, ::RPG::GameCore::PropertyModifyFunction a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FateLevelParamType, ::RPG::GameCore::PropertyModifyFunction, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_MODIFYLEVELPARAM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _SetupGameCoreLevelParam()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER__SETUPGAMECORELEVELPARAM_OFFSET))(this);
		}

		::System::Void _ApplyInsertWave()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER__APPLYINSERTWAVE_OFFSET))(this);
		}

		::System::Void _OnFirstWaveDataReady(::Class_0_16E4307DCC419505_460* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER__ONFIRSTWAVEDATAREADY_OFFSET))(this, a1);
		}

		::System::Void _ApplyInsertMonster(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FateAffixInsertMonsterPhaseType, ::System::Collections::Generic::List_1<::System::UInt32>*>* a1, ::RPG::GameCore::InfiniteBattleData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FateAffixInsertMonsterPhaseType, ::System::Collections::Generic::List_1<::System::UInt32>*>*, ::RPG::GameCore::InfiniteBattleData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER__APPLYINSERTMONSTER_OFFSET))(this, a1, a2);
		}

		::System::Int32 _CompareMonsterRank(::Class_1_923C1AF2DBD806BC* a1, ::Class_1_923C1AF2DBD806BC* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_923C1AF2DBD806BC*, ::Class_1_923C1AF2DBD806BC*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER__COMPAREMONSTERRANK_OFFSET))(this, a1, a2);
		}

		::System::Int32 _GetRank(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER__GETRANK_OFFSET))(this, a1);
		}

		::System::Void _ApplyMaster()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER__APPLYMASTER_OFFSET))(this);
		}

		::Class_1_5CFC3AE61DDB76FA* get_MasterContent()
		{
			return ((::Class_1_5CFC3AE61DDB76FA*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_GET_MASTERCONTENT_OFFSET))(this);
		}

		::System::Void set_MasterContent(::Class_1_5CFC3AE61DDB76FA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5CFC3AE61DDB76FA*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_SET_MASTERCONTENT_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint GetClazzTraitParam(::RPG::GameCore::FateContentParamType a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FateContentParamType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_GETCLAZZTRAITPARAM_OFFSET))(this, a1);
		}

		::System::Void _SetupTraitData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER__SETUPTRAITDATA_OFFSET))(this);
		}

		::System::Void _ApplyTraitBuff()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER__APPLYTRAITBUFF_OFFSET))(this);
		}

		::Class_1_6ECCFCE75EB143F8* _GetTraitRuntimeByTraitID(::System::UInt32 a1)
		{
			return ((::Class_1_6ECCFCE75EB143F8*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER__GETTRAITRUNTIMEBYTRAITID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* _GetTraitBuffParamMap(::Class_1_5CFC3AE61DDB76FA* a1)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>*(*)(::PVOID, ::Class_1_5CFC3AE61DDB76FA*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER__GETTRAITBUFFPARAMMAP_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::Class_1_5CFC3AE61DDB76FA*>* get__TraitList()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_5CFC3AE61DDB76FA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_GET__TRAITLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_1_5CFC3AE61DDB76FA*>* get__TraitBuffList()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_5CFC3AE61DDB76FA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_GET__TRAITBUFFLIST_OFFSET))(this);
		}

		::System::Void _ApplyAffix()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER__APPLYAFFIX_OFFSET))(this);
		}

		::System::Void _SetupAffixRuntimeMap()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER__SETUPAFFIXRUNTIMEMAP_OFFSET))(this);
		}

		::System::Void _SetupOrReUseAffixAbility(::Class_1_97870C1EEE9A6A4F* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_97870C1EEE9A6A4F*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER__SETUPORREUSEAFFIXABILITY_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::Class_1_5CFC3AE61DDB76FA*>* get__AffixList()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_5CFC3AE61DDB76FA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_GET__AFFIXLIST_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_97870C1EEE9A6A4F*>* get_AffixMap()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_97870C1EEE9A6A4F*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_GET_AFFIXMAP_OFFSET))(this);
		}

		::System::Void set_AffixMap(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_97870C1EEE9A6A4F*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_97870C1EEE9A6A4F*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_SET_AFFIXMAP_OFFSET))(this, a1);
		}

		::System::Void _SetupBasicData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER__SETUPBASICDATA_OFFSET))(this);
		}

		::System::Void _ApplyReijuAndReijuAffix()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER__APPLYREIJUANDREIJUAFFIX_OFFSET))(this);
		}

		::Class_2_1DB6C02CA182EEBA* _ApplyMazeBuff(::Class_1_5CFC3AE61DDB76FA* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::Class_2_1DB6C02CA182EEBA*(*)(::PVOID, ::Class_1_5CFC3AE61DDB76FA*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER__APPLYMAZEBUFF_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _RemoveMazeBuff(::Class_2_1DB6C02CA182EEBA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_1DB6C02CA182EEBA*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER__REMOVEMAZEBUFF_OFFSET))(this, a1);
		}

		::System::UInt32 _GetRandomByWeight(::System::Int32 a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER__GETRANDOMBYWEIGHT_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::Class_1_5CFC3AE61DDB76FA*>* get_ReijuList()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_5CFC3AE61DDB76FA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_GET_REIJULIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_1_5CFC3AE61DDB76FA*>* get_ReijuAffixList()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_5CFC3AE61DDB76FA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_GET_REIJUAFFIXLIST_OFFSET))(this);
		}

		::System::Boolean get_AutoSelect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_GET_AUTOSELECT_OFFSET))(this);
		}

		::System::Void set_AutoSelect(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_SET_AUTOSELECT_OFFSET))(this, a1);
		}

		static ::System::Int32 _GenStatistics_g___GetRank_11_0(::System::UInt32 a1, ::RPG::GameCore::FateBattleManager___c__DisplayClass11_0& a2)
		{
			return ((::System::Int32(*)(::System::UInt32, ::RPG::GameCore::FateBattleManager___c__DisplayClass11_0&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER__GENSTATISTICS_G___GETRANK_11_0_OFFSET))(a1, a2);
		}
	};
}
