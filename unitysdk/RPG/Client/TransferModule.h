#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

class Class_1_BDE6C85312507530;
namespace RPG::Client { class TransferExtraInfo; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TRANSFERMODULE_ADDTRANSFERFINISHEDEVENT_OFFSET UNITYSDK_OFFSET(0xCACA590)
#define RPG_CLIENT_TRANSFERMODULE_CANTRANSFER_OFFSET UNITYSDK_OFFSET(0xCACA1E0)
#define RPG_CLIENT_TRANSFERMODULE_FETCHTELEPORTS_OFFSET UNITYSDK_OFFSET(0xCAC9E50)
#define RPG_CLIENT_TRANSFERMODULE_GETMAPENTRYUNLOCKDATA_OFFSET UNITYSDK_OFFSET(0xCAC9BB0)
#define RPG_CLIENT_TRANSFERMODULE_GET_WAITINGPOSTTELEPORTUI_OFFSET UNITYSDK_OFFSET(0xCACB860)
#define RPG_CLIENT_TRANSFERMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xCAC98E0)
#define RPG_CLIENT_TRANSFERMODULE_ISENTRYUNLOCKED_OFFSET UNITYSDK_OFFSET(0xCACA130)
#define RPG_CLIENT_TRANSFERMODULE_ISTELEPORTSHORTCUT_OFFSET UNITYSDK_OFFSET(0xCACA420)
#define RPG_CLIENT_TRANSFERMODULE_ISTELEPORTUNLOCKED_OFFSET UNITYSDK_OFFSET(0xCACA350)
#define RPG_CLIENT_TRANSFERMODULE_PREPAREENTRYMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xCAC9C60)
#define RPG_CLIENT_TRANSFERMODULE_SETTRANSFERAUTOSHOW_OFFSET UNITYSDK_OFFSET(0xCAC8360)
#define RPG_CLIENT_TRANSFERMODULE_SETTRANSFERFINISHEDCALLBACK_OFFSET UNITYSDK_OFFSET(0xCACA700)
#define RPG_CLIENT_TRANSFERMODULE_SET_WAITINGPOSTTELEPORTUI_OFFSET UNITYSDK_OFFSET(0xCACB870)
#define RPG_CLIENT_TRANSFERMODULE_TRANSFER_OFFSET UNITYSDK_OFFSET(0xCAC5E30)
#define RPG_CLIENT_TRANSFERMODULE_TRYAUTOSHOW_OFFSET UNITYSDK_OFFSET(0xCACA750)
#define RPG_CLIENT_TRANSFERMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xCACB660)
#define RPG_CLIENT_TRANSFERMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xCACA960)
#define RPG_CLIENT_TRANSFERMODULE__ADDTRANSFERFINISHEDEVENT_OFFSET UNITYSDK_OFFSET(0xCACA5F0)
#define RPG_CLIENT_TRANSFERMODULE__BUILDMAPENTRIES_OFFSET UNITYSDK_OFFSET(0xCAC9970)
#define RPG_CLIENT_TRANSFERMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xCACB880)
#define RPG_CLIENT_TRANSFERMODULE__ONADVENTUREPHASEENTERED_OFFSET UNITYSDK_OFFSET(0xCACB7C0)
#define RPG_CLIENT_TRANSFERMODULE__ONEMITTRANSFERFINISHEVENT_OFFSET UNITYSDK_OFFSET(0xCACB810)
#define RPG_CLIENT_TRANSFERMODULE__ONENTERSCENESCRSP_OFFSET UNITYSDK_OFFSET(0xCACB450)
#define RPG_CLIENT_TRANSFERMODULE__ONGETSCENEMAPINFOSCRSP_OFFSET UNITYSDK_OFFSET(0xCACB0D0)
#define RPG_CLIENT_TRANSFERMODULE__ONGETUNLOCKTELEPORTSCRSP_OFFSET UNITYSDK_OFFSET(0xCACADC0)
#define RPG_CLIENT_TRANSFERMODULE__ONUNLOCKTELEPORTNOTIFY_OFFSET UNITYSDK_OFFSET(0xCACAC20)
#define RPG_CLIENT_TRANSFERMODULE__TRYNOTIFYTRANSFERFINISHEDEVENT_OFFSET UNITYSDK_OFFSET(0xCACA7B0)
#define RPG_CLIENT_TRANSFERMODULE__UPDATETELEPORTS_1_OFFSET UNITYSDK_OFFSET(0xCACACB0)
#define RPG_CLIENT_TRANSFERMODULE__UPDATETELEPORTS_OFFSET UNITYSDK_OFFSET(0xCACAE90)
#define RPG_CLIENT_TRANSFERMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xCACB9C0)
#define RPG_CLIENT_TRANSFERMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xCACBAA0)
#define RPG_CLIENT_TRANSFERMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xCACBA40)

namespace RPG::Client
{
	inline static constexpr unsigned int TransferModule_TypeDefinitionIndex = 63792;

