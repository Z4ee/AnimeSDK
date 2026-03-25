#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

namespace RPG::Client { class BrochureDiaryData; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TRAVELBROCHUREMODULE_DATAINITED_OFFSET UNITYSDK_OFFSET(0xA61FEA0)
#define RPG_CLIENT_TRAVELBROCHUREMODULE_GETALLDIARYDATAS_OFFSET UNITYSDK_OFFSET(0xA6205B0)
#define RPG_CLIENT_TRAVELBROCHUREMODULE_GETDIARYDATA_OFFSET UNITYSDK_OFFSET(0xA620790)
#define RPG_CLIENT_TRAVELBROCHUREMODULE_GETDIRECTORYDIARYDATAS_OFFSET UNITYSDK_OFFSET(0xA620070)
#define RPG_CLIENT_TRAVELBROCHUREMODULE_GETPASTERCOUNT_OFFSET UNITYSDK_OFFSET(0xA6207E0)
#define RPG_CLIENT_TRAVELBROCHUREMODULE_GETUNLOCKEDDIARYDATAS_OFFSET UNITYSDK_OFFSET(0xA6203C0)
#define RPG_CLIENT_TRAVELBROCHUREMODULE_GET_HASSEENBROCHURE_OFFSET UNITYSDK_OFFSET(0xA622620)
#define RPG_CLIENT_TRAVELBROCHUREMODULE_GET_NEWIMAGEPASTERDIARYIDS_OFFSET UNITYSDK_OFFSET(0xA61FC60)
#define RPG_CLIENT_TRAVELBROCHUREMODULE_GET_NEWPASTERDIARYIDS_OFFSET UNITYSDK_OFFSET(0xA61FC20)
#define RPG_CLIENT_TRAVELBROCHUREMODULE_GET_NEWPASTERIDS_OFFSET UNITYSDK_OFFSET(0xA61FC00)
#define RPG_CLIENT_TRAVELBROCHUREMODULE_GET_NEWTEXTPASTERDIARYIDS_OFFSET UNITYSDK_OFFSET(0xA61FC40)
#define RPG_CLIENT_TRAVELBROCHUREMODULE_GET_SEENBROCHUREINDEX_OFFSET UNITYSDK_OFFSET(0xA6225D0)
#define RPG_CLIENT_TRAVELBROCHUREMODULE_ISENTRANCESHOW_OFFSET UNITYSDK_OFFSET(0xA61FEE0)
#define RPG_CLIENT_TRAVELBROCHUREMODULE_RECORDBROCHURESEEN_OFFSET UNITYSDK_OFFSET(0xA620870)
#define RPG_CLIENT_TRAVELBROCHUREMODULE_SAFEINITREDDOT_OFFSET UNITYSDK_OFFSET(0xA61F0B0)
#define RPG_CLIENT_TRAVELBROCHUREMODULE_SENDPACKETSAFTERLOGINFINISHED_OFFSET UNITYSDK_OFFSET(0xA61FDC0)
#define RPG_CLIENT_TRAVELBROCHUREMODULE_SET_NEWIMAGEPASTERDIARYIDS_OFFSET UNITYSDK_OFFSET(0xA61FC70)
#define RPG_CLIENT_TRAVELBROCHUREMODULE_SET_NEWPASTERDIARYIDS_OFFSET UNITYSDK_OFFSET(0xA61FC30)
#define RPG_CLIENT_TRAVELBROCHUREMODULE_SET_NEWPASTERIDS_OFFSET UNITYSDK_OFFSET(0xA61FC10)
#define RPG_CLIENT_TRAVELBROCHUREMODULE_SET_NEWTEXTPASTERDIARYIDS_OFFSET UNITYSDK_OFFSET(0xA61FC50)
#define RPG_CLIENT_TRAVELBROCHUREMODULE_UNINIT_OFFSET UNITYSDK_OFFSET(0xA61FC80)
#define RPG_CLIENT_TRAVELBROCHUREMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xA622580)
#define RPG_CLIENT_TRAVELBROCHUREMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xA620940)
#define RPG_CLIENT_TRAVELBROCHUREMODULE__ADDREDDOTNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xA61F970)
#define RPG_CLIENT_TRAVELBROCHUREMODULE__CCTOR_OFFSET UNITYSDK_OFFSET(0xA622920)
#define RPG_CLIENT_TRAVELBROCHUREMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xA6226A0)
#define RPG_CLIENT_TRAVELBROCHUREMODULE__ONPLAYERSYNCSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xA622100)
#define RPG_CLIENT_TRAVELBROCHUREMODULE__ONREDDOTTRAVELBROCHUREDATASYNCED_OFFSET UNITYSDK_OFFSET(0xA61FB10)
#define RPG_CLIENT_TRAVELBROCHUREMODULE__ONREDDOTTRAVELBROCHUREPASTERGOT_OFFSET UNITYSDK_OFFSET(0xA61FB60)
#define RPG_CLIENT_TRAVELBROCHUREMODULE__ONREDDOTTRAVELBROCHUREPASTERSEEN_OFFSET UNITYSDK_OFFSET(0xA61FBB0)
#define RPG_CLIENT_TRAVELBROCHUREMODULE__ONTRAVELBROCHUREAPPLYPASTERLISTSCRSP_OFFSET UNITYSDK_OFFSET(0xA621B10)
#define RPG_CLIENT_TRAVELBROCHUREMODULE__ONTRAVELBROCHUREGETDATASCRSP_OFFSET UNITYSDK_OFFSET(0xA620B60)
#define RPG_CLIENT_TRAVELBROCHUREMODULE__ONTRAVELBROCHUREGETPASTERSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xA6220B0)
#define RPG_CLIENT_TRAVELBROCHUREMODULE__ONTRAVELBROCHUREPAGERESETSCRSP_OFFSET UNITYSDK_OFFSET(0xA621CE0)
#define RPG_CLIENT_TRAVELBROCHUREMODULE__ONTRAVELBROCHUREPAGEUNLOCKSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xA621FD0)
#define RPG_CLIENT_TRAVELBROCHUREMODULE__ONTRAVELBROCHUREREMOVEPASTERSCRSP_OFFSET UNITYSDK_OFFSET(0xA621C40)
#define RPG_CLIENT_TRAVELBROCHUREMODULE__ONTRAVELBROCHURESELECTMESSAGESCRSP_OFFSET UNITYSDK_OFFSET(0xA621E10)
#define RPG_CLIENT_TRAVELBROCHUREMODULE__ONTRAVELBROCHUREUPDATEPASTERPOSSCRSP_OFFSET UNITYSDK_OFFSET(0xA621C90)
#define RPG_CLIENT_TRAVELBROCHUREMODULE__REDDOTUNINIT_OFFSET UNITYSDK_OFFSET(0xA61EFB0)
#define RPG_CLIENT_TRAVELBROCHUREMODULE__SAFECREATEDIARYDATA_OFFSET UNITYSDK_OFFSET(0xA620260)
#define RPG_CLIENT_TRAVELBROCHUREMODULE__UPDATEPASTERNEW_OFFSET UNITYSDK_OFFSET(0xA61F100)
#define RPG_CLIENT_TRAVELBROCHUREMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xA622990)
#define RPG_CLIENT_TRAVELBROCHUREMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xA622930)

namespace RPG::Client
{
	inline static constexpr unsigned int TravelBrochureModule_TypeDefinitionIndex = 55659;

