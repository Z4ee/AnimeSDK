#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/Client/StoryLineSwitchReason.h"

class Class_1_3F8940FD3C5B12AD;
class Class_1_66C20D6C355B068E_5;
namespace RPG::Client { class StoryLineData; }
namespace System { class Action; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_STORYLINEMODULE_CANSWITCHTOOTHERLINE_OFFSET UNITYSDK_OFFSET(0xB1DEF20)
#define RPG_CLIENT_STORYLINEMODULE_CLEARTEAMHINTEFFECTFLAG_OFFSET UNITYSDK_OFFSET(0xB1DEC40)
#define RPG_CLIENT_STORYLINEMODULE_CURRENTPLANECANSWITCHLINE_OFFSET UNITYSDK_OFFSET(0xB1DEFC0)
#define RPG_CLIENT_STORYLINEMODULE_GETSTORYLINE_OFFSET UNITYSDK_OFFSET(0xB1DE7D0)
#define RPG_CLIENT_STORYLINEMODULE_GETSWITCHABLELINES_OFFSET UNITYSDK_OFFSET(0xB1DED00)
#define RPG_CLIENT_STORYLINEMODULE_GET_CURRENTLINE_OFFSET UNITYSDK_OFFSET(0xB1DE3F0)
#define RPG_CLIENT_STORYLINEMODULE_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xB1DE390)
#define RPG_CLIENT_STORYLINEMODULE_GET_MAINLINE_OFFSET UNITYSDK_OFFSET(0xB1DE400)
#define RPG_CLIENT_STORYLINEMODULE_INITSTORYLINEBYSNAPSHOT_OFFSET UNITYSDK_OFFSET(0xB1DF1B0)
#define RPG_CLIENT_STORYLINEMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xB1DF2B0)
#define RPG_CLIENT_STORYLINEMODULE_ISMAINLINE_OFFSET UNITYSDK_OFFSET(0xB1DE6E0)
#define RPG_CLIENT_STORYLINEMODULE_ISSTORYLINE_OFFSET UNITYSDK_OFFSET(0xB1DE770)
#define RPG_CLIENT_STORYLINEMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xB1DF520)
#define RPG_CLIENT_STORYLINEMODULE_SENDSTORYLINEDATA_OFFSET UNITYSDK_OFFSET(0xB1DE570)
#define RPG_CLIENT_STORYLINEMODULE_SETAUTOSHOW_OFFSET UNITYSDK_OFFSET(0xB1DF100)
#define RPG_CLIENT_STORYLINEMODULE_SETREPORTDATA_OFFSET UNITYSDK_OFFSET(0xB1DEC80)
#define RPG_CLIENT_STORYLINEMODULE_SHOULDSHOWTEAMHINTEFFECT_OFFSET UNITYSDK_OFFSET(0xB1DEC00)
#define RPG_CLIENT_STORYLINEMODULE_SWITCHLINE_1_OFFSET UNITYSDK_OFFSET(0xB1DE890)
#define RPG_CLIENT_STORYLINEMODULE_SWITCHLINE_OFFSET UNITYSDK_OFFSET(0xB1DE820)
#define RPG_CLIENT_STORYLINEMODULE_TRYAUTOSHOW_OFFSET UNITYSDK_OFFSET(0xB1DF150)
#define RPG_CLIENT_STORYLINEMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xB1DF790)
#define RPG_CLIENT_STORYLINEMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xB1DF670)
#define RPG_CLIENT_STORYLINEMODULE__BEFORESWTICHLINE_OFFSET UNITYSDK_OFFSET(0xB1E0A40)
#define RPG_CLIENT_STORYLINEMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xB1DE500)
#define RPG_CLIENT_STORYLINEMODULE__GETLINE_OFFSET UNITYSDK_OFFSET(0xB1DE450)
#define RPG_CLIENT_STORYLINEMODULE__GETPREVIOUSSTORYLINE_OFFSET UNITYSDK_OFFSET(0xB1DEEC0)
#define RPG_CLIENT_STORYLINEMODULE__INITSTORYLINES_OFFSET UNITYSDK_OFFSET(0xB1DF340)
#define RPG_CLIENT_STORYLINEMODULE__ONCHANGESTORYLINEFINISHSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xB1DFBF0)
#define RPG_CLIENT_STORYLINEMODULE__ONCMDGETBASICINFOSCRSP_OFFSET UNITYSDK_OFFSET(0xB1DFE00)
#define RPG_CLIENT_STORYLINEMODULE__ONCMDSTORYLINETRIALAVATARCHANGESCNOTIFY_OFFSET UNITYSDK_OFFSET(0xB1DFF60)
#define RPG_CLIENT_STORYLINEMODULE__ONCONDITIONCHECKED_OFFSET UNITYSDK_OFFSET(0xB1E08C0)
#define RPG_CLIENT_STORYLINEMODULE__ONHIDELOADINGPAGE_OFFSET UNITYSDK_OFFSET(0xB1E0590)
#define RPG_CLIENT_STORYLINEMODULE__ONMAINMISSIONFINISHED_OFFSET UNITYSDK_OFFSET(0xB1E0650)
#define RPG_CLIENT_STORYLINEMODULE__ONSTORYLINEINFOSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xB1DF930)
#define RPG_CLIENT_STORYLINEMODULE__ONSTORYLINEUPDATE_OFFSET UNITYSDK_OFFSET(0xB1DF230)
#define RPG_CLIENT_STORYLINEMODULE__ONSUBMISSIONFINISHED_OFFSET UNITYSDK_OFFSET(0xB1E06B0)
#define RPG_CLIENT_STORYLINEMODULE__ONSWITCHLINE_OFFSET UNITYSDK_OFFSET(0xB1E0B10)
#define RPG_CLIENT_STORYLINEMODULE__REFRESHSTORYLINESTATUS_OFFSET UNITYSDK_OFFSET(0xB1DF9C0)
#define RPG_CLIENT_STORYLINEMODULE__SETUPSTORYLINELOADING_OFFSET UNITYSDK_OFFSET(0xB1E0C30)
#define RPG_CLIENT_STORYLINEMODULE__SETUPTOAST_OFFSET UNITYSDK_OFFSET(0xB1E0D10)
#define RPG_CLIENT_STORYLINEMODULE__SHOULDHIDESWITCHLINETOAST_OFFSET UNITYSDK_OFFSET(0xB1DFC80)
#define RPG_CLIENT_STORYLINEMODULE__SWITCHLINETO_OFFSET UNITYSDK_OFFSET(0xB1E0710)
#define RPG_CLIENT_STORYLINEMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xB1E0D50)
#define RPG_CLIENT_STORYLINEMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xB1E0DE0)
#define RPG_CLIENT_STORYLINEMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xB1E0EA0)
#define RPG_CLIENT_STORYLINEMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xB1E0E40)

namespace RPG::Client
{
	inline static constexpr unsigned int StoryLineModule_TypeDefinitionIndex = 62680;