	class TransferModule : public ::RPG::Client::BaseModule
	{
	public:
		// static const ::System::UInt32 _CURRENT_LINE = 0xFFFFFFFF; // 0x0
		// static const ::System::UInt32 _CURRENT_CONTENT = 0xFFFFFFFF; // 0x0
		::System::Action* _AutoShowAction; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _UnlockedTeleportIDs; // 0x18
		::System::String* _MobilePhonePageName; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* _TeleportIDsToNotify; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_BDE6C85312507530*>* _EntryID2EntryUnlockDatas; // 0x30
		::System::Action* _TransferFinishedAction; // 0x38
		::System::Boolean _WaitingPostTeleportUI_k__BackingField; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFERMODULE__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFERMODULE_INIT_OFFSET))(this);
		}

		::Class_1_BDE6C85312507530* GetMapEntryUnlockData(::System::UInt32 a1)
		{
			return ((::Class_1_BDE6C85312507530*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFERMODULE_GETMAPENTRYUNLOCKDATA_OFFSET))(this, a1);
		}

		::System::Void PrepareEntryMissionData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFERMODULE_PREPAREENTRYMISSIONDATA_OFFSET))(this);
		}

		::System::Void FetchTeleports(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFERMODULE_FETCHTELEPORTS_OFFSET))(this, a1, a2);
		}

		::System::Boolean CanTransfer(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFERMODULE_CANTRANSFER_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsEntryUnlocked(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFERMODULE_ISENTRYUNLOCKED_OFFSET))(this, a1);
		}

		::System::Boolean IsTeleportUnlocked(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFERMODULE_ISTELEPORTUNLOCKED_OFFSET))(this, a1);
		}

		::System::Boolean IsTeleportShortCut(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFERMODULE_ISTELEPORTSHORTCUT_OFFSET))(this, a1, a2);
		}

		::System::Void Transfer(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::RPG::Client::TransferExtraInfo* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::RPG::Client::TransferExtraInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFERMODULE_TRANSFER_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void AddTransferFinishedEvent(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFERMODULE_ADDTRANSFERFINISHEDEVENT_OFFSET))(this, a1);
		}

		::System::Void SetTransferFinishedCallback(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFERMODULE_SETTRANSFERFINISHEDCALLBACK_OFFSET))(this, a1);
		}

		::System::Void SetTransferAutoShow(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFERMODULE_SETTRANSFERAUTOSHOW_OFFSET))(this, a1);
		}

		::System::Void TryAutoShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFERMODULE_TRYAUTOSHOW_OFFSET))(this);
		}

		::System::Void _BuildMapEntries()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFERMODULE__BUILDMAPENTRIES_OFFSET))(this);
		}

		::System::Void _AddTransferFinishedEvent(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFERMODULE__ADDTRANSFERFINISHEDEVENT_OFFSET))(this, a1);
		}

		::System::Void _TryNotifyTransferFinishedEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFERMODULE__TRYNOTIFYTRANSFERFINISHEDEVENT_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFERMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnUnlockTeleportNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFERMODULE__ONUNLOCKTELEPORTNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnGetUnlockTeleportScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFERMODULE__ONGETUNLOCKTELEPORTSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnGetSceneMapInfoScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFERMODULE__ONGETSCENEMAPINFOSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnEnterSceneScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFERMODULE__ONENTERSCENESCRSP_OFFSET))(this, a1, a2);
		}

		::System::Boolean _UpdateTeleports(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFERMODULE__UPDATETELEPORTS_OFFSET))(this, a1);
		}

		::System::Boolean _UpdateTeleports_1(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFERMODULE__UPDATETELEPORTS_1_OFFSET))(this, a1);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFERMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _OnAdventurePhaseEntered(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFERMODULE__ONADVENTUREPHASEENTERED_OFFSET))(this, a1);
		}

		::System::Void _OnEmitTransferFinishEvent(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFERMODULE__ONEMITTRANSFERFINISHEVENT_OFFSET))(this, a1);
		}

		::System::Boolean get_WaitingPostTeleportUI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFERMODULE_GET_WAITINGPOSTTELEPORTUI_OFFSET))(this);
		}

		::System::Void set_WaitingPostTeleportUI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFERMODULE_SET_WAITINGPOSTTELEPORTUI_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFERMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFERMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFERMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}
	};
}
