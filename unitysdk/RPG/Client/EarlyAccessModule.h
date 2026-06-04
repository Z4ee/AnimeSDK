#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

class Class_1_455008579EB95638_22;
namespace RPG::Client { class ConditionChecker; }
namespace RPG::Client { class EarlyAccessContent; }
namespace RPG::Client { class WorldEarlyUnlockData; }
namespace System { class Action; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_EARLYACCESSMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB82EF00)
#define RPG_CLIENT_EARLYACCESSMODULE_GETALLWORLDEARLYUNLOCKDATA_OFFSET UNITYSDK_OFFSET(0xB82FEC0)
#define RPG_CLIENT_EARLYACCESSMODULE_GETCONTENT_OFFSET UNITYSDK_OFFSET(0xB82E6E0)
#define RPG_CLIENT_EARLYACCESSMODULE_GETDOINGCONTENT_OFFSET UNITYSDK_OFFSET(0xB82F950)
#define RPG_CLIENT_EARLYACCESSMODULE_GETMISSIONCONTENTID_OFFSET UNITYSDK_OFFSET(0xB82E120)
#define RPG_CLIENT_EARLYACCESSMODULE_GETMISSIONDOINGCONTENTID_OFFSET UNITYSDK_OFFSET(0xB82F860)
#define RPG_CLIENT_EARLYACCESSMODULE_GETWORLDEARLYUNLOCKDATA_OFFSET UNITYSDK_OFFSET(0xB82FDF0)
#define RPG_CLIENT_EARLYACCESSMODULE_GET_CURRENTCONTENT_OFFSET UNITYSDK_OFFSET(0xB82E9C0)
#define RPG_CLIENT_EARLYACCESSMODULE_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xB82E0C0)
#define RPG_CLIENT_EARLYACCESSMODULE_GET_SYSTEMUNLOCKPLAYERLEVEL_OFFSET UNITYSDK_OFFSET(0xB830970)
#define RPG_CLIENT_EARLYACCESSMODULE_GET__SYSTEMUNLOCKCONDITIONCHECKER_OFFSET UNITYSDK_OFFSET(0xB8308C0)
#define RPG_CLIENT_EARLYACCESSMODULE_GET__SYSTEMUNLOCKID_OFFSET UNITYSDK_OFFSET(0xB8307D0)
#define RPG_CLIENT_EARLYACCESSMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xB82E9D0)
#define RPG_CLIENT_EARLYACCESSMODULE_ISCONTENTFINISHED_OFFSET UNITYSDK_OFFSET(0xB82FBD0)
#define RPG_CLIENT_EARLYACCESSMODULE_ISCONTENTWAITINGFINISHEDANIM_OFFSET UNITYSDK_OFFSET(0xB830E50)
#define RPG_CLIENT_EARLYACCESSMODULE_ISCONTENTWAITINGUNLOCKEDANIM_OFFSET UNITYSDK_OFFSET(0xB830D90)
#define RPG_CLIENT_EARLYACCESSMODULE_ISINACTIVITYCONTENT_OFFSET UNITYSDK_OFFSET(0xB82FAB0)
#define RPG_CLIENT_EARLYACCESSMODULE_ISINCONTENT_OFFSET UNITYSDK_OFFSET(0xB82FB10)
#define RPG_CLIENT_EARLYACCESSMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xB82EFF0)
#define RPG_CLIENT_EARLYACCESSMODULE_SENDEARLYACCESSDATA_OFFSET UNITYSDK_OFFSET(0xB82F470)
#define RPG_CLIENT_EARLYACCESSMODULE_SETFINISHEDANIMPLAYED_OFFSET UNITYSDK_OFFSET(0xB830EB0)
#define RPG_CLIENT_EARLYACCESSMODULE_SETUNLOCKEDANIMPLAYED_OFFSET UNITYSDK_OFFSET(0xB830DF0)
#define RPG_CLIENT_EARLYACCESSMODULE_SWITCHCONTENT_OFFSET UNITYSDK_OFFSET(0xB82FCB0)
#define RPG_CLIENT_EARLYACCESSMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xB82F3A0)
#define RPG_CLIENT_EARLYACCESSMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xB82F170)
#define RPG_CLIENT_EARLYACCESSMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xB830F10)
#define RPG_CLIENT_EARLYACCESSMODULE__FINDCONTENTIDBYMAINMISSIONID_OFFSET UNITYSDK_OFFSET(0xB82F790)
#define RPG_CLIENT_EARLYACCESSMODULE__GETCONTENT_OFFSET UNITYSDK_OFFSET(0xB82F6E0)
#define RPG_CLIENT_EARLYACCESSMODULE__ONCONDITIONCHECKED_OFFSET UNITYSDK_OFFSET(0xB830630)
#define RPG_CLIENT_EARLYACCESSMODULE__ONCONTENTPACKAGEGETDATASCRSP_OFFSET UNITYSDK_OFFSET(0xB82FF00)
#define RPG_CLIENT_EARLYACCESSMODULE__ONCONTENTPACKAGESYNCDATASCNOTIFY_OFFSET UNITYSDK_OFFSET(0xB830420)
#define RPG_CLIENT_EARLYACCESSMODULE__ONCONTENTPACKAGETRANSFERSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xB8304A0)
#define RPG_CLIENT_EARLYACCESSMODULE__ONCONTENTSWITCHED_OFFSET UNITYSDK_OFFSET(0xB830750)
#define RPG_CLIENT_EARLYACCESSMODULE__ONHIDELOADINGPAGE_OFFSET UNITYSDK_OFFSET(0xB830510)
#define RPG_CLIENT_EARLYACCESSMODULE__SWITCHCONTENTTO_OFFSET UNITYSDK_OFFSET(0xB830680)
#define RPG_CLIENT_EARLYACCESSMODULE__UPDATEALLCONTENT_OFFSET UNITYSDK_OFFSET(0xB82FF80)
#define RPG_CLIENT_EARLYACCESSMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB8310C0)
#define RPG_CLIENT_EARLYACCESSMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xB831040)
#define RPG_CLIENT_EARLYACCESSMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xB8310D0)
#define RPG_CLIENT_EARLYACCESSMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xB831190)
#define RPG_CLIENT_EARLYACCESSMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xB831130)

