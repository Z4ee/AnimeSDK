#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

class Class_1_FA4F4A67B1C04320_55;
namespace RPG::Client { class FarmBattleResultInfo; }
namespace RPG::Client { class FarmData; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::GameCore { class MappingInfoRow; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_CLIENT_FARMMODULE_CHECKFARMBANWITHHINT_OFFSET UNITYSDK_OFFSET(0x966A9B0)
#define RPG_CLIENT_FARMMODULE_CLEARAUTOSHOW_OFFSET UNITYSDK_OFFSET(0x9668B40)
#define RPG_CLIENT_FARMMODULE_CLEARWEEKFARMBATTLERESULT_OFFSET UNITYSDK_OFFSET(0x966B230)
#define RPG_CLIENT_FARMMODULE_CREATEFARMBATTLERESULT_OFFSET UNITYSDK_OFFSET(0x966AC90)
#define RPG_CLIENT_FARMMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9668750)
#define RPG_CLIENT_FARMMODULE_GETFARMLOCKHINTBYFARMSTAGEADVANCELIMIT_OFFSET UNITYSDK_OFFSET(0x966ABF0)
#define RPG_CLIENT_FARMMODULE_GETFARMMAPPINGINFOROW_OFFSET UNITYSDK_OFFSET(0x9669C40)
#define RPG_CLIENT_FARMMODULE_GETFARMMAXLEVEL_OFFSET UNITYSDK_OFFSET(0x9669610)
#define RPG_CLIENT_FARMMODULE_GETQUICKFARMENDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x9669910)
#define RPG_CLIENT_FARMMODULE_GETQUICKFARMNEXTBEGINTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x9669B20)
#define RPG_CLIENT_FARMMODULE_GETWEEKFARMBATTLERESULT_OFFSET UNITYSDK_OFFSET(0x966B060)
#define RPG_CLIENT_FARMMODULE_GET_FARMDATA_OFFSET UNITYSDK_OFFSET(0x966B380)
#define RPG_CLIENT_FARMMODULE_GET_NEEDCHECKWEEKFARMBATTLERSP_OFFSET UNITYSDK_OFFSET(0x966B3E0)
#define RPG_CLIENT_FARMMODULE_GET_WEEKFARMBATTLECURCOUNT_OFFSET UNITYSDK_OFFSET(0x966B3C0)
#define RPG_CLIENT_FARMMODULE_GET_WEEKFARMLIMITCOUNT_OFFSET UNITYSDK_OFFSET(0x966B3A0)
#define RPG_CLIENT_FARMMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x9668610)
#define RPG_CLIENT_FARMMODULE_ISFARMAVAILABLE_OFFSET UNITYSDK_OFFSET(0x9669200)
#define RPG_CLIENT_FARMMODULE_ISFARMBANNED_OFFSET UNITYSDK_OFFSET(0x966A7F0)
#define RPG_CLIENT_FARMMODULE_ISFARMDAILY_OFFSET UNITYSDK_OFFSET(0x9669520)
#define RPG_CLIENT_FARMMODULE_ISFARMOPEN_OFFSET UNITYSDK_OFFSET(0x96693A0)
#define RPG_CLIENT_FARMMODULE_ISFARMWEEKLY_OFFSET UNITYSDK_OFFSET(0x9669310)
#define RPG_CLIENT_FARMMODULE_ISLOCKEDBYFARMSTAGEADVANCELIMIT_OFFSET UNITYSDK_OFFSET(0x966AB00)
#define RPG_CLIENT_FARMMODULE_ISQUICKFARMOPEN_OFFSET UNITYSDK_OFFSET(0x9669700)
#define RPG_CLIENT_FARMMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x96687A0)
#define RPG_CLIENT_FARMMODULE_RECORDWEEKFARMRESULTBYBATTLERESULT_OFFSET UNITYSDK_OFFSET(0x966B0C0)
#define RPG_CLIENT_FARMMODULE_REENTERFARMWITHSTATINFO_OFFSET UNITYSDK_OFFSET(0x966A210)
#define RPG_CLIENT_FARMMODULE_REENTERFARM_OFFSET UNITYSDK_OFFSET(0x966A1B0)
#define RPG_CLIENT_FARMMODULE_RESETWEEKFARMBATTLECURCOUNT_OFFSET UNITYSDK_OFFSET(0x966B330)
#define RPG_CLIENT_FARMMODULE_SENDSTARTCOCOONSTAGEREQ_OFFSET UNITYSDK_OFFSET(0x966A550)
#define RPG_CLIENT_FARMMODULE_SENDSTARTQUICKCOCOONSTAGEREQ_OFFSET UNITYSDK_OFFSET(0x966A6B0)
#define RPG_CLIENT_FARMMODULE_SET_FARMDATA_OFFSET UNITYSDK_OFFSET(0x966B390)
#define RPG_CLIENT_FARMMODULE_SET_NEEDCHECKWEEKFARMBATTLERSP_OFFSET UNITYSDK_OFFSET(0x966B3F0)
#define RPG_CLIENT_FARMMODULE_SET_WEEKFARMBATTLECURCOUNT_OFFSET UNITYSDK_OFFSET(0x966B3D0)
#define RPG_CLIENT_FARMMODULE_SET_WEEKFARMLIMITCOUNT_OFFSET UNITYSDK_OFFSET(0x966B3B0)
#define RPG_CLIENT_FARMMODULE_STARTFARMELEMENT_OFFSET UNITYSDK_OFFSET(0x9669D50)
#define RPG_CLIENT_FARMMODULE_STARTQUICKFARMBATTLE_OFFSET UNITYSDK_OFFSET(0x9668F90)
#define RPG_CLIENT_FARMMODULE_TRYAUTOSHOW_OFFSET UNITYSDK_OFFSET(0x9668820)
#define RPG_CLIENT_FARMMODULE_TRYENTERNEXTWEEKFARMBATTLE_OFFSET UNITYSDK_OFFSET(0x966B280)
#define RPG_CLIENT_FARMMODULE_TRYSHOWCURWEEKFARMBATTLERESULTPAGE_OFFSET UNITYSDK_OFFSET(0x9668E80)
#define RPG_CLIENT_FARMMODULE__ADDFARMBATTLERESULTINFO_OFFSET UNITYSDK_OFFSET(0x966ADF0)
#define RPG_CLIENT_FARMMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x9668B90)
#define RPG_CLIENT_FARMMODULE__CCTOR_OFFSET UNITYSDK_OFFSET(0x966B440)
#define RPG_CLIENT_FARMMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x966B400)
#define RPG_CLIENT_FARMMODULE__ONACTIVEFARMELEMENTSCRSP_OFFSET UNITYSDK_OFFSET(0x9668C70)
#define RPG_CLIENT_FARMMODULE__ONSTARTCOCOONSTAGERSP_OFFSET UNITYSDK_OFFSET(0x9668E00)
#define RPG_CLIENT_FARMMODULE__ONSTARTQUICKCOCOONSTAGERSP_OFFSET UNITYSDK_OFFSET(0x9668F10)
#define RPG_CLIENT_FARMMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x966B4E0)
#define RPG_CLIENT_FARMMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x966B450)
#define RPG_CLIENT_FARMMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x966B4F0)
#define RPG_CLIENT_FARMMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x966B550)

namespace RPG::Client
{
	inline static constexpr unsigned int FarmModule_TypeDefinitionIndex = 51901;

