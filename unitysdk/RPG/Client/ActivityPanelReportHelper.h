#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelBtnGoClickReportGuideType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IActivityPanelReportable; }
namespace RPG::Client { class IResidentActivityPanelData; }
namespace RPG::Client { class RogueResidentActivityPanelData; }
namespace System { class String; }

#define RPG_CLIENT_ACTIVITYPANELREPORTHELPER_REPORTACTIVITYPANELBTNGOCLICK_ACTIVITYGOTO_OFFSET UNITYSDK_OFFSET(0x9C37B40)
#define RPG_CLIENT_ACTIVITYPANELREPORTHELPER_REPORTACTIVITYPANELBTNGOCLICK_EARLYACCESS_OFFSET UNITYSDK_OFFSET(0x9C37C60)
#define RPG_CLIENT_ACTIVITYPANELREPORTHELPER_REPORTACTIVITYPANELBTNGOCLICK_GUIDEGOTOLEGACYBYMISSION_OFFSET UNITYSDK_OFFSET(0x9C37AD0)
#define RPG_CLIENT_ACTIVITYPANELREPORTHELPER_REPORTACTIVITYPANELBTNGOCLICK_GUIDEGOTO_OFFSET UNITYSDK_OFFSET(0x9C379B0)
#define RPG_CLIENT_ACTIVITYPANELREPORTHELPER_REPORTACTIVITYPANELBTNGOCLICK_GUIDETAKEMISSION_OFFSET UNITYSDK_OFFSET(0x9C37670)
#define RPG_CLIENT_ACTIVITYPANELREPORTHELPER_REPORTACTIVITYPANELBTNGOCLICK_LEGACYROGUE_OFFSET UNITYSDK_OFFSET(0x9C37D20)
#define RPG_CLIENT_ACTIVITYPANELREPORTHELPER_REPORTACTIVITYPANELBTNGOCLICK_WORLDUNLOCK_OFFSET UNITYSDK_OFFSET(0x9C37CC0)
#define RPG_CLIENT_ACTIVITYPANELREPORTHELPER_REPORTSHOWRESIDENTACTIVITYDETAIL_OFFSET UNITYSDK_OFFSET(0x9C37E30)
#define RPG_CLIENT_ACTIVITYPANELREPORTHELPER__REPORTACTIVITYPANELBTNGOCLICK_OFFSET UNITYSDK_OFFSET(0x9C37790)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityPanelReportHelper_TypeDefinitionIndex = 56914;

	class ActivityPanelReportHelper : public ::System::Object
	{
	public:
		static ::System::Void ReportActivityPanelBtnGoClick_GuideTakeMission(::RPG::Client::IActivityPanelReportable* panel, ::System::String* uiFrom)
		{
			return ((::System::Void(*)(::RPG::Client::IActivityPanelReportable*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELREPORTHELPER_REPORTACTIVITYPANELBTNGOCLICK_GUIDETAKEMISSION_OFFSET))(panel, uiFrom);
		}

		static ::System::Void ReportActivityPanelBtnGoClick_GuideGoto(::RPG::Client::IActivityPanelReportable* panel, ::System::String* uiFrom)
		{
			return ((::System::Void(*)(::RPG::Client::IActivityPanelReportable*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELREPORTHELPER_REPORTACTIVITYPANELBTNGOCLICK_GUIDEGOTO_OFFSET))(panel, uiFrom);
		}

		static ::System::Void ReportActivityPanelBtnGoClick_GuideGotoLegacyByMission(::RPG::Client::IActivityPanelReportable* panel, ::System::UInt32 missionID, ::System::String* uiFrom)
		{
			return ((::System::Void(*)(::RPG::Client::IActivityPanelReportable*, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELREPORTHELPER_REPORTACTIVITYPANELBTNGOCLICK_GUIDEGOTOLEGACYBYMISSION_OFFSET))(panel, missionID, uiFrom);
		}

		static ::System::Void ReportActivityPanelBtnGoClick_ActivityGoto(::RPG::Client::IActivityPanelReportable* panel, ::System::String* uiFrom)
		{
			return ((::System::Void(*)(::RPG::Client::IActivityPanelReportable*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELREPORTHELPER_REPORTACTIVITYPANELBTNGOCLICK_ACTIVITYGOTO_OFFSET))(panel, uiFrom);
		}

		static ::System::Void ReportActivityPanelBtnGoClick_EarlyAccess(::RPG::Client::IActivityPanelReportable* panel, ::System::String* uiFrom)
		{
			return ((::System::Void(*)(::RPG::Client::IActivityPanelReportable*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELREPORTHELPER_REPORTACTIVITYPANELBTNGOCLICK_EARLYACCESS_OFFSET))(panel, uiFrom);
		}

		static ::System::Void ReportActivityPanelBtnGoClick_WorldUnlock(::RPG::Client::IActivityPanelReportable* panel, ::System::String* uiFrom)
		{
			return ((::System::Void(*)(::RPG::Client::IActivityPanelReportable*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELREPORTHELPER_REPORTACTIVITYPANELBTNGOCLICK_WORLDUNLOCK_OFFSET))(panel, uiFrom);
		}

		static ::System::Void ReportActivityPanelBtnGoClick_LegacyRogue(::RPG::Client::RogueResidentActivityPanelData* panelData, ::System::String* uiFrom)
		{
			return ((::System::Void(*)(::RPG::Client::RogueResidentActivityPanelData*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELREPORTHELPER_REPORTACTIVITYPANELBTNGOCLICK_LEGACYROGUE_OFFSET))(panelData, uiFrom);
		}

		static ::System::Void _ReportActivityPanelBtnGoClick(::RPG::Client::IActivityPanelReportable* panel, ::RPG::Client::ActivityPanelBtnGoClickReportGuideType guideType, ::System::UInt32 missionID, ::System::UInt32 gotoID, ::System::String* uiFrom)
		{
			return ((::System::Void(*)(::RPG::Client::IActivityPanelReportable*, ::RPG::Client::ActivityPanelBtnGoClickReportGuideType, ::System::UInt32, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELREPORTHELPER__REPORTACTIVITYPANELBTNGOCLICK_OFFSET))(panel, guideType, missionID, gotoID, uiFrom);
		}

		static ::System::Void ReportShowResidentActivityDetail(::RPG::Client::IResidentActivityPanelData* panelData)
		{
			return ((::System::Void(*)(::RPG::Client::IResidentActivityPanelData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELREPORTHELPER_REPORTSHOWRESIDENTACTIVITYDETAIL_OFFSET))(panelData);
		}
	};
}
