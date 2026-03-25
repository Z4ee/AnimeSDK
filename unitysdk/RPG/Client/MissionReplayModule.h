#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/Client/MissionReplayModule_DownloadState.h"

class Class_1_989FA4232FA6C600;
namespace RPG::Client { class MissionChronicleBasePathData; }
namespace RPG::Client::MissionReplayData { class IMissionReplayContext; }
namespace RPG::Client::MissionReplayData { class IMissionReplayData; }
namespace RPG::Client::MissionReplayData { class IMissionReplayPerformanceData; }
namespace System { class String; }

#define RPG_CLIENT_MISSIONREPLAYMODULE_BACKTOCHRONICLEPAGE_OFFSET UNITYSDK_OFFSET(0x9BF0520)
#define RPG_CLIENT_MISSIONREPLAYMODULE_BEGINDOWNLOADMISSIONRES_OFFSET UNITYSDK_OFFSET(0x9BF1F70)
#define RPG_CLIENT_MISSIONREPLAYMODULE_DELETEDOWNLOADEDMISSIONREPLAYRES_OFFSET UNITYSDK_OFFSET(0x9BF2520)
#define RPG_CLIENT_MISSIONREPLAYMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9BF2920)
#define RPG_CLIENT_MISSIONREPLAYMODULE_EXITREPLAY_GM_OFFSET UNITYSDK_OFFSET(0x9BF06B0)
#define RPG_CLIENT_MISSIONREPLAYMODULE_GETCURINDEX_OFFSET UNITYSDK_OFFSET(0x9BF14B0)
#define RPG_CLIENT_MISSIONREPLAYMODULE_GETCURMISSIONREPLAYCONTEXT_OFFSET UNITYSDK_OFFSET(0x9BF1C00)
#define RPG_CLIENT_MISSIONREPLAYMODULE_GETCURMISSIONREPLAYDATA_OFFSET UNITYSDK_OFFSET(0x9BEF8A0)
#define RPG_CLIENT_MISSIONREPLAYMODULE_GETCURPERFORMANCEDATA_OFFSET UNITYSDK_OFFSET(0x9BEFA20)
#define RPG_CLIENT_MISSIONREPLAYMODULE_GETDOWNLOADEDMISSIONREPLAYRESSIZE_OFFSET UNITYSDK_OFFSET(0x9BF24C0)
#define RPG_CLIENT_MISSIONREPLAYMODULE_GETDOWNLOADSTATE_OFFSET UNITYSDK_OFFSET(0x9BF2280)
#define RPG_CLIENT_MISSIONREPLAYMODULE_GETISAUTOPLAYNEXT_OFFSET UNITYSDK_OFFSET(0x9BF11A0)
#define RPG_CLIENT_MISSIONREPLAYMODULE_GETLASTREPLAYPERFORMANCENUMBER_OFFSET UNITYSDK_OFFSET(0x9BF2AF0)
#define RPG_CLIENT_MISSIONREPLAYMODULE_GETLASTREPLAYSUBPAGEPATHID_OFFSET UNITYSDK_OFFSET(0x9BF2A90)
#define RPG_CLIENT_MISSIONREPLAYMODULE_GETNEEDDOWNLOADSIZE_OFFSET UNITYSDK_OFFSET(0x9BF1E40)
#define RPG_CLIENT_MISSIONREPLAYMODULE_GET__CURINDEX_OFFSET UNITYSDK_OFFSET(0x9BEFB50)
#define RPG_CLIENT_MISSIONREPLAYMODULE_GET__MISSIONREPLAYDATA_OFFSET UNITYSDK_OFFSET(0x9BEF8F0)
#define RPG_CLIENT_MISSIONREPLAYMODULE_HAVENEXTPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x9BF0FB0)
#define RPG_CLIENT_MISSIONREPLAYMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x9BF2800)
#define RPG_CLIENT_MISSIONREPLAYMODULE_ISMISSIONRESCOMPLETED_OFFSET UNITYSDK_OFFSET(0x9BF1D10)
#define RPG_CLIENT_MISSIONREPLAYMODULE_ONAUTOSELECTSETTINGCHANGEDURINGPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x9BF1AB0)
#define RPG_CLIENT_MISSIONREPLAYMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x9BF28C0)
#define RPG_CLIENT_MISSIONREPLAYMODULE_ONSINGLEPERFORMANCEEND_OFFSET UNITYSDK_OFFSET(0x9BF07A0)
#define RPG_CLIENT_MISSIONREPLAYMODULE_PAUSEDOWNLOAD_OFFSET UNITYSDK_OFFSET(0x9BF23E0)
#define RPG_CLIENT_MISSIONREPLAYMODULE_PLAYNEXTPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x9BF04B0)
#define RPG_CLIENT_MISSIONREPLAYMODULE_RESUMEDOWNLOAD_OFFSET UNITYSDK_OFFSET(0x9BF2450)
#define RPG_CLIENT_MISSIONREPLAYMODULE_SDKREPORT_OPENCHOOSEPLOTDIALOG_OFFSET UNITYSDK_OFFSET(0x9BF12E0)
#define RPG_CLIENT_MISSIONREPLAYMODULE_SDKREPORT_PERFORMANCEFINISH_OFFSET UNITYSDK_OFFSET(0x9BF0C90)
#define RPG_CLIENT_MISSIONREPLAYMODULE_SETISAUTOPLAYNEXT_OFFSET UNITYSDK_OFFSET(0x9BF1500)
#define RPG_CLIENT_MISSIONREPLAYMODULE_SETMISSIONREPLAYCONTEXT_OFFSET UNITYSDK_OFFSET(0x9BEF850)
#define RPG_CLIENT_MISSIONREPLAYMODULE_SETMISSIONREPLAYDATA_OFFSET UNITYSDK_OFFSET(0x9BEF9D0)
#define RPG_CLIENT_MISSIONREPLAYMODULE_SET__CURINDEX_OFFSET UNITYSDK_OFFSET(0x9BEFFE0)
#define RPG_CLIENT_MISSIONREPLAYMODULE_STARTREPLAYMISSION_OFFSET UNITYSDK_OFFSET(0x9BEFF70)
#define RPG_CLIENT_MISSIONREPLAYMODULE_STOPDOWNLOAD_OFFSET UNITYSDK_OFFSET(0x9BF22C0)
#define RPG_CLIENT_MISSIONREPLAYMODULE_TRYAUTOSHOW_OFFSET UNITYSDK_OFFSET(0x9BF29A0)
#define RPG_CLIENT_MISSIONREPLAYMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x9BF2880)
#define RPG_CLIENT_MISSIONREPLAYMODULE__BEGINBLACKSCREEN_OFFSET UNITYSDK_OFFSET(0x9BF1200)
#define RPG_CLIENT_MISSIONREPLAYMODULE__CHECKCURINDEX_OFFSET UNITYSDK_OFFSET(0x9BF00D0)
#define RPG_CLIENT_MISSIONREPLAYMODULE__CHECKHAVENEXTPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x9BEFD70)
#define RPG_CLIENT_MISSIONREPLAYMODULE__CHECKPERFORMANCELIST_OFFSET UNITYSDK_OFFSET(0x9BF1980)
#define RPG_CLIENT_MISSIONREPLAYMODULE__CLOSEBLACKSCREEN_OFFSET UNITYSDK_OFFSET(0x9BF1110)
#define RPG_CLIENT_MISSIONREPLAYMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x9BF27E0)
#define RPG_CLIENT_MISSIONREPLAYMODULE__DISPOSEDOWNLOADHANDLER_OFFSET UNITYSDK_OFFSET(0x9BF1CB0)
#define RPG_CLIENT_MISSIONREPLAYMODULE__DISPOSE_REPLAY_OFFSET UNITYSDK_OFFSET(0x9BEF810)
#define RPG_CLIENT_MISSIONREPLAYMODULE__DISPOSE_RESOURCE_OFFSET UNITYSDK_OFFSET(0x9BF1C40)
#define RPG_CLIENT_MISSIONREPLAYMODULE__GETNEXTPERFORMANCEDATA_OFFSET UNITYSDK_OFFSET(0x9BEFC20)
#define RPG_CLIENT_MISSIONREPLAYMODULE__ONDOWNLOADFAILED_OFFSET UNITYSDK_OFFSET(0x9BF26F0)
#define RPG_CLIENT_MISSIONREPLAYMODULE__ONDOWNLOADSUCCESS_OFFSET UNITYSDK_OFFSET(0x9BF2600)
#define RPG_CLIENT_MISSIONREPLAYMODULE__PLAYCURRENTPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x9BF02A0)
#define RPG_CLIENT_MISSIONREPLAYMODULE__RECORDBEFOREREPLAY_OFFSET UNITYSDK_OFFSET(0x9BF2B90)
#define RPG_CLIENT_MISSIONREPLAYMODULE__SETAUTOSHOW_OFFSET UNITYSDK_OFFSET(0x9BF2B50)
#define RPG_CLIENT_MISSIONREPLAYMODULE__SETDOWNLOADSTATE_OFFSET UNITYSDK_OFFSET(0x9BF2580)
#define RPG_CLIENT_MISSIONREPLAYMODULE__SETNEXTLOADINGPAGE_OFFSET UNITYSDK_OFFSET(0x9BF2CA0)
#define RPG_CLIENT_MISSIONREPLAYMODULE__STARTRECORDFORSDKREPORTPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x9BF17C0)
#define RPG_CLIENT_MISSIONREPLAYMODULE__TRYSTARTREPLAYMISSION_OFFSET UNITYSDK_OFFSET(0x9BF1560)
#define RPG_CLIENT_MISSIONREPLAYMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9BF2E90)
#define RPG_CLIENT_MISSIONREPLAYMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x9BF2D40)
#define RPG_CLIENT_MISSIONREPLAYMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x9BF2E30)
#define RPG_CLIENT_MISSIONREPLAYMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x9BF2DD0)