	class TravelBrochureModule : public ::RPG::Client::BaseModule
	{
	public:
		static ::System::UInt32* StaticGet__SeenBrochureMaxIndex()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(TravelBrochureModule_TypeDefinitionIndex)->GetStaticField(0x10270);
		}
		::System::Collections::Generic::List_1<::System::UInt32>* _NewPasterIDs_k__BackingField; // 0x10
		::RPG::Client::Promises::Promise* _DataInited; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _NewTextPasterDiaryIDs_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* _NewPasterDiaryIDs_k__BackingField; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::BrochureDiaryData*>* _DiaryDatas; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _PasterCounts; // 0x38
		::System::Collections::Generic::List_1<::System::UInt32>* _NewImagePasterDiaryIDs_k__BackingField; // 0x40
		::System::UInt32 _RemoteHasSeenBrochureIndex; // 0x48
		::System::UInt32 _LocalHasSeenBrochureIndex; // 0x4C
		::System::Boolean _IsRedDotPasterInited; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE__CCTOR_OFFSET))();
		}

		::System::Void _RedDotUnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE__REDDOTUNINIT_OFFSET))(this);
		}

		::System::Void SafeInitRedDot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE_SAFEINITREDDOT_OFFSET))(this);
		}

		::System::Void _UpdatePasterNew()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE__UPDATEPASTERNEW_OFFSET))(this);
		}

		::System::Void _AddRedDotNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE__ADDREDDOTNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _OnRedDotTravelBrochureDataSynced(::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE__ONREDDOTTRAVELBROCHUREDATASYNCED_OFFSET))(this, obj);
		}

		::System::Void _OnRedDotTravelBrochurePasterGot(::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE__ONREDDOTTRAVELBROCHUREPASTERGOT_OFFSET))(this, obj);
		}

		::System::Void _OnRedDotTravelBrochurePasterSeen(::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE__ONREDDOTTRAVELBROCHUREPASTERSEEN_OFFSET))(this, obj);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_NewPasterIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE_GET_NEWPASTERIDS_OFFSET))(this);
		}

		::System::Void set_NewPasterIDs(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE_SET_NEWPASTERIDS_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_NewPasterDiaryIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE_GET_NEWPASTERDIARYIDS_OFFSET))(this);
		}

		::System::Void set_NewPasterDiaryIDs(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE_SET_NEWPASTERDIARYIDS_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_NewTextPasterDiaryIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE_GET_NEWTEXTPASTERDIARYIDS_OFFSET))(this);
		}

		::System::Void set_NewTextPasterDiaryIDs(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE_SET_NEWTEXTPASTERDIARYIDS_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_NewImagePasterDiaryIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE_GET_NEWIMAGEPASTERDIARYIDS_OFFSET))(this);
		}

		::System::Void set_NewImagePasterDiaryIDs(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE_SET_NEWIMAGEPASTERDIARYIDS_OFFSET))(this, value);
		}

		::System::Void UnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE_UNINIT_OFFSET))(this);
		}

		::System::Void SendPacketsAfterLoginFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE_SENDPACKETSAFTERLOGINFINISHED_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* DataInited()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE_DATAINITED_OFFSET))(this);
		}

		::System::Boolean IsEntranceShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE_ISENTRANCESHOW_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::BrochureDiaryData*>* GetDirectoryDiaryDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::BrochureDiaryData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE_GETDIRECTORYDIARYDATAS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::BrochureDiaryData*>* GetUnlockedDiaryDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::BrochureDiaryData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE_GETUNLOCKEDDIARYDATAS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::BrochureDiaryData*>* GetAllDiaryDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::BrochureDiaryData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE_GETALLDIARYDATAS_OFFSET))(this);
		}

		::RPG::Client::BrochureDiaryData* GetDiaryData(::System::UInt32 diaryID)
		{
			return ((::RPG::Client::BrochureDiaryData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE_GETDIARYDATA_OFFSET))(this, diaryID);
		}

		::System::UInt32 GetPasterCount(::System::UInt32 pasterID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE_GETPASTERCOUNT_OFFSET))(this, pasterID);
		}

		::System::Void RecordBrochureSeen(::System::UInt32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE_RECORDBROCHURESEEN_OFFSET))(this, index);
		}

		::RPG::Client::BrochureDiaryData* _SafeCreateDiaryData(::System::UInt32 diaryID)
		{
			return ((::RPG::Client::BrochureDiaryData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE__SAFECREATEDIARYDATA_OFFSET))(this, diaryID);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnTravelBrochureGetDataScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE__ONTRAVELBROCHUREGETDATASCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnTravelBrochureApplyPasterListScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE__ONTRAVELBROCHUREAPPLYPASTERLISTSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnTravelBrochureRemovePasterScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE__ONTRAVELBROCHUREREMOVEPASTERSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnTravelBrochureUpdatePasterPosScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE__ONTRAVELBROCHUREUPDATEPASTERPOSSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnTravelBrochurePageResetScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE__ONTRAVELBROCHUREPAGERESETSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnTravelBrochureSelectMessageScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE__ONTRAVELBROCHURESELECTMESSAGESCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnTravelBrochurePageUnlockScNotify(::System::UInt16 cmd, ::System::Object* ntfObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE__ONTRAVELBROCHUREPAGEUNLOCKSCNOTIFY_OFFSET))(this, cmd, ntfObject);
		}

		::System::Void _OnTravelBrochureGetPasterScNotify(::System::UInt16 cmd, ::System::Object* ntfObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE__ONTRAVELBROCHUREGETPASTERSCNOTIFY_OFFSET))(this, cmd, ntfObject);
		}

		::System::Void _OnPlayerSyncScNotify(::System::UInt16 cmd, ::System::Object* notifyObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE__ONPLAYERSYNCSCNOTIFY_OFFSET))(this, cmd, notifyObject);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::UInt32 get_SeenBrochureIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE_GET_SEENBROCHUREINDEX_OFFSET))(this);
		}

		::System::Boolean get_HasSeenBrochure()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE_GET_HASSEENBROCHURE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}
	};
}