	class StoryLineModule : public ::RPG::Client::BaseModule
	{
	public:
		::Class_1_3F8940FD3C5B12AD* _ReportData; // 0x10
		::RPG::Client::StoryLineData* _StoryLine; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::StoryLineData*>* _StoryLines; // 0x20
		::System::Action* _SwitchLineCallback; // 0x28
		::System::Action* _AutoShowAction; // 0x30
		::System::Boolean _ShouldShowSwitchToast; // 0x38
		::System::Boolean _ShouldShowTeamHintEffect; // 0x39
		::System::Boolean _UseStoryLineLoading; // 0x3A
		::System::UInt32 _PreviousStoryLineID; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEMODULE__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::StoryLineModule* get_Instance()
		{
			return ((::RPG::Client::StoryLineModule*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEMODULE_GET_INSTANCE_OFFSET))();
		}

		::RPG::Client::StoryLineData* get_CurrentLine()
		{
			return ((::RPG::Client::StoryLineData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEMODULE_GET_CURRENTLINE_OFFSET))(this);
		}

		::RPG::Client::StoryLineData* get_MainLine()
		{
			return ((::RPG::Client::StoryLineData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEMODULE_GET_MAINLINE_OFFSET))(this);
		}

		::System::Void SendStoryLineData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEMODULE_SENDSTORYLINEDATA_OFFSET))(this);
		}

		::System::Boolean IsMainLine()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEMODULE_ISMAINLINE_OFFSET))(this);
		}

		::System::Boolean IsStoryLine(::System::UInt32 storyLineID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEMODULE_ISSTORYLINE_OFFSET))(this, storyLineID);
		}

		::RPG::Client::StoryLineData* GetStoryLine(::System::UInt32 id)
		{
			return ((::RPG::Client::StoryLineData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEMODULE_GETSTORYLINE_OFFSET))(this, id);
		}

		::System::Void SwitchLine(::System::UInt32 id, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEMODULE_SWITCHLINE_OFFSET))(this, id, callback);
		}

		::System::Void SwitchLine_1(::System::UInt32 id, ::System::UInt32 entryID, ::System::UInt32 teleportID, ::System::Action* callback, ::System::Boolean storyLineLoading)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEMODULE_SWITCHLINE_1_OFFSET))(this, id, entryID, teleportID, callback, storyLineLoading);
		}

		::System::Boolean ShouldShowTeamHintEffect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEMODULE_SHOULDSHOWTEAMHINTEFFECT_OFFSET))(this);
		}

		::System::Void ClearTeamHintEffectFlag()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEMODULE_CLEARTEAMHINTEFFECTFLAG_OFFSET))(this);
		}

		::System::Void SetReportData(::RPG::Client::StoryLineSwitchReason reason, ::System::UInt32 param)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::StoryLineSwitchReason, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEMODULE_SETREPORTDATA_OFFSET))(this, reason, param);
		}

		::System::Collections::Generic::List_1<::RPG::Client::StoryLineData*>* GetSwitchableLines()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::StoryLineData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEMODULE_GETSWITCHABLELINES_OFFSET))(this);
		}

		::System::Boolean CanSwitchToOtherLine()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEMODULE_CANSWITCHTOOTHERLINE_OFFSET))(this);
		}

		::System::Boolean CurrentPlaneCanSwitchLine()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEMODULE_CURRENTPLANECANSWITCHLINE_OFFSET))(this);
		}

		::System::Void SetAutoShow(::System::Action* action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEMODULE_SETAUTOSHOW_OFFSET))(this, action);
		}

		::System::Void TryAutoShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEMODULE_TRYAUTOSHOW_OFFSET))(this);
		}

		::System::Void InitStoryLineBySnapshot(::System::UInt32 storyLineID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEMODULE_INITSTORYLINEBYSNAPSHOT_OFFSET))(this, storyLineID);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEMODULE_INIT_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEMODULE_ONRECONNECT_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _OnStoryLineInfoScNotify(::System::UInt16 cmd, ::System::Object* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEMODULE__ONSTORYLINEINFOSCNOTIFY_OFFSET))(this, cmd, rsp);
		}

		::System::Void _OnChangeStoryLineFinishScNotify(::System::UInt16 cmd, ::System::Object* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEMODULE__ONCHANGESTORYLINEFINISHSCNOTIFY_OFFSET))(this, cmd, rsp);
		}

		::System::Void _OnCmdGetBasicInfoScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEMODULE__ONCMDGETBASICINFOSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdStoryLineTrialAvatarChangeScNotify(::System::UInt16 cmd, ::System::Object* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEMODULE__ONCMDSTORYLINETRIALAVATARCHANGESCNOTIFY_OFFSET))(this, cmd, rsp);
		}

		::System::Void _OnHideLoadingPage(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEMODULE__ONHIDELOADINGPAGE_OFFSET))(this, arg);
		}

		::System::Void _OnMainMissionFinished(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEMODULE__ONMAINMISSIONFINISHED_OFFSET))(this, arg);
		}

		::System::Void _OnSubMissionFinished(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEMODULE__ONSUBMISSIONFINISHED_OFFSET))(this, arg);
		}

		::System::Void _OnStoryLineUpdate(::System::UInt32 storyLineID, ::System::Collections::Generic::IList_1<::System::UInt32>* trialAvatarIdList)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEMODULE__ONSTORYLINEUPDATE_OFFSET))(this, storyLineID, trialAvatarIdList);
		}

		::System::Void _RefreshStoryLineStatus(::System::Collections::Generic::IList_1<::System::UInt32>* unlockedIDs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEMODULE__REFRESHSTORYLINESTATUS_OFFSET))(this, unlockedIDs);
		}

		::System::Void _OnConditionChecked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEMODULE__ONCONDITIONCHECKED_OFFSET))(this);
		}

		::System::Void _InitStoryLines()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEMODULE__INITSTORYLINES_OFFSET))(this);
		}

		::RPG::Client::StoryLineData* _GetLine(::System::UInt32 id)
		{
			return ((::RPG::Client::StoryLineData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEMODULE__GETLINE_OFFSET))(this, id);
		}

		::RPG::Client::StoryLineData* _GetPreviousStoryLine()
		{
			return ((::RPG::Client::StoryLineData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEMODULE__GETPREVIOUSSTORYLINE_OFFSET))(this);
		}

		::System::Void _SwitchLineTo(::RPG::Client::StoryLineData* storyLine)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::StoryLineData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEMODULE__SWITCHLINETO_OFFSET))(this, storyLine);
		}

		::System::Void _SetupStoryLineLoading(::System::Boolean useStoryLineLoading)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEMODULE__SETUPSTORYLINELOADING_OFFSET))(this, useStoryLineLoading);
		}

		::System::Void _BeforeSwtichLine()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEMODULE__BEFORESWTICHLINE_OFFSET))(this);
		}

		::System::Void _OnSwitchLine()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEMODULE__ONSWITCHLINE_OFFSET))(this);
		}

		::System::Void _SetupToast()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEMODULE__SETUPTOAST_OFFSET))(this);
		}

		::System::Boolean _ShouldHideSwitchLineToast(::Class_1_66C20D6C355B068E_5* ntf)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_66C20D6C355B068E_5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEMODULE__SHOULDHIDESWITCHLINETOAST_OFFSET))(this, ntf);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}
	};
}
