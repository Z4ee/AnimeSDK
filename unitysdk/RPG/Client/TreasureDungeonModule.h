#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

namespace RPG::Client { class TreasureDungeonExitParam; }
namespace RPG::Client { class TreasureDungeonGroupData; }
namespace RPG::Client { class TreasureDungeonLevel; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TREASUREDUNGEONMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCAE9130)
#define RPG_CLIENT_TREASUREDUNGEONMODULE_GETCURDOINGGROUP_OFFSET UNITYSDK_OFFSET(0xCAEAB40)
#define RPG_CLIENT_TREASUREDUNGEONMODULE_GETGROUPDATABYID_OFFSET UNITYSDK_OFFSET(0xCAEAA40)
#define RPG_CLIENT_TREASUREDUNGEONMODULE_GETTREASUREDUNGEONLEVELINSTANCE_OFFSET UNITYSDK_OFFSET(0xCAEAB00)
#define RPG_CLIENT_TREASUREDUNGEONMODULE_GET_CURRENTTREASUREDUNGEONLEVELID_OFFSET UNITYSDK_OFFSET(0xCAE7DD0)
#define RPG_CLIENT_TREASUREDUNGEONMODULE_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xCAE7910)
#define RPG_CLIENT_TREASUREDUNGEONMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xCAE8EC0)
#define RPG_CLIENT_TREASUREDUNGEONMODULE_ISDUNGEONFINISHED_OFFSET UNITYSDK_OFFSET(0xCAE7970)
#define RPG_CLIENT_TREASUREDUNGEONMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xCAE9180)
#define RPG_CLIENT_TREASUREDUNGEONMODULE_TRYAUTOSHOW_OFFSET UNITYSDK_OFFSET(0xCAE92C0)
#define RPG_CLIENT_TREASUREDUNGEONMODULE_TRYQUITLEVEL_OFFSET UNITYSDK_OFFSET(0xCAEAC30)
#define RPG_CLIENT_TREASUREDUNGEONMODULE_UNINIT_OFFSET UNITYSDK_OFFSET(0xCAE9020)
#define RPG_CLIENT_TREASUREDUNGEONMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xCAE95E0)
#define RPG_CLIENT_TREASUREDUNGEONMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xCAE9B30)
#define RPG_CLIENT_TREASUREDUNGEONMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xCAEADB0)
#define RPG_CLIENT_TREASUREDUNGEONMODULE__INITALLTREASUREDUNGEONGROUP_OFFSET UNITYSDK_OFFSET(0xCAE93D0)
#define RPG_CLIENT_TREASUREDUNGEONMODULE__ONENTERTREASUREDUNGEONSCRSP_OFFSET UNITYSDK_OFFSET(0xCAEA400)
#define RPG_CLIENT_TREASUREDUNGEONMODULE__ONFIGHTTREASUREDUNGEONMONSTERSCRSP_OFFSET UNITYSDK_OFFSET(0xCAEA9E0)
#define RPG_CLIENT_TREASUREDUNGEONMODULE__ONFINISHEDMAINMISSION_OFFSET UNITYSDK_OFFSET(0xCAE9990)
#define RPG_CLIENT_TREASUREDUNGEONMODULE__ONGETTREASUREDUNGEONACTIVITYDATASCRSP_OFFSET UNITYSDK_OFFSET(0xCAEA0D0)
#define RPG_CLIENT_TREASUREDUNGEONMODULE__ONHIDELOADINGPAGE_OFFSET UNITYSDK_OFFSET(0xCAE9740)
#define RPG_CLIENT_TREASUREDUNGEONMODULE__ONINTERACTTREASUREDUNGEONGRIDSCRSP_OFFSET UNITYSDK_OFFSET(0xCAEA580)
#define RPG_CLIENT_TREASUREDUNGEONMODULE__ONMODULEINIT_OFFSET UNITYSDK_OFFSET(0xCAE91D0)
#define RPG_CLIENT_TREASUREDUNGEONMODULE__ONOPENTREASUREDUNGEONGRIDSCRSP_OFFSET UNITYSDK_OFFSET(0xCAEA4F0)
#define RPG_CLIENT_TREASUREDUNGEONMODULE__ONQUITTREASUREDUNGEONSCRSP_OFFSET UNITYSDK_OFFSET(0xCAEA6B0)
#define RPG_CLIENT_TREASUREDUNGEONMODULE__ONREPORTDUNGEONBATTLEEND_OFFSET UNITYSDK_OFFSET(0xCAE8D80)
#define RPG_CLIENT_TREASUREDUNGEONMODULE__ONREPORTENTERDUNGEON_OFFSET UNITYSDK_OFFSET(0xCAE8C60)
#define RPG_CLIENT_TREASUREDUNGEONMODULE__ONTREASUREDUNGEONDATASCNOTIFY_OFFSET UNITYSDK_OFFSET(0xCAEA750)
#define RPG_CLIENT_TREASUREDUNGEONMODULE__ONTREASUREDUNGEONFINISHSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xCAEA7F0)
#define RPG_CLIENT_TREASUREDUNGEONMODULE__ONUSETREASUREDUNGEONITEMSCRSP_OFFSET UNITYSDK_OFFSET(0xCAEA620)
#define RPG_CLIENT_TREASUREDUNGEONMODULE__QUITTREASUREDUNGEON_OFFSET UNITYSDK_OFFSET(0xCAE97B0)
#define RPG_CLIENT_TREASUREDUNGEONMODULE__REPORTDUNGEONFINISH_OFFSET UNITYSDK_OFFSET(0xCAE8640)
#define RPG_CLIENT_TREASUREDUNGEONMODULE__REPORTDUNGEONGIVEUP_OFFSET UNITYSDK_OFFSET(0xCAE7FE0)
#define RPG_CLIENT_TREASUREDUNGEONMODULE__REPORTDUNGEONLEAVE_OFFSET UNITYSDK_OFFSET(0xCAE8310)
#define RPG_CLIENT_TREASUREDUNGEONMODULE__REPORTDUNGEONNEXTFLOOR_OFFSET UNITYSDK_OFFSET(0xCAE8980)
#define RPG_CLIENT_TREASUREDUNGEONMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCAEAE50)
#define RPG_CLIENT_TREASUREDUNGEONMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xCAEADD0)
#define RPG_CLIENT_TREASUREDUNGEONMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xCAEAE60)
#define RPG_CLIENT_TREASUREDUNGEONMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xCAEAEC0)
#define RPG_CLIENT_TREASUREDUNGEONMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xCAEAF20)

