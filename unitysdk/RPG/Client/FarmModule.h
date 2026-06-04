#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

class Class_1_D17272E82AE804C2_64;
namespace RPG::Client { class FarmBattleResultInfo; }
namespace RPG::Client { class FarmData; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::GameCore { class MappingInfoRow; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_CLIENT_FARMMODULE_CHECKFARMBANWITHHINT_OFFSET UNITYSDK_OFFSET(0xB97B0E0)
#define RPG_CLIENT_FARMMODULE_CLEARAUTOSHOW_OFFSET UNITYSDK_OFFSET(0xB979180)
#define RPG_CLIENT_FARMMODULE_CLEARWEEKFARMBATTLERESULT_OFFSET UNITYSDK_OFFSET(0xB97B970)
#define RPG_CLIENT_FARMMODULE_CREATEFARMBATTLERESULT_OFFSET UNITYSDK_OFFSET(0xB97B3B0)
#define RPG_CLIENT_FARMMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB978DC0)
#define RPG_CLIENT_FARMMODULE_GETFARMLOCKHINTBYFARMSTAGEADVANCELIMIT_OFFSET UNITYSDK_OFFSET(0xB97B310)
#define RPG_CLIENT_FARMMODULE_GETFARMMAPPINGINFOROW_OFFSET UNITYSDK_OFFSET(0xB97A360)
#define RPG_CLIENT_FARMMODULE_GETFARMMAXLEVEL_OFFSET UNITYSDK_OFFSET(0xB979D30)
#define RPG_CLIENT_FARMMODULE_GETQUICKFARMENDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xB97A030)
#define RPG_CLIENT_FARMMODULE_GETQUICKFARMNEXTBEGINTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xB97A240)
#define RPG_CLIENT_FARMMODULE_GETWEEKFARMBATTLERESULT_OFFSET UNITYSDK_OFFSET(0xB97B7A0)
#define RPG_CLIENT_FARMMODULE_GET_FARMDATA_OFFSET UNITYSDK_OFFSET(0xB97BAC0)
#define RPG_CLIENT_FARMMODULE_GET_NEEDCHECKWEEKFARMBATTLERSP_OFFSET UNITYSDK_OFFSET(0xB97BB20)
#define RPG_CLIENT_FARMMODULE_GET_WEEKFARMBATTLECURCOUNT_OFFSET UNITYSDK_OFFSET(0xB97BB00)
#define RPG_CLIENT_FARMMODULE_GET_WEEKFARMLIMITCOUNT_OFFSET UNITYSDK_OFFSET(0xB97BAE0)
#define RPG_CLIENT_FARMMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xB978C80)
#define RPG_CLIENT_FARMMODULE_ISFARMAVAILABLE_OFFSET UNITYSDK_OFFSET(0xB9799A0)
#define RPG_CLIENT_FARMMODULE_ISFARMBANNED_OFFSET UNITYSDK_OFFSET(0xB97AF40)
#define RPG_CLIENT_FARMMODULE_ISFARMDAILY_OFFSET UNITYSDK_OFFSET(0xB979C40)
#define RPG_CLIENT_FARMMODULE_ISFARMOPEN_OFFSET UNITYSDK_OFFSET(0xB979BB0)
#define RPG_CLIENT_FARMMODULE_ISFARMWEEKLY_OFFSET UNITYSDK_OFFSET(0xB979B20)
#define RPG_CLIENT_FARMMODULE_ISLOCKEDBYFARMSTAGEADVANCELIMIT_OFFSET UNITYSDK_OFFSET(0xB97B230)
#define RPG_CLIENT_FARMMODULE_ISQUICKFARMOPEN_OFFSET UNITYSDK_OFFSET(0xB979E20)
#define RPG_CLIENT_FARMMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xB978E10)
#define RPG_CLIENT_FARMMODULE_RECORDWEEKFARMRESULTBYBATTLERESULT_OFFSET UNITYSDK_OFFSET(0xB97B800)
#define RPG_CLIENT_FARMMODULE_REENTERFARMWITHSTATINFO_OFFSET UNITYSDK_OFFSET(0xB97A960)
#define RPG_CLIENT_FARMMODULE_REENTERFARM_OFFSET UNITYSDK_OFFSET(0xB97A900)
#define RPG_CLIENT_FARMMODULE_RESETWEEKFARMBATTLECURCOUNT_OFFSET UNITYSDK_OFFSET(0xB97BA70)
#define RPG_CLIENT_FARMMODULE_SENDSTARTCOCOONSTAGEREQ_OFFSET UNITYSDK_OFFSET(0xB97ACA0)
#define RPG_CLIENT_FARMMODULE_SENDSTARTQUICKCOCOONSTAGEREQ_OFFSET UNITYSDK_OFFSET(0xB97AE00)
#define RPG_CLIENT_FARMMODULE_SET_FARMDATA_OFFSET UNITYSDK_OFFSET(0xB97BAD0)
#define RPG_CLIENT_FARMMODULE_SET_NEEDCHECKWEEKFARMBATTLERSP_OFFSET UNITYSDK_OFFSET(0xB97BB30)
#define RPG_CLIENT_FARMMODULE_SET_WEEKFARMBATTLECURCOUNT_OFFSET UNITYSDK_OFFSET(0xB97BB10)
#define RPG_CLIENT_FARMMODULE_SET_WEEKFARMLIMITCOUNT_OFFSET UNITYSDK_OFFSET(0xB97BAF0)
#define RPG_CLIENT_FARMMODULE_STARTFARMELEMENT_OFFSET UNITYSDK_OFFSET(0xB97A470)
#define RPG_CLIENT_FARMMODULE_STARTQUICKFARMBATTLE_OFFSET UNITYSDK_OFFSET(0xB979720)
#define RPG_CLIENT_FARMMODULE_TRYAUTOSHOW_OFFSET UNITYSDK_OFFSET(0xB978E90)
#define RPG_CLIENT_FARMMODULE_TRYENTERNEXTWEEKFARMBATTLE_OFFSET UNITYSDK_OFFSET(0xB97B9C0)
#define RPG_CLIENT_FARMMODULE_TRYSHOWCURWEEKFARMBATTLERESULTPAGE_OFFSET UNITYSDK_OFFSET(0xB979610)
#define RPG_CLIENT_FARMMODULE__ADDFARMBATTLERESULTINFO_OFFSET UNITYSDK_OFFSET(0xB97B510)
#define RPG_CLIENT_FARMMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xB9791D0)
#define RPG_CLIENT_FARMMODULE__CCTOR_OFFSET UNITYSDK_OFFSET(0xB97BB80)
#define RPG_CLIENT_FARMMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xB97BB40)
#define RPG_CLIENT_FARMMODULE__ONACTIVEFARMELEMENTSCRSP_OFFSET UNITYSDK_OFFSET(0xB979400)
#define RPG_CLIENT_FARMMODULE__ONSTARTCOCOONSTAGERSP_OFFSET UNITYSDK_OFFSET(0xB979590)
#define RPG_CLIENT_FARMMODULE__ONSTARTQUICKCOCOONSTAGERSP_OFFSET UNITYSDK_OFFSET(0xB9796A0)
#define RPG_CLIENT_FARMMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB97BC10)
#define RPG_CLIENT_FARMMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xB97BB90)
#define RPG_CLIENT_FARMMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xB97BC20)
#define RPG_CLIENT_FARMMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xB97BC80)

namespace RPG::Client
{
	inline static constexpr unsigned int FarmModule_TypeDefinitionIndex = 59780;

