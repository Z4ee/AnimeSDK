#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class Class_1_097D93F83453E9A1_1;
class Class_1_EBB10EC01CCC4716_15;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MONOPOLYHISTORYINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x195E8EC0)
#define RPG_CLIENT_MONOPOLYHISTORYINFO_GETMBTIRESULTIDS_OFFSET UNITYSDK_OFFSET(0x195E99E0)
#define RPG_CLIENT_MONOPOLYHISTORYINFO_GET_CURCOINNUM_OFFSET UNITYSDK_OFFSET(0x195E9E40)
#define RPG_CLIENT_MONOPOLYHISTORYINFO_GET_CURSERVERPROGRESS_OFFSET UNITYSDK_OFFSET(0x195E9E60)
#define RPG_CLIENT_MONOPOLYHISTORYINFO_GET_DAILYADDCOIN_OFFSET UNITYSDK_OFFSET(0x195E9DC0)
#define RPG_CLIENT_MONOPOLYHISTORYINFO_GET_DAILYASSETFUNDSDONATECOIN_OFFSET UNITYSDK_OFFSET(0x195E9E80)
#define RPG_CLIENT_MONOPOLYHISTORYINFO_GET_DAILYDONATECOIN_OFFSET UNITYSDK_OFFSET(0x195E9DA0)
#define RPG_CLIENT_MONOPOLYHISTORYINFO_GET_DAILYMOVESTEP_OFFSET UNITYSDK_OFFSET(0x195E9E20)
#define RPG_CLIENT_MONOPOLYHISTORYINFO_GET_DAILYROLLNUM_OFFSET UNITYSDK_OFFSET(0x195E9E00)
#define RPG_CLIENT_MONOPOLYHISTORYINFO_GET_DAILYSUBCOIN_OFFSET UNITYSDK_OFFSET(0x195E9DE0)
#define RPG_CLIENT_MONOPOLYHISTORYINFO_GET_MBTIFINISHED_OFFSET UNITYSDK_OFFSET(0x195E9F30)
#define RPG_CLIENT_MONOPOLYHISTORYINFO_GET_MBTIMAXPROGRESS_OFFSET UNITYSDK_OFFSET(0x195E9EE0)
#define RPG_CLIENT_MONOPOLYHISTORYINFO_GET_MBTIPROGRESS_OFFSET UNITYSDK_OFFSET(0x195E9EC0)
#define RPG_CLIENT_MONOPOLYHISTORYINFO_GET_MBTIREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0x195E9F50)
#define RPG_CLIENT_MONOPOLYHISTORYINFO_GET_MBTIVALUEX_OFFSET UNITYSDK_OFFSET(0x195E9F70)
#define RPG_CLIENT_MONOPOLYHISTORYINFO_GET_MBTIVALUEY_OFFSET UNITYSDK_OFFSET(0x195E9F90)
#define RPG_CLIENT_MONOPOLYHISTORYINFO_GET_ORIGINCOINNUM_OFFSET UNITYSDK_OFFSET(0x195E9EA0)
#define RPG_CLIENT_MONOPOLYHISTORYINFO_INIT_OFFSET UNITYSDK_OFFSET(0x195E8D50)
#define RPG_CLIENT_MONOPOLYHISTORYINFO_SETMBTIFINISHED_OFFSET UNITYSDK_OFFSET(0x195E9990)
#define RPG_CLIENT_MONOPOLYHISTORYINFO_SETMBTIREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0x195E9940)
#define RPG_CLIENT_MONOPOLYHISTORYINFO_SET_CURCOINNUM_OFFSET UNITYSDK_OFFSET(0x195E9E50)
#define RPG_CLIENT_MONOPOLYHISTORYINFO_SET_CURSERVERPROGRESS_OFFSET UNITYSDK_OFFSET(0x195E9E70)
#define RPG_CLIENT_MONOPOLYHISTORYINFO_SET_DAILYADDCOIN_OFFSET UNITYSDK_OFFSET(0x195E9DD0)
#define RPG_CLIENT_MONOPOLYHISTORYINFO_SET_DAILYASSETFUNDSDONATECOIN_OFFSET UNITYSDK_OFFSET(0x195E9E90)
#define RPG_CLIENT_MONOPOLYHISTORYINFO_SET_DAILYDONATECOIN_OFFSET UNITYSDK_OFFSET(0x195E9DB0)
#define RPG_CLIENT_MONOPOLYHISTORYINFO_SET_DAILYMOVESTEP_OFFSET UNITYSDK_OFFSET(0x195E9E30)
#define RPG_CLIENT_MONOPOLYHISTORYINFO_SET_DAILYROLLNUM_OFFSET UNITYSDK_OFFSET(0x195E9E10)
#define RPG_CLIENT_MONOPOLYHISTORYINFO_SET_DAILYSUBCOIN_OFFSET UNITYSDK_OFFSET(0x195E9DF0)
#define RPG_CLIENT_MONOPOLYHISTORYINFO_SET_MBTIFINISHED_OFFSET UNITYSDK_OFFSET(0x195E9F40)
#define RPG_CLIENT_MONOPOLYHISTORYINFO_SET_MBTIPROGRESS_OFFSET UNITYSDK_OFFSET(0x195E9ED0)
#define RPG_CLIENT_MONOPOLYHISTORYINFO_SET_MBTIREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0x195E9F60)
#define RPG_CLIENT_MONOPOLYHISTORYINFO_SET_MBTIVALUEX_OFFSET UNITYSDK_OFFSET(0x195E9F80)
#define RPG_CLIENT_MONOPOLYHISTORYINFO_SET_MBTIVALUEY_OFFSET UNITYSDK_OFFSET(0x195E9FA0)
#define RPG_CLIENT_MONOPOLYHISTORYINFO_SET_ORIGINCOINNUM_OFFSET UNITYSDK_OFFSET(0x195E9EB0)
#define RPG_CLIENT_MONOPOLYHISTORYINFO_SYNCDAILY_OFFSET UNITYSDK_OFFSET(0x195E8F00)
#define RPG_CLIENT_MONOPOLYHISTORYINFO_SYNCMBTI_OFFSET UNITYSDK_OFFSET(0x195E8FE0)
#define RPG_CLIENT_MONOPOLYHISTORYINFO_SYNCORIGINCOINNUM_OFFSET UNITYSDK_OFFSET(0x195E8F90)
#define RPG_CLIENT_MONOPOLYHISTORYINFO__CLEARDATA_OFFSET UNITYSDK_OFFSET(0x195E8DA0)
#define RPG_CLIENT_MONOPOLYHISTORYINFO__COMPARERESULT_OFFSET UNITYSDK_OFFSET(0x195E9C90)
#define RPG_CLIENT_MONOPOLYHISTORYINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x195E9FB0)
#define RPG_CLIENT_MONOPOLYHISTORYINFO__GETRESULTDISTANCE_OFFSET UNITYSDK_OFFSET(0x195E9D10)

