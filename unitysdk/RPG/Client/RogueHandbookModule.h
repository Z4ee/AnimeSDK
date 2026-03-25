#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/Client/RogueHandbookModule_NPCProgressPair.h"
#include "unitysdk/System/Nullable_1.h"

class Class_1_4CF8088A158DCE25_75;
class Class_1_6A70794BCF2E704B;
class Class_1_FA4F4A67B1C04320_777;
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

#define RPG_CLIENT_ROGUEHANDBOOKMODULE_CLEARUNLOCKNUM_OFFSET UNITYSDK_OFFSET(0xA30B130)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA30AD70)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_GETALLSORTEDBUFF_OFFSET UNITYSDK_OFFSET(0xA30B7C0)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_GETAVAILABLEEVENTTYPELIST_OFFSET UNITYSDK_OFFSET(0xA30CD60)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_GETAVAILABLEMIRACLETYPELIST_OFFSET UNITYSDK_OFFSET(0xA30C370)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_GETBUFFDATA_OFFSET UNITYSDK_OFFSET(0xA30E1B0)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_GETDEFAULTSELECTAEONINDEX_OFFSET UNITYSDK_OFFSET(0xA30C9C0)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_GETMIRACLEDATABYMIRACLEID_OFFSET UNITYSDK_OFFSET(0xA30E410)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_GETMIRACLEDATA_OFFSET UNITYSDK_OFFSET(0xA30E270)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_GETRANDOMEVENTDATABYNPCPROGRESS_OFFSET UNITYSDK_OFFSET(0xA30E540)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_GETRANDOMEVENTDATA_OFFSET UNITYSDK_OFFSET(0xA30E330)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_GETRANDOMUNLOCKAEONIMG_OFFSET UNITYSDK_OFFSET(0xA30CAE0)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_GETSORTEDBUFFBYTYPE_OFFSET UNITYSDK_OFFSET(0xA30B810)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_GETSORTEDMIRACLE_OFFSET UNITYSDK_OFFSET(0xA30BEA0)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_GETSORTEDRANDOMEVENTDATA_OFFSET UNITYSDK_OFFSET(0xA30D240)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_GET_AEONSMAP_OFFSET UNITYSDK_OFFSET(0xA310470)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_GET_AVAILABLEAEONSNUM_OFFSET UNITYSDK_OFFSET(0xA310570)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_GET_AVAILABLEBUFFNUM_OFFSET UNITYSDK_OFFSET(0xA310590)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_GET_AVAILABLEEVENTNUM_OFFSET UNITYSDK_OFFSET(0xA3105D0)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_GET_AVAILABLEMIRACLENUM_OFFSET UNITYSDK_OFFSET(0xA3105B0)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_GET_BUFFSMAP_OFFSET UNITYSDK_OFFSET(0xA310490)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_GET_BUFFTYPEREWARDQUESTDATAS_OFFSET UNITYSDK_OFFSET(0xA3105F0)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_GET_MIRACLESMAP_OFFSET UNITYSDK_OFFSET(0xA3104B0)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_GET_RANDOMEVENTSMAP_OFFSET UNITYSDK_OFFSET(0xA3104D0)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_GET_UNLOCKAEONSNUM_OFFSET UNITYSDK_OFFSET(0xA3104F0)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_GET_UNLOCKBUFFNUM_OFFSET UNITYSDK_OFFSET(0xA310510)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_GET_UNLOCKEVENTNUM_OFFSET UNITYSDK_OFFSET(0xA310550)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_GET_UNLOCKMIRACLENUM_OFFSET UNITYSDK_OFFSET(0xA310530)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_HASAEONUNREAD_OFFSET UNITYSDK_OFFSET(0xA30CC60)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_HASBUFFTYPEREWARDCANTAKE_OFFSET UNITYSDK_OFFSET(0xA30D880)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_HASHANDBOOKREWARDCANTAKE_OFFSET UNITYSDK_OFFSET(0xA30D810)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_HASMIRACLEREWARDCANTAKE_OFFSET UNITYSDK_OFFSET(0xA30D970)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_HASRANDOMEVENTREWARDCANTAKE_OFFSET UNITYSDK_OFFSET(0xA30DA50)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_INITALLSHOWDATAS_OFFSET UNITYSDK_OFFSET(0xA30AD00)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xA30AC30)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_ISBUFFTYPEREWARDCANTAKE_OFFSET UNITYSDK_OFFSET(0xA30DB20)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_REFRESHSCHEDULESTATUSANDUNLOCKNUM_OFFSET UNITYSDK_OFFSET(0xA30DC60)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_SETUNLOCKEDAEONREADED_OFFSET UNITYSDK_OFFSET(0xA30D590)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_SET_AEONSMAP_OFFSET UNITYSDK_OFFSET(0xA310480)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_SET_AVAILABLEAEONSNUM_OFFSET UNITYSDK_OFFSET(0xA310580)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_SET_AVAILABLEBUFFNUM_OFFSET UNITYSDK_OFFSET(0xA3105A0)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_SET_AVAILABLEEVENTNUM_OFFSET UNITYSDK_OFFSET(0xA3105E0)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_SET_AVAILABLEMIRACLENUM_OFFSET UNITYSDK_OFFSET(0xA3105C0)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_SET_BUFFSMAP_OFFSET UNITYSDK_OFFSET(0xA3104A0)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_SET_MIRACLESMAP_OFFSET UNITYSDK_OFFSET(0xA3104C0)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_SET_RANDOMEVENTSMAP_OFFSET UNITYSDK_OFFSET(0xA3104E0)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_SET_UNLOCKAEONSNUM_OFFSET UNITYSDK_OFFSET(0xA310500)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_SET_UNLOCKBUFFNUM_OFFSET UNITYSDK_OFFSET(0xA310520)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_SET_UNLOCKEVENTNUM_OFFSET UNITYSDK_OFFSET(0xA310560)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_SET_UNLOCKMIRACLENUM_OFFSET UNITYSDK_OFFSET(0xA310540)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xA30B010)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE__CALCEVENTSCHEDULESTATUSBYTYPELIST_OFFSET UNITYSDK_OFFSET(0xA310370)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE__CALCMIRACLESCHEDULESTATUSBYTYPELIST_OFFSET UNITYSDK_OFFSET(0xA310270)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE__CHECKSHOWROGUEHANDBOOKBUFF_OFFSET UNITYSDK_OFFSET(0xA3100A0)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE__CREATEORUPDATEROGUEBUFFDATA_OFFSET UNITYSDK_OFFSET(0xA30F6D0)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE__CREATEORUPDATEROGUEMIRACLEDATA_OFFSET UNITYSDK_OFFSET(0xA30FA50)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xA30A980)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE__GETSCHEDULESTATUSANDCACHE_OFFSET UNITYSDK_OFFSET(0xA30C840)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE__INITALLROGUEAEONDATASBYEXCEL_OFFSET UNITYSDK_OFFSET(0xA30B180)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE__INITALLROGUEBUFFDATASBYEXCEL_OFFSET UNITYSDK_OFFSET(0xA30B3F0)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE__INITALLROGUEMIRACLEDATASBYEXCEL_OFFSET UNITYSDK_OFFSET(0xA30B600)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE__INITROGUEBUFFTYPEREWARD_OFFSET UNITYSDK_OFFSET(0xA310100)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE__ONCMDGETROGUEHANDBOOKDATASCRSP_OFFSET UNITYSDK_OFFSET(0xA30E600)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE__ONCMDSYNCROGUEHANDBOOKDATAUPDATESCNOTIFY_OFFSET UNITYSDK_OFFSET(0xA30F400)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE__ONCMDTAKEEVENTHANDBOOKREWARDSCRSP_OFFSET UNITYSDK_OFFSET(0xA30FEA0)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE__ONCMDTAKEROGUEMIRACLEHANDBOOKREWARDSCRSP_OFFSET UNITYSDK_OFFSET(0xA30F240)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE__REFRESHBUFFSCHEDULESTATUS_OFFSET UNITYSDK_OFFSET(0xA30DD20)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE__REFRESHEVENTSCHEDULESTATUS_OFFSET UNITYSDK_OFFSET(0xA30E020)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE__REFRESHMIRACLESCHEDULESTATUS_OFFSET UNITYSDK_OFFSET(0xA30DEA0)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE__REFRESHUNLOCKBUFFNUM_OFFSET UNITYSDK_OFFSET(0xA30F8F0)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE__REFRESHUNLOCKEVENTNUM_OFFSET UNITYSDK_OFFSET(0xA30FD70)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE__REFRESHUNLOCKMIRACLENUM_OFFSET UNITYSDK_OFFSET(0xA30FC40)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE__UPDATEROGUEAEONDATASBYSERVER_OFFSET UNITYSDK_OFFSET(0xA30E720)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE__UPDATEROGUEBUFFDATASBYSERVER_OFFSET UNITYSDK_OFFSET(0xA30E860)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE__UPDATEROGUEMIRACLEDATASBYSERVER_OFFSET UNITYSDK_OFFSET(0xA30E8F0)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE__UPDATEROGUERANDOMEVENTDATABYSERVER_OFFSET UNITYSDK_OFFSET(0xA30EB30)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA3106E0)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xA310650)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xA3106F0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueHandbookModule_TypeDefinitionIndex = 54888;

	class RogueHandbookModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueHandbookRandomEventData*>* _RandomEventsMap_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::Client::RogueHandbookModule_NPCProgressPair, ::System::UInt32>* _NPCProgress2HandbookEventID; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>* _ActivityModuleStatusCache; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueHandbookBuffData*>* _BuffsMap_k__BackingField; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueHandbookAeonsData*>* _AeonsMap_k__BackingField; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::RogueHandbookBuffTypeRewardData*>* _BuffTypeRewardQuestDatas; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueHandbookMiracleData*>* _MiraclesMap_k__BackingField; // 0x40
		::System::UInt32 _AvailableAeonsNum_k__BackingField; // 0x48
		::System::UInt32 _AvailableBuffNum_k__BackingField; // 0x4C
		::System::UInt32 _AvailableMiracleNum_k__BackingField; // 0x50
		::System::UInt32 _UnlockEventNum_k__BackingField; // 0x54
		::System::UInt32 _UnlockMiracleNum_k__BackingField; // 0x58
		::System::UInt32 _UnlockAeonsNum_k__BackingField; // 0x5C
		::System::UInt32 _AvailableEventNum_k__BackingField; // 0x60
		::System::Nullable_1<::System::UInt32> _ReadedAeonsNum; // 0x64
		::System::Boolean _IsInitedAllShowDatas; // 0x6C
		::System::UInt32 _UnlockBuffNum_k__BackingField; // 0x70

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

		::System::Collections::Generic::List_1<::RPG::Client::RogueHandbookBuffData*>* GetSortedBuffByType(::System::UInt32 rogueBuffType)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueHandbookBuffData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_GETSORTEDBUFFBYTYPE_OFFSET))(this, rogueBuffType);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueHandbookMiracleData*>* GetSortedMiracle(::System::UInt32 rogueHandbookMiracleType)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueHandbookMiracleData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_GETSORTEDMIRACLE_OFFSET))(this, rogueHandbookMiracleType);
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

		::System::Collections::Generic::List_1<::RPG::Client::RogueHandbookRandomEventData*>* GetSortedRandomEventData(::System::UInt32 rogueHandbookEventType)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueHandbookRandomEventData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_GETSORTEDRANDOMEVENTDATA_OFFSET))(this, rogueHandbookEventType);
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

		::System::Boolean IsBuffTypeRewardCanTake(::System::UInt32 buffType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_ISBUFFTYPEREWARDCANTAKE_OFFSET))(this, buffType);
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

		::RPG::Client::RogueHandbookBuffData* GetBuffData(::System::UInt32 buffID)
		{
			return ((::RPG::Client::RogueHandbookBuffData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_GETBUFFDATA_OFFSET))(this, buffID);
		}

		::RPG::Client::RogueHandbookMiracleData* GetMiracleData(::System::UInt32 handbookMiracleID)
		{
			return ((::RPG::Client::RogueHandbookMiracleData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_GETMIRACLEDATA_OFFSET))(this, handbookMiracleID);
		}

		::RPG::Client::RogueHandbookRandomEventData* GetRandomEventData(::System::UInt32 handbookEventID)
		{
			return ((::RPG::Client::RogueHandbookRandomEventData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_GETRANDOMEVENTDATA_OFFSET))(this, handbookEventID);
		}

		::RPG::Client::RogueHandbookMiracleData* GetMiracleDataByMiracleID(::System::UInt32 miracleID)
		{
			return ((::RPG::Client::RogueHandbookMiracleData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_GETMIRACLEDATABYMIRACLEID_OFFSET))(this, miracleID);
		}

		::RPG::Client::RogueHandbookRandomEventData* GetRandomEventDataByNPCProgress(::System::UInt32 npcID, ::System::UInt32 progress)
		{
			return ((::RPG::Client::RogueHandbookRandomEventData*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_GETRANDOMEVENTDATABYNPCPROGRESS_OFFSET))(this, npcID, progress);
		}

		::System::Void _OnCmdGetRogueHandbookDataScRsp(::System::UInt16 cmdid, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE__ONCMDGETROGUEHANDBOOKDATASCRSP_OFFSET))(this, cmdid, rspObject);
		}

		::System::Void _OnCmdTakeRogueMiracleHandbookRewardScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE__ONCMDTAKEROGUEMIRACLEHANDBOOKREWARDSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdSyncRogueHandbookDataUpdateScNotify(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE__ONCMDSYNCROGUEHANDBOOKDATAUPDATESCNOTIFY_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnCmdTakeEventHandbookRewardScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE__ONCMDTAKEEVENTHANDBOOKREWARDSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _UpdateRogueAeonDatasByServer(::Class_1_6A70794BCF2E704B* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6A70794BCF2E704B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE__UPDATEROGUEAEONDATASBYSERVER_OFFSET))(this, info);
		}

		::System::Void _UpdateRogueBuffDatasByServer(::Class_1_6A70794BCF2E704B* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6A70794BCF2E704B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE__UPDATEROGUEBUFFDATASBYSERVER_OFFSET))(this, info);
		}

		::System::Void _UpdateRogueMiracleDatasByServer(::Class_1_6A70794BCF2E704B* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6A70794BCF2E704B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE__UPDATEROGUEMIRACLEDATASBYSERVER_OFFSET))(this, info);
		}

		::System::Void _UpdateRogueRandomEventDataByServer(::Class_1_6A70794BCF2E704B* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6A70794BCF2E704B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE__UPDATEROGUERANDOMEVENTDATABYSERVER_OFFSET))(this, info);
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

		::RPG::Client::RogueHandbookBuffData* _CreateOrUpdateRogueBuffData(::Class_1_FA4F4A67B1C04320_777* buffProto)
		{
			return ((::RPG::Client::RogueHandbookBuffData*(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_777*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE__CREATEORUPDATEROGUEBUFFDATA_OFFSET))(this, buffProto);
		}

		::RPG::Client::RogueHandbookMiracleData* _CreateOrUpdateRogueMiracleData(::Class_1_4CF8088A158DCE25_75* miracleProto)
		{
			return ((::RPG::Client::RogueHandbookMiracleData*(*)(::PVOID, ::Class_1_4CF8088A158DCE25_75*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE__CREATEORUPDATEROGUEMIRACLEDATA_OFFSET))(this, miracleProto);
		}

		::System::Boolean _CheckShowRogueHandBookBuff(::RPG::GameCore::RogueBuffRow* rogueBuffRow)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RogueBuffRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE__CHECKSHOWROGUEHANDBOOKBUFF_OFFSET))(this, rogueBuffRow);
		}

		::System::Void _InitRogueBuffTypeReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE__INITROGUEBUFFTYPEREWARD_OFFSET))(this);
		}

		::System::Boolean _GetScheduleStatusAndCache(::System::UInt32 activityModuleID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE__GETSCHEDULESTATUSANDCACHE_OFFSET))(this, activityModuleID);
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

		::System::Boolean _CalcMiracleScheduleStatusByTypeList(::Il2CppArray<::System::UInt32>* typeList)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE__CALCMIRACLESCHEDULESTATUSBYTYPELIST_OFFSET))(this, typeList);
		}

		::System::Boolean _CalcEventScheduleStatusByTypeList(::Il2CppArray<::System::UInt32>* typeList)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE__CALCEVENTSCHEDULESTATUSBYTYPELIST_OFFSET))(this, typeList);
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

		::System::Void set_AeonsMap(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueHandbookAeonsData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueHandbookAeonsData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_SET_AEONSMAP_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueHandbookBuffData*>* get_BuffsMap()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueHandbookBuffData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_GET_BUFFSMAP_OFFSET))(this);
		}

		::System::Void set_BuffsMap(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueHandbookBuffData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueHandbookBuffData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_SET_BUFFSMAP_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueHandbookMiracleData*>* get_MiraclesMap()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueHandbookMiracleData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_GET_MIRACLESMAP_OFFSET))(this);
		}

		::System::Void set_MiraclesMap(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueHandbookMiracleData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueHandbookMiracleData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_SET_MIRACLESMAP_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueHandbookRandomEventData*>* get_RandomEventsMap()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueHandbookRandomEventData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_GET_RANDOMEVENTSMAP_OFFSET))(this);
		}

		::System::Void set_RandomEventsMap(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueHandbookRandomEventData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueHandbookRandomEventData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_SET_RANDOMEVENTSMAP_OFFSET))(this, value);
		}

		::System::UInt32 get_UnlockAeonsNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_GET_UNLOCKAEONSNUM_OFFSET))(this);
		}

		::System::Void set_UnlockAeonsNum(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_SET_UNLOCKAEONSNUM_OFFSET))(this, value);
		}

		::System::UInt32 get_UnlockBuffNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_GET_UNLOCKBUFFNUM_OFFSET))(this);
		}

		::System::Void set_UnlockBuffNum(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_SET_UNLOCKBUFFNUM_OFFSET))(this, value);
		}

		::System::UInt32 get_UnlockMiracleNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_GET_UNLOCKMIRACLENUM_OFFSET))(this);
		}

		::System::Void set_UnlockMiracleNum(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_SET_UNLOCKMIRACLENUM_OFFSET))(this, value);
		}

		::System::UInt32 get_UnlockEventNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_GET_UNLOCKEVENTNUM_OFFSET))(this);
		}

		::System::Void set_UnlockEventNum(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_SET_UNLOCKEVENTNUM_OFFSET))(this, value);
		}

		::System::UInt32 get_AvailableAeonsNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_GET_AVAILABLEAEONSNUM_OFFSET))(this);
		}

		::System::Void set_AvailableAeonsNum(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_SET_AVAILABLEAEONSNUM_OFFSET))(this, value);
		}

		::System::UInt32 get_AvailableBuffNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_GET_AVAILABLEBUFFNUM_OFFSET))(this);
		}

		::System::Void set_AvailableBuffNum(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_SET_AVAILABLEBUFFNUM_OFFSET))(this, value);
		}

		::System::UInt32 get_AvailableMiracleNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_GET_AVAILABLEMIRACLENUM_OFFSET))(this);
		}

		::System::Void set_AvailableMiracleNum(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_SET_AVAILABLEMIRACLENUM_OFFSET))(this, value);
		}

		::System::UInt32 get_AvailableEventNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_GET_AVAILABLEEVENTNUM_OFFSET))(this);
		}

		::System::Void set_AvailableEventNum(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_SET_AVAILABLEEVENTNUM_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueHandbookBuffTypeRewardData*>* get_BuffTypeRewardQuestDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueHandbookBuffTypeRewardData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_GET_BUFFTYPEREWARDQUESTDATAS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}
	};
}
