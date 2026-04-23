#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/GameCore/GachaItemType.h"
#include "unitysdk/RPG/GameCore/GachaType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_51AD4A996C8C1E92_1;
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

#define RPG_CLIENT_GACHAMODULE_ADDLOSTGACHAVIDEOTOBADLIST_OFFSET UNITYSDK_OFFSET(0xA416680)
#define RPG_CLIENT_GACHAMODULE_CANAUTOSHOW_OFFSET UNITYSDK_OFFSET(0xA4140E0)
#define RPG_CLIENT_GACHAMODULE_CLEARNEWGOTUPAVATARS_OFFSET UNITYSDK_OFFSET(0xA416970)
#define RPG_CLIENT_GACHAMODULE_DOGACHA_OFFSET UNITYSDK_OFFSET(0xA415190)
#define RPG_CLIENT_GACHAMODULE_EXCHANGEGACHACEILING_OFFSET UNITYSDK_OFFSET(0xA414F90)
#define RPG_CLIENT_GACHAMODULE_FETCHGACHATIME_1_OFFSET UNITYSDK_OFFSET(0xA412720)
#define RPG_CLIENT_GACHAMODULE_FETCHGACHATIME_OFFSET UNITYSDK_OFFSET(0xA412270)
#define RPG_CLIENT_GACHAMODULE_GETAVATARDETAILLIST_OFFSET UNITYSDK_OFFSET(0xA416720)
#define RPG_CLIENT_GACHAMODULE_GETFIRSTINTIMEGACHA_OFFSET UNITYSDK_OFFSET(0xA412C30)
#define RPG_CLIENT_GACHAMODULE_GETGACHACEILINGDATA_OFFSET UNITYSDK_OFFSET(0xA411590)
#define RPG_CLIENT_GACHAMODULE_GETGACHACEILING_OFFSET UNITYSDK_OFFSET(0xA414DA0)
#define RPG_CLIENT_GACHAMODULE_GETGACHAPOOLDATA_OFFSET UNITYSDK_OFFSET(0xA415AF0)
#define RPG_CLIENT_GACHAMODULE_GETGACHAREWARDITEMDATAS_OFFSET UNITYSDK_OFFSET(0xA414C20)
#define RPG_CLIENT_GACHAMODULE_GETNEWGROUPIDS_OFFSET UNITYSDK_OFFSET(0xA415BB0)
#define RPG_CLIENT_GACHAMODULE_GETNEXTBEGINTIMEGACHA_OFFSET UNITYSDK_OFFSET(0xA412E10)
#define RPG_CLIENT_GACHAMODULE_GETSORTEDGACHAGROUPDATAS_OFFSET UNITYSDK_OFFSET(0xA4149F0)
#define RPG_CLIENT_GACHAMODULE_GETSORTEDGACHAITEMDATAS_OFFSET UNITYSDK_OFFSET(0xA414C60)
#define RPG_CLIENT_GACHAMODULE_GETSORTEDGACHAPOOLDATAS_OFFSET UNITYSDK_OFFSET(0xA413C10)
#define RPG_CLIENT_GACHAMODULE_GETSRGACHAPOOLID_OFFSET UNITYSDK_OFFSET(0xA413B20)
#define RPG_CLIENT_GACHAMODULE_GETSSRGACHAPOOLID_OFFSET UNITYSDK_OFFSET(0xA413A30)
#define RPG_CLIENT_GACHAMODULE_GETTOASTGACHAID_OFFSET UNITYSDK_OFFSET(0xA414740)
#define RPG_CLIENT_GACHAMODULE_GET_CURRENTDRAWINFO_OFFSET UNITYSDK_OFFSET(0xA418D20)
#define RPG_CLIENT_GACHAMODULE_GET_DEFAULTGACHAID_OFFSET UNITYSDK_OFFSET(0xA418CB0)
#define RPG_CLIENT_GACHAMODULE_GET_ENABLEPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xA418DE0)
#define RPG_CLIENT_GACHAMODULE_GET_GACHANORMALPOOLID_OFFSET UNITYSDK_OFFSET(0xA418E60)
#define RPG_CLIENT_GACHAMODULE_GET_GACHANORMALTRIALSTAGEIDLIST_OFFSET UNITYSDK_OFFSET(0xA418E00)
#define RPG_CLIENT_GACHAMODULE_GET_GACHAPOOLDATACACHE_OFFSET UNITYSDK_OFFSET(0xA418D00)
#define RPG_CLIENT_GACHAMODULE_GET_GETGACHAINFORSPCALLBACK_OFFSET UNITYSDK_OFFSET(0xA418C30)
#define RPG_CLIENT_GACHAMODULE_GET_HAVEPOOLGACHALIMIT_OFFSET UNITYSDK_OFFSET(0xA418CF0)
#define RPG_CLIENT_GACHAMODULE_GET_HAVETOTALGACHALIMIT_OFFSET UNITYSDK_OFFSET(0xA418CE0)
#define RPG_CLIENT_GACHAMODULE_GET_POOLGACHALIMIT_OFFSET UNITYSDK_OFFSET(0xA418C70)
#define RPG_CLIENT_GACHAMODULE_GET_SHAREID_OFFSET UNITYSDK_OFFSET(0xA418CD0)
#define RPG_CLIENT_GACHAMODULE_GET_SHAREREWARDNUM_OFFSET UNITYSDK_OFFSET(0xA418D30)
#define RPG_CLIENT_GACHAMODULE_GET_TOTALGACHALIMIT_OFFSET UNITYSDK_OFFSET(0xA418C50)
#define RPG_CLIENT_GACHAMODULE_GET_TOTALGACHATIME_OFFSET UNITYSDK_OFFSET(0xA418C90)
#define RPG_CLIENT_GACHAMODULE_HASAVATARTOASTTOSHOW_OFFSET UNITYSDK_OFFSET(0xA414430)
#define RPG_CLIENT_GACHAMODULE_HASAVATARTOASTVIDEO_OFFSET UNITYSDK_OFFSET(0xA414940)
#define RPG_CLIENT_GACHAMODULE_HASAVATARTOAST_OFFSET UNITYSDK_OFFSET(0xA416620)
#define RPG_CLIENT_GACHAMODULE_HASNEWGOTUPAVATARS_OFFSET UNITYSDK_OFFSET(0xA416910)
#define RPG_CLIENT_GACHAMODULE_HASOPENEDGACHA_OFFSET UNITYSDK_OFFSET(0xA4120E0)
#define RPG_CLIENT_GACHAMODULE_INGACHATIMEWITHOFFSETDAY_OFFSET UNITYSDK_OFFSET(0xA412AB0)
#define RPG_CLIENT_GACHAMODULE_INGACHATIME_OFFSET UNITYSDK_OFFSET(0xA412920)
#define RPG_CLIENT_GACHAMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xA416B70)
#define RPG_CLIENT_GACHAMODULE_ISAVATARINPOOL_OFFSET UNITYSDK_OFFSET(0xA413D40)
#define RPG_CLIENT_GACHAMODULE_ISAVATARTOASTUNLOCK_OFFSET UNITYSDK_OFFSET(0xA4144E0)
#define RPG_CLIENT_GACHAMODULE_REFRESHGACHAPOOLSDATA_OFFSET UNITYSDK_OFFSET(0xA4153E0)
#define RPG_CLIENT_GACHAMODULE_REQUESTUNLOCKDATA_OFFSET UNITYSDK_OFFSET(0xA413DA0)
#define RPG_CLIENT_GACHAMODULE_SET_DEFAULTGACHAID_OFFSET UNITYSDK_OFFSET(0xA418CC0)
#define RPG_CLIENT_GACHAMODULE_SET_ENABLEPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xA418DF0)
#define RPG_CLIENT_GACHAMODULE_SET_GACHAPOOLDATACACHE_OFFSET UNITYSDK_OFFSET(0xA418D10)
#define RPG_CLIENT_GACHAMODULE_SET_GETGACHAINFORSPCALLBACK_OFFSET UNITYSDK_OFFSET(0xA418C40)
#define RPG_CLIENT_GACHAMODULE_SET_POOLGACHALIMIT_OFFSET UNITYSDK_OFFSET(0xA418C80)
#define RPG_CLIENT_GACHAMODULE_SET_TOTALGACHALIMIT_OFFSET UNITYSDK_OFFSET(0xA418C60)
#define RPG_CLIENT_GACHAMODULE_SET_TOTALGACHATIME_OFFSET UNITYSDK_OFFSET(0xA418CA0)
#define RPG_CLIENT_GACHAMODULE_TRYAUTOSHOW_OFFSET UNITYSDK_OFFSET(0xA413F90)
#define RPG_CLIENT_GACHAMODULE_TRYGETGACHADECIDEDATA_OFFSET UNITYSDK_OFFSET(0xA4169E0)
#define RPG_CLIENT_GACHAMODULE_TRYSHOWAVATARTOAST_OFFSET UNITYSDK_OFFSET(0xA4141B0)
#define RPG_CLIENT_GACHAMODULE__ADDGACHAPOOLDATATOGROUPDICT_OFFSET UNITYSDK_OFFSET(0xA415960)
#define RPG_CLIENT_GACHAMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xA416E60)
#define RPG_CLIENT_GACHAMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xA416F10)
#define RPG_CLIENT_GACHAMODULE__AUTOSHOWGACHAAVATARTOAST_OFFSET UNITYSDK_OFFSET(0xA414200)
#define RPG_CLIENT_GACHAMODULE__CCTOR_OFFSET UNITYSDK_OFFSET(0xA418F40)
#define RPG_CLIENT_GACHAMODULE__CLEAROUTDATESEENGACHAGROUPID_OFFSET UNITYSDK_OFFSET(0xA415EB0)
#define RPG_CLIENT_GACHAMODULE__CLEARSCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0xA418000)
#define RPG_CLIENT_GACHAMODULE__CMDDOGACHASCRSP_OFFSET UNITYSDK_OFFSET(0xA4170C0)
#define RPG_CLIENT_GACHAMODULE__CMDEXCHANGEGACHACEILINGSCRSP_OFFSET UNITYSDK_OFFSET(0xA418890)
#define RPG_CLIENT_GACHAMODULE__CMDGETGACHACEILINGSCRSP_OFFSET UNITYSDK_OFFSET(0xA418610)
#define RPG_CLIENT_GACHAMODULE__CMDGETGACHAINFOSCRSP_OFFSET UNITYSDK_OFFSET(0xA4177A0)
#define RPG_CLIENT_GACHAMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xA413630)
#define RPG_CLIENT_GACHAMODULE__ONDEFAULTGACHAIDCHANGE_OFFSET UNITYSDK_OFFSET(0xA418B60)
#define RPG_CLIENT_GACHAMODULE__ONGETFARMSTAGEGACHAINFOSCRSP_OFFSET UNITYSDK_OFFSET(0xA4130B0)
#define RPG_CLIENT_GACHAMODULE__ONSETGACHADECIDEITEMSCRSP_OFFSET UNITYSDK_OFFSET(0xA418A60)
#define RPG_CLIENT_GACHAMODULE__SAFEGETGACHATIMEFETCHINGPROMISE_OFFSET UNITYSDK_OFFSET(0xA412540)
#define RPG_CLIENT_GACHAMODULE__SYNCDECIDEDATA_OFFSET UNITYSDK_OFFSET(0xA4181C0)
#define RPG_CLIENT_GACHAMODULE__TIMEADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xA413040)
#define RPG_CLIENT_GACHAMODULE__TIMEUNINIT_OFFSET UNITYSDK_OFFSET(0xA411FD0)
#define RPG_CLIENT_GACHAMODULE__TRYADDNEWGOTUPAVATAR_OFFSET UNITYSDK_OFFSET(0xA417650)
#define RPG_CLIENT_GACHAMODULE__TRYMARKUNLOCKIDNOTOPEN_OFFSET UNITYSDK_OFFSET(0xA414030)
#define RPG_CLIENT_GACHAMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xA418FC0)
#define RPG_CLIENT_GACHAMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xA419050)
#define RPG_CLIENT_GACHAMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xA4190B0)

