#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class Class_1_53763D498DB8321D_3;
class Class_1_EBB10EC01CCC4716_20;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MONOPOLYHISTORYINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9D65FF0)
#define RPG_CLIENT_MONOPOLYHISTORYINFO_GETMBTIRESULTIDS_OFFSET UNITYSDK_OFFSET(0x9D668D0)
#define RPG_CLIENT_MONOPOLYHISTORYINFO_GET_CURCOINNUM_OFFSET UNITYSDK_OFFSET(0x9D66CA0)
#define RPG_CLIENT_MONOPOLYHISTORYINFO_GET_CURSERVERPROGRESS_OFFSET UNITYSDK_OFFSET(0x9D66CC0)
#define RPG_CLIENT_MONOPOLYHISTORYINFO_GET_DAILYADDCOIN_OFFSET UNITYSDK_OFFSET(0x9D66C20)
#define RPG_CLIENT_MONOPOLYHISTORYINFO_GET_DAILYASSETFUNDSDONATECOIN_OFFSET UNITYSDK_OFFSET(0x9D66CE0)
#define RPG_CLIENT_MONOPOLYHISTORYINFO_GET_DAILYDONATECOIN_OFFSET UNITYSDK_OFFSET(0x9D66C00)
#define RPG_CLIENT_MONOPOLYHISTORYINFO_GET_DAILYMOVESTEP_OFFSET UNITYSDK_OFFSET(0x9D66C80)
#define RPG_CLIENT_MONOPOLYHISTORYINFO_GET_DAILYROLLNUM_OFFSET UNITYSDK_OFFSET(0x9D66C60)
#define RPG_CLIENT_MONOPOLYHISTORYINFO_GET_DAILYSUBCOIN_OFFSET UNITYSDK_OFFSET(0x9D66C40)
#define RPG_CLIENT_MONOPOLYHISTORYINFO_GET_MBTIFINISHED_OFFSET UNITYSDK_OFFSET(0x9D66D50)
#define RPG_CLIENT_MONOPOLYHISTORYINFO_GET_MBTIMAXPROGRESS_OFFSET UNITYSDK_OFFSET(0x9D66D40)
#define RPG_CLIENT_MONOPOLYHISTORYINFO_GET_MBTIPROGRESS_OFFSET UNITYSDK_OFFSET(0x9D66D20)
#define RPG_CLIENT_MONOPOLYHISTORYINFO_GET_MBTIREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0x9D66D70)
#define RPG_CLIENT_MONOPOLYHISTORYINFO_GET_MBTIVALUEX_OFFSET UNITYSDK_OFFSET(0x9D66D90)
#define RPG_CLIENT_MONOPOLYHISTORYINFO_GET_MBTIVALUEY_OFFSET UNITYSDK_OFFSET(0x9D66DB0)
#define RPG_CLIENT_MONOPOLYHISTORYINFO_GET_ORIGINCOINNUM_OFFSET UNITYSDK_OFFSET(0x9D66D00)
#define RPG_CLIENT_MONOPOLYHISTORYINFO_INIT_OFFSET UNITYSDK_OFFSET(0x9D65E70)
#define RPG_CLIENT_MONOPOLYHISTORYINFO_SETMBTIFINISHED_OFFSET UNITYSDK_OFFSET(0x9D66880)
#define RPG_CLIENT_MONOPOLYHISTORYINFO_SETMBTIREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0x9D66830)
#define RPG_CLIENT_MONOPOLYHISTORYINFO_SET_CURCOINNUM_OFFSET UNITYSDK_OFFSET(0x9D66CB0)
#define RPG_CLIENT_MONOPOLYHISTORYINFO_SET_CURSERVERPROGRESS_OFFSET UNITYSDK_OFFSET(0x9D66CD0)
#define RPG_CLIENT_MONOPOLYHISTORYINFO_SET_DAILYADDCOIN_OFFSET UNITYSDK_OFFSET(0x9D66C30)
#define RPG_CLIENT_MONOPOLYHISTORYINFO_SET_DAILYASSETFUNDSDONATECOIN_OFFSET UNITYSDK_OFFSET(0x9D66CF0)
#define RPG_CLIENT_MONOPOLYHISTORYINFO_SET_DAILYDONATECOIN_OFFSET UNITYSDK_OFFSET(0x9D66C10)
#define RPG_CLIENT_MONOPOLYHISTORYINFO_SET_DAILYMOVESTEP_OFFSET UNITYSDK_OFFSET(0x9D66C90)
#define RPG_CLIENT_MONOPOLYHISTORYINFO_SET_DAILYROLLNUM_OFFSET UNITYSDK_OFFSET(0x9D66C70)
#define RPG_CLIENT_MONOPOLYHISTORYINFO_SET_DAILYSUBCOIN_OFFSET UNITYSDK_OFFSET(0x9D66C50)
#define RPG_CLIENT_MONOPOLYHISTORYINFO_SET_MBTIFINISHED_OFFSET UNITYSDK_OFFSET(0x9D66D60)
#define RPG_CLIENT_MONOPOLYHISTORYINFO_SET_MBTIPROGRESS_OFFSET UNITYSDK_OFFSET(0x9D66D30)
#define RPG_CLIENT_MONOPOLYHISTORYINFO_SET_MBTIREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0x9D66D80)
#define RPG_CLIENT_MONOPOLYHISTORYINFO_SET_MBTIVALUEX_OFFSET UNITYSDK_OFFSET(0x9D66DA0)
#define RPG_CLIENT_MONOPOLYHISTORYINFO_SET_MBTIVALUEY_OFFSET UNITYSDK_OFFSET(0x9D66DC0)
#define RPG_CLIENT_MONOPOLYHISTORYINFO_SET_ORIGINCOINNUM_OFFSET UNITYSDK_OFFSET(0x9D66D10)
#define RPG_CLIENT_MONOPOLYHISTORYINFO_SYNCDAILY_OFFSET UNITYSDK_OFFSET(0x9D66030)
#define RPG_CLIENT_MONOPOLYHISTORYINFO_SYNCMBTI_OFFSET UNITYSDK_OFFSET(0x9D66100)
#define RPG_CLIENT_MONOPOLYHISTORYINFO_SYNCORIGINCOINNUM_OFFSET UNITYSDK_OFFSET(0x9D660B0)
#define RPG_CLIENT_MONOPOLYHISTORYINFO__CLEARDATA_OFFSET UNITYSDK_OFFSET(0x9D65EC0)
#define RPG_CLIENT_MONOPOLYHISTORYINFO__COMPARERESULT_OFFSET UNITYSDK_OFFSET(0x9D66AF0)
#define RPG_CLIENT_MONOPOLYHISTORYINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x9D66DD0)
#define RPG_CLIENT_MONOPOLYHISTORYINFO__GETRESULTDISTANCE_OFFSET UNITYSDK_OFFSET(0x9D66B70)