	class FarmModule : public ::RPG::Client::BaseModule
	{
	public:
		static ::System::UInt32* StaticGet_SEND_START_ELEMENT_INTERVAL()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(FarmModule_TypeDefinitionIndex)->GetStaticField(0x8150);
		}
		::RPG::Client::FarmData* _FarmData_k__BackingField; // 0x10
		::RPG::Client::Promises::Promise* _FarmElementStarted; // 0x18
		::RPG::Client::FarmBattleResultInfo* _WeekFarmBattleResult; // 0x20
		::System::UInt32 _SentStartElementTime; // 0x28
		::System::UInt32 _WeekFarmLimitCount_k__BackingField; // 0x2C
		::System::Boolean _NeedCheckWeekFarmBattleRsp_k__BackingField; // 0x30
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

		::System::Void _OnActiveFarmElementScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE__ONACTIVEFARMELEMENTSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnStartCocoonStageRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE__ONSTARTCOCOONSTAGERSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnStartQuickCocoonStageRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE__ONSTARTQUICKCOCOONSTAGERSP_OFFSET))(this, a1, a2);
		}

		::System::Void StartQuickFarmBattle(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE_STARTQUICKFARMBATTLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean IsFarmAvailable(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE_ISFARMAVAILABLE_OFFSET))(this, a1);
		}

		::System::Boolean IsFarmOpen(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE_ISFARMOPEN_OFFSET))(this, a1);
		}

		::System::Boolean IsFarmWeekly(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE_ISFARMWEEKLY_OFFSET))(this, a1);
		}

		::System::Boolean IsFarmDaily(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE_ISFARMDAILY_OFFSET))(this, a1);
		}

		::System::UInt32 GetFarmMaxLevel(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE_GETFARMMAXLEVEL_OFFSET))(this, a1);
		}

		::System::Boolean IsQuickFarmOpen(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE_ISQUICKFARMOPEN_OFFSET))(this, a1);
		}

		::System::UInt32 GetQuickFarmEndTimeStamp(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE_GETQUICKFARMENDTIMESTAMP_OFFSET))(this, a1);
		}

		::System::UInt32 GetQuickFarmNextBeginTimeStamp(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE_GETQUICKFARMNEXTBEGINTIMESTAMP_OFFSET))(this, a1);
		}

		::RPG::GameCore::MappingInfoRow* GetFarmMappingInfoRow(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MappingInfoRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE_GETFARMMAPPINGINFOROW_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* StartFarmElement(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE_STARTFARMELEMENT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ReEnterFarm(::RPG::Client::FarmData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FarmData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE_REENTERFARM_OFFSET))(this, a1);
		}

		::System::Void ReEnterFarmWithStatInfo(::RPG::Client::FarmData* a1, ::Class_1_D17272E82AE804C2_64* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FarmData*, ::Class_1_D17272E82AE804C2_64*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE_REENTERFARMWITHSTATINFO_OFFSET))(this, a1, a2);
		}

		::System::Void SendStartCocoonStageReq(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::Class_1_D17272E82AE804C2_64* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::Class_1_D17272E82AE804C2_64*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE_SENDSTARTCOCOONSTAGEREQ_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void SendStartQuickCocoonStageReq(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::Class_1_D17272E82AE804C2_64* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::Class_1_D17272E82AE804C2_64*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE_SENDSTARTQUICKCOCOONSTAGEREQ_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean IsFarmBanned(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE_ISFARMBANNED_OFFSET))(this, a1);
		}

		::System::Boolean CheckFarmBanWithHint(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE_CHECKFARMBANWITHHINT_OFFSET))(this, a1);
		}

		::System::Boolean IsLockedByFarmStageAdvanceLimit(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE_ISLOCKEDBYFARMSTAGEADVANCELIMIT_OFFSET))(this, a1);
		}

		::System::String* GetFarmLockHintByFarmStageAdvanceLimit(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE_GETFARMLOCKHINTBYFARMSTAGEADVANCELIMIT_OFFSET))(this, a1);
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

		::System::Void _AddFarmBattleResultInfo(::RPG::Client::FarmBattleResultInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FarmBattleResultInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE__ADDFARMBATTLERESULTINFO_OFFSET))(this, a1);
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

		::System::Void set_FarmData(::RPG::Client::FarmData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FarmData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE_SET_FARMDATA_OFFSET))(this, a1);
		}

		::System::UInt32 get_WeekFarmLimitCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE_GET_WEEKFARMLIMITCOUNT_OFFSET))(this);
		}

		::System::Void set_WeekFarmLimitCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE_SET_WEEKFARMLIMITCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_WeekFarmBattleCurCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE_GET_WEEKFARMBATTLECURCOUNT_OFFSET))(this);
		}

		::System::Void set_WeekFarmBattleCurCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE_SET_WEEKFARMBATTLECURCOUNT_OFFSET))(this, a1);
		}

		::System::Boolean get_NeedCheckWeekFarmBattleRsp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE_GET_NEEDCHECKWEEKFARMBATTLERSP_OFFSET))(this);
		}

		::System::Void set_NeedCheckWeekFarmBattleRsp(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE_SET_NEEDCHECKWEEKFARMBATTLERSP_OFFSET))(this, a1);
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
