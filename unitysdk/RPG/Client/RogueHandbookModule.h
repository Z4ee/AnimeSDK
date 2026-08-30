#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/Client/RogueHandbookModule_NPCProgressPair.h"
#include "unitysdk/System/Nullable_1.h"

class Class_1_21C7581DFE99F091_109;
class Class_1_3594ADCE41261E59;
class Class_1_D17272E82AE804C2_987;
namespace RPG::Client { class RogueHandbookAeonsData; }
namespace RPG::Client { class RogueHandbookBuffData; }
namespace RPG::Client { class RogueHandbookBuffTypeRewardData; }
namespace RPG::Client { class RogueHandbookMiracleData; }
namespace RPG::Client { class RogueHandbookRandomEventData; }
namespace RPG::GameCore { class RogueBuffRow; }
namespace RPG::GameCore { class RogueHandBookEventTypeRow; }
namespace RPG::GameCore { class RogueHandBookMiracleTypeRow; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEHANDBOOKMODULE_CLEARUNLOCKNUM_OFFSET UNITYSDK_OFFSET(0x1B67FFF0)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B67FB00)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_GETALLSORTEDBUFF_OFFSET UNITYSDK_OFFSET(0x1B680650)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_GETAVAILABLEEVENTTYPELIST_OFFSET UNITYSDK_OFFSET(0x1B682140)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_GETAVAILABLEMIRACLETYPELIST_OFFSET UNITYSDK_OFFSET(0x1B681610)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_GETBUFFDATA_OFFSET UNITYSDK_OFFSET(0x1B6839E0)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_GETDEFAULTSELECTAEONINDEX_OFFSET UNITYSDK_OFFSET(0x1B681DB0)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_GETMIRACLEDATABYMIRACLEID_OFFSET UNITYSDK_OFFSET(0x1B683BB0)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_GETMIRACLEDATA_OFFSET UNITYSDK_OFFSET(0x1B683A70)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_GETRANDOMEVENTDATABYNPCPROGRESS_OFFSET UNITYSDK_OFFSET(0x1B683C90)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_GETRANDOMEVENTDATA_OFFSET UNITYSDK_OFFSET(0x1B683B00)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_GETRANDOMUNLOCKAEONIMG_OFFSET UNITYSDK_OFFSET(0x1B681ED0)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_GETSORTEDBUFFBYTYPE_OFFSET UNITYSDK_OFFSET(0x1B6806A0)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_GETSORTEDMIRACLE_OFFSET UNITYSDK_OFFSET(0x1B680F70)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_GETSORTEDRANDOMEVENTDATA_OFFSET UNITYSDK_OFFSET(0x1B682750)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_GET_AEONSMAP_OFFSET UNITYSDK_OFFSET(0x1B685F10)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_GET_AVAILABLEAEONSNUM_OFFSET UNITYSDK_OFFSET(0x1B686010)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_GET_AVAILABLEBUFFNUM_OFFSET UNITYSDK_OFFSET(0x1B686030)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_GET_AVAILABLEEVENTNUM_OFFSET UNITYSDK_OFFSET(0x1B686070)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_GET_AVAILABLEMIRACLENUM_OFFSET UNITYSDK_OFFSET(0x1B686050)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_GET_BUFFSMAP_OFFSET UNITYSDK_OFFSET(0x1B685F30)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_GET_BUFFTYPEREWARDQUESTDATAS_OFFSET UNITYSDK_OFFSET(0x1B6831A0)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_GET_MIRACLESMAP_OFFSET UNITYSDK_OFFSET(0x1B685F50)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_GET_RANDOMEVENTSMAP_OFFSET UNITYSDK_OFFSET(0x1B685F70)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_GET_UNLOCKAEONSNUM_OFFSET UNITYSDK_OFFSET(0x1B685F90)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_GET_UNLOCKBUFFNUM_OFFSET UNITYSDK_OFFSET(0x1B685FB0)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_GET_UNLOCKEVENTNUM_OFFSET UNITYSDK_OFFSET(0x1B685FF0)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_GET_UNLOCKMIRACLENUM_OFFSET UNITYSDK_OFFSET(0x1B685FD0)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_HASAEONUNREAD_OFFSET UNITYSDK_OFFSET(0x1B682040)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_HASBUFFTYPEREWARDCANTAKE_OFFSET UNITYSDK_OFFSET(0x1B682EF0)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_HASHANDBOOKREWARDCANTAKE_OFFSET UNITYSDK_OFFSET(0x1B682E80)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_HASMIRACLEREWARDCANTAKE_OFFSET UNITYSDK_OFFSET(0x1B682FF0)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_HASRANDOMEVENTREWARDCANTAKE_OFFSET UNITYSDK_OFFSET(0x1B6830D0)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_INITALLSHOWDATAS_OFFSET UNITYSDK_OFFSET(0x1B67FA90)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x1B67FA00)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_ISBUFFTYPEREWARDCANTAKE_OFFSET UNITYSDK_OFFSET(0x1B683200)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_REFRESHSCHEDULESTATUSANDUNLOCKNUM_OFFSET UNITYSDK_OFFSET(0x1B683360)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_SETUNLOCKEDAEONREADED_OFFSET UNITYSDK_OFFSET(0x1B682BF0)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_SET_AEONSMAP_OFFSET UNITYSDK_OFFSET(0x1B685F20)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_SET_AVAILABLEAEONSNUM_OFFSET UNITYSDK_OFFSET(0x1B686020)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_SET_AVAILABLEBUFFNUM_OFFSET UNITYSDK_OFFSET(0x1B686040)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_SET_AVAILABLEEVENTNUM_OFFSET UNITYSDK_OFFSET(0x1B686080)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_SET_AVAILABLEMIRACLENUM_OFFSET UNITYSDK_OFFSET(0x1B686060)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_SET_BUFFSMAP_OFFSET UNITYSDK_OFFSET(0x1B685F40)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_SET_MIRACLESMAP_OFFSET UNITYSDK_OFFSET(0x1B685F60)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_SET_RANDOMEVENTSMAP_OFFSET UNITYSDK_OFFSET(0x1B685F80)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_SET_UNLOCKAEONSNUM_OFFSET UNITYSDK_OFFSET(0x1B685FA0)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_SET_UNLOCKBUFFNUM_OFFSET UNITYSDK_OFFSET(0x1B685FC0)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_SET_UNLOCKEVENTNUM_OFFSET UNITYSDK_OFFSET(0x1B686000)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_SET_UNLOCKMIRACLENUM_OFFSET UNITYSDK_OFFSET(0x1B685FE0)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x1B67FD30)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE__CALCEVENTSCHEDULESTATUSBYTYPELIST_OFFSET UNITYSDK_OFFSET(0x1B685E20)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE__CALCMIRACLESCHEDULESTATUSBYTYPELIST_OFFSET UNITYSDK_OFFSET(0x1B685D30)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE__CHECKSHOWROGUEHANDBOOKBUFF_OFFSET UNITYSDK_OFFSET(0x1B685AA0)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE__CREATEORUPDATEROGUEBUFFDATA_OFFSET UNITYSDK_OFFSET(0x1B685070)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE__CREATEORUPDATEROGUEMIRACLEDATA_OFFSET UNITYSDK_OFFSET(0x1B6853B0)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B67F6F0)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE__GETSCHEDULESTATUSANDCACHE_OFFSET UNITYSDK_OFFSET(0x1B681BF0)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE__INITALLROGUEAEONDATASBYEXCEL_OFFSET UNITYSDK_OFFSET(0x1B680040)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE__INITALLROGUEBUFFDATASBYEXCEL_OFFSET UNITYSDK_OFFSET(0x1B680230)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE__INITALLROGUEMIRACLEDATASBYEXCEL_OFFSET UNITYSDK_OFFSET(0x1B680460)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE__INITROGUEBUFFTYPEREWARD_OFFSET UNITYSDK_OFFSET(0x1B685B00)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE__ONCMDGETROGUEHANDBOOKDATASCRSP_OFFSET UNITYSDK_OFFSET(0x1B683D40)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE__ONCMDSYNCROGUEHANDBOOKDATAUPDATESCNOTIFY_OFFSET UNITYSDK_OFFSET(0x1B684E10)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE__ONCMDTAKEEVENTHANDBOOKREWARDSCRSP_OFFSET UNITYSDK_OFFSET(0x1B685860)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE__ONCMDTAKEROGUEMIRACLEHANDBOOKREWARDSCRSP_OFFSET UNITYSDK_OFFSET(0x1B684C10)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE__REFRESHBUFFSCHEDULESTATUS_OFFSET UNITYSDK_OFFSET(0x1B683410)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE__REFRESHEVENTSCHEDULESTATUS_OFFSET UNITYSDK_OFFSET(0x1B6837D0)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE__REFRESHMIRACLESCHEDULESTATUS_OFFSET UNITYSDK_OFFSET(0x1B6835F0)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE__REFRESHUNLOCKBUFFNUM_OFFSET UNITYSDK_OFFSET(0x1B685250)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE__REFRESHUNLOCKEVENTNUM_OFFSET UNITYSDK_OFFSET(0x1B685730)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE__REFRESHUNLOCKMIRACLENUM_OFFSET UNITYSDK_OFFSET(0x1B685550)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE__UPDATEROGUEAEONDATASBYSERVER_OFFSET UNITYSDK_OFFSET(0x1B683E60)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE__UPDATEROGUEBUFFDATASBYSERVER_OFFSET UNITYSDK_OFFSET(0x1B683FB0)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE__UPDATEROGUEMIRACLEDATASBYSERVER_OFFSET UNITYSDK_OFFSET(0x1B684090)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE__UPDATEROGUERANDOMEVENTDATABYSERVER_OFFSET UNITYSDK_OFFSET(0x1B684370)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueHandbookModule_TypeDefinitionIndex = 67372;

	class RogueHandbookModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::Client::RogueHandbookModule_NPCProgressPair, ::System::UInt32>* _NPCProgress2HandbookEventID; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueHandbookBuffData*>* _BuffsMap_k__BackingField; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueHandbookAeonsData*>* _AeonsMap_k__BackingField; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueHandbookRandomEventData*>* _RandomEventsMap_k__BackingField; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>* _ActivityModuleStatusCache; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueHandbookMiracleData*>* _MiraclesMap_k__BackingField; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::RogueHandbookBuffTypeRewardData*>* _BuffTypeRewardQuestDatas; // 0x40
		::System::UInt32 _UnlockAeonsNum_k__BackingField; // 0x48
		::System::UInt32 _UnlockBuffNum_k__BackingField; // 0x4C
		::System::UInt32 _AvailableBuffNum_k__BackingField; // 0x50
		::System::UInt32 _AvailableMiracleNum_k__BackingField; // 0x54
		::System::UInt32 _UnlockMiracleNum_k__BackingField; // 0x58
		::System::UInt32 _AvailableAeonsNum_k__BackingField; // 0x5C
		::System::UInt32 _AvailableEventNum_k__BackingField; // 0x60
		::System::UInt32 _UnlockEventNum_k__BackingField; // 0x64
		::System::Nullable_1<::System::UInt32> _ReadedAeonsNum; // 0x68
		::System::Boolean _IsInitedAllShowDatas; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void ClearUnlockNum()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_CLEARUNLOCKNUM_OFFSET))(this);
		}

		::System::Void InitAllShowDatas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_INITALLSHOWDATAS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueHandbookBuffData*>* GetAllSortedBuff()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueHandbookBuffData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_GETALLSORTEDBUFF_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueHandbookBuffData*>* GetSortedBuffByType(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueHandbookBuffData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_GETSORTEDBUFFBYTYPE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueHandbookMiracleData*>* GetSortedMiracle(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueHandbookMiracleData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_GETSORTEDMIRACLE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::RogueHandBookMiracleTypeRow*>* GetAvailableMiracleTypeList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::RogueHandBookMiracleTypeRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_GETAVAILABLEMIRACLETYPELIST_OFFSET))(this);
		}

		::System::UInt32 GetDefaultSelectAeonIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_GETDEFAULTSELECTAEONINDEX_OFFSET))(this);
		}

		::System::String* GetRandomUnlockAeonImg()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_GETRANDOMUNLOCKAEONIMG_OFFSET))(this);
		}

		::System::Boolean HasAeonUnread()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_HASAEONUNREAD_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::RogueHandBookEventTypeRow*>* GetAvailableEventTypeList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::RogueHandBookEventTypeRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_GETAVAILABLEEVENTTYPELIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueHandbookRandomEventData*>* GetSortedRandomEventData(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueHandbookRandomEventData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_GETSORTEDRANDOMEVENTDATA_OFFSET))(this, a1);
		}

		::System::Void SetUnlockedAeonReaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_SETUNLOCKEDAEONREADED_OFFSET))(this);
		}

		::System::Boolean HasHandbookRewardCanTake()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_HASHANDBOOKREWARDCANTAKE_OFFSET))(this);
		}

		::System::Boolean HasBuffTypeRewardCanTake()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_HASBUFFTYPEREWARDCANTAKE_OFFSET))(this);
		}

		::System::Boolean IsBuffTypeRewardCanTake(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_ISBUFFTYPEREWARDCANTAKE_OFFSET))(this, a1);
		}

		::System::Boolean HasMiracleRewardCanTake()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_HASMIRACLEREWARDCANTAKE_OFFSET))(this);
		}

		::System::Boolean HasRandomEventRewardCanTake()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_HASRANDOMEVENTREWARDCANTAKE_OFFSET))(this);
		}

		::System::Void RefreshScheduleStatusAndUnlockNum()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_REFRESHSCHEDULESTATUSANDUNLOCKNUM_OFFSET))(this);
		}

		::RPG::Client::RogueHandbookBuffData* GetBuffData(::System::UInt32 a1)
		{
			return ((::RPG::Client::RogueHandbookBuffData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_GETBUFFDATA_OFFSET))(this, a1);
		}

		::RPG::Client::RogueHandbookMiracleData* GetMiracleData(::System::UInt32 a1)
		{
			return ((::RPG::Client::RogueHandbookMiracleData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_GETMIRACLEDATA_OFFSET))(this, a1);
		}

		::RPG::Client::RogueHandbookRandomEventData* GetRandomEventData(::System::UInt32 a1)
		{
			return ((::RPG::Client::RogueHandbookRandomEventData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_GETRANDOMEVENTDATA_OFFSET))(this, a1);
		}

		::RPG::Client::RogueHandbookMiracleData* GetMiracleDataByMiracleID(::System::UInt32 a1)
		{
			return ((::RPG::Client::RogueHandbookMiracleData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_GETMIRACLEDATABYMIRACLEID_OFFSET))(this, a1);
		}

		::RPG::Client::RogueHandbookRandomEventData* GetRandomEventDataByNPCProgress(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::RogueHandbookRandomEventData*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_GETRANDOMEVENTDATABYNPCPROGRESS_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdGetRogueHandbookDataScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE__ONCMDGETROGUEHANDBOOKDATASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdTakeRogueMiracleHandbookRewardScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE__ONCMDTAKEROGUEMIRACLEHANDBOOKREWARDSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdSyncRogueHandbookDataUpdateScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE__ONCMDSYNCROGUEHANDBOOKDATAUPDATESCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdTakeEventHandbookRewardScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE__ONCMDTAKEEVENTHANDBOOKREWARDSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _UpdateRogueAeonDatasByServer(::Class_1_3594ADCE41261E59* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3594ADCE41261E59*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE__UPDATEROGUEAEONDATASBYSERVER_OFFSET))(this, a1);
		}

		::System::Void _UpdateRogueBuffDatasByServer(::Class_1_3594ADCE41261E59* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3594ADCE41261E59*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE__UPDATEROGUEBUFFDATASBYSERVER_OFFSET))(this, a1);
		}

		::System::Void _UpdateRogueMiracleDatasByServer(::Class_1_3594ADCE41261E59* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3594ADCE41261E59*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE__UPDATEROGUEMIRACLEDATASBYSERVER_OFFSET))(this, a1);
		}

		::System::Void _UpdateRogueRandomEventDataByServer(::Class_1_3594ADCE41261E59* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3594ADCE41261E59*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE__UPDATEROGUERANDOMEVENTDATABYSERVER_OFFSET))(this, a1);
		}

		::System::Void _InitAllRogueAeonDatasByExcel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE__INITALLROGUEAEONDATASBYEXCEL_OFFSET))(this);
		}

		::System::Void _InitAllRogueBuffDatasByExcel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE__INITALLROGUEBUFFDATASBYEXCEL_OFFSET))(this);
		}

		::System::Void _InitAllRogueMiracleDatasByExcel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE__INITALLROGUEMIRACLEDATASBYEXCEL_OFFSET))(this);
		}

		::RPG::Client::RogueHandbookBuffData* _CreateOrUpdateRogueBuffData(::Class_1_D17272E82AE804C2_987* a1)
		{
			return ((::RPG::Client::RogueHandbookBuffData*(*)(::PVOID, ::Class_1_D17272E82AE804C2_987*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE__CREATEORUPDATEROGUEBUFFDATA_OFFSET))(this, a1);
		}

		::RPG::Client::RogueHandbookMiracleData* _CreateOrUpdateRogueMiracleData(::Class_1_21C7581DFE99F091_109* a1)
		{
			return ((::RPG::Client::RogueHandbookMiracleData*(*)(::PVOID, ::Class_1_21C7581DFE99F091_109*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE__CREATEORUPDATEROGUEMIRACLEDATA_OFFSET))(this, a1);
		}

		::System::Boolean _CheckShowRogueHandBookBuff(::RPG::GameCore::RogueBuffRow* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RogueBuffRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE__CHECKSHOWROGUEHANDBOOKBUFF_OFFSET))(this, a1);
		}

		::System::Void _InitRogueBuffTypeReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE__INITROGUEBUFFTYPEREWARD_OFFSET))(this);
		}

		::System::Boolean _GetScheduleStatusAndCache(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE__GETSCHEDULESTATUSANDCACHE_OFFSET))(this, a1);
		}

		::System::Void _RefreshBuffScheduleStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE__REFRESHBUFFSCHEDULESTATUS_OFFSET))(this);
		}

		::System::Void _RefreshMiracleScheduleStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE__REFRESHMIRACLESCHEDULESTATUS_OFFSET))(this);
		}

		::System::Void _RefreshEventScheduleStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE__REFRESHEVENTSCHEDULESTATUS_OFFSET))(this);
		}

		::System::Boolean _CalcMiracleScheduleStatusByTypeList(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE__CALCMIRACLESCHEDULESTATUSBYTYPELIST_OFFSET))(this, a1);
		}

		::System::Boolean _CalcEventScheduleStatusByTypeList(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE__CALCEVENTSCHEDULESTATUSBYTYPELIST_OFFSET))(this, a1);
		}

		::System::Void _RefreshUnlockBuffNum()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE__REFRESHUNLOCKBUFFNUM_OFFSET))(this);
		}

		::System::Void _RefreshUnlockMiracleNum()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE__REFRESHUNLOCKMIRACLENUM_OFFSET))(this);
		}

		::System::Void _RefreshUnlockEventNum()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE__REFRESHUNLOCKEVENTNUM_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueHandbookAeonsData*>* get_AeonsMap()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueHandbookAeonsData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_GET_AEONSMAP_OFFSET))(this);
		}

		::System::Void set_AeonsMap(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueHandbookAeonsData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueHandbookAeonsData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_SET_AEONSMAP_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueHandbookBuffData*>* get_BuffsMap()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueHandbookBuffData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_GET_BUFFSMAP_OFFSET))(this);
		}

		::System::Void set_BuffsMap(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueHandbookBuffData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueHandbookBuffData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_SET_BUFFSMAP_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueHandbookMiracleData*>* get_MiraclesMap()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueHandbookMiracleData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_GET_MIRACLESMAP_OFFSET))(this);
		}

		::System::Void set_MiraclesMap(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueHandbookMiracleData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueHandbookMiracleData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_SET_MIRACLESMAP_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueHandbookRandomEventData*>* get_RandomEventsMap()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueHandbookRandomEventData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_GET_RANDOMEVENTSMAP_OFFSET))(this);
		}

		::System::Void set_RandomEventsMap(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueHandbookRandomEventData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueHandbookRandomEventData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_SET_RANDOMEVENTSMAP_OFFSET))(this, a1);
		}

		::System::UInt32 get_UnlockAeonsNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_GET_UNLOCKAEONSNUM_OFFSET))(this);
		}

		::System::Void set_UnlockAeonsNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_SET_UNLOCKAEONSNUM_OFFSET))(this, a1);
		}

		::System::UInt32 get_UnlockBuffNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_GET_UNLOCKBUFFNUM_OFFSET))(this);
		}

		::System::Void set_UnlockBuffNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_SET_UNLOCKBUFFNUM_OFFSET))(this, a1);
		}

		::System::UInt32 get_UnlockMiracleNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_GET_UNLOCKMIRACLENUM_OFFSET))(this);
		}

		::System::Void set_UnlockMiracleNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_SET_UNLOCKMIRACLENUM_OFFSET))(this, a1);
		}

		::System::UInt32 get_UnlockEventNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_GET_UNLOCKEVENTNUM_OFFSET))(this);
		}

		::System::Void set_UnlockEventNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_SET_UNLOCKEVENTNUM_OFFSET))(this, a1);
		}

		::System::UInt32 get_AvailableAeonsNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_GET_AVAILABLEAEONSNUM_OFFSET))(this);
		}

		::System::Void set_AvailableAeonsNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_SET_AVAILABLEAEONSNUM_OFFSET))(this, a1);
		}

		::System::UInt32 get_AvailableBuffNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_GET_AVAILABLEBUFFNUM_OFFSET))(this);
		}

		::System::Void set_AvailableBuffNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_SET_AVAILABLEBUFFNUM_OFFSET))(this, a1);
		}

		::System::UInt32 get_AvailableMiracleNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_GET_AVAILABLEMIRACLENUM_OFFSET))(this);
		}

		::System::Void set_AvailableMiracleNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_SET_AVAILABLEMIRACLENUM_OFFSET))(this, a1);
		}

		::System::UInt32 get_AvailableEventNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_GET_AVAILABLEEVENTNUM_OFFSET))(this);
		}

		::System::Void set_AvailableEventNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_SET_AVAILABLEEVENTNUM_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueHandbookBuffTypeRewardData*>* get_BuffTypeRewardQuestDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueHandbookBuffTypeRewardData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_GET_BUFFTYPEREWARDQUESTDATAS_OFFSET))(this);
		}
	};
}
