#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

namespace RPG::Client { class TreasureDungeonExitParam; }
namespace RPG::Client { class TreasureDungeonGroupData; }
namespace RPG::Client { class TreasureDungeonLevel; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TREASUREDUNGEONMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA636A60)
#define RPG_CLIENT_TREASUREDUNGEONMODULE_GETCURDOINGGROUP_OFFSET UNITYSDK_OFFSET(0xA637F40)
#define RPG_CLIENT_TREASUREDUNGEONMODULE_GETGROUPDATABYID_OFFSET UNITYSDK_OFFSET(0xA637E60)
#define RPG_CLIENT_TREASUREDUNGEONMODULE_GETTREASUREDUNGEONLEVELINSTANCE_OFFSET UNITYSDK_OFFSET(0xA637F00)
#define RPG_CLIENT_TREASUREDUNGEONMODULE_GET_CURRENTTREASUREDUNGEONLEVELID_OFFSET UNITYSDK_OFFSET(0xA635750)
#define RPG_CLIENT_TREASUREDUNGEONMODULE_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xA635290)
#define RPG_CLIENT_TREASUREDUNGEONMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xA636850)
#define RPG_CLIENT_TREASUREDUNGEONMODULE_ISDUNGEONFINISHED_OFFSET UNITYSDK_OFFSET(0xA6352F0)
#define RPG_CLIENT_TREASUREDUNGEONMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xA636AB0)
#define RPG_CLIENT_TREASUREDUNGEONMODULE_TRYAUTOSHOW_OFFSET UNITYSDK_OFFSET(0xA636BF0)
#define RPG_CLIENT_TREASUREDUNGEONMODULE_TRYQUITLEVEL_OFFSET UNITYSDK_OFFSET(0xA637FF0)
#define RPG_CLIENT_TREASUREDUNGEONMODULE_UNINIT_OFFSET UNITYSDK_OFFSET(0xA636980)
#define RPG_CLIENT_TREASUREDUNGEONMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xA636E70)
#define RPG_CLIENT_TREASUREDUNGEONMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xA637380)
#define RPG_CLIENT_TREASUREDUNGEONMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xA638170)
#define RPG_CLIENT_TREASUREDUNGEONMODULE__INITALLTREASUREDUNGEONGROUP_OFFSET UNITYSDK_OFFSET(0xA636D10)
#define RPG_CLIENT_TREASUREDUNGEONMODULE__ONENTERTREASUREDUNGEONSCRSP_OFFSET UNITYSDK_OFFSET(0xA637820)
#define RPG_CLIENT_TREASUREDUNGEONMODULE__ONFIGHTTREASUREDUNGEONMONSTERSCRSP_OFFSET UNITYSDK_OFFSET(0xA637E00)
#define RPG_CLIENT_TREASUREDUNGEONMODULE__ONFINISHEDMAINMISSION_OFFSET UNITYSDK_OFFSET(0xA6371E0)
#define RPG_CLIENT_TREASUREDUNGEONMODULE__ONGETTREASUREDUNGEONACTIVITYDATASCRSP_OFFSET UNITYSDK_OFFSET(0xA6375A0)
#define RPG_CLIENT_TREASUREDUNGEONMODULE__ONHIDELOADINGPAGE_OFFSET UNITYSDK_OFFSET(0xA636F90)
#define RPG_CLIENT_TREASUREDUNGEONMODULE__ONINTERACTTREASUREDUNGEONGRIDSCRSP_OFFSET UNITYSDK_OFFSET(0xA6379A0)
#define RPG_CLIENT_TREASUREDUNGEONMODULE__ONMODULEINIT_OFFSET UNITYSDK_OFFSET(0xA636B00)
#define RPG_CLIENT_TREASUREDUNGEONMODULE__ONOPENTREASUREDUNGEONGRIDSCRSP_OFFSET UNITYSDK_OFFSET(0xA637910)
#define RPG_CLIENT_TREASUREDUNGEONMODULE__ONQUITTREASUREDUNGEONSCRSP_OFFSET UNITYSDK_OFFSET(0xA637AD0)
#define RPG_CLIENT_TREASUREDUNGEONMODULE__ONREPORTDUNGEONBATTLEEND_OFFSET UNITYSDK_OFFSET(0xA636700)
#define RPG_CLIENT_TREASUREDUNGEONMODULE__ONREPORTENTERDUNGEON_OFFSET UNITYSDK_OFFSET(0xA6365E0)
#define RPG_CLIENT_TREASUREDUNGEONMODULE__ONTREASUREDUNGEONDATASCNOTIFY_OFFSET UNITYSDK_OFFSET(0xA637B70)
#define RPG_CLIENT_TREASUREDUNGEONMODULE__ONTREASUREDUNGEONFINISHSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xA637C10)
#define RPG_CLIENT_TREASUREDUNGEONMODULE__ONUSETREASUREDUNGEONITEMSCRSP_OFFSET UNITYSDK_OFFSET(0xA637A40)
#define RPG_CLIENT_TREASUREDUNGEONMODULE__QUITTREASUREDUNGEON_OFFSET UNITYSDK_OFFSET(0xA637000)
#define RPG_CLIENT_TREASUREDUNGEONMODULE__REPORTDUNGEONFINISH_OFFSET UNITYSDK_OFFSET(0xA635FC0)
#define RPG_CLIENT_TREASUREDUNGEONMODULE__REPORTDUNGEONGIVEUP_OFFSET UNITYSDK_OFFSET(0xA635960)
#define RPG_CLIENT_TREASUREDUNGEONMODULE__REPORTDUNGEONLEAVE_OFFSET UNITYSDK_OFFSET(0xA635C90)
#define RPG_CLIENT_TREASUREDUNGEONMODULE__REPORTDUNGEONNEXTFLOOR_OFFSET UNITYSDK_OFFSET(0xA636300)
#define RPG_CLIENT_TREASUREDUNGEONMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA638220)
#define RPG_CLIENT_TREASUREDUNGEONMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xA638190)
#define RPG_CLIENT_TREASUREDUNGEONMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xA638230)
#define RPG_CLIENT_TREASUREDUNGEONMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xA638290)
#define RPG_CLIENT_TREASUREDUNGEONMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xA6382F0)