namespace RPG::Client
{
	inline static constexpr unsigned int EarlyAccessModule_TypeDefinitionIndex = 59571;

	class EarlyAccessModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _WaitingUnlockedAnimContentIDs; // 0x10
		::System::Action* _SwitchContentCallback; // 0x18
		::RPG::Client::EarlyAccessContent* _CurrentContent; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::WorldEarlyUnlockData*>* _WorldEarlyUnlocks; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _MissionID2DoingContentID; // 0x30
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _WaitingFinishedAnimContentIDs; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::EarlyAccessContent*>* _Contents; // 0x40
		::System::Boolean _ShouldToastExpiredTransfer; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSMODULE__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::EarlyAccessModule* get_Instance()
		{
			return ((::RPG::Client::EarlyAccessModule*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSMODULE_GET_INSTANCE_OFFSET))();
		}

		::RPG::Client::EarlyAccessContent* get_CurrentContent()
		{
			return ((::RPG::Client::EarlyAccessContent*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSMODULE_GET_CURRENTCONTENT_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSMODULE_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSMODULE_ONRECONNECT_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void SendEarlyAccessData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSMODULE_SENDEARLYACCESSDATA_OFFSET))(this);
		}

		::RPG::Client::EarlyAccessContent* GetContent(::System::UInt32 a1)
		{
			return ((::RPG::Client::EarlyAccessContent*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSMODULE_GETCONTENT_OFFSET))(this, a1);
		}

		::RPG::Client::EarlyAccessContent* _FindContentIDByMainMissionID(::System::UInt32 a1)
		{
			return ((::RPG::Client::EarlyAccessContent*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSMODULE__FINDCONTENTIDBYMAINMISSIONID_OFFSET))(this, a1);
		}