namespace RPG::Client
{
	inline static constexpr unsigned int MissionReplayModule_TypeDefinitionIndex = 53816;

	class MissionReplayModule : public ::RPG::Client::BaseModule
	{
	public:
		::RPG::Client::MissionChronicleBasePathData* _LastClickMainPagePathData; // 0x10
		::Class_1_989FA4232FA6C600* _DownloadHandler; // 0x18
		::RPG::Client::MissionChronicleBasePathData* _LastClickSubPagePathData; // 0x20
		::RPG::Client::MissionReplayData::IMissionReplayContext* _ReplayContext; // 0x28
		::System::Boolean _IsPausing; // 0x30
		::System::Boolean _IsAutoSelectUsed; // 0x31
		::System::Boolean _IsAutoPlayNextOpenedAtBegin; // 0x32
		::System::Boolean _IsWaitShowOriginalPage; // 0x33
		::RPG::Client::MissionReplayModule_DownloadState _CurDownloadState; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE__CTOR_OFFSET))(this);
		}

		::System::Void _Dispose_Replay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE__DISPOSE_REPLAY_OFFSET))(this);
		}

		::System::Void SetMissionReplayContext(::RPG::Client::MissionReplayData::IMissionReplayContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MissionReplayData::IMissionReplayContext*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE_SETMISSIONREPLAYCONTEXT_OFFSET))(this, context);
		}

		::RPG::Client::MissionReplayData::IMissionReplayData* GetCurMissionReplayData()
		{
			return ((::RPG::Client::MissionReplayData::IMissionReplayData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE_GETCURMISSIONREPLAYDATA_OFFSET))(this);
		}

		::System::Void SetMissionReplayData(::RPG::Client::MissionReplayData::IMissionReplayData* replayData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MissionReplayData::IMissionReplayData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE_SETMISSIONREPLAYDATA_OFFSET))(this, replayData);
		}

		::RPG::Client::MissionReplayData::IMissionReplayPerformanceData* GetCurPerformanceData()
		{
			return ((::RPG::Client::MissionReplayData::IMissionReplayPerformanceData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE_GETCURPERFORMANCEDATA_OFFSET))(this);
		}

		::RPG::Client::MissionReplayData::IMissionReplayPerformanceData* _GetNextPerformanceData()
		{
			return ((::RPG::Client::MissionReplayData::IMissionReplayPerformanceData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE__GETNEXTPERFORMANCEDATA_OFFSET))(this);
		}

		::System::Void StartReplayMission(::System::UInt32 beginNumber)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE_STARTREPLAYMISSION_OFFSET))(this, beginNumber);
		}

		::System::Void PlayNextPerformance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE_PLAYNEXTPERFORMANCE_OFFSET))(this);
		}

		::System::Void BackToChroniclePage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE_BACKTOCHRONICLEPAGE_OFFSET))(this);
		}

		::System::Void ExitReplay_GM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE_EXITREPLAY_GM_OFFSET))(this);
		}

		::System::Void OnSinglePerformanceEnd(::System::Boolean isGM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE_ONSINGLEPERFORMANCEEND_OFFSET))(this, isGM);
		}

		::System::Void _BeginBlackScreen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE__BEGINBLACKSCREEN_OFFSET))(this);
		}

		::System::Void _CloseBlackScreen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE__CLOSEBLACKSCREEN_OFFSET))(this);
		}

		::System::Boolean HaveNextPerformance()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE_HAVENEXTPERFORMANCE_OFFSET))(this);
		}

		::System::UInt32 GetCurIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE_GETCURINDEX_OFFSET))(this);
		}

		::System::Boolean GetIsAutoPlayNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE_GETISAUTOPLAYNEXT_OFFSET))(this);
		}

		::System::Void SetIsAutoPlayNext(::System::Boolean isAutoPlayNext)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE_SETISAUTOPLAYNEXT_OFFSET))(this, isAutoPlayNext);
		}

		::System::Void _PlayCurrentPerformance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE__PLAYCURRENTPERFORMANCE_OFFSET))(this);
		}

		::System::Boolean _TryStartReplayMission(::RPG::Client::MissionReplayData::IMissionReplayPerformanceData* performanceData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MissionReplayData::IMissionReplayPerformanceData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE__TRYSTARTREPLAYMISSION_OFFSET))(this, performanceData);
		}

		::System::Boolean _CheckCurIndex()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE__CHECKCURINDEX_OFFSET))(this);
		}

		::System::Boolean _CheckHaveNextPerformance()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE__CHECKHAVENEXTPERFORMANCE_OFFSET))(this);
		}

		::System::Boolean _CheckPerformanceList()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE__CHECKPERFORMANCELIST_OFFSET))(this);
		}

		::System::Void SDKReport_OpenChoosePlotDialog(::System::String* UIFrom)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE_SDKREPORT_OPENCHOOSEPLOTDIALOG_OFFSET))(this, UIFrom);
		}

		::System::Void SDKReport_PerformanceFinish(::System::Boolean isFinished)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE_SDKREPORT_PERFORMANCEFINISH_OFFSET))(this, isFinished);
		}

		::System::Void OnAutoSelectSettingChangeDuringPerformance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE_ONAUTOSELECTSETTINGCHANGEDURINGPERFORMANCE_OFFSET))(this);
		}

		::RPG::Client::MissionReplayData::IMissionReplayContext* GetCurMissionReplayContext()
		{
			return ((::RPG::Client::MissionReplayData::IMissionReplayContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE_GETCURMISSIONREPLAYCONTEXT_OFFSET))(this);
		}

		::System::Void _StartRecordForSDKReportPerformance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE__STARTRECORDFORSDKREPORTPERFORMANCE_OFFSET))(this);
		}

		::RPG::Client::MissionReplayData::IMissionReplayData* get__MissionReplayData()
		{
			return ((::RPG::Client::MissionReplayData::IMissionReplayData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE_GET__MISSIONREPLAYDATA_OFFSET))(this);
		}

		::System::Int32 get__CurIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE_GET__CURINDEX_OFFSET))(this);
		}

		::System::Void set__CurIndex(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE_SET__CURINDEX_OFFSET))(this, value);
		}

		::System::Void _Dispose_Resource()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE__DISPOSE_RESOURCE_OFFSET))(this);
		}

		::System::Boolean IsMissionResCompleted(::RPG::Client::MissionReplayData::IMissionReplayData* replayData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MissionReplayData::IMissionReplayData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE_ISMISSIONRESCOMPLETED_OFFSET))(this, replayData);
		}

		::System::Int64 GetNeedDownloadSize(::RPG::Client::MissionReplayData::IMissionReplayData* replayData)
		{
			return ((::System::Int64(*)(::PVOID, ::RPG::Client::MissionReplayData::IMissionReplayData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE_GETNEEDDOWNLOADSIZE_OFFSET))(this, replayData);
		}

		::System::Void BeginDownloadMissionRes(::RPG::Client::MissionReplayData::IMissionReplayData* replayData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MissionReplayData::IMissionReplayData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE_BEGINDOWNLOADMISSIONRES_OFFSET))(this, replayData);
		}

		::RPG::Client::MissionReplayModule_DownloadState GetDownloadState()
		{
			return ((::RPG::Client::MissionReplayModule_DownloadState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE_GETDOWNLOADSTATE_OFFSET))(this);
		}

		::System::Void StopDownload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE_STOPDOWNLOAD_OFFSET))(this);
		}

		::System::Void PauseDownload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE_PAUSEDOWNLOAD_OFFSET))(this);
		}

		::System::Void ResumeDownload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE_RESUMEDOWNLOAD_OFFSET))(this);
		}

		::System::Int64 GetDownloadedMissionReplayResSize()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE_GETDOWNLOADEDMISSIONREPLAYRESSIZE_OFFSET))(this);
		}

		::System::Void DeleteDownloadedMissionReplayRes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE_DELETEDOWNLOADEDMISSIONREPLAYRES_OFFSET))(this);
		}

		::System::Void _DisposeDownloadHandler()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE__DISPOSEDOWNLOADHANDLER_OFFSET))(this);
		}

		::System::Void _SetDownloadState(::RPG::Client::MissionReplayModule_DownloadState newState)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MissionReplayModule_DownloadState))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE__SETDOWNLOADSTATE_OFFSET))(this, newState);
		}

		::System::Void _OnDownloadSuccess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE__ONDOWNLOADSUCCESS_OFFSET))(this);
		}

		::System::Void _OnDownloadFailed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE__ONDOWNLOADFAILED_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE_INIT_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE_ONRECONNECT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void TryAutoShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE_TRYAUTOSHOW_OFFSET))(this);
		}

		::System::UInt32 GetLastReplaySubPagePathID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE_GETLASTREPLAYSUBPAGEPATHID_OFFSET))(this);
		}

		::System::UInt32 GetLastReplayPerformanceNumber()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE_GETLASTREPLAYPERFORMANCENUMBER_OFFSET))(this);
		}

		::System::Void _SetAutoShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE__SETAUTOSHOW_OFFSET))(this);
		}

		::System::Void _RecordBeforeReplay(::System::UInt32 performanceNumber)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE__RECORDBEFOREREPLAY_OFFSET))(this, performanceNumber);
		}

		::System::Void _SetNextLoadingPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE__SETNEXTLOADINGPAGE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}
	};
}