	class FarmModule : public ::RPG::Client::BaseModule
	{
	public:
		static ::System::UInt32* StaticGet_SEND_START_ELEMENT_INTERVAL()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(FarmModule_TypeDefinitionIndex)->GetStaticField(0x12A60);
		}
		::RPG::Client::FarmData* _FarmData_k__BackingField; // 0x10
		::RPG::Client::Promises::Promise* _FarmElementStarted; // 0x18
		::RPG::Client::FarmBattleResultInfo* _WeekFarmBattleResult; // 0x20
		::System::Boolean _NeedCheckWeekFarmBattleRsp_k__BackingField; // 0x28
		::System::UInt32 _WeekFarmLimitCount_k__BackingField; // 0x2C
		::System::UInt32 _SentStartElementTime; // 0x30
		::System::UInt32 _AfterBattleQuickFarmID; // 0x34
		::System::UInt32 _WeekFarmBattleCurCount_k__BackingField; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE__CCTOR_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE_ONRECONNECT_OFFSET))(this);
		}

		::System::Void TryAutoShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE_TRYAUTOSHOW_OFFSET))(this);
		}

		::System::Void ClearAutoShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE_CLEARAUTOSHOW_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnActiveFarmElementScRsp(::System::UInt16 cmd, ::System::Object* ntfObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE__ONACTIVEFARMELEMENTSCRSP_OFFSET))(this, cmd, ntfObject);
		}

		::System::Void _OnStartCocoonStageRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE__ONSTARTCOCOONSTAGERSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnStartQuickCocoonStageRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE__ONSTARTQUICKCOCOONSTAGERSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void StartQuickFarmBattle(::System::UInt32 farmID, ::System::UInt32 level, ::System::UInt32 challengeCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE_STARTQUICKFARMBATTLE_OFFSET))(this, farmID, level, challengeCount);
		}

		::System::Boolean IsFarmAvailable(::System::UInt32 farmID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE_ISFARMAVAILABLE_OFFSET))(this, farmID);
		}

		::System::Boolean IsFarmOpen(::System::UInt32 farmID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE_ISFARMOPEN_OFFSET))(this, farmID);
		}

		::System::Boolean IsFarmWeekly(::System::UInt32 farmID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE_ISFARMWEEKLY_OFFSET))(this, farmID);
		}

		::System::Boolean IsFarmDaily(::System::UInt32 farmID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE_ISFARMDAILY_OFFSET))(this, farmID);
		}

		::System::UInt32 GetFarmMaxLevel(::System::UInt32 farmID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE_GETFARMMAXLEVEL_OFFSET))(this, farmID);
		}

		::System::Boolean IsQuickFarmOpen(::System::UInt32 farmID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE_ISQUICKFARMOPEN_OFFSET))(this, farmID);
		}

		::System::UInt32 GetQuickFarmEndTimeStamp(::System::UInt32 farmID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE_GETQUICKFARMENDTIMESTAMP_OFFSET))(this, farmID);
		}

		::System::UInt32 GetQuickFarmNextBeginTimeStamp(::System::UInt32 farmID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE_GETQUICKFARMNEXTBEGINTIMESTAMP_OFFSET))(this, farmID);
		}

		::RPG::GameCore::MappingInfoRow* GetFarmMappingInfoRow(::System::UInt32 farmID)
		{
			return ((::RPG::GameCore::MappingInfoRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE_GETFARMMAPPINGINFOROW_OFFSET))(this, farmID);
		}

		::RPG::Client::Promises::IPromise* StartFarmElement(::System::UInt32 serverEntityID, ::System::UInt32 level, ::System::UInt32 challengeCount)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE_STARTFARMELEMENT_OFFSET))(this, serverEntityID, level, challengeCount);
		}

		::System::Void ReEnterFarm(::RPG::Client::FarmData* farmData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FarmData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE_REENTERFARM_OFFSET))(this, farmData);
		}

		::System::Void ReEnterFarmWithStatInfo(::RPG::Client::FarmData* farmData, ::Class_1_FA4F4A67B1C04320_55* weekStatInfo)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FarmData*, ::Class_1_FA4F4A67B1C04320_55*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE_REENTERFARMWITHSTATINFO_OFFSET))(this, farmData, weekStatInfo);
		}

		::System::Void SendStartCocoonStageReq(::System::UInt32 propEntityID, ::System::UInt32 cocoonID, ::System::UInt32 worldLevel, ::System::UInt32 challengeCount, ::Class_1_FA4F4A67B1C04320_55* weekStatInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::Class_1_FA4F4A67B1C04320_55*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE_SENDSTARTCOCOONSTAGEREQ_OFFSET))(this, propEntityID, cocoonID, worldLevel, challengeCount, weekStatInfo);
		}

		::System::Void SendStartQuickCocoonStageReq(::System::UInt32 cocoonID, ::System::UInt32 worldLevel, ::System::UInt32 challengeCount, ::Class_1_FA4F4A67B1C04320_55* weekStatInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::Class_1_FA4F4A67B1C04320_55*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE_SENDSTARTQUICKCOCOONSTAGEREQ_OFFSET))(this, cocoonID, worldLevel, challengeCount, weekStatInfo);
		}

		::System::Boolean IsFarmBanned(::System::UInt32 farmID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE_ISFARMBANNED_OFFSET))(this, farmID);
		}

		::System::Boolean CheckFarmBanWithHint(::System::UInt32 farmID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE_CHECKFARMBANWITHHINT_OFFSET))(this, farmID);
		}

		::System::Boolean IsLockedByFarmStageAdvanceLimit(::System::UInt32 farmID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE_ISLOCKEDBYFARMSTAGEADVANCELIMIT_OFFSET))(this, farmID);
		}

		::System::String* GetFarmLockHintByFarmStageAdvanceLimit(::System::UInt32 farmID)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE_GETFARMLOCKHINTBYFARMSTAGEADVANCELIMIT_OFFSET))(this, farmID);
		}

		::RPG::Client::FarmBattleResultInfo* CreateFarmBattleResult()
		{
			return ((::RPG::Client::FarmBattleResultInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE_CREATEFARMBATTLERESULT_OFFSET))(this);
		}

		::RPG::Client::FarmBattleResultInfo* GetWeekFarmBattleResult()
		{
			return ((::RPG::Client::FarmBattleResultInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE_GETWEEKFARMBATTLERESULT_OFFSET))(this);
		}

		::System::Void RecordWeekFarmResultByBattleResult()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE_RECORDWEEKFARMRESULTBYBATTLERESULT_OFFSET))(this);
		}

		::System::Void _AddFarmBattleResultInfo(::RPG::Client::FarmBattleResultInfo* farmBattleResultInfo)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FarmBattleResultInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE__ADDFARMBATTLERESULTINFO_OFFSET))(this, farmBattleResultInfo);
		}

		::System::Void ClearWeekFarmBattleResult()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE_CLEARWEEKFARMBATTLERESULT_OFFSET))(this);
		}

		::System::Void TryEnterNextWeekFarmBattle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE_TRYENTERNEXTWEEKFARMBATTLE_OFFSET))(this);
		}

		::System::Void ResetWeekFarmBattleCurCount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE_RESETWEEKFARMBATTLECURCOUNT_OFFSET))(this);
		}

		::System::Void TryShowCurWeekFarmBattleResultPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE_TRYSHOWCURWEEKFARMBATTLERESULTPAGE_OFFSET))(this);
		}

		::RPG::Client::FarmData* get_FarmData()
		{
			return ((::RPG::Client::FarmData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE_GET_FARMDATA_OFFSET))(this);
		}

		::System::Void set_FarmData(::RPG::Client::FarmData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FarmData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE_SET_FARMDATA_OFFSET))(this, value);
		}

		::System::UInt32 get_WeekFarmLimitCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE_GET_WEEKFARMLIMITCOUNT_OFFSET))(this);
		}

		::System::Void set_WeekFarmLimitCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE_SET_WEEKFARMLIMITCOUNT_OFFSET))(this, value);
		}

		::System::UInt32 get_WeekFarmBattleCurCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE_GET_WEEKFARMBATTLECURCOUNT_OFFSET))(this);
		}

		::System::Void set_WeekFarmBattleCurCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE_SET_WEEKFARMBATTLECURCOUNT_OFFSET))(this, value);
		}

		::System::Boolean get_NeedCheckWeekFarmBattleRsp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE_GET_NEEDCHECKWEEKFARMBATTLERSP_OFFSET))(this);
		}

		::System::Void set_NeedCheckWeekFarmBattleRsp(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE_SET_NEEDCHECKWEEKFARMBATTLERSP_OFFSET))(this, value);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}
	};
}