namespace RPG::Client
{
	inline static constexpr unsigned int MonopolyHistoryInfo_TypeDefinitionIndex = 66300;

	class MonopolyHistoryInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>, ::System::UInt32>* ServerOptionRatio; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* HistoryActionCount; // 0x18
		::System::UInt32 _MBTIProgress_k__BackingField; // 0x20
		::System::UInt32 _CurCoinNum_k__BackingField; // 0x24
		::System::UInt32 _CurServerProgress_k__BackingField; // 0x28
		::System::UInt32 _OriginCoinNum_k__BackingField; // 0x2C
		::System::UInt32 _DailySubCoin_k__BackingField; // 0x30
		::System::UInt32 _DailyAddCoin_k__BackingField; // 0x34
		::System::UInt32 _DailyAssetFundsDonateCoin_k__BackingField; // 0x38
		::System::UInt32 _DailyDonateCoin_k__BackingField; // 0x3C
		::System::UInt32 _DailyMoveStep_k__BackingField; // 0x40
		::System::Int32 _MBTIValueX_k__BackingField; // 0x44
		::System::Boolean _MBTIFinished_k__BackingField; // 0x48
		::System::Boolean _MBTIRewardTaken_k__BackingField; // 0x49
		::System::Int32 _MBTIValueY_k__BackingField; // 0x4C
		::System::UInt32 _DailyRollNum_k__BackingField; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYHISTORYINFO__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYHISTORYINFO_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYHISTORYINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void _ClearData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYHISTORYINFO__CLEARDATA_OFFSET))(this);
		}

		::System::Void SyncDaily(::Class_1_EBB10EC01CCC4716_15* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EBB10EC01CCC4716_15*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYHISTORYINFO_SYNCDAILY_OFFSET))(this, a1);
		}

		::System::Void SyncOriginCoinNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYHISTORYINFO_SYNCORIGINCOINNUM_OFFSET))(this, a1);
		}

		::System::Void SyncMBTI(::Class_1_097D93F83453E9A1_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_097D93F83453E9A1_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYHISTORYINFO_SYNCMBTI_OFFSET))(this, a1);
		}

		::System::Void SetMBTIRewardTaken(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYHISTORYINFO_SETMBTIREWARDTAKEN_OFFSET))(this, a1);
		}

		::System::Void SetMBTIFinished(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYHISTORYINFO_SETMBTIFINISHED_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetMBTIResultIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYHISTORYINFO_GETMBTIRESULTIDS_OFFSET))(this);
		}

		::System::Int32 _CompareResult(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYHISTORYINFO__COMPARERESULT_OFFSET))(this, a1, a2);
		}

		::System::Int32 _GetResultDistance(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYHISTORYINFO__GETRESULTDISTANCE_OFFSET))(this, a1);
		}

		::System::UInt32 get_DailyDonateCoin()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYHISTORYINFO_GET_DAILYDONATECOIN_OFFSET))(this);
		}

		::System::Void set_DailyDonateCoin(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYHISTORYINFO_SET_DAILYDONATECOIN_OFFSET))(this, a1);
		}

		::System::UInt32 get_DailyAddCoin()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYHISTORYINFO_GET_DAILYADDCOIN_OFFSET))(this);
		}

		::System::Void set_DailyAddCoin(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYHISTORYINFO_SET_DAILYADDCOIN_OFFSET))(this, a1);
		}

		::System::UInt32 get_DailySubCoin()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYHISTORYINFO_GET_DAILYSUBCOIN_OFFSET))(this);
		}

		::System::Void set_DailySubCoin(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYHISTORYINFO_SET_DAILYSUBCOIN_OFFSET))(this, a1);
		}

		::System::UInt32 get_DailyRollNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYHISTORYINFO_GET_DAILYROLLNUM_OFFSET))(this);
		}

		::System::Void set_DailyRollNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYHISTORYINFO_SET_DAILYROLLNUM_OFFSET))(this, a1);
		}

		::System::UInt32 get_DailyMoveStep()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYHISTORYINFO_GET_DAILYMOVESTEP_OFFSET))(this);
		}

		::System::Void set_DailyMoveStep(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYHISTORYINFO_SET_DAILYMOVESTEP_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurCoinNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYHISTORYINFO_GET_CURCOINNUM_OFFSET))(this);
		}

		::System::Void set_CurCoinNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYHISTORYINFO_SET_CURCOINNUM_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurServerProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYHISTORYINFO_GET_CURSERVERPROGRESS_OFFSET))(this);
		}

		::System::Void set_CurServerProgress(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYHISTORYINFO_SET_CURSERVERPROGRESS_OFFSET))(this, a1);
		}

		::System::UInt32 get_DailyAssetFundsDonateCoin()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYHISTORYINFO_GET_DAILYASSETFUNDSDONATECOIN_OFFSET))(this);
		}

		::System::Void set_DailyAssetFundsDonateCoin(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYHISTORYINFO_SET_DAILYASSETFUNDSDONATECOIN_OFFSET))(this, a1);
		}

		::System::UInt32 get_OriginCoinNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYHISTORYINFO_GET_ORIGINCOINNUM_OFFSET))(this);
		}

		::System::Void set_OriginCoinNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYHISTORYINFO_SET_ORIGINCOINNUM_OFFSET))(this, a1);
		}

		::System::UInt32 get_MBTIProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYHISTORYINFO_GET_MBTIPROGRESS_OFFSET))(this);
		}

		::System::Void set_MBTIProgress(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYHISTORYINFO_SET_MBTIPROGRESS_OFFSET))(this, a1);
		}

		::System::UInt32 get_MBTIMaxProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYHISTORYINFO_GET_MBTIMAXPROGRESS_OFFSET))(this);
		}

		::System::Boolean get_MBTIFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYHISTORYINFO_GET_MBTIFINISHED_OFFSET))(this);
		}

		::System::Void set_MBTIFinished(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYHISTORYINFO_SET_MBTIFINISHED_OFFSET))(this, a1);
		}

		::System::Boolean get_MBTIRewardTaken()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYHISTORYINFO_GET_MBTIREWARDTAKEN_OFFSET))(this);
		}

		::System::Void set_MBTIRewardTaken(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYHISTORYINFO_SET_MBTIREWARDTAKEN_OFFSET))(this, a1);
		}

		::System::Int32 get_MBTIValueX()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYHISTORYINFO_GET_MBTIVALUEX_OFFSET))(this);
		}

		::System::Void set_MBTIValueX(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYHISTORYINFO_SET_MBTIVALUEX_OFFSET))(this, a1);
		}

		::System::Int32 get_MBTIValueY()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYHISTORYINFO_GET_MBTIVALUEY_OFFSET))(this);
		}

		::System::Void set_MBTIValueY(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYHISTORYINFO_SET_MBTIVALUEY_OFFSET))(this, a1);
		}
	};
}