namespace RPG::Client
{
	inline static constexpr unsigned int GachaModule_TypeDefinitionIndex = 59162;

	class GachaModule : public ::RPG::Client::BaseModule
	{
	public:
		static ::System::Comparison_1<::RPG::Client::BaseGachaGroupData*>** StaticGet_GachaGroupDataComparison()
		{
			return (::System::Comparison_1<::RPG::Client::BaseGachaGroupData*>**)Il2CppClass::FromTypeDefinitionIndex(GachaModule_TypeDefinitionIndex)->GetStaticField(0x15120);
		}
		static ::System::Comparison_1<::RPG::Client::BaseGachaPoolData*>** StaticGet_GachaPoolDataComparison()
		{
			return (::System::Comparison_1<::RPG::Client::BaseGachaPoolData*>**)Il2CppClass::FromTypeDefinitionIndex(GachaModule_TypeDefinitionIndex)->GetStaticField(0x15128);
		}
		// static const ::System::Single _MAX_WAITING_TIME; // 0x0
		// static const ::System::String* _WAITING_WHEEL_APPEAR_TIME_KEY; // 0x0
		// static const ::System::String* _ENABLE_GACHA_PERFORM_KEY; // 0x0
		// static const ::System::UInt32 _RET_GACHA_REQ_DUPLICATED = 0xBBC; // 0x0
		// static const ::System::String* _GACHA_NOTIFY_PREFIX; // 0x0
		// static const ::System::UInt32 _GACHA_UNLOCK_ID = 0x8FC; // 0x0
		::System::Collections::Generic::List_1<::RPG::Client::BaseGachaPoolData*>* _GachaPoolDatasLaterVersion; // 0x10
		::RPG::Client::BaseGachaPoolData* _GachaPoolDataCache_k__BackingField; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::RPG::Client::BaseGachaDecideData*>* _DecideDatas; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::Promises::Promise*>* _GachaTimeFetchingPromises; // 0x28
		::System::Collections::Generic::List_1<::System::Int32>* _WaitForPoolOpenTimerID; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::BaseGachaPoolData*>* _GachaPoolDatasThisVersion; // 0x38
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GachaType, ::RPG::Client::GachaCeilingData*>* _GachaCeilingDict; // 0x40
		::System::Collections::Generic::List_1<::System::UInt32>* _GachaNormalTrialStageIDList; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::BaseGachaGroupData*>* _GachaGroupDataDict; // 0x50
		::System::Collections::Generic::List_1<::RPG::Client::GachaItemData*>* _GachaRewardItems; // 0x58
		::RPG::Client::GachaModule_DrawInfoCache* _CurrentDrawInfo; // 0x60
		::System::Collections::Generic::List_1<::RPG::Client::BaseGachaGroupData*>* _GachaGroupDatasThisVersion; // 0x68
		::System::Collections::Generic::List_1<::System::Int32>* _WaitForPoolEndTimerID; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::GachaTimeData*>* _GachaTimeDatas; // 0x78
		::System::Action_1<::System::Boolean>* _GetGachaInfoRspCallback_k__BackingField; // 0x80
		::System::Collections::Generic::List_1<::System::UInt32>* _NewGotUpAvatarIDs; // 0x88
		::System::UInt32 _TotalGachaLimit_k__BackingField; // 0x90
		::System::Single _WaitingWheelAppearTime; // 0x94
		::System::UInt32 _TotalGachaTime_k__BackingField; // 0x98
		::System::Boolean _EnablePerformance_k__BackingField; // 0x9C
		::System::Boolean _ShowGachaAvatarToast; // 0x9D
		::System::Boolean _ShouldTryShowAvatarToast; // 0x9E
		::System::UInt32 _DefaultGachaID_k__BackingField; // 0xA0
		::System::UInt32 _PoolGachaLimit_k__BackingField; // 0xA4
		::System::UInt32 _GachaRandomNum; // 0xA8

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

		::System::Void _SyncDecideData(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_51AD4A996C8C1E92_1*>* decideItemDatas)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_51AD4A996C8C1E92_1*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE__SYNCDECIDEDATA_OFFSET))(this, decideItemDatas);
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
