#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9E296C95827C90A8.h"
#include "unitysdk/Class_1_9E296C95827C90A8_ERegisterMode.h"
#include "unitysdk/RPG/GameCore/ActivitySubModeType.h"
#include "unitysdk/RPG/GameCore/FateAffixInsertMonsterPhaseType.h"
#include "unitysdk/RPG/GameCore/FateBattleManager___c__DisplayClass11_0.h"
#include "unitysdk/RPG/GameCore/FateContentParamType.h"
#include "unitysdk/RPG/GameCore/FateHouguType.h"
#include "unitysdk/RPG/GameCore/FateLevelParamType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

class Class_0_16E4307DCC419505_401;
class Class_1_1C30CE192ABE4C54;
class Class_1_4F029BEB084628A6;
class Class_1_6ECCFCE75EB143F8;
class Class_1_923C1AF2DBD806BC;
class Class_1_97870C1EEE9A6A4F;
class Class_1_C4C2ACF3D9655BEA_26;
class Class_1_C4C2ACF3D9655BEA_27;
class Class_1_E5506B2509E2F0C8;
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

#define RPG_GAMECORE_FATEBATTLEMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCDF1DA0)
#define RPG_GAMECORE_FATEBATTLEMANAGER_GAINNEWHOUGU_OFFSET UNITYSDK_OFFSET(0xCDF5120)
#define RPG_GAMECORE_FATEBATTLEMANAGER_GENHOUGUPROJECTIONWEIGHTPOOL_OFFSET UNITYSDK_OFFSET(0xCDF4BA0)
#define RPG_GAMECORE_FATEBATTLEMANAGER_GENHOUGUPROJECTION_OFFSET UNITYSDK_OFFSET(0xCDF4960)
#define RPG_GAMECORE_FATEBATTLEMANAGER_GENSTATISTICS_OFFSET UNITYSDK_OFFSET(0xCDF3210)
#define RPG_GAMECORE_FATEBATTLEMANAGER_GETCLAZZTRAITPARAM_OFFSET UNITYSDK_OFFSET(0xCDF7590)
#define RPG_GAMECORE_FATEBATTLEMANAGER_GETCONTENTPARAM_OFFSET UNITYSDK_OFFSET(0xCDF43D0)
#define RPG_GAMECORE_FATEBATTLEMANAGER_GET_ACTIVITYSUBMODETYPE_OFFSET UNITYSDK_OFFSET(0xCDF0F60)
#define RPG_GAMECORE_FATEBATTLEMANAGER_GET_AFFIXMAP_OFFSET UNITYSDK_OFFSET(0xCDF8230)
#define RPG_GAMECORE_FATEBATTLEMANAGER_GET_AUTOSELECT_OFFSET UNITYSDK_OFFSET(0xCDF83F0)
#define RPG_GAMECORE_FATEBATTLEMANAGER_GET_FATEBUFFLIST_OFFSET UNITYSDK_OFFSET(0xCDF69F0)
#define RPG_GAMECORE_FATEBATTLEMANAGER_GET_HOUGUMAP_OFFSET UNITYSDK_OFFSET(0xCDF6390)
#define RPG_GAMECORE_FATEBATTLEMANAGER_GET_MASTERCONTENT_OFFSET UNITYSDK_OFFSET(0xCDF7570)
#define RPG_GAMECORE_FATEBATTLEMANAGER_GET_REGISTERMODE_OFFSET UNITYSDK_OFFSET(0xCDF0F70)
#define RPG_GAMECORE_FATEBATTLEMANAGER_GET_REIJUAFFIXLIST_OFFSET UNITYSDK_OFFSET(0xCDF8320)
#define RPG_GAMECORE_FATEBATTLEMANAGER_GET_REIJULIST_OFFSET UNITYSDK_OFFSET(0xCDF8250)
#define RPG_GAMECORE_FATEBATTLEMANAGER_GET__AFFIXLIST_OFFSET UNITYSDK_OFFSET(0xCDF8160)
#define RPG_GAMECORE_FATEBATTLEMANAGER_GET__HOUGULIST_OFFSET UNITYSDK_OFFSET(0xCDF5430)
#define RPG_GAMECORE_FATEBATTLEMANAGER_GET__TRAITBUFFLIST_OFFSET UNITYSDK_OFFSET(0xCDF7BA0)
#define RPG_GAMECORE_FATEBATTLEMANAGER_GET__TRAITLIST_OFFSET UNITYSDK_OFFSET(0xCDF7AD0)
#define RPG_GAMECORE_FATEBATTLEMANAGER_MODIFYCONTENTPARAM_OFFSET UNITYSDK_OFFSET(0xCDF45D0)
#define RPG_GAMECORE_FATEBATTLEMANAGER_MODIFYFATEBUFFAMPLIFICATION_OFFSET UNITYSDK_OFFSET(0xCDF63B0)
#define RPG_GAMECORE_FATEBATTLEMANAGER_MODIFYLEVELPARAM_OFFSET UNITYSDK_OFFSET(0xCDF6AC0)
#define RPG_GAMECORE_FATEBATTLEMANAGER_ONBATTLEINSTANCECREATED_OFFSET UNITYSDK_OFFSET(0xCDF1B00)
#define RPG_GAMECORE_FATEBATTLEMANAGER_ONINITIALIZE_OFFSET UNITYSDK_OFFSET(0xCDF1320)
#define RPG_GAMECORE_FATEBATTLEMANAGER_ONMAZEBUFFBINDING_OFFSET UNITYSDK_OFFSET(0xCDF2390)
#define RPG_GAMECORE_FATEBATTLEMANAGER_REMOVEHOUGU_OFFSET UNITYSDK_OFFSET(0xCDF5640)
#define RPG_GAMECORE_FATEBATTLEMANAGER_SET_AFFIXMAP_OFFSET UNITYSDK_OFFSET(0xCDF8240)
#define RPG_GAMECORE_FATEBATTLEMANAGER_SET_AUTOSELECT_OFFSET UNITYSDK_OFFSET(0xCDF8400)
#define RPG_GAMECORE_FATEBATTLEMANAGER_SET_HOUGUMAP_OFFSET UNITYSDK_OFFSET(0xCDF63A0)
#define RPG_GAMECORE_FATEBATTLEMANAGER_SET_MASTERCONTENT_OFFSET UNITYSDK_OFFSET(0xCDF7580)
#define RPG_GAMECORE_FATEBATTLEMANAGER_SORTBYFATEBATTLERULE_OFFSET UNITYSDK_OFFSET(0xCDF3E40)
#define RPG_GAMECORE_FATEBATTLEMANAGER_TRYGETCONTENTCLIENTUID_OFFSET UNITYSDK_OFFSET(0xCDF4020)
#define RPG_GAMECORE_FATEBATTLEMANAGER_TRYGETCONTENT_OFFSET UNITYSDK_OFFSET(0xCDF4300)
#define RPG_GAMECORE_FATEBATTLEMANAGER_TRYGETLEVELPARAM_OFFSET UNITYSDK_OFFSET(0xCDF5070)
#define RPG_GAMECORE_FATEBATTLEMANAGER__APPLYAFFIX_OFFSET UNITYSDK_OFFSET(0xCDF2F90)
#define RPG_GAMECORE_FATEBATTLEMANAGER__APPLYFATEBUFF_OFFSET UNITYSDK_OFFSET(0xCDF2430)
#define RPG_GAMECORE_FATEBATTLEMANAGER__APPLYHOUGU_OFFSET UNITYSDK_OFFSET(0xCDF2E40)
#define RPG_GAMECORE_FATEBATTLEMANAGER__APPLYINSERTMONSTER_OFFSET UNITYSDK_OFFSET(0xCDF6F40)
#define RPG_GAMECORE_FATEBATTLEMANAGER__APPLYINSERTWAVE_OFFSET UNITYSDK_OFFSET(0xCDF1B50)
#define RPG_GAMECORE_FATEBATTLEMANAGER__APPLYMASTER_OFFSET UNITYSDK_OFFSET(0xCDF30E0)
#define RPG_GAMECORE_FATEBATTLEMANAGER__APPLYMAZEBUFF_OFFSET UNITYSDK_OFFSET(0xCDF5C80)
#define RPG_GAMECORE_FATEBATTLEMANAGER__APPLYREIJUANDREIJUAFFIX_OFFSET UNITYSDK_OFFSET(0xCDF2B10)
#define RPG_GAMECORE_FATEBATTLEMANAGER__APPLYTRAITBUFF_OFFSET UNITYSDK_OFFSET(0xCDF2750)
#define RPG_GAMECORE_FATEBATTLEMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0xCDF8410)
#define RPG_GAMECORE_FATEBATTLEMANAGER__COMPAREMONSTERRANK_OFFSET UNITYSDK_OFFSET(0xCDF73C0)
#define RPG_GAMECORE_FATEBATTLEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xCDF0F80)
#define RPG_GAMECORE_FATEBATTLEMANAGER__GENSTATISTICS_G___GETRANK_11_0_OFFSET UNITYSDK_OFFSET(0xCDF3D40)
#define RPG_GAMECORE_FATEBATTLEMANAGER__GETRANDOMBYWEIGHT_OFFSET UNITYSDK_OFFSET(0xCDF4F10)
#define RPG_GAMECORE_FATEBATTLEMANAGER__GETRANK_OFFSET UNITYSDK_OFFSET(0xCDF7450)
#define RPG_GAMECORE_FATEBATTLEMANAGER__GETTRAITBUFFPARAMMAP_OFFSET UNITYSDK_OFFSET(0xCDF4480)
#define RPG_GAMECORE_FATEBATTLEMANAGER__GETTRAITRUNTIMEBYTRAITID_OFFSET UNITYSDK_OFFSET(0xCDF7C70)
#define RPG_GAMECORE_FATEBATTLEMANAGER__ONAFTERCONTENTPARAMCHANGE_OFFSET UNITYSDK_OFFSET(0xCDF47C0)
#define RPG_GAMECORE_FATEBATTLEMANAGER__ONFIRSTWAVEDATAREADY_OFFSET UNITYSDK_OFFSET(0xCDF6D50)
#define RPG_GAMECORE_FATEBATTLEMANAGER__REFRESHFATEBUFFAMPLIFICATION_OFFSET UNITYSDK_OFFSET(0xCDF6470)
#define RPG_GAMECORE_FATEBATTLEMANAGER__REMOVEMAZEBUFF_OFFSET UNITYSDK_OFFSET(0xCDF5940)
#define RPG_GAMECORE_FATEBATTLEMANAGER__SETUPAFFIXRUNTIMEMAP_OFFSET UNITYSDK_OFFSET(0xCDF7DA0)
#define RPG_GAMECORE_FATEBATTLEMANAGER__SETUPBASICDATA_OFFSET UNITYSDK_OFFSET(0xCDF1720)
#define RPG_GAMECORE_FATEBATTLEMANAGER__SETUPGAMECORELEVELPARAM_OFFSET UNITYSDK_OFFSET(0xCDF6CA0)
#define RPG_GAMECORE_FATEBATTLEMANAGER__SETUPHASHCACHEFORFATEBUFFAMPLIFICATION_OFFSET UNITYSDK_OFFSET(0xCDF66F0)
#define RPG_GAMECORE_FATEBATTLEMANAGER__SETUPHOUGURUNTIMEMAP_OFFSET UNITYSDK_OFFSET(0xCDF5A00)
#define RPG_GAMECORE_FATEBATTLEMANAGER__SETUPORREUSEAFFIXABILITY_OFFSET UNITYSDK_OFFSET(0xCDF8020)
#define RPG_GAMECORE_FATEBATTLEMANAGER__SETUPORREUSEHOUGUABILITY_OFFSET UNITYSDK_OFFSET(0xCDF5500)
#define RPG_GAMECORE_FATEBATTLEMANAGER__SETUPTRAITDATA_OFFSET UNITYSDK_OFFSET(0xCDF7850)
#define RPG_GAMECORE_FATEBATTLEMANAGER___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCDF85C0)
#define RPG_GAMECORE_FATEBATTLEMANAGER___IFIXBASEPROXY_GENSTATISTICS_OFFSET UNITYSDK_OFFSET(0xCDF86A0)
#define RPG_GAMECORE_FATEBATTLEMANAGER___IFIXBASEPROXY_ONBATTLEINSTANCECREATED_OFFSET UNITYSDK_OFFSET(0xCDF8560)
#define RPG_GAMECORE_FATEBATTLEMANAGER___IFIXBASEPROXY_ONINITIALIZE_OFFSET UNITYSDK_OFFSET(0xCDF8500)
#define RPG_GAMECORE_FATEBATTLEMANAGER___IFIXBASEPROXY_ONMAZEBUFFBINDING_OFFSET UNITYSDK_OFFSET(0xCDF8640)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateBattleManager_TypeDefinitionIndex = 52354;

	class FateBattleManager : public ::Class_1_9E296C95827C90A8
	{
	public:
		static ::RPG::GameCore::StringHash* StaticGet_ClientUidKeyHash()
		{
			return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(FateBattleManager_TypeDefinitionIndex)->GetStaticField(0x13FD0);
		}
		// static const ::System::String* ClientUidKey; // 0x0
		::System::Collections::Generic::List_1<::Class_1_6ECCFCE75EB143F8*>* _TraitRuntimeList; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* _FateBuffAmplificationKeyMap; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* _RankFindingMap; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::BattleFateHouguRuntime*>* _HouguMap_k__BackingField; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_97870C1EEE9A6A4F*>* _AffixMap_k__BackingField; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_6ECCFCE75EB143F8*>* TraitRuntimeFindingMap; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_4F029BEB084628A6*>* ContentMap; // 0x60
		::Class_1_C4C2ACF3D9655BEA_26* _RiderBloodFortAndromedaManaNotifyParam; // 0x68
		::Class_1_4F029BEB084628A6* _MasterContent_k__BackingField; // 0x70
		::Class_1_4F029BEB084628A6* _LevelParamMap; // 0x78
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::Class_1_4F029BEB084628A6*>*>* _TypedContentMap; // 0x80
		::Class_1_C4C2ACF3D9655BEA_27* _ArcherMagicalEnergyNotifyParam; // 0x88
		::Class_1_E5506B2509E2F0C8* _BattleData; // 0x90
		::System::Boolean _AutoSelect_k__BackingField; // 0x98

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

		::Class_1_9E296C95827C90A8_ERegisterMode get_RegisterMode()
		{
			return ((::Class_1_9E296C95827C90A8_ERegisterMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_GET_REGISTERMODE_OFFSET))(this);
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

		::System::Boolean TryGetContent(::System::UInt32 a1, ::Class_1_4F029BEB084628A6*& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::Class_1_4F029BEB084628A6*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_TRYGETCONTENT_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::FixPoint GetContentParam(::Class_1_4F029BEB084628A6* a1, ::RPG::GameCore::FateContentParamType a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::Class_1_4F029BEB084628A6*, ::RPG::GameCore::FateContentParamType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_GETCONTENTPARAM_OFFSET))(this, a1, a2);
		}

		::System::Void ModifyContentParam(::Class_1_4F029BEB084628A6* a1, ::RPG::GameCore::FateContentParamType a2, ::RPG::GameCore::PropertyModifyFunction a3, ::RPG::GameCore::FixPoint a4)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4F029BEB084628A6*, ::RPG::GameCore::FateContentParamType, ::RPG::GameCore::PropertyModifyFunction, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_MODIFYCONTENTPARAM_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _OnAfterContentParamChange(::Class_1_4F029BEB084628A6* a1, ::RPG::GameCore::FateContentParamType a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::FixPoint a4)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4F029BEB084628A6*, ::RPG::GameCore::FateContentParamType, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER__ONAFTERCONTENTPARAMCHANGE_OFFSET))(this, a1, a2, a3, a4);
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

		::System::Collections::Generic::List_1<::Class_1_4F029BEB084628A6*>* get__HouguList()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_4F029BEB084628A6*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_GET__HOUGULIST_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::BattleFateHouguRuntime*>* get_HouguMap()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::BattleFateHouguRuntime*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_GET_HOUGUMAP_OFFSET))(this);
		}

		::System::Void set_HouguMap(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::BattleFateHouguRuntime*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::BattleFateHouguRuntime*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_SET_HOUGUMAP_OFFSET))(this, a1);
		}

		::System::Void ModifyFateBuffAmplification(::Class_1_4F029BEB084628A6* a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4F029BEB084628A6*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_MODIFYFATEBUFFAMPLIFICATION_OFFSET))(this, a1, a2);
		}

		::System::Void _ApplyFateBuff()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER__APPLYFATEBUFF_OFFSET))(this);
		}

		::System::Void _RefreshFateBuffAmplification(::Class_1_4F029BEB084628A6* a1, ::Class_1_1C30CE192ABE4C54* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4F029BEB084628A6*, ::Class_1_1C30CE192ABE4C54*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER__REFRESHFATEBUFFAMPLIFICATION_OFFSET))(this, a1, a2);
		}

		::System::Void _SetupHashCacheForFateBuffAmplification()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER__SETUPHASHCACHEFORFATEBUFFAMPLIFICATION_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_1_4F029BEB084628A6*>* get_FateBuffList()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_4F029BEB084628A6*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_GET_FATEBUFFLIST_OFFSET))(this);
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

		::System::Void _OnFirstWaveDataReady(::Class_0_16E4307DCC419505_401* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER__ONFIRSTWAVEDATAREADY_OFFSET))(this, a1);
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

		::Class_1_4F029BEB084628A6* get_MasterContent()
		{
			return ((::Class_1_4F029BEB084628A6*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_GET_MASTERCONTENT_OFFSET))(this);
		}

		::System::Void set_MasterContent(::Class_1_4F029BEB084628A6* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4F029BEB084628A6*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_SET_MASTERCONTENT_OFFSET))(this, a1);
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

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* _GetTraitBuffParamMap(::Class_1_4F029BEB084628A6* a1)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>*(*)(::PVOID, ::Class_1_4F029BEB084628A6*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER__GETTRAITBUFFPARAMMAP_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::Class_1_4F029BEB084628A6*>* get__TraitList()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_4F029BEB084628A6*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_GET__TRAITLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_1_4F029BEB084628A6*>* get__TraitBuffList()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_4F029BEB084628A6*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_GET__TRAITBUFFLIST_OFFSET))(this);
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

		::System::Collections::Generic::List_1<::Class_1_4F029BEB084628A6*>* get__AffixList()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_4F029BEB084628A6*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_GET__AFFIXLIST_OFFSET))(this);
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

		::Class_2_1DB6C02CA182EEBA* _ApplyMazeBuff(::Class_1_4F029BEB084628A6* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::Class_2_1DB6C02CA182EEBA*(*)(::PVOID, ::Class_1_4F029BEB084628A6*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER__APPLYMAZEBUFF_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _RemoveMazeBuff(::Class_2_1DB6C02CA182EEBA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_1DB6C02CA182EEBA*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER__REMOVEMAZEBUFF_OFFSET))(this, a1);
		}

		::System::UInt32 _GetRandomByWeight(::System::Int32 a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER__GETRANDOMBYWEIGHT_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::Class_1_4F029BEB084628A6*>* get_ReijuList()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_4F029BEB084628A6*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_GET_REIJULIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_1_4F029BEB084628A6*>* get_ReijuAffixList()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_4F029BEB084628A6*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_GET_REIJUAFFIXLIST_OFFSET))(this);
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

		::System::Void __iFixBaseProxy_OnInitialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER___IFIXBASEPROXY_ONINITIALIZE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnBattleInstanceCreated()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER___IFIXBASEPROXY_ONBATTLEINSTANCECREATED_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnMazeBuffBinding()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER___IFIXBASEPROXY_ONMAZEBUFFBINDING_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_GenStatistics(::RPG::GameCore::PVEGameStatistics* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PVEGameStatistics*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER___IFIXBASEPROXY_GENSTATISTICS_OFFSET))(this, a1);
		}
	};
}
