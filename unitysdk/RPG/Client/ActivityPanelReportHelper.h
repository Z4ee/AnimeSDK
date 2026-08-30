#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelBtnGoClickReportGuideType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IActivityPanelReportable; }
namespace RPG::Client { class IResidentActivityPanelData; }
namespace RPG::Client { class RogueResidentActivityPanelData; }
namespace System { class String; }

#define RPG_CLIENT_ACTIVITYPANELREPORTHELPER_REPORTACTIVITYPANELBTNGOCLICK_ACTIVITYGOTO_OFFSET UNITYSDK_OFFSET(0xC6605E0)
#define RPG_CLIENT_ACTIVITYPANELREPORTHELPER_REPORTACTIVITYPANELBTNGOCLICK_EARLYACCESS_OFFSET UNITYSDK_OFFSET(0xC660760)
#define RPG_CLIENT_ACTIVITYPANELREPORTHELPER_REPORTACTIVITYPANELBTNGOCLICK_GUIDEGOTOLEGACYBYMISSION_OFFSET UNITYSDK_OFFSET(0xC660570)
#define RPG_CLIENT_ACTIVITYPANELREPORTHELPER_REPORTACTIVITYPANELBTNGOCLICK_GUIDEGOTO_OFFSET UNITYSDK_OFFSET(0xC6603F0)
#define RPG_CLIENT_ACTIVITYPANELREPORTHELPER_REPORTACTIVITYPANELBTNGOCLICK_GUIDETAKEMISSION_OFFSET UNITYSDK_OFFSET(0xC65FF90)
#define RPG_CLIENT_ACTIVITYPANELREPORTHELPER_REPORTACTIVITYPANELBTNGOCLICK_LEGACYROGUE_OFFSET UNITYSDK_OFFSET(0xC660820)
#define RPG_CLIENT_ACTIVITYPANELREPORTHELPER_REPORTACTIVITYPANELBTNGOCLICK_WORLDUNLOCK_OFFSET UNITYSDK_OFFSET(0xC6607C0)
#define RPG_CLIENT_ACTIVITYPANELREPORTHELPER_REPORTSHOWRESIDENTACTIVITYDETAIL_OFFSET UNITYSDK_OFFSET(0xC660930)
#define RPG_CLIENT_ACTIVITYPANELREPORTHELPER__REPORTACTIVITYPANELBTNGOCLICK_OFFSET UNITYSDK_OFFSET(0xC660110)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityPanelReportHelper_TypeDefinitionIndex = 61803;

	class ActivityPanelReportHelper : public ::System::Object
	{
	public:
		static ::System::Void ReportActivityPanelBtnGoClick_GuideTakeMission(::RPG::Client::IActivityPanelReportable* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::RPG::Client::IActivityPanelReportable*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELREPORTHELPER_REPORTACTIVITYPANELBTNGOCLICK_GUIDETAKEMISSION_OFFSET))(a1, a2);
		}

		static ::System::Void ReportActivityPanelBtnGoClick_GuideGoto(::RPG::Client::IActivityPanelReportable* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::RPG::Client::IActivityPanelReportable*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELREPORTHELPER_REPORTACTIVITYPANELBTNGOCLICK_GUIDEGOTO_OFFSET))(a1, a2);
		}

		static ::System::Void ReportActivityPanelBtnGoClick_GuideGotoLegacyByMission(::RPG::Client::IActivityPanelReportable* a1, ::System::UInt32 a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::RPG::Client::IActivityPanelReportable*, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELREPORTHELPER_REPORTACTIVITYPANELBTNGOCLICK_GUIDEGOTOLEGACYBYMISSION_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ReportActivityPanelBtnGoClick_ActivityGoto(::RPG::Client::IActivityPanelReportable* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::RPG::Client::IActivityPanelReportable*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELREPORTHELPER_REPORTACTIVITYPANELBTNGOCLICK_ACTIVITYGOTO_OFFSET))(a1, a2);
		}

		static ::System::Void ReportActivityPanelBtnGoClick_EarlyAccess(::RPG::Client::IActivityPanelReportable* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::RPG::Client::IActivityPanelReportable*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELREPORTHELPER_REPORTACTIVITYPANELBTNGOCLICK_EARLYACCESS_OFFSET))(a1, a2);
		}

		static ::System::Void ReportActivityPanelBtnGoClick_WorldUnlock(::RPG::Client::IActivityPanelReportable* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::RPG::Client::IActivityPanelReportable*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELREPORTHELPER_REPORTACTIVITYPANELBTNGOCLICK_WORLDUNLOCK_OFFSET))(a1, a2);
		}

		static ::System::Void ReportActivityPanelBtnGoClick_LegacyRogue(::RPG::Client::RogueResidentActivityPanelData* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::RPG::Client::RogueResidentActivityPanelData*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELREPORTHELPER_REPORTACTIVITYPANELBTNGOCLICK_LEGACYROGUE_OFFSET))(a1, a2);
		}

		static ::System::Void _ReportActivityPanelBtnGoClick(::RPG::Client::IActivityPanelReportable* a1, ::RPG::Client::ActivityPanelBtnGoClickReportGuideType a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::String* a5)
		{
			return ((::System::Void(*)(::RPG::Client::IActivityPanelReportable*, ::RPG::Client::ActivityPanelBtnGoClickReportGuideType, ::System::UInt32, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELREPORTHELPER__REPORTACTIVITYPANELBTNGOCLICK_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void ReportShowResidentActivityDetail(::RPG::Client::IResidentActivityPanelData* a1)
		{
			return ((::System::Void(*)(::RPG::Client::IResidentActivityPanelData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELREPORTHELPER_REPORTSHOWRESIDENTACTIVITYDETAIL_OFFSET))(a1);
		}
	};
}