namespace RPG::Client
{
	inline static constexpr unsigned int MonopolyHistoryInfo_TypeDefinitionIndex = 53872;

	class MonopolyHistoryInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>, ::System::UInt32>* ServerOptionRatio; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* HistoryActionCount; // 0x18
		::System::UInt32 _DailyRollNum_k__BackingField; // 0x20
		::System::UInt32 _DailyMoveStep_k__BackingField; // 0x24
		::System::UInt32 _DailyAddCoin_k__BackingField; // 0x28
		::System::UInt32 _MBTIProgress_k__BackingField; // 0x2C
		::System::UInt32 _CurCoinNum_k__BackingField; // 0x30
		::System::Int32 _MBTIValueY_k__BackingField; // 0x34
		::System::UInt32 _OriginCoinNum_k__BackingField; // 0x38
		::System::Int32 _MBTIValueX_k__BackingField; // 0x3C
		::System::UInt32 _CurServerProgress_k__BackingField; // 0x40
		::System::UInt32 _DailyAssetFundsDonateCoin_k__BackingField; // 0x44
		::System::UInt32 _DailySubCoin_k__BackingField; // 0x48
		::System::UInt32 _DailyDonateCoin_k__BackingField; // 0x4C
		::System::Boolean _MBTIFinished_k__BackingField; // 0x50
		::System::Boolean _MBTIRewardTaken_k__BackingField; // 0x51

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