		::System::UInt32 GetMissionDoingContentID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSMODULE_GETMISSIONDOINGCONTENTID_OFFSET))(this, a1);
		}

		::System::UInt32 GetMissionContentID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSMODULE_GETMISSIONCONTENTID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::EarlyAccessContent*>* GetDoingContent()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::EarlyAccessContent*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSMODULE_GETDOINGCONTENT_OFFSET))(this);
		}

		::System::Boolean IsInActivityContent(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSMODULE_ISINACTIVITYCONTENT_OFFSET))(this, a1);
		}

		::System::Boolean IsInContent(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSMODULE_ISINCONTENT_OFFSET))(this, a1);
		}

		::System::Boolean IsContentFinished(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSMODULE_ISCONTENTFINISHED_OFFSET))(this, a1);
		}

		::System::Void SwitchContent(::System::UInt32 a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSMODULE_SWITCHCONTENT_OFFSET))(this, a1, a2);
		}

		::RPG::Client::WorldEarlyUnlockData* GetWorldEarlyUnlockData(::System::UInt32 a1)
		{
			return ((::RPG::Client::WorldEarlyUnlockData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSMODULE_GETWORLDEARLYUNLOCKDATA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::WorldEarlyUnlockData*>* GetAllWorldEarlyUnlockData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::WorldEarlyUnlockData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSMODULE_GETALLWORLDEARLYUNLOCKDATA_OFFSET))(this);
		}

		::System::Void _OnContentPackageGetDataScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSMODULE__ONCONTENTPACKAGEGETDATASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnContentPackageSyncDataScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSMODULE__ONCONTENTPACKAGESYNCDATASCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnContentPackageTransferScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSMODULE__ONCONTENTPACKAGETRANSFERSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnHideLoadingPage(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSMODULE__ONHIDELOADINGPAGE_OFFSET))(this, a1);
		}

		::System::Void _OnConditionChecked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSMODULE__ONCONDITIONCHECKED_OFFSET))(this);
		}

		::System::Void _UpdateAllContent(::Class_1_455008579EB95638_22* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_455008579EB95638_22*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSMODULE__UPDATEALLCONTENT_OFFSET))(this, a1);
		}

		::System::Void _SwitchContentTo(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSMODULE__SWITCHCONTENTTO_OFFSET))(this, a1);
		}

		::RPG::Client::EarlyAccessContent* _GetContent(::System::UInt32 a1)
		{
			return ((::RPG::Client::EarlyAccessContent*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSMODULE__GETCONTENT_OFFSET))(this, a1);
		}

		::System::Void _OnContentSwitched()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSMODULE__ONCONTENTSWITCHED_OFFSET))(this);
		}

		::System::UInt32 get__SystemUnlockID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSMODULE_GET__SYSTEMUNLOCKID_OFFSET))(this);
		}

		::RPG::Client::ConditionChecker* get__SystemUnlockConditionChecker()
		{
			return ((::RPG::Client::ConditionChecker*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSMODULE_GET__SYSTEMUNLOCKCONDITIONCHECKER_OFFSET))(this);
		}

		::System::UInt32 get_SystemUnlockPlayerLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSMODULE_GET_SYSTEMUNLOCKPLAYERLEVEL_OFFSET))(this);
		}

		::System::Boolean IsContentWaitingUnlockedAnim(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSMODULE_ISCONTENTWAITINGUNLOCKEDANIM_OFFSET))(this, a1);
		}

		::System::Void SetUnlockedAnimPlayed(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSMODULE_SETUNLOCKEDANIMPLAYED_OFFSET))(this, a1);
		}

		::System::Boolean IsContentWaitingFinishedAnim(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSMODULE_ISCONTENTWAITINGFINISHEDANIM_OFFSET))(this, a1);
		}

		::System::Void SetFinishedAnimPlayed(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSMODULE_SETFINISHEDANIMPLAYED_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSMODULE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}
	};
}