namespace RPG::Client
{
	inline static constexpr unsigned int TreasureDungeonModule_TypeDefinitionIndex = 55674;

	class TreasureDungeonModule : public ::RPG::Client::BaseModule
	{
	public:
		// static const ::System::UInt32 _ReportStatusTypeLeave = 0x1; // 0x0
		// static const ::System::UInt32 _ReportStatusTypeFinishFail = 0x2; // 0x0
		// static const ::System::UInt32 _ReportStatusTypeFinishSuccess = 0x3; // 0x0
		// static const ::System::UInt32 _ReportStatusTypeGiveUp = 0x4; // 0x0
		// static const ::System::UInt32 _ReportStatusTypeNextFloor = 0x5; // 0x0
		::RPG::Client::TreasureDungeonExitParam* _CachedExitParam; // 0x10
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _FinishedDungeonIDSet; // 0x18
		::RPG::Client::TreasureDungeonLevel* _LevelInstance; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::TreasureDungeonGroupData*>* AllGroupDatas; // 0x28
		::System::Boolean _IsGiveUp; // 0x30
		::System::Boolean _ReportInDungeon; // 0x31
		::System::Boolean _ShouldAutoShow; // 0x32
		::System::UInt32 _ReportStartTimeStamp; // 0x34
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

		::System::Void _ReportDungeonFinish(::System::Boolean win)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONMODULE__REPORTDUNGEONFINISH_OFFSET))(this, win);
		}

		::System::Void _ReportDungeonNextFloor(::System::UInt32 oldFloorID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONMODULE__REPORTDUNGEONNEXTFLOOR_OFFSET))(this, oldFloorID);
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

		::System::Void _OnHideLoadingPage(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONMODULE__ONHIDELOADINGPAGE_OFFSET))(this, arg);
		}

		::System::Void _OnFinishedMainMission(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONMODULE__ONFINISHEDMAINMISSION_OFFSET))(this, arg);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnGetTreasureDungeonActivityDataScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONMODULE__ONGETTREASUREDUNGEONACTIVITYDATASCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnEnterTreasureDungeonScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONMODULE__ONENTERTREASUREDUNGEONSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnOpenTreasureDungeonGridScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONMODULE__ONOPENTREASUREDUNGEONGRIDSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnInteractTreasureDungeonGridScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONMODULE__ONINTERACTTREASUREDUNGEONGRIDSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnUseTreasureDungeonItemScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONMODULE__ONUSETREASUREDUNGEONITEMSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnQuitTreasureDungeonScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONMODULE__ONQUITTREASUREDUNGEONSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnTreasureDungeonDataScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONMODULE__ONTREASUREDUNGEONDATASCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnTreasureDungeonFinishScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONMODULE__ONTREASUREDUNGEONFINISHSCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnFightTreasureDungeonMonsterScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONMODULE__ONFIGHTTREASUREDUNGEONMONSTERSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Boolean IsDungeonFinished(::System::UInt32 id)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONMODULE_ISDUNGEONFINISHED_OFFSET))(this, id);
		}

		::RPG::Client::TreasureDungeonGroupData* GetGroupDataByID(::System::UInt32 groupID)
		{
			return ((::RPG::Client::TreasureDungeonGroupData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONMODULE_GETGROUPDATABYID_OFFSET))(this, groupID);
		}

		::RPG::Client::TreasureDungeonLevel* GetTreasureDungeonLevelInstance()
		{
			return ((::RPG::Client::TreasureDungeonLevel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONMODULE_GETTREASUREDUNGEONLEVELINSTANCE_OFFSET))(this);
		}

		::RPG::Client::TreasureDungeonGroupData* GetCurDoingGroup()
		{
			return ((::RPG::Client::TreasureDungeonGroupData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONMODULE_GETCURDOINGGROUP_OFFSET))(this);
		}

		::System::Void TryQuitLevel(::System::Boolean isGiveUp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONMODULE_TRYQUITLEVEL_OFFSET))(this, isGiveUp);
		}

		::System::Void _QuitTreasureDungeon(::System::Boolean isFinish)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONMODULE__QUITTREASUREDUNGEON_OFFSET))(this, isFinish);
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
