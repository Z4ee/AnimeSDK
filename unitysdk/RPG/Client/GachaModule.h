#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/GameCore/GachaItemType.h"
#include "unitysdk/RPG/GameCore/GachaType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_D8EAED2BCF3F4D39_8;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class BaseGachaDecideData; }
namespace RPG::Client { class BaseGachaGroupData; }
namespace RPG::Client { class BaseGachaPoolData; }
namespace RPG::Client { class GachaCeilingData; }
namespace RPG::Client { class GachaDrawData; }
namespace RPG::Client { class GachaItemData; }
namespace RPG::Client { class GachaModule_DrawInfoCache; }
namespace RPG::Client { class GachaTimeData; }
namespace RPG::Client { class IAvatarInfoProvider; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GACHAMODULE_ADDLOSTGACHAVIDEOTOBADLIST_OFFSET UNITYSDK_OFFSET(0x97557A0)
#define RPG_CLIENT_GACHAMODULE_CANAUTOSHOW_OFFSET UNITYSDK_OFFSET(0x9753230)
#define RPG_CLIENT_GACHAMODULE_CLEARNEWGOTUPAVATARS_OFFSET UNITYSDK_OFFSET(0x9755A90)
#define RPG_CLIENT_GACHAMODULE_DOGACHA_OFFSET UNITYSDK_OFFSET(0x97542B0)
#define RPG_CLIENT_GACHAMODULE_EXCHANGEGACHACEILING_OFFSET UNITYSDK_OFFSET(0x97540B0)
#define RPG_CLIENT_GACHAMODULE_FETCHGACHATIME_1_OFFSET UNITYSDK_OFFSET(0x9751880)
#define RPG_CLIENT_GACHAMODULE_FETCHGACHATIME_OFFSET UNITYSDK_OFFSET(0x97513D0)
#define RPG_CLIENT_GACHAMODULE_GETAVATARDETAILLIST_OFFSET UNITYSDK_OFFSET(0x9755840)
#define RPG_CLIENT_GACHAMODULE_GETFIRSTINTIMEGACHA_OFFSET UNITYSDK_OFFSET(0x9751D90)
#define RPG_CLIENT_GACHAMODULE_GETGACHACEILINGDATA_OFFSET UNITYSDK_OFFSET(0x97506F0)
#define RPG_CLIENT_GACHAMODULE_GETGACHACEILING_OFFSET UNITYSDK_OFFSET(0x9753EC0)
#define RPG_CLIENT_GACHAMODULE_GETGACHAPOOLDATA_OFFSET UNITYSDK_OFFSET(0x9754C10)
#define RPG_CLIENT_GACHAMODULE_GETGACHAREWARDITEMDATAS_OFFSET UNITYSDK_OFFSET(0x9753D40)
#define RPG_CLIENT_GACHAMODULE_GETNEWGROUPIDS_OFFSET UNITYSDK_OFFSET(0x9754CD0)
#define RPG_CLIENT_GACHAMODULE_GETNEXTBEGINTIMEGACHA_OFFSET UNITYSDK_OFFSET(0x9751F70)
#define RPG_CLIENT_GACHAMODULE_GETSORTEDGACHAGROUPDATAS_OFFSET UNITYSDK_OFFSET(0x9753B10)
#define RPG_CLIENT_GACHAMODULE_GETSORTEDGACHAITEMDATAS_OFFSET UNITYSDK_OFFSET(0x9753D80)
#define RPG_CLIENT_GACHAMODULE_GETSORTEDGACHAPOOLDATAS_OFFSET UNITYSDK_OFFSET(0x9752D70)
#define RPG_CLIENT_GACHAMODULE_GETSRGACHAPOOLID_OFFSET UNITYSDK_OFFSET(0x9752C80)
#define RPG_CLIENT_GACHAMODULE_GETSSRGACHAPOOLID_OFFSET UNITYSDK_OFFSET(0x9752B90)
#define RPG_CLIENT_GACHAMODULE_GETTOASTGACHAID_OFFSET UNITYSDK_OFFSET(0x9753860)
#define RPG_CLIENT_GACHAMODULE_GET_CURRENTDRAWINFO_OFFSET UNITYSDK_OFFSET(0x9757EA0)
#define RPG_CLIENT_GACHAMODULE_GET_DEFAULTGACHAID_OFFSET UNITYSDK_OFFSET(0x9757E30)
#define RPG_CLIENT_GACHAMODULE_GET_ENABLEPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x9757F60)
#define RPG_CLIENT_GACHAMODULE_GET_GACHANORMALPOOLID_OFFSET UNITYSDK_OFFSET(0x9757FE0)
#define RPG_CLIENT_GACHAMODULE_GET_GACHANORMALTRIALSTAGEIDLIST_OFFSET UNITYSDK_OFFSET(0x9757F80)
#define RPG_CLIENT_GACHAMODULE_GET_GACHAPOOLDATACACHE_OFFSET UNITYSDK_OFFSET(0x9757E80)
#define RPG_CLIENT_GACHAMODULE_GET_GETGACHAINFORSPCALLBACK_OFFSET UNITYSDK_OFFSET(0x9757DB0)
#define RPG_CLIENT_GACHAMODULE_GET_HAVEPOOLGACHALIMIT_OFFSET UNITYSDK_OFFSET(0x9757E70)
#define RPG_CLIENT_GACHAMODULE_GET_HAVETOTALGACHALIMIT_OFFSET UNITYSDK_OFFSET(0x9757E60)
#define RPG_CLIENT_GACHAMODULE_GET_POOLGACHALIMIT_OFFSET UNITYSDK_OFFSET(0x9757DF0)
#define RPG_CLIENT_GACHAMODULE_GET_SHAREID_OFFSET UNITYSDK_OFFSET(0x9757E50)
#define RPG_CLIENT_GACHAMODULE_GET_SHAREREWARDNUM_OFFSET UNITYSDK_OFFSET(0x9757EB0)
#define RPG_CLIENT_GACHAMODULE_GET_TOTALGACHALIMIT_OFFSET UNITYSDK_OFFSET(0x9757DD0)
#define RPG_CLIENT_GACHAMODULE_GET_TOTALGACHATIME_OFFSET UNITYSDK_OFFSET(0x9757E10)
#define RPG_CLIENT_GACHAMODULE_HASAVATARTOASTTOSHOW_OFFSET UNITYSDK_OFFSET(0x9753550)
#define RPG_CLIENT_GACHAMODULE_HASAVATARTOASTVIDEO_OFFSET UNITYSDK_OFFSET(0x9753A60)
#define RPG_CLIENT_GACHAMODULE_HASAVATARTOAST_OFFSET UNITYSDK_OFFSET(0x9755740)
#define RPG_CLIENT_GACHAMODULE_HASNEWGOTUPAVATARS_OFFSET UNITYSDK_OFFSET(0x9755A30)
#define RPG_CLIENT_GACHAMODULE_HASOPENEDGACHA_OFFSET UNITYSDK_OFFSET(0x9751240)
#define RPG_CLIENT_GACHAMODULE_INGACHATIMEWITHOFFSETDAY_OFFSET UNITYSDK_OFFSET(0x9751C10)
#define RPG_CLIENT_GACHAMODULE_INGACHATIME_OFFSET UNITYSDK_OFFSET(0x9751A80)
#define RPG_CLIENT_GACHAMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x9755C90)
#define RPG_CLIENT_GACHAMODULE_ISAVATARINPOOL_OFFSET UNITYSDK_OFFSET(0x9752EA0)
#define RPG_CLIENT_GACHAMODULE_ISAVATARTOASTUNLOCK_OFFSET UNITYSDK_OFFSET(0x9753600)
#define RPG_CLIENT_GACHAMODULE_REFRESHGACHAPOOLSDATA_OFFSET UNITYSDK_OFFSET(0x9754500)
#define RPG_CLIENT_GACHAMODULE_REQUESTUNLOCKDATA_OFFSET UNITYSDK_OFFSET(0x9752F00)
#define RPG_CLIENT_GACHAMODULE_SET_DEFAULTGACHAID_OFFSET UNITYSDK_OFFSET(0x9757E40)
#define RPG_CLIENT_GACHAMODULE_SET_ENABLEPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x9757F70)
#define RPG_CLIENT_GACHAMODULE_SET_GACHAPOOLDATACACHE_OFFSET UNITYSDK_OFFSET(0x9757E90)
#define RPG_CLIENT_GACHAMODULE_SET_GETGACHAINFORSPCALLBACK_OFFSET UNITYSDK_OFFSET(0x9757DC0)
#define RPG_CLIENT_GACHAMODULE_SET_POOLGACHALIMIT_OFFSET UNITYSDK_OFFSET(0x9757E00)
#define RPG_CLIENT_GACHAMODULE_SET_TOTALGACHALIMIT_OFFSET UNITYSDK_OFFSET(0x9757DE0)
#define RPG_CLIENT_GACHAMODULE_SET_TOTALGACHATIME_OFFSET UNITYSDK_OFFSET(0x9757E20)
#define RPG_CLIENT_GACHAMODULE_TRYAUTOSHOW_OFFSET UNITYSDK_OFFSET(0x97530E0)
#define RPG_CLIENT_GACHAMODULE_TRYGETGACHADECIDEDATA_OFFSET UNITYSDK_OFFSET(0x9755B00)
#define RPG_CLIENT_GACHAMODULE_TRYSHOWAVATARTOAST_OFFSET UNITYSDK_OFFSET(0x9753300)
#define RPG_CLIENT_GACHAMODULE__ADDGACHAPOOLDATATOGROUPDICT_OFFSET UNITYSDK_OFFSET(0x9754A80)
#define RPG_CLIENT_GACHAMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x9755F70)
#define RPG_CLIENT_GACHAMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x9756020)
#define RPG_CLIENT_GACHAMODULE__AUTOSHOWGACHAAVATARTOAST_OFFSET UNITYSDK_OFFSET(0x9753350)
#define RPG_CLIENT_GACHAMODULE__CCTOR_OFFSET UNITYSDK_OFFSET(0x97580C0)
#define RPG_CLIENT_GACHAMODULE__CLEAROUTDATESEENGACHAGROUPID_OFFSET UNITYSDK_OFFSET(0x9754FD0)
#define RPG_CLIENT_GACHAMODULE__CLEARSCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0x9757160)
#define RPG_CLIENT_GACHAMODULE__CMDDOGACHASCRSP_OFFSET UNITYSDK_OFFSET(0x97561D0)
#define RPG_CLIENT_GACHAMODULE__CMDEXCHANGEGACHACEILINGSCRSP_OFFSET UNITYSDK_OFFSET(0x9757A00)
#define RPG_CLIENT_GACHAMODULE__CMDGETGACHACEILINGSCRSP_OFFSET UNITYSDK_OFFSET(0x9757780)
#define RPG_CLIENT_GACHAMODULE__CMDGETGACHAINFOSCRSP_OFFSET UNITYSDK_OFFSET(0x9756910)
#define RPG_CLIENT_GACHAMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x9752790)
#define RPG_CLIENT_GACHAMODULE__ONDEFAULTGACHAIDCHANGE_OFFSET UNITYSDK_OFFSET(0x9757CE0)
#define RPG_CLIENT_GACHAMODULE__ONGETFARMSTAGEGACHAINFOSCRSP_OFFSET UNITYSDK_OFFSET(0x9752210)
#define RPG_CLIENT_GACHAMODULE__ONSETGACHADECIDEITEMSCRSP_OFFSET UNITYSDK_OFFSET(0x9757BD0)
#define RPG_CLIENT_GACHAMODULE__SAFEGETGACHATIMEFETCHINGPROMISE_OFFSET UNITYSDK_OFFSET(0x97516A0)
#define RPG_CLIENT_GACHAMODULE__SYNCDECIDEDATA_OFFSET UNITYSDK_OFFSET(0x9757320)
#define RPG_CLIENT_GACHAMODULE__TIMEADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x97521A0)
#define RPG_CLIENT_GACHAMODULE__TIMEUNINIT_OFFSET UNITYSDK_OFFSET(0x9751130)
#define RPG_CLIENT_GACHAMODULE__TRYADDNEWGOTUPAVATAR_OFFSET UNITYSDK_OFFSET(0x97567C0)
#define RPG_CLIENT_GACHAMODULE__TRYMARKUNLOCKIDNOTOPEN_OFFSET UNITYSDK_OFFSET(0x9753180)
#define RPG_CLIENT_GACHAMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x9758140)
#define RPG_CLIENT_GACHAMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x97581D0)
#define RPG_CLIENT_GACHAMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x9758230)

namespace RPG::Client
{
	inline static constexpr unsigned int GachaModule_TypeDefinitionIndex = 52210;

