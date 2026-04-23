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

class Class_0_16E4307DCC419505_382;
class Class_1_2CAAA2FDF9170110;
class Class_1_6ECCFCE75EB143F8;
class Class_1_8330F797C50754E5;
class Class_1_923C1AF2DBD806BC;
class Class_1_97870C1EEE9A6A4F;
class Class_1_A64CC8A9B1CC56C5;
class Class_1_C4C2ACF3D9655BEA_25;
class Class_1_C4C2ACF3D9655BEA_26;
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

#define RPG_GAMECORE_FATEBATTLEMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB687150)
#define RPG_GAMECORE_FATEBATTLEMANAGER_GAINNEWHOUGU_OFFSET UNITYSDK_OFFSET(0xB68A700)
#define RPG_GAMECORE_FATEBATTLEMANAGER_GENHOUGUPROJECTIONWEIGHTPOOL_OFFSET UNITYSDK_OFFSET(0xB68A280)
#define RPG_GAMECORE_FATEBATTLEMANAGER_GENHOUGUPROJECTION_OFFSET UNITYSDK_OFFSET(0xB68A0B0)
#define RPG_GAMECORE_FATEBATTLEMANAGER_GENSTATISTICS_OFFSET UNITYSDK_OFFSET(0xB688A90)
#define RPG_GAMECORE_FATEBATTLEMANAGER_GETCLAZZTRAITPARAM_OFFSET UNITYSDK_OFFSET(0xB68D1B0)
#define RPG_GAMECORE_FATEBATTLEMANAGER_GETCONTENTPARAM_OFFSET UNITYSDK_OFFSET(0xB689B80)
#define RPG_GAMECORE_FATEBATTLEMANAGER_GET_ACTIVITYSUBMODETYPE_OFFSET UNITYSDK_OFFSET(0xB6863D0)
#define RPG_GAMECORE_FATEBATTLEMANAGER_GET_AFFIXMAP_OFFSET UNITYSDK_OFFSET(0xB68DF70)
#define RPG_GAMECORE_FATEBATTLEMANAGER_GET_AUTOSELECT_OFFSET UNITYSDK_OFFSET(0xB68E090)
#define RPG_GAMECORE_FATEBATTLEMANAGER_GET_FATEBUFFLIST_OFFSET UNITYSDK_OFFSET(0xB68C5B0)
#define RPG_GAMECORE_FATEBATTLEMANAGER_GET_HOUGUMAP_OFFSET UNITYSDK_OFFSET(0xB68BDB0)
#define RPG_GAMECORE_FATEBATTLEMANAGER_GET_MASTERCONTENT_OFFSET UNITYSDK_OFFSET(0xB68D190)
#define RPG_GAMECORE_FATEBATTLEMANAGER_GET_REGISTERMODE_OFFSET UNITYSDK_OFFSET(0xB6863E0)
#define RPG_GAMECORE_FATEBATTLEMANAGER_GET_REIJUAFFIXLIST_OFFSET UNITYSDK_OFFSET(0xB68E010)
#define RPG_GAMECORE_FATEBATTLEMANAGER_GET_REIJULIST_OFFSET UNITYSDK_OFFSET(0xB68DF90)
#define RPG_GAMECORE_FATEBATTLEMANAGER_GET__AFFIXLIST_OFFSET UNITYSDK_OFFSET(0xB68DEF0)
#define RPG_GAMECORE_FATEBATTLEMANAGER_GET__HOUGULIST_OFFSET UNITYSDK_OFFSET(0xB68AA60)
#define RPG_GAMECORE_FATEBATTLEMANAGER_GET__TRAITBUFFLIST_OFFSET UNITYSDK_OFFSET(0xB68D800)
#define RPG_GAMECORE_FATEBATTLEMANAGER_GET__TRAITLIST_OFFSET UNITYSDK_OFFSET(0xB68D780)
#define RPG_GAMECORE_FATEBATTLEMANAGER_MODIFYCONTENTPARAM_OFFSET UNITYSDK_OFFSET(0xB689DD0)
#define RPG_GAMECORE_FATEBATTLEMANAGER_MODIFYFATEBUFFAMPLIFICATION_OFFSET UNITYSDK_OFFSET(0xB68BDD0)
#define RPG_GAMECORE_FATEBATTLEMANAGER_MODIFYLEVELPARAM_OFFSET UNITYSDK_OFFSET(0xB68C630)
#define RPG_GAMECORE_FATEBATTLEMANAGER_ONBATTLEINSTANCECREATED_OFFSET UNITYSDK_OFFSET(0xB686EA0)
#define RPG_GAMECORE_FATEBATTLEMANAGER_ONINITIALIZE_OFFSET UNITYSDK_OFFSET(0xB686780)
#define RPG_GAMECORE_FATEBATTLEMANAGER_ONMAZEBUFFBINDING_OFFSET UNITYSDK_OFFSET(0xB687860)
#define RPG_GAMECORE_FATEBATTLEMANAGER_REMOVEHOUGU_OFFSET UNITYSDK_OFFSET(0xB68AC20)
#define RPG_GAMECORE_FATEBATTLEMANAGER_SET_AFFIXMAP_OFFSET UNITYSDK_OFFSET(0xB68DF80)
#define RPG_GAMECORE_FATEBATTLEMANAGER_SET_AUTOSELECT_OFFSET UNITYSDK_OFFSET(0xB68E0A0)
#define RPG_GAMECORE_FATEBATTLEMANAGER_SET_HOUGUMAP_OFFSET UNITYSDK_OFFSET(0xB68BDC0)
#define RPG_GAMECORE_FATEBATTLEMANAGER_SET_MASTERCONTENT_OFFSET UNITYSDK_OFFSET(0xB68D1A0)
#define RPG_GAMECORE_FATEBATTLEMANAGER_SORTBYFATEBATTLERULE_OFFSET UNITYSDK_OFFSET(0xB689710)
#define RPG_GAMECORE_FATEBATTLEMANAGER_TRYGETCONTENTCLIENTUID_OFFSET UNITYSDK_OFFSET(0xB6898B0)
#define RPG_GAMECORE_FATEBATTLEMANAGER_TRYGETCONTENT_OFFSET UNITYSDK_OFFSET(0xB689A70)
#define RPG_GAMECORE_FATEBATTLEMANAGER_TRYGETLEVELPARAM_OFFSET UNITYSDK_OFFSET(0xB68A640)
#define RPG_GAMECORE_FATEBATTLEMANAGER__APPLYAFFIX_OFFSET UNITYSDK_OFFSET(0xB688800)
#define RPG_GAMECORE_FATEBATTLEMANAGER__APPLYFATEBUFF_OFFSET UNITYSDK_OFFSET(0xB687900)
#define RPG_GAMECORE_FATEBATTLEMANAGER__APPLYHOUGU_OFFSET UNITYSDK_OFFSET(0xB6886A0)
#define RPG_GAMECORE_FATEBATTLEMANAGER__APPLYINSERTMONSTER_OFFSET UNITYSDK_OFFSET(0xB68CAA0)
#define RPG_GAMECORE_FATEBATTLEMANAGER__APPLYINSERTWAVE_OFFSET UNITYSDK_OFFSET(0xB686EF0)
#define RPG_GAMECORE_FATEBATTLEMANAGER__APPLYMASTER_OFFSET UNITYSDK_OFFSET(0xB688960)
#define RPG_GAMECORE_FATEBATTLEMANAGER__APPLYMAZEBUFF_OFFSET UNITYSDK_OFFSET(0xB68B570)
#define RPG_GAMECORE_FATEBATTLEMANAGER__APPLYREIJUANDREIJUAFFIX_OFFSET UNITYSDK_OFFSET(0xB6881B0)
#define RPG_GAMECORE_FATEBATTLEMANAGER__APPLYTRAITBUFF_OFFSET UNITYSDK_OFFSET(0xB687CD0)
#define RPG_GAMECORE_FATEBATTLEMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0xB68E0B0)
#define RPG_GAMECORE_FATEBATTLEMANAGER__COMPAREMONSTERRANK_OFFSET UNITYSDK_OFFSET(0xB68CFC0)
#define RPG_GAMECORE_FATEBATTLEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xB6863F0)
#define RPG_GAMECORE_FATEBATTLEMANAGER__GENSTATISTICS_G___GETRANK_11_0_OFFSET UNITYSDK_OFFSET(0xB689610)
#define RPG_GAMECORE_FATEBATTLEMANAGER__GETRANDOMBYWEIGHT_OFFSET UNITYSDK_OFFSET(0xB68A4E0)
#define RPG_GAMECORE_FATEBATTLEMANAGER__GETRANK_OFFSET UNITYSDK_OFFSET(0xB68D050)
#define RPG_GAMECORE_FATEBATTLEMANAGER__GETTRAITBUFFPARAMMAP_OFFSET UNITYSDK_OFFSET(0xB689C40)
#define RPG_GAMECORE_FATEBATTLEMANAGER__GETTRAITRUNTIMEBYTRAITID_OFFSET UNITYSDK_OFFSET(0xB68D880)
#define RPG_GAMECORE_FATEBATTLEMANAGER__ONAFTERCONTENTPARAMCHANGE_OFFSET UNITYSDK_OFFSET(0xB689F30)
#define RPG_GAMECORE_FATEBATTLEMANAGER__ONFIRSTWAVEDATAREADY_OFFSET UNITYSDK_OFFSET(0xB68C8B0)
#define RPG_GAMECORE_FATEBATTLEMANAGER__REFRESHFATEBUFFAMPLIFICATION_OFFSET UNITYSDK_OFFSET(0xB68BE90)
#define RPG_GAMECORE_FATEBATTLEMANAGER__REMOVEMAZEBUFF_OFFSET UNITYSDK_OFFSET(0xB68B0E0)
#define RPG_GAMECORE_FATEBATTLEMANAGER__SETUPAFFIXRUNTIMEMAP_OFFSET UNITYSDK_OFFSET(0xB68D9E0)
#define RPG_GAMECORE_FATEBATTLEMANAGER__SETUPBASICDATA_OFFSET UNITYSDK_OFFSET(0xB686B70)
#define RPG_GAMECORE_FATEBATTLEMANAGER__SETUPGAMECORELEVELPARAM_OFFSET UNITYSDK_OFFSET(0xB68C810)
#define RPG_GAMECORE_FATEBATTLEMANAGER__SETUPHASHCACHEFORFATEBUFFAMPLIFICATION_OFFSET UNITYSDK_OFFSET(0xB68C2A0)
#define RPG_GAMECORE_FATEBATTLEMANAGER__SETUPHOUGURUNTIMEMAP_OFFSET UNITYSDK_OFFSET(0xB68B1A0)
#define RPG_GAMECORE_FATEBATTLEMANAGER__SETUPORREUSEAFFIXABILITY_OFFSET UNITYSDK_OFFSET(0xB68DDB0)
#define RPG_GAMECORE_FATEBATTLEMANAGER__SETUPORREUSEHOUGUABILITY_OFFSET UNITYSDK_OFFSET(0xB68AAE0)
#define RPG_GAMECORE_FATEBATTLEMANAGER__SETUPTRAITDATA_OFFSET UNITYSDK_OFFSET(0xB68D3F0)
#define RPG_GAMECORE_FATEBATTLEMANAGER___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB68E260)
#define RPG_GAMECORE_FATEBATTLEMANAGER___IFIXBASEPROXY_GENSTATISTICS_OFFSET UNITYSDK_OFFSET(0xB68E350)
#define RPG_GAMECORE_FATEBATTLEMANAGER___IFIXBASEPROXY_ONBATTLEINSTANCECREATED_OFFSET UNITYSDK_OFFSET(0xB68E200)
#define RPG_GAMECORE_FATEBATTLEMANAGER___IFIXBASEPROXY_ONINITIALIZE_OFFSET UNITYSDK_OFFSET(0xB68E1A0)
#define RPG_GAMECORE_FATEBATTLEMANAGER___IFIXBASEPROXY_ONMAZEBUFFBINDING_OFFSET UNITYSDK_OFFSET(0xB68E2F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateBattleManager_TypeDefinitionIndex = 51681;

	class FateBattleManager : public ::Class_1_9E296C95827C90A8
	{
	public:
		static ::RPG::GameCore::StringHash* StaticGet_ClientUidKeyHash()
		{
			return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(FateBattleManager_TypeDefinitionIndex)->GetStaticField(0xFCD0);
		}
		// static const ::System::String* ClientUidKey; // 0x0
		::Class_1_C4C2ACF3D9655BEA_25* _RiderBloodFortAndromedaManaNotifyParam; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_A64CC8A9B1CC56C5*>* ContentMap; // 0x38
		::Class_1_C4C2ACF3D9655BEA_26* _ArcherMagicalEnergyNotifyParam; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::BattleFateHouguRuntime*>* _HouguMap_k__BackingField; // 0x48
		::Class_1_A64CC8A9B1CC56C5* _LevelParamMap; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* _RankFindingMap; // 0x58
		::System::Collections::Generic::List_1<::Class_1_6ECCFCE75EB143F8*>* _TraitRuntimeList; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* _FateBuffAmplificationKeyMap; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::Class_1_A64CC8A9B1CC56C5*>*>* _TypedContentMap; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_6ECCFCE75EB143F8*>* TraitRuntimeFindingMap; // 0x78
		::Class_1_8330F797C50754E5* _BattleData; // 0x80
		::Class_1_A64CC8A9B1CC56C5* _MasterContent_k__BackingField; // 0x88
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_97870C1EEE9A6A4F*>* _AffixMap_k__BackingField; // 0x90
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

		::System::Void GenStatistics(::RPG::GameCore::PVEGameStatistics* pStt)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PVEGameStatistics*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_GENSTATISTICS_OFFSET))(this, pStt);
		}

		::System::Void SortByFateBattleRule(::RPG::GameCore::InfinitePerWaveData* pCurWave)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::InfinitePerWaveData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_SORTBYFATEBATTLERULE_OFFSET))(this, pCurWave);
		}

		::System::Boolean TryGetContentClientUid(::RPG::GameCore::TaskContext* pContext, ::System::UInt32& nClientUid)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_TRYGETCONTENTCLIENTUID_OFFSET))(this, pContext, nClientUid);
		}

		::System::Boolean TryGetContent(::System::UInt32 clientUid, ::Class_1_A64CC8A9B1CC56C5*& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::Class_1_A64CC8A9B1CC56C5*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_TRYGETCONTENT_OFFSET))(this, clientUid, value);
		}

		::RPG::GameCore::FixPoint GetContentParam(::Class_1_A64CC8A9B1CC56C5* pContent, ::RPG::GameCore::FateContentParamType eValueType)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::Class_1_A64CC8A9B1CC56C5*, ::RPG::GameCore::FateContentParamType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_GETCONTENTPARAM_OFFSET))(this, pContent, eValueType);
		}

		::System::Void ModifyContentParam(::Class_1_A64CC8A9B1CC56C5* pContent, ::RPG::GameCore::FateContentParamType eValueType, ::RPG::GameCore::PropertyModifyFunction eModifyOp, ::RPG::GameCore::FixPoint fModifyValue)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A64CC8A9B1CC56C5*, ::RPG::GameCore::FateContentParamType, ::RPG::GameCore::PropertyModifyFunction, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_MODIFYCONTENTPARAM_OFFSET))(this, pContent, eValueType, eModifyOp, fModifyValue);
		}

		::System::Void _OnAfterContentParamChange(::Class_1_A64CC8A9B1CC56C5* pContent, ::RPG::GameCore::FateContentParamType eValueType, ::RPG::GameCore::FixPoint fOldValue, ::RPG::GameCore::FixPoint fNewValue)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A64CC8A9B1CC56C5*, ::RPG::GameCore::FateContentParamType, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER__ONAFTERCONTENTPARAMCHANGE_OFFSET))(this, pContent, eValueType, fOldValue, fNewValue);
		}

		::System::Void GenHouguProjection(::System::Collections::Generic::List_1<::System::UInt32>* forSelected, ::RPG::GameCore::FateHouguType eType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::RPG::GameCore::FateHouguType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_GENHOUGUPROJECTION_OFFSET))(this, forSelected, eType);
		}

		::System::Int32 GenHouguProjectionWeightPool(::RPG::GameCore::FateHouguType eType, ::RPG::PoolDictionary_2<::System::UInt32, ::System::Int32>* pWeightedHouguPool)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::FateHouguType, ::RPG::PoolDictionary_2<::System::UInt32, ::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_GENHOUGUPROJECTIONWEIGHTPOOL_OFFSET))(this, eType, pWeightedHouguPool);
		}

		::System::Void GainNewHougu(::System::UInt32 nHouguID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_GAINNEWHOUGU_OFFSET))(this, nHouguID);
		}

		::System::Void RemoveHougu(::System::UInt32 nHougu, ::System::Int32 nRemoveCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_REMOVEHOUGU_OFFSET))(this, nHougu, nRemoveCount);
		}

		::System::Void _ApplyHougu()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER__APPLYHOUGU_OFFSET))(this);
		}

		::System::Void _SetupHouguRuntimeMap()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER__SETUPHOUGURUNTIMEMAP_OFFSET))(this);
		}

		::System::Void _SetupOrReUseHouguAbility(::RPG::GameCore::BattleFateHouguRuntime* pHouguData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleFateHouguRuntime*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER__SETUPORREUSEHOUGUABILITY_OFFSET))(this, pHouguData);
		}

		::System::Collections::Generic::List_1<::Class_1_A64CC8A9B1CC56C5*>* get__HouguList()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_A64CC8A9B1CC56C5*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_GET__HOUGULIST_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::BattleFateHouguRuntime*>* get_HouguMap()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::BattleFateHouguRuntime*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_GET_HOUGUMAP_OFFSET))(this);
		}

		::System::Void set_HouguMap(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::BattleFateHouguRuntime*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::BattleFateHouguRuntime*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_SET_HOUGUMAP_OFFSET))(this, value);
		}

		::System::Void ModifyFateBuffAmplification(::Class_1_A64CC8A9B1CC56C5* pFateBuff, ::RPG::GameCore::FixPoint fNewAmp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A64CC8A9B1CC56C5*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_MODIFYFATEBUFFAMPLIFICATION_OFFSET))(this, pFateBuff, fNewAmp);
		}

		::System::Void _ApplyFateBuff()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER__APPLYFATEBUFF_OFFSET))(this);
		}

		::System::Void _RefreshFateBuffAmplification(::Class_1_A64CC8A9B1CC56C5* pFateBuffData, ::Class_1_2CAAA2FDF9170110* pLookup)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A64CC8A9B1CC56C5*, ::Class_1_2CAAA2FDF9170110*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER__REFRESHFATEBUFFAMPLIFICATION_OFFSET))(this, pFateBuffData, pLookup);
		}

		::System::Void _SetupHashCacheForFateBuffAmplification()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER__SETUPHASHCACHEFORFATEBUFFAMPLIFICATION_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_1_A64CC8A9B1CC56C5*>* get_FateBuffList()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_A64CC8A9B1CC56C5*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_GET_FATEBUFFLIST_OFFSET))(this);
		}

		::System::Boolean TryGetLevelParam(::RPG::GameCore::FateLevelParamType eLevelParamType, ::RPG::GameCore::FixPoint& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::FateLevelParamType, ::RPG::GameCore::FixPoint&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_TRYGETLEVELPARAM_OFFSET))(this, eLevelParamType, value);
		}

		::System::Void ModifyLevelParam(::RPG::GameCore::FateLevelParamType eLevelParamType, ::RPG::GameCore::PropertyModifyFunction eModifyOp, ::RPG::GameCore::FixPoint fModifyValue)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FateLevelParamType, ::RPG::GameCore::PropertyModifyFunction, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_MODIFYLEVELPARAM_OFFSET))(this, eLevelParamType, eModifyOp, fModifyValue);
		}

		::System::Void _SetupGameCoreLevelParam()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER__SETUPGAMECORELEVELPARAM_OFFSET))(this);
		}

		::System::Void _ApplyInsertWave()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER__APPLYINSERTWAVE_OFFSET))(this);
		}

		::System::Void _OnFirstWaveDataReady(::Class_0_16E4307DCC419505_382* pEvt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER__ONFIRSTWAVEDATAREADY_OFFSET))(this, pEvt);
		}

		::System::Void _ApplyInsertMonster(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FateAffixInsertMonsterPhaseType, ::System::Collections::Generic::List_1<::System::UInt32>*>* pInsertMap, ::RPG::GameCore::InfiniteBattleData* pInfiniteBattleData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FateAffixInsertMonsterPhaseType, ::System::Collections::Generic::List_1<::System::UInt32>*>*, ::RPG::GameCore::InfiniteBattleData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER__APPLYINSERTMONSTER_OFFSET))(this, pInsertMap, pInfiniteBattleData);
		}

		::System::Int32 _CompareMonsterRank(::Class_1_923C1AF2DBD806BC* x, ::Class_1_923C1AF2DBD806BC* y)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_923C1AF2DBD806BC*, ::Class_1_923C1AF2DBD806BC*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER__COMPAREMONSTERRANK_OFFSET))(this, x, y);
		}

		::System::Int32 _GetRank(::System::UInt32 nMonsterID)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER__GETRANK_OFFSET))(this, nMonsterID);
		}

		::System::Void _ApplyMaster()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER__APPLYMASTER_OFFSET))(this);
		}

		::Class_1_A64CC8A9B1CC56C5* get_MasterContent()
		{
			return ((::Class_1_A64CC8A9B1CC56C5*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_GET_MASTERCONTENT_OFFSET))(this);
		}

		::System::Void set_MasterContent(::Class_1_A64CC8A9B1CC56C5* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A64CC8A9B1CC56C5*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_SET_MASTERCONTENT_OFFSET))(this, value);
		}

		::RPG::GameCore::FixPoint GetClazzTraitParam(::RPG::GameCore::FateContentParamType eTraitParamType)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FateContentParamType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_GETCLAZZTRAITPARAM_OFFSET))(this, eTraitParamType);
		}

		::System::Void _SetupTraitData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER__SETUPTRAITDATA_OFFSET))(this);
		}

		::System::Void _ApplyTraitBuff()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER__APPLYTRAITBUFF_OFFSET))(this);
		}

		::Class_1_6ECCFCE75EB143F8* _GetTraitRuntimeByTraitID(::System::UInt32 nTraitID)
		{
			return ((::Class_1_6ECCFCE75EB143F8*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER__GETTRAITRUNTIMEBYTRAITID_OFFSET))(this, nTraitID);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* _GetTraitBuffParamMap(::Class_1_A64CC8A9B1CC56C5* pContent)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>*(*)(::PVOID, ::Class_1_A64CC8A9B1CC56C5*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER__GETTRAITBUFFPARAMMAP_OFFSET))(this, pContent);
		}

		::System::Collections::Generic::List_1<::Class_1_A64CC8A9B1CC56C5*>* get__TraitList()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_A64CC8A9B1CC56C5*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_GET__TRAITLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_1_A64CC8A9B1CC56C5*>* get__TraitBuffList()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_A64CC8A9B1CC56C5*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_GET__TRAITBUFFLIST_OFFSET))(this);
		}

		::System::Void _ApplyAffix()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER__APPLYAFFIX_OFFSET))(this);
		}

		::System::Void _SetupAffixRuntimeMap()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER__SETUPAFFIXRUNTIMEMAP_OFFSET))(this);
		}

		::System::Void _SetupOrReUseAffixAbility(::Class_1_97870C1EEE9A6A4F* pRuntimeData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_97870C1EEE9A6A4F*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER__SETUPORREUSEAFFIXABILITY_OFFSET))(this, pRuntimeData);
		}

		::System::Collections::Generic::List_1<::Class_1_A64CC8A9B1CC56C5*>* get__AffixList()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_A64CC8A9B1CC56C5*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_GET__AFFIXLIST_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_97870C1EEE9A6A4F*>* get_AffixMap()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_97870C1EEE9A6A4F*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_GET_AFFIXMAP_OFFSET))(this);
		}

		::System::Void set_AffixMap(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_97870C1EEE9A6A4F*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_97870C1EEE9A6A4F*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_SET_AFFIXMAP_OFFSET))(this, value);
		}

		::System::Void _SetupBasicData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER__SETUPBASICDATA_OFFSET))(this);
		}

		::System::Void _ApplyReijuAndReijuAffix()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER__APPLYREIJUANDREIJUAFFIX_OFFSET))(this);
		}

		::Class_2_1DB6C02CA182EEBA* _ApplyMazeBuff(::Class_1_A64CC8A9B1CC56C5* content, ::System::UInt32 mazeBuffId, ::System::UInt32 level)
		{
			return ((::Class_2_1DB6C02CA182EEBA*(*)(::PVOID, ::Class_1_A64CC8A9B1CC56C5*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER__APPLYMAZEBUFF_OFFSET))(this, content, mazeBuffId, level);
		}

		::System::Void _RemoveMazeBuff(::Class_2_1DB6C02CA182EEBA* pAbilityInst)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_1DB6C02CA182EEBA*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER__REMOVEMAZEBUFF_OFFSET))(this, pAbilityInst);
		}

		::System::UInt32 _GetRandomByWeight(::System::Int32 nTotalWeight, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* pWeightDict)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER__GETRANDOMBYWEIGHT_OFFSET))(this, nTotalWeight, pWeightDict);
		}

		::System::Collections::Generic::List_1<::Class_1_A64CC8A9B1CC56C5*>* get_ReijuList()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_A64CC8A9B1CC56C5*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_GET_REIJULIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_1_A64CC8A9B1CC56C5*>* get_ReijuAffixList()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_A64CC8A9B1CC56C5*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_GET_REIJUAFFIXLIST_OFFSET))(this);
		}

		::System::Boolean get_AutoSelect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_GET_AUTOSELECT_OFFSET))(this);
		}

		::System::Void set_AutoSelect(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_SET_AUTOSELECT_OFFSET))(this, value);
		}

		static ::System::Int32 _GenStatistics_g___GetRank_11_0(::System::UInt32 nMonsterID, ::RPG::GameCore::FateBattleManager___c__DisplayClass11_0& a2)
		{
			return ((::System::Int32(*)(::System::UInt32, ::RPG::GameCore::FateBattleManager___c__DisplayClass11_0&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER__GENSTATISTICS_G___GETRANK_11_0_OFFSET))(nMonsterID, a2);
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

		::System::Void __iFixBaseProxy_GenStatistics(::RPG::GameCore::PVEGameStatistics* P0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PVEGameStatistics*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER___IFIXBASEPROXY_GENSTATISTICS_OFFSET))(this, P0);
		}
	};
}