		::System::Void SyncDaily(::Class_1_EBB10EC01CCC4716_20* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EBB10EC01CCC4716_20*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYHISTORYINFO_SYNCDAILY_OFFSET))(this, info);
		}

		::System::Void SyncOriginCoinNum(::System::UInt32 originCoinNum)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYHISTORYINFO_SYNCORIGINCOINNUM_OFFSET))(this, originCoinNum);
		}

		::System::Void SyncMBTI(::Class_1_53763D498DB8321D_3* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_53763D498DB8321D_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYHISTORYINFO_SYNCMBTI_OFFSET))(this, info);
		}

		::System::Void SetMBTIRewardTaken(::System::Boolean taken)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYHISTORYINFO_SETMBTIREWARDTAKEN_OFFSET))(this, taken);
		}

		::System::Void SetMBTIFinished(::System::Boolean finished)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYHISTORYINFO_SETMBTIFINISHED_OFFSET))(this, finished);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetMBTIResultIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYHISTORYINFO_GETMBTIRESULTIDS_OFFSET))(this);
		}

		::System::Int32 _CompareResult(::System::UInt32 id1, ::System::UInt32 id2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYHISTORYINFO__COMPARERESULT_OFFSET))(this, id1, id2);
		}

		::System::Int32 _GetResultDistance(::System::UInt32 id)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYHISTORYINFO__GETRESULTDISTANCE_OFFSET))(this, id);
		}

		::System::UInt32 get_DailyDonateCoin()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYHISTORYINFO_GET_DAILYDONATECOIN_OFFSET))(this);
		}

		::System::Void set_DailyDonateCoin(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYHISTORYINFO_SET_DAILYDONATECOIN_OFFSET))(this, value);
		}

		::System::UInt32 get_DailyAddCoin()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYHISTORYINFO_GET_DAILYADDCOIN_OFFSET))(this);
		}

		::System::Void set_DailyAddCoin(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYHISTORYINFO_SET_DAILYADDCOIN_OFFSET))(this, value);
		}

		::System::UInt32 get_DailySubCoin()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYHISTORYINFO_GET_DAILYSUBCOIN_OFFSET))(this);
		}

		::System::Void set_DailySubCoin(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYHISTORYINFO_SET_DAILYSUBCOIN_OFFSET))(this, value);
		}

		::System::UInt32 get_DailyRollNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYHISTORYINFO_GET_DAILYROLLNUM_OFFSET))(this);
		}

		::System::Void set_DailyRollNum(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYHISTORYINFO_SET_DAILYROLLNUM_OFFSET))(this, value);
		}

		::System::UInt32 get_DailyMoveStep()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYHISTORYINFO_GET_DAILYMOVESTEP_OFFSET))(this);
		}

		::System::Void set_DailyMoveStep(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYHISTORYINFO_SET_DAILYMOVESTEP_OFFSET))(this, value);
		}

		::System::UInt32 get_CurCoinNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYHISTORYINFO_GET_CURCOINNUM_OFFSET))(this);
		}

		::System::Void set_CurCoinNum(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYHISTORYINFO_SET_CURCOINNUM_OFFSET))(this, value);
		}

		::System::UInt32 get_CurServerProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYHISTORYINFO_GET_CURSERVERPROGRESS_OFFSET))(this);
		}

		::System::Void set_CurServerProgress(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYHISTORYINFO_SET_CURSERVERPROGRESS_OFFSET))(this, value);
		}

		::System::UInt32 get_DailyAssetFundsDonateCoin()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYHISTORYINFO_GET_DAILYASSETFUNDSDONATECOIN_OFFSET))(this);
		}

		::System::Void set_DailyAssetFundsDonateCoin(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYHISTORYINFO_SET_DAILYASSETFUNDSDONATECOIN_OFFSET))(this, value);
		}

		::System::UInt32 get_OriginCoinNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYHISTORYINFO_GET_ORIGINCOINNUM_OFFSET))(this);
		}

		::System::Void set_OriginCoinNum(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYHISTORYINFO_SET_ORIGINCOINNUM_OFFSET))(this, value);
		}

		::System::UInt32 get_MBTIProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYHISTORYINFO_GET_MBTIPROGRESS_OFFSET))(this);
		}

		::System::Void set_MBTIProgress(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYHISTORYINFO_SET_MBTIPROGRESS_OFFSET))(this, value);
		}

		::System::UInt32 get_MBTIMaxProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYHISTORYINFO_GET_MBTIMAXPROGRESS_OFFSET))(this);
		}

		::System::Boolean get_MBTIFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYHISTORYINFO_GET_MBTIFINISHED_OFFSET))(this);
		}

		::System::Void set_MBTIFinished(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYHISTORYINFO_SET_MBTIFINISHED_OFFSET))(this, value);
		}

		::System::Boolean get_MBTIRewardTaken()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYHISTORYINFO_GET_MBTIREWARDTAKEN_OFFSET))(this);
		}

		::System::Void set_MBTIRewardTaken(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYHISTORYINFO_SET_MBTIREWARDTAKEN_OFFSET))(this, value);
		}

		::System::Int32 get_MBTIValueX()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYHISTORYINFO_GET_MBTIVALUEX_OFFSET))(this);
		}

		::System::Void set_MBTIValueX(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYHISTORYINFO_SET_MBTIVALUEX_OFFSET))(this, value);
		}

		::System::Int32 get_MBTIValueY()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYHISTORYINFO_GET_MBTIVALUEY_OFFSET))(this);
		}

		::System::Void set_MBTIValueY(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYHISTORYINFO_SET_MBTIVALUEY_OFFSET))(this, value);
		}
	};
}