	class GachaModule : public ::RPG::Client::BaseModule
	{
	public:
		static ::System::Comparison_1<::RPG::Client::BaseGachaGroupData*>** StaticGet_GachaGroupDataComparison()
		{
			return (::System::Comparison_1<::RPG::Client::BaseGachaGroupData*>**)Il2CppClass::FromTypeDefinitionIndex(GachaModule_TypeDefinitionIndex)->GetStaticField(0xF150);
		}
		static ::System::Comparison_1<::RPG::Client::BaseGachaPoolData*>** StaticGet_GachaPoolDataComparison()
		{
			return (::System::Comparison_1<::RPG::Client::BaseGachaPoolData*>**)Il2CppClass::FromTypeDefinitionIndex(GachaModule_TypeDefinitionIndex)->GetStaticField(0xF158);
		}
		// static const ::System::Single _MAX_WAITING_TIME; // 0x0
		// static const ::System::String* _WAITING_WHEEL_APPEAR_TIME_KEY; // 0x0
		// static const ::System::String* _ENABLE_GACHA_PERFORM_KEY; // 0x0
		// static const ::System::UInt32 _RET_GACHA_REQ_DUPLICATED = 0xBBC; // 0x0
		// static const ::System::String* _GACHA_NOTIFY_PREFIX; // 0x0
		// static const ::System::UInt32 _GACHA_UNLOCK_ID = 0x8FC; // 0x0
		::System::Collections::Generic::List_1<::System::UInt32>* _GachaNormalTrialStageIDList; // 0x10
		::System::Collections::Generic::List_1<::System::Int32>* _WaitForPoolOpenTimerID; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::Promises::Promise*>* _GachaTimeFetchingPromises; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::BaseGachaPoolData*>* _GachaPoolDatasThisVersion; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::RPG::Client::BaseGachaDecideData*>* _DecideDatas; // 0x30
		::RPG::Client::GachaModule_DrawInfoCache* _CurrentDrawInfo; // 0x38
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GachaType, ::RPG::Client::GachaCeilingData*>* _GachaCeilingDict; // 0x40
		::System::Collections::Generic::List_1<::RPG::Client::BaseGachaPoolData*>* _GachaPoolDatasLaterVersion; // 0x48
		::System::Action_1<::System::Boolean>* _GetGachaInfoRspCallback_k__BackingField; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::BaseGachaGroupData*>* _GachaGroupDataDict; // 0x58
		::System::Collections::Generic::List_1<::RPG::Client::BaseGachaGroupData*>* _GachaGroupDatasThisVersion; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::GachaTimeData*>* _GachaTimeDatas; // 0x68
		::System::Collections::Generic::List_1<::RPG::Client::GachaItemData*>* _GachaRewardItems; // 0x70
		::System::Collections::Generic::List_1<::System::UInt32>* _NewGotUpAvatarIDs; // 0x78
		::System::Collections::Generic::List_1<::System::Int32>* _WaitForPoolEndTimerID; // 0x80
		::RPG::Client::BaseGachaPoolData* _GachaPoolDataCache_k__BackingField; // 0x88
		::System::Boolean _ShowGachaAvatarToast; // 0x90
		::System::Boolean _ShouldTryShowAvatarToast; // 0x91
		::System::Boolean _EnablePerformance_k__BackingField; // 0x92
		::System::UInt32 _TotalGachaTime_k__BackingField; // 0x94
		::System::Single _WaitingWheelAppearTime; // 0x98
		::System::UInt32 _PoolGachaLimit_k__BackingField; // 0x9C
		::System::UInt32 _GachaRandomNum; // 0xA0
		::System::UInt32 _DefaultGachaID_k__BackingField; // 0xA4
		::System::UInt32 _TotalGachaLimit_k__BackingField; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE__CCTOR_OFFSET))();
		}

		::System::Void _TimeUnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE__TIMEUNINIT_OFFSET))(this);
		}

		::System::Boolean HasOpenedGacha(::Il2CppArray<::System::UInt32>* gachaIDs)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_HASOPENEDGACHA_OFFSET))(this, gachaIDs);
		}

		::RPG::Client::Promises::IPromise* FetchGachaTime(::System::Collections::Generic::List_1<::System::UInt32>* gachaIDs)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_FETCHGACHATIME_OFFSET))(this, gachaIDs);
		}

		::RPG::Client::Promises::IPromise* FetchGachaTime_1(::System::UInt32 gachaID)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_FETCHGACHATIME_1_OFFSET))(this, gachaID);
		}

		::System::Boolean InGachaTime(::System::UInt32 gachaID, ::System::UInt32 beginOffset, ::System::UInt32 endOffset)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_INGACHATIME_OFFSET))(this, gachaID, beginOffset, endOffset);
		}

		::System::Boolean InGachaTimeWithOffsetDay(::System::Collections::Generic::List_1<::System::UInt32>* gachaIDs, ::System::UInt32 beginOffsetDay, ::System::UInt32 endOffsetDay)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_INGACHATIMEWITHOFFSETDAY_OFFSET))(this, gachaIDs, beginOffsetDay, endOffsetDay);
		}

		::RPG::Client::GachaTimeData* GetFirstInTimeGacha(::System::Collections::Generic::List_1<::System::UInt32>* gachaIDs, ::System::UInt32 beginOffset, ::System::UInt32 endOffset)
		{
			return ((::RPG::Client::GachaTimeData*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_GETFIRSTINTIMEGACHA_OFFSET))(this, gachaIDs, beginOffset, endOffset);
		}

		::RPG::Client::GachaTimeData* GetNextBeginTimeGacha(::System::Collections::Generic::List_1<::System::UInt32>* gachaIDs)
		{
			return ((::RPG::Client::GachaTimeData*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_GETNEXTBEGINTIMEGACHA_OFFSET))(this, gachaIDs);
		}

		::RPG::Client::Promises::Promise* _SafeGetGachaTimeFetchingPromise(::System::UInt32 gachaID)
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE__SAFEGETGACHATIMEFETCHINGPROMISE_OFFSET))(this, gachaID);
		}

		::System::Void _TimeAddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE__TIMEADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnGetFarmStageGachaInfoScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE__ONGETFARMSTAGEGACHAINFOSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::UInt32 GetSSRGachaPoolID(::System::UInt32 avatarID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_GETSSRGACHAPOOLID_OFFSET))(this, avatarID);
		}

		::System::UInt32 GetSRGachaPoolID(::System::UInt32 avatarID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_GETSRGACHAPOOLID_OFFSET))(this, avatarID);
		}

		::System::Boolean IsAvatarInPool(::System::UInt32 avatarID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_ISAVATARINPOOL_OFFSET))(this, avatarID);
		}

		::System::Void RequestUnlockData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_REQUESTUNLOCKDATA_OFFSET))(this);
		}

		::System::Void TryAutoShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_TRYAUTOSHOW_OFFSET))(this);
		}

		::System::Void TryShowAvatarToast()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_TRYSHOWAVATARTOAST_OFFSET))(this);
		}

		::System::Boolean HasAvatarToastToShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_HASAVATARTOASTTOSHOW_OFFSET))(this);
		}

		static ::System::Boolean CanAutoShow()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_CANAUTOSHOW_OFFSET))();
		}

		::System::Collections::Generic::List_1<::RPG::Client::BaseGachaPoolData*>* GetSortedGachaPoolDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::BaseGachaPoolData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_GETSORTEDGACHAPOOLDATAS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::BaseGachaGroupData*>* GetSortedGachaGroupDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::BaseGachaGroupData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_GETSORTEDGACHAGROUPDATAS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GachaItemData*>* GetGachaRewardItemDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GachaItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_GETGACHAREWARDITEMDATAS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GachaItemData*>* GetSortedGachaItemDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GachaItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_GETSORTEDGACHAITEMDATAS_OFFSET))(this);
		}

		::RPG::Client::GachaCeilingData* GetGachaCeilingData(::RPG::GameCore::GachaType gachaType)
		{
			return ((::RPG::Client::GachaCeilingData*(*)(::PVOID, ::RPG::GameCore::GachaType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_GETGACHACEILINGDATA_OFFSET))(this, gachaType);
		}

		::System::Void GetGachaCeiling(::RPG::GameCore::GachaType gachaType)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GachaType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_GETGACHACEILING_OFFSET))(this, gachaType);
		}

		::System::Void ExchangeGachaCeiling(::RPG::GameCore::GachaType gachaType, ::System::UInt32 avatarId)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GachaType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_EXCHANGEGACHACEILING_OFFSET))(this, gachaType, avatarId);
		}

		::System::Void DoGacha(::RPG::Client::BaseGachaPoolData* gachaPoolData, ::RPG::Client::GachaDrawData* drawData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGachaPoolData*, ::RPG::Client::GachaDrawData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_DOGACHA_OFFSET))(this, gachaPoolData, drawData);
		}

		::System::Void RefreshGachaPoolsData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_REFRESHGACHAPOOLSDATA_OFFSET))(this);
		}

		::RPG::Client::BaseGachaPoolData* GetGachaPoolData(::System::UInt32 gachaID)
		{
			return ((::RPG::Client::BaseGachaPoolData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_GETGACHAPOOLDATA_OFFSET))(this, gachaID);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetNewGroupIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_GETNEWGROUPIDS_OFFSET))(this);
		}

		::System::Nullable_1<::System::UInt32> GetToastGachaID()
		{
			return ((::System::Nullable_1<::System::UInt32>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_GETTOASTGACHAID_OFFSET))(this);
		}

		static ::System::Boolean HasAvatarToast(::System::UInt32 gachaID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_HASAVATARTOAST_OFFSET))(gachaID);
		}

		static ::System::Boolean IsAvatarToastUnlock()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_ISAVATARTOASTUNLOCK_OFFSET))();
		}

		static ::System::Boolean HasAvatarToastVideo(::System::UInt32 gachaID, ::System::Boolean checkLoop)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_HASAVATARTOASTVIDEO_OFFSET))(gachaID, checkLoop);
		}

		static ::System::Void AddLostGachaVideoToBadList(::System::UInt32 gachaID)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_ADDLOSTGACHAVIDEOTOBADLIST_OFFSET))(gachaID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* GetAvatarDetailList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_GETAVATARDETAILLIST_OFFSET))(this);
		}

		::System::Boolean HasNewGotUpAvatars()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_HASNEWGOTUPAVATARS_OFFSET))(this);
		}

		::System::Void ClearNewGotUpAvatars()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_CLEARNEWGOTUPAVATARS_OFFSET))(this);
		}

		::RPG::Client::BaseGachaDecideData* TryGetGachaDecideData(::System::UInt32 decideID, ::RPG::GameCore::GachaItemType gachaItemType)
		{
			return ((::RPG::Client::BaseGachaDecideData*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::GachaItemType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_TRYGETGACHADECIDEDATA_OFFSET))(this, decideID, gachaItemType);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_INIT_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _CmdDoGachaScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE__CMDDOGACHASCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _TryAddNewGotUpAvatar(::RPG::Client::BaseGachaPoolData* poolData, ::RPG::Client::GachaItemData* itemData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGachaPoolData*, ::RPG::Client::GachaItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE__TRYADDNEWGOTUPAVATAR_OFFSET))(this, poolData, itemData);
		}

		::System::Void _CmdGetGachaInfoScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE__CMDGETGACHAINFOSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _SyncDecideData(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D8EAED2BCF3F4D39_8*>* decideItemDatas)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D8EAED2BCF3F4D39_8*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE__SYNCDECIDEDATA_OFFSET))(this, decideItemDatas);
		}

		::System::Void _CmdGetGachaCeilingScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE__CMDGETGACHACEILINGSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _CmdExchangeGachaCeilingScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE__CMDEXCHANGEGACHACEILINGSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnSetGachaDecideItemScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE__ONSETGACHADECIDEITEMSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _AutoShowGachaAvatarToast()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE__AUTOSHOWGACHAAVATARTOAST_OFFSET))(this);
		}

		::System::Void _TryMarkUnlockIDNotOpen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE__TRYMARKUNLOCKIDNOTOPEN_OFFSET))(this);
		}

		::System::Void _AddGachaPoolDataToGroupDict(::RPG::Client::BaseGachaPoolData* baseGachaPoolData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGachaPoolData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE__ADDGACHAPOOLDATATOGROUPDICT_OFFSET))(this, baseGachaPoolData);
		}

		::System::Void _ClearOutDateSeenGachaGroupID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE__CLEAROUTDATESEENGACHAGROUPID_OFFSET))(this);
		}

		::System::Void _ClearScheduleData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE__CLEARSCHEDULEDATA_OFFSET))(this);
		}

		::System::Void _OnDefaultGachaIDChange(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE__ONDEFAULTGACHAIDCHANGE_OFFSET))(this, arg);
		}

		::System::Action_1<::System::Boolean>* get_GetGachaInfoRspCallback()
		{
			return ((::System::Action_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_GET_GETGACHAINFORSPCALLBACK_OFFSET))(this);
		}

		::System::Void set_GetGachaInfoRspCallback(::System::Action_1<::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_SET_GETGACHAINFORSPCALLBACK_OFFSET))(this, value);
		}

		::System::UInt32 get_TotalGachaLimit()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_GET_TOTALGACHALIMIT_OFFSET))(this);
		}

		::System::Void set_TotalGachaLimit(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_SET_TOTALGACHALIMIT_OFFSET))(this, value);
		}

		::System::UInt32 get_PoolGachaLimit()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_GET_POOLGACHALIMIT_OFFSET))(this);
		}

		::System::Void set_PoolGachaLimit(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_SET_POOLGACHALIMIT_OFFSET))(this, value);
		}

		::System::UInt32 get_TotalGachaTime()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_GET_TOTALGACHATIME_OFFSET))(this);
		}

		::System::Void set_TotalGachaTime(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_SET_TOTALGACHATIME_OFFSET))(this, value);
		}

		::System::UInt32 get_DefaultGachaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_GET_DEFAULTGACHAID_OFFSET))(this);
		}

		::System::Void set_DefaultGachaID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_SET_DEFAULTGACHAID_OFFSET))(this, value);
		}

		::System::UInt32 get_ShareID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_GET_SHAREID_OFFSET))(this);
		}

		::System::Boolean get_HaveTotalGachaLimit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_GET_HAVETOTALGACHALIMIT_OFFSET))(this);
		}

		::System::Boolean get_HavePoolGachaLimit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_GET_HAVEPOOLGACHALIMIT_OFFSET))(this);
		}

		::RPG::Client::BaseGachaPoolData* get_GachaPoolDataCache()
		{
			return ((::RPG::Client::BaseGachaPoolData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_GET_GACHAPOOLDATACACHE_OFFSET))(this);
		}

		::System::Void set_GachaPoolDataCache(::RPG::Client::BaseGachaPoolData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGachaPoolData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_SET_GACHAPOOLDATACACHE_OFFSET))(this, value);
		}

		::RPG::Client::GachaModule_DrawInfoCache* get_CurrentDrawInfo()
		{
			return ((::RPG::Client::GachaModule_DrawInfoCache*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_GET_CURRENTDRAWINFO_OFFSET))(this);
		}

		::System::UInt32 get_ShareRewardNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_GET_SHAREREWARDNUM_OFFSET))(this);
		}

		::System::Boolean get_EnablePerformance()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_GET_ENABLEPERFORMANCE_OFFSET))(this);
		}

		::System::Void set_EnablePerformance(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_SET_ENABLEPERFORMANCE_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_GachaNormalTrialStageIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_GET_GACHANORMALTRIALSTAGEIDLIST_OFFSET))(this);
		}

		::System::Nullable_1<::System::UInt32> get_GachaNormalPoolID()
		{
			return ((::System::Nullable_1<::System::UInt32>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_GET_GACHANORMALPOOLID_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}
	};
}