namespace RPG::Client
{
	inline static constexpr unsigned int TreasureDungeonModule_TypeDefinitionIndex = 63812;

	class TreasureDungeonModule : public ::RPG::Client::BaseModule
	{
	public:
		// static const ::System::UInt32 _ReportStatusTypeLeave = 0x1; // 0x0
		// static const ::System::UInt32 _ReportStatusTypeFinishFail = 0x2; // 0x0
		// static const ::System::UInt32 _ReportStatusTypeFinishSuccess = 0x3; // 0x0
		// static const ::System::UInt32 _ReportStatusTypeGiveUp = 0x4; // 0x0
		// static const ::System::UInt32 _ReportStatusTypeNextFloor = 0x5; // 0x0
		::RPG::Client::TreasureDungeonLevel* _LevelInstance; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::TreasureDungeonGroupData*>* AllGroupDatas; // 0x18
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _FinishedDungeonIDSet; // 0x20
		::RPG::Client::TreasureDungeonExitParam* _CachedExitParam; // 0x28
		::System::UInt32 _ReportStartTimeStamp; // 0x30
		::System::Boolean _ShouldAutoShow; // 0x34
		::System::Boolean _ReportInDungeon; // 0x35
		::System::Boolean _IsGiveUp; // 0x36
		::System::UInt32 _ReportFloorBattleTime; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONMODULE__CTOR_OFFSET))(this);
		}

		::System::Void _ReportDungeonGiveUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONMODULE__REPORTDUNGEONGIVEUP_OFFSET))(this);
		}

		::System::Void _ReportDungeonLeave()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONMODULE__REPORTDUNGEONLEAVE_OFFSET))(this);
		}

		::System::Void _ReportDungeonFinish(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONMODULE__REPORTDUNGEONFINISH_OFFSET))(this, a1);
		}

		::System::Void _ReportDungeonNextFloor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONMODULE__REPORTDUNGEONNEXTFLOOR_OFFSET))(this, a1);
		}

		::System::Void _OnReportEnterDungeon()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONMODULE__ONREPORTENTERDUNGEON_OFFSET))(this);
		}

		::System::Void _OnReportDungeonBattleEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONMODULE__ONREPORTDUNGEONBATTLEEND_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONMODULE_INIT_OFFSET))(this);
		}

		::System::Void UnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONMODULE_UNINIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONMODULE_ONRECONNECT_OFFSET))(this);
		}

		::System::Void TryAutoShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONMODULE_TRYAUTOSHOW_OFFSET))(this);
		}

		::System::Void _OnModuleInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONMODULE__ONMODULEINIT_OFFSET))(this);
		}

		::System::Void _InitAllTreasureDungeonGroup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONMODULE__INITALLTREASUREDUNGEONGROUP_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _OnHideLoadingPage(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONMODULE__ONHIDELOADINGPAGE_OFFSET))(this, a1);
		}

		::System::Void _OnFinishedMainMission(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONMODULE__ONFINISHEDMAINMISSION_OFFSET))(this, a1);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnGetTreasureDungeonActivityDataScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONMODULE__ONGETTREASUREDUNGEONACTIVITYDATASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnEnterTreasureDungeonScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONMODULE__ONENTERTREASUREDUNGEONSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnOpenTreasureDungeonGridScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONMODULE__ONOPENTREASUREDUNGEONGRIDSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnInteractTreasureDungeonGridScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONMODULE__ONINTERACTTREASUREDUNGEONGRIDSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnUseTreasureDungeonItemScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONMODULE__ONUSETREASUREDUNGEONITEMSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnQuitTreasureDungeonScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONMODULE__ONQUITTREASUREDUNGEONSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnTreasureDungeonDataScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONMODULE__ONTREASUREDUNGEONDATASCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnTreasureDungeonFinishScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONMODULE__ONTREASUREDUNGEONFINISHSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnFightTreasureDungeonMonsterScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONMODULE__ONFIGHTTREASUREDUNGEONMONSTERSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsDungeonFinished(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONMODULE_ISDUNGEONFINISHED_OFFSET))(this, a1);
		}

		::RPG::Client::TreasureDungeonGroupData* GetGroupDataByID(::System::UInt32 a1)
		{
			return ((::RPG::Client::TreasureDungeonGroupData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONMODULE_GETGROUPDATABYID_OFFSET))(this, a1);
		}

		::RPG::Client::TreasureDungeonLevel* GetTreasureDungeonLevelInstance()
		{
			return ((::RPG::Client::TreasureDungeonLevel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONMODULE_GETTREASUREDUNGEONLEVELINSTANCE_OFFSET))(this);
		}

		::RPG::Client::TreasureDungeonGroupData* GetCurDoingGroup()
		{
			return ((::RPG::Client::TreasureDungeonGroupData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONMODULE_GETCURDOINGGROUP_OFFSET))(this);
		}

		::System::Void TryQuitLevel(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONMODULE_TRYQUITLEVEL_OFFSET))(this, a1);
		}

		::System::Void _QuitTreasureDungeon(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONMODULE__QUITTREASUREDUNGEON_OFFSET))(this, a1);
		}

		static ::RPG::Client::TreasureDungeonModule* get_Instance()
		{
			return ((::RPG::Client::TreasureDungeonModule*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONMODULE_GET_INSTANCE_OFFSET))();
		}

		::System::UInt32 get_CurrentTreasureDungeonLevelID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONMODULE_GET_CURRENTTREASUREDUNGEONLEVELID_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONMODULE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}
	};
}
